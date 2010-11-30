%{
	#include "duerr.h"
	#include "du2.h"
	#include "du2tok.h"
	#include <deque>
	#include <string>
	
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

int mypow(int pow)
{
	if (pow == 0) return 1;

	int res = 2;
	
	while (pow > 1)
	{
		res *= 2;
		--pow;
	}

	return res;
}

void divide(char * str, int & firstNum, int & lastNum)
{
	bool carry = false; //divided odd number

	for (int i = firstNum; i <= lastNum; ++i) //loop through the whole string
	{
		int intval = (str[i] - '0')+(carry ? 10 : 0); //current number to divide
		carry = (intval % 2) == 1; //even -> false, odd -> true

		int newval = intval/2; //div

		str[i] = (char)('0' + newval);
		
		if (newval == 0 && i == firstNum) //the first digit was 1 so now it will be 0
		{
			++firstNum;
		}
	}
}

int parseInt(char * yytext)
	{

		std::string str(yytext);

		int firstNum = -1;
		int lastNum  = -1;
		int i = 0;

		//find numeric value in the string

		while(yytext[i] != '\0')
		{
			if (yytext[i] <= '9' && yytext[i] >= '0') //only numeric chars
			{
				if (firstNum < 0) //start of numeric val
				{
					firstNum = i;
				}

				lastNum = i; //end of numeric val
			}else
			{	
				error(DUERR_BADINT, line, str.c_str()); //non-numeric char in numeric val?!
				break;
			}
			++i;
		}

		if (firstNum < 0 || lastNum < 0) //probably empty
		{
			error(DUERR_BADINT, line, str.c_str());
			return 0;
		}

		std::deque<bool> binary;

		while (lastNum >= firstNum) //dec2bin
		{
			binary.push_back(((yytext[lastNum] - '0') % 2) == 1);
			divide(yytext, firstNum, lastNum);
		}

		if (binary.size() > 31) //too large
		{
			error(DUERR_INTOUTRANGE, line, str.c_str());
			binary.pop_back();
		}

		while (binary.size() > 31) //shorten (we want to take lower 31 bits
		{
			binary.pop_back();
		}

		int ret = 0;

		for (unsigned int j = 0; j < binary.size(); ++j) //bin2dec
		{
			if (binary[j]) ret += mypow(j);
		}
		 
		for (unsigned int k = 0; k < str.size(); ++k)
		{
			yytext[k] = str.at(k);
		}

		return ret;

	}

double parseReal(char * yytext)
{
	char * nonNumeric;
	double ret = strtod(yytext, &nonNumeric);

	if (nonNumeric[0] != '\0')
	{
		error(DUERR_BADREAL, line, yytext);
	}
		
	if (ret == - HUGE_VAL || ret == HUGE_VAL)
	{
		error(DUERR_REALOUTRANGE, line, yytext);
	}

	if (ret == 0.0)
	{
		error(DUERR_BADREAL, line, yytext);
	}

	return ret;
}

char * parseIdent(char * yytext)
{
	int i = 0;

	//loop over the whole string and call toupper from std
	while (yytext[i] != '\0')
	{
		yytext[i] = (char)toupper(yytext[i]);
		++i;
	}

	return yytext;
}
		
%}

%option noyywrap
%option nostdinit
%option never-interactive
%option 8bit
%option nounput

%x STR
%x CMT

DIGIT			[0-9]
WHITESPACE		[ \r\t\f]
IDENT			[a-zA-Z][a-zA-Z0-9]*

%%

\+										*l = line; lv->dtge_ = DUTOKGE_PLUS; return DUTOK_OPER_SIGNADD;
-										*l = line; lv->dtge_ = DUTOKGE_MINUS; return DUTOK_OPER_SIGNADD;

\*										*l = line; lv->dtge_ = DUTOKGE_SOLIDUS; return DUTOK_OPER_MUL;
\/										*l = line; lv->dtge_ = DUTOKGE_ASTERISK; return DUTOK_OPER_MUL;

\n										++line; *l = line;

[Dd][Ii][Vv]							*l = line; lv->dtge_ = DUTOKGE_DIV; return DUTOK_OPER_MUL;
[Mm][Oo][Dd]							*l = line; lv->dtge_ = DUTOKGE_MOD; return DUTOK_OPER_MUL;
[Aa][Nn][Dd]							*l = line; lv->dtge_ = DUTOKGE_AND; return DUTOK_OPER_MUL;

[Tt][Oo]								*l = line; lv->dtge_ = DUTOKGE_TO; return DUTOK_FOR_DIRECTION;
[Dd][Oo][Ww][Nn][Tt][Oo]				*l = line; lv->dtge_ = DUTOKGE_DOWNTO; return DUTOK_FOR_DIRECTION;

