%{
	#include "du1.h"
	#include "du1tok.h"
	#include "duerr.h"
%}

%option noyywrap
%option nostdinit
%option never-interactive
%option 8bit
%option nounput

DIGIT			[0-9]
WHITESPACE		[ \r\n\t\f]

%%

[+-]									return DUTOK_OPER_SIGNADD;

\*										return DUTOK_OPER_MUL;
\/										return DUTOK_OPER_MUL;

[Dd][Ii][Vv]							return DUTOK_OPER_MUL;
[Mm][Oo][Dd]							return DUTOK_OPER_MUL;
[Aa][Nn][Dd]							return DUTOK_OPER_MUL;

[Tt][Oo]								return DUTOK_FOR_DIRECTION;
[Dd][Oo][Ww][Nn][Tt][Oo]				return DUTOK_FOR_DIRECTION;

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

[a-zA-Z][a-zA-Z0-9]*					return DUTOK_IDENTIFIER;
{DIGIT}*								return DUTOK_UINT;
[0-9]+(\.[0-9]+)?([Ee][+-]?[0-9]+)?		return DUTOK_REAL;

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

\<[>=]									return DUTOK_OPER_REL;
\>[=]?									return DUTOK_OPER_REL;

{WHITESPACE}+							/* go out with whitespaces */

.										mlc::error(mlc::DUERR_UNKCHAR, 0, *yytext, *yytext);
