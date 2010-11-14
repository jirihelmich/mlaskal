%{
	#include "duerr.h"
	#include "du2.h"
	#include "du2tok.h"
	
	/* portability stuff */
	#if defined _MSC_VER	    /* M$ VS2003 does not recognize long long, VS2005 has long long but no strtoull */
	    typedef unsigned __int64	UINT64;
	    #define C64(n)				n##i64
	    #define STRTOULL			_strtoui64
	#else						/* the rest of the world */
	    typedef unsigned long long	UINT64;
	    #define C64(n)				n##LL
	    #define STRTOULL			strtoull
	#endif
	
	using namespace std;
	using namespace mlc;

	string strval = "";
	int line = 1;
	int commentLevel = 0;
		
%}

%option noyywrap
%option nostdinit
%option never-interactive
%option 8bit
%option nounput

DIGIT			[0-9]
WHITESPACE		[ \r\n\t\f]
IDENT			[a-zA-Z][a-zA-Z0-9]*

%%

\+										lv->dtge_ = DUTOKGE_PLUS; return DUTOK_OPER_SIGNADD
-										lv->dtge_ = DUTOKGE_MINUS; return DUTOK_OPER_SIGNADD;

\*										lv->dtge_ = DUTOKGE_SOLIDUS; return DUTOK_OPER_MUL;
\/										lv->dtge_ = DUTOKGE_ASTERISK; return DUTOK_OPER_MUL;

\n										++line;

[Dd][Ii][Vv]							lv->dtge_ = DUTOKGE_DIV; return DUTOK_OPER_MUL;
[Mm][Oo][Dd]							lv->dtge_ = DUTOKGE_MOD; return DUTOK_OPER_MUL;
[Aa][Nn][Dd]							lv->dtge_ = DUTOKGE_AND; return DUTOK_OPER_MUL;

[Tt][Oo]								lv->dtge_ = DUTOKGE_TO; return DUTOK_FOR_DIRECTION;
[Dd][Oo][Ww][Nn][Tt][Oo]				lv->dtge_ = DUTOKGE_DOWNTO; return DUTOK_FOR_DIRECTION;

[Pp][Rr][Oo][Gg][Rr][Aa][Mm]			return DUTOK_PROGRAM;
[Ll][Aa][Bb][Ee][Ll]					return DUTOK_LABEL;
[Cc][Oo][Nn][Ss][Tt]					return DUTOK_CONST;
[Tt][Yy][Pp][Ee]						return DUTOK_TYPE;
[Vv][Aa][Rr]							return DUTOK_VAR;
[Bb][Ee][Gg][Ii][Nn]					return DUTOK_BEGIN;
[Ee][Nn][Dd]							return DUTOK_END;
[Pp][Rr][Oo][Cc][Ee][Dd][Uu][Rr][Ee]	return DUTOK_PROCEDURE;
[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]		return DUTOK_FUNCTION;
[Aa][Rr]{2}[Aa][Yy]						return DUTOK_ARRAY;
[Oo][Ff]								return DUTOK_OF;
[Gg][Oo][Tt][Oo]						return DUTOK_GOTO;
[Ii][Ff]								return DUTOK_IF;
[Tt][Hh][Ee][Nn]						return DUTOK_THEN;
[Ee][Ll][Ss][Ee]						return DUTOK_ELSE;
[Ww][Hh][Ii][Ll][Ee]					return DUTOK_WHILE;
[Dd][Oo]								return DUTOK_DO;
[Rr][Ee][Pp][Ee][Aa][Tt]				return DUTOK_REPEAT;
[Uu][Nn][Tt][Ii][Ll]					return DUTOK_UNTIL;
[Ff][Oo][Rr]							return DUTOK_FOR;
[Oo][Rr]								return DUTOK_OR;
[Nn][Oo][Tt]							return DUTOK_NOT;

{IDENT}									lv->id_ci_ = ls_id.add(parseIdent(*yytext)); return DUTOK_IDENTIFIER;
{DIGIT}*								lv->int_ci_ = ls_int.add(parseInt(*yytext)); return DUTOK_UINT;
[0-9]+(\.[0-9]+)?([Ee][+-]?[0-9]+)?		lv->int_ci_ = ls_int.add(parseReal(*yytext)); return DUTOK_REAL;
{DIGIT}*{IDENT}							lv->int_ci_ = ls_int.add(parseInt(*yytext)); return DUTOK_UINT; /*broken int*/

;										return DUTOK_SEMICOLON;
\.										return DUTOK_DOT;
,										return DUTOK_COMMA;
=										return DUTOK_EQ;
:										return DUTOK_COLON;
\(										return DUTOK_LPAR;
\)										return DUTOK_RPAR;
\.\.									return DUTOK_DOTDOT;
\[										return DUTOK_LSBRA;
\]										return DUTOK_RSBRA;
:=										return DUTOK_ASSIGN;

\<										lv->dtge_ = DUTOKGE_LT; return DUTOK_OPER_REL;
\<>										lv->dtge_ = DUTOKGE_NE; return DUTOK_OPER_REL;
\<=										lv->dtge_ = DUTOKGE_LE; return DUTOK_OPER_REL;
\>										lv->dtge_ = DUTOKGE_GT; return DUTOK_OPER_REL;
\>=										lv->dtge_ = DUTOKGE_GE; return DUTOK_OPER_REL;

{WHITESPACE}+							/* go out with whitespaces */

'										BEGIN(STR); strval = "";

<STR>{
	<<EOF>>								mlc::error(mlc::DUERREOFINSTRCHR, line, *yytext, *yytext); lv->str_ci_ = ls_str.add(strval); BEGIN(INITIAL); strval = ""; return DUTOK_STRING;
	\n									mlc::error(mlc::DUERREOLINSTRCHR, line, *yytext, *yytext); lv->str_ci_ = ls_str.add(strval); ++line; BEGIN(INITIAL); strval = ""; return DUTOK_STRING;
	''									strval += "'";
	'									lv->str_ci_ = ls_str.add(strval); BEGIN(INITIAL); strval = ""; return DUTOK_STRING;
	.									strval += yytext;
}

{										BEGIN(CMT); ++commentLevel;
}										mlc::error(mlc::DUERRUNEXPENDCMT, line, *yytext, *yytext);

<CMT>{
	<<EOF>>								mlc::error(mlc::DUERREOFINCMT, line, *yytext, *yytext);
	\n									++line;
	{									++commentLevel;
	}									--commentLevel; if (commentLevel == 0) { BEGIN(INITIAL); } if (commentLevel < 0) { mlc::error(mlc::DUERRUNEXPENDCMT, line, *yytext, *yytext); }
	.									;
	\t									;
}

.										mlc::error(mlc::DUERR_UNKCHAR, 0, *yytext, *yytext);