[Pp][Rr][Oo][Gg][Rr][Aa][Mm]			*l = line; return DUTOK_PROGRAM;
[Ll][Aa][Bb][Ee][Ll]					*l = line; return DUTOK_LABEL;
[Cc][Oo][Nn][Ss][Tt]					*l = line; return DUTOK_CONST;
[Tt][Yy][Pp][Ee]						*l = line; return DUTOK_TYPE;
[Vv][Aa][Rr]							*l = line; return DUTOK_VAR;
[Bb][Ee][Gg][Ii][Nn]					*l = line; return DUTOK_BEGIN;
[Ee][Nn][Dd]							*l = line; return DUTOK_END;
[Pp][Rr][Oo][Cc][Ee][Dd][Uu][Rr][Ee]	*l = line; return DUTOK_PROCEDURE;
[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]		*l = line; return DUTOK_FUNCTION;
[Aa][Rr]{2}[Aa][Yy]						*l = line; return DUTOK_ARRAY;
[Oo][Ff]								*l = line; return DUTOK_OF;
[Gg][Oo][Tt][Oo]						*l = line; return DUTOK_GOTO;
[Ii][Ff]								*l = line; return DUTOK_IF;
[Tt][Hh][Ee][Nn]						*l = line; return DUTOK_THEN;
[Ee][Ll][Ss][Ee]						*l = line; return DUTOK_ELSE;
[Ww][Hh][Ii][Ll][Ee]					*l = line; return DUTOK_WHILE;
[Dd][Oo]								*l = line; return DUTOK_DO;
[Rr][Ee][Pp][Ee][Aa][Tt]				*l = line; return DUTOK_REPEAT;
[Uu][Nn][Tt][Ii][Ll]					*l = line; return DUTOK_UNTIL;
[Ff][Oo][Rr]							*l = line; return DUTOK_FOR;
[Oo][Rr]								*l = line; return DUTOK_OR;
[Nn][Oo][Tt]							*l = line; return DUTOK_NOT;
[Rr][Ee][Cc][Oo][Rr][Dd]				*l = line; return DUTOK_RECORD;

{IDENT}										*l = line; lv->id_ci_ = ls_id.add(parseIdent(yytext)); return DUTOK_IDENTIFIER;
{DIGIT}*									*l = line; lv->int_ci_ = ls_int.add(parseInt(yytext)); return DUTOK_UINT;
[0-9]+(\.[0-9]+)?([Ee][+-]?[0-9]+)?			*l = line; lv->real_ci_ = ls_real.add(parseReal(yytext)); return DUTOK_REAL;
{DIGIT}*{IDENT}								*l = line; lv->int_ci_ = ls_int.add(parseInt(yytext)); return DUTOK_UINT; /*broken int*/
[0-9]+(\.[0-9]+)?([Ee][+-]?[0-9]+)?{IDENT}	*l = line; lv->real_ci_ = ls_real.add(parseReal(yytext)); return DUTOK_REAL;

;										*l = line; return DUTOK_SEMICOLON;
\.										*l = line; return DUTOK_DOT;
,										*l = line; return DUTOK_COMMA;
=										*l = line; return DUTOK_EQ;
:										*l = line; return DUTOK_COLON;
\(										*l = line; return DUTOK_LPAR;
\)										*l = line; return DUTOK_RPAR;
\.\.									*l = line; return DUTOK_DOTDOT;
\[										*l = line; return DUTOK_LSBRA;
\]										*l = line; return DUTOK_RSBRA;
:=										*l = line; return DUTOK_ASSIGN;

\<										*l = line; lv->dtge_ = DUTOKGE_LT; return DUTOK_OPER_REL;
\<>										*l = line; lv->dtge_ = DUTOKGE_NE; return DUTOK_OPER_REL;
\<=										*l = line; lv->dtge_ = DUTOKGE_LE; return DUTOK_OPER_REL;
\>										*l = line; lv->dtge_ = DUTOKGE_GT; return DUTOK_OPER_REL;
\>=										*l = line; lv->dtge_ = DUTOKGE_GE; return DUTOK_OPER_REL;

<STR><<EOF>>							*l = line; error(DUERR_EOFINSTRCHR, line); lv->str_ci_ = ls_str.add(strval); BEGIN(INITIAL); strval = ""; return DUTOK_STRING;
<STR>\n									*l = line; error(DUERR_EOLINSTRCHR, line); lv->str_ci_ = ls_str.add(strval); ++line; BEGIN(INITIAL); strval = ""; return DUTOK_STRING;
<STR>''									*l = line; strval += "'";
<STR>'									*l = line; lv->str_ci_ = ls_str.add(strval); BEGIN(INITIAL); strval = ""; return DUTOK_STRING;
<STR>.									*l = line; strval += yytext;

<CMT><<EOF>>							*l = line; error(DUERR_EOFINCMT, line); BEGIN(INITIAL);
<CMT>\n									++line; *l = line;
<CMT>\{									*l = line; ++commentLevel;
<CMT>\}									*l = line; --commentLevel; if (commentLevel == 0) { BEGIN(INITIAL); } if (commentLevel < 0) { error(mlc::DUERR_UNEXPENDCMT, line); }
<CMT>.									*l = line;

{WHITESPACE}+							*l = line; /* go out with whitespaces */

'										*l = line; BEGIN(STR); strval = "";
\{										*l = line; BEGIN(CMT); ++commentLevel;
\}										*l = line; error(DUERR_UNEXPENDCMT, line);

.										*l = line; error(DUERR_UNKCHAR, line, yytext);
