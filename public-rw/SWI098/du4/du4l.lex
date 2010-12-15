%{
	#include "duerr.h"
	#include "du4.h"
	#include "du4tok.h"
	#include "du4g.hpp"
	#include "du4lval.hpp"
	
	/* portability stuff */
	#if defined _MSC_VER	    /* M$, VS2003 does not recognize long long */
	    typedef unsigned __int64	UINT64;
	    #define C64(n)				n##i64
	    #define STRTOULL			_strtoui64
	#else						/* the rest of the world; hmm, SunCC doesn't have strupr, hopefully no one will use it */
	    typedef unsigned long long	UINT64;
	    #define C64(n)				n##LL
	    #define STRTOULL			strtoull
	#endif
	
	using namespace mlc;
	
%}

%option noyywrap
%option nostdinit
%option never-interactive
%option 8bit
%option nounput

WHITESPACE		[ \r\t\f]

/* keywords */
PROGRAM			[Pp][Rr][Oo][Gg][Rr][Aa][Mm]
LABEL			[Ll][Aa][Bb][Ee][Ll]
CONST			[Cc][Oo][Nn][Ss][Tt]
TYPE			[Tt][Yy][Pp][Ee]
VAR				[Vv][Aa][Rr]
BEGIN			[Bb][Ee][Gg][Ii][Nn]
END				[Ee][Nn][Dd]
PROCEDURE		[Pp][Rr][Oo][Cc][Ee][Dd][Uu][Rr][Ee]
FUNCTION		[Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]
PACKED			[Pp][Aa][Cc][Kk][Ee][Dd]
ARRAY			[Aa][Rr][Rr][Aa][Yy]
OF				[Oo][Ff]
GOTO			[Gg][Oo][Tt][Oo]
IF				[Ii][Ff]
THEN			[Tt][Hh][Ee][Nn]
ELSE			[Ee][Ll][Ss][Ee]
WHILE			[Ww][Hh][Ii][Ll][Ee]
DO				[Dd][Oo]
REPEAT			[Rr][Ee][Pp][Ee][Aa][Tt]
UNTIL			[Uu][Nn][Tt][Ii][Ll]
FOR				[Ff][Oo][Rr]
TO				[Tt][Oo]
DOWNTO			[Dd][Oo][Ww][Nn][Tt][Oo]
OR				[Oo][Rr]
DIV				[Dd][Ii][Vv]
MOD				[Mm][Oo][Dd]
AND				[Aa][Nn][Dd]
NOT				[Nn][Oo][Tt]
RECORD				[Rr][Ee][Cc][Oo][Rr][Dd]

%%

{WHITESPACE}+		/* go out with whitespaces */

.			error(DUERR_UNKCHAR, -1, *yytext, *yytext);
