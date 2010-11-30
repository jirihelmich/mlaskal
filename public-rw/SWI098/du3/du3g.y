%{
    #include "du3.h"
    #include "duerr.h"
    #include <assert.h>

    /* semantic value */
    #define YYSTYPE mlc::MlaskalLval

	/* locations */
	#define YYLTYPE unsigned
	#define YYLLOC_DEFAULT(cur, rhs, n)	do { if(n) (cur)=(rhs)[1]; else (cur)=(rhs)[0]; } while(0)

    /* local stuff */
    using namespace mlc;
    
	/* error stuff */
    #define YYERROR_VERBOSE 1
    static void yyerror(YYLTYPE *line, mlc::MlaskalCtx *ctx, const char *m);
    
%}

%token DUTOK_PROGRAM			    /* program */
%token DUTOK_LABEL			    /* label */
%token DUTOK_CONST			    /* const */
%token DUTOK_TYPE			    /* type */
%token DUTOK_VAR			    /* var */
%token DUTOK_BEGIN			    /* begin */
%token DUTOK_END			    /* end */
%token DUTOK_PROCEDURE			    /* procedure */
%token DUTOK_FUNCTION			    /* function */
%token DUTOK_ARRAY			    /* array */
%token DUTOK_OF				    /* of */
%token DUTOK_GOTO			    /* goto */
%token DUTOK_IF				    /* if */
%token DUTOK_THEN			    /* then */
%token DUTOK_ELSE			    /* else */
%token DUTOK_WHILE			    /* while */
%token DUTOK_DO				    /* do */
%token DUTOK_REPEAT			    /* repeat */
%token DUTOK_UNTIL			    /* until */
%token DUTOK_FOR			    /* for */
%token DUTOK_OR				    /* or */
%token DUTOK_NOT			    /* not */
%token DUTOK_RECORD			    /* record */

/* literals */
%token DUTOK_IDENTIFIER			    /* identifier */
%token DUTOK_UINT			    /* unsigned integer */
%token DUTOK_REAL			    /* real number */
%token DUTOK_STRING			    /* string */

/* delimiters */
%token DUTOK_SEMICOLON			    /* ; */
%token DUTOK_DOT			    /* . */
%token DUTOK_COMMA			    /* , */
%token DUTOK_EQ				    /* = */
%token DUTOK_COLON			    /* : */
%token DUTOK_LPAR			    /* ( */
%token DUTOK_RPAR			    /* ) */
%token DUTOK_DOTDOT			    /* .. */
%token DUTOK_LSBRA			    /* [ */
%token DUTOK_RSBRA			    /* ] */
%token DUTOK_ASSIGN			    /* := */

/* grouped operators and keywords */
%token DUTOK_OPER_REL			    /* <, <=, <>, >=, > */
%token DUTOK_OPER_SIGNADD		    /* +, - */
%token DUTOK_OPER_MUL			    /* *, /, div, mod, and */
%token DUTOK_FOR_DIRECTION		    /* to, downto */

%start mlaskal
%error-verbose
%pure-parser
%parse-param {mlc::MlaskalCtx *ctx}
%locations

%%

mlaskal:	  DUTOK_PROGRAM DUTOK_IDENTIFIER DUTOK_SEMICOLON program_block DUTOK_DOT
		;

program_block:	label_block
				const_def_block
				type_def_block
				var_def_block
				procfunc_def_block
				begin_cmd_end_block
		;

label_block:	/* empty */
				| DUTOK_LABEL label_name_block DUTOK_SEMICOLON
		;

label_name_block:	DUTOK_UINT
					| DUTOK_UINT DUTOK_COMMA label_name_block
		;

const_def_block:	/* empty */
					| DUTOK_CONST const_set_block
		;

const_set_blcok:	DUTOK_IDENTIFIER DUTOK_EQ constant DUTOK_SEMICOLON
					| DUTOK_IDENTIFIER DUTOK_EQ constant DUTOK_SEMICOLON const_set_block
		;

constant:		u_constant
				| DUTOK_OPER_SIGNADD DUTOK_UINT
				| DUTOK_OPER_SIGNADD REAL
		;
				
type_def_block: /*empty*/
				| DUTOK_TYPE type_set_block
		;

type_set_block: DUTOK_IDENTIFIER DUTOK_EQ type DUTOK_SEMICOLON
				| DUTOK_IDENTIFIER DUTOK_EQ type DUTOK_SEMICOLON type_set_block
		;

var_def_block:	/*empty*/
				| DUTOK_VAR var_set_block
		;

var_set_block:	ident_list DUTOK_COLON type DUTOK_SEMICOLON
				| ident_list DUTOK_COLON type DUTOK_SEMICOLON var_set_block
		;

ident_list:	DUTOK_IDENTIFIER
			| DUTOK_IDENTIFIER DUTOK_COMMA ident_list
		;

procfunc_def_block:	/*empty*/
					| DUTOK_IDENTIFIER procfunc_header DUTOK_SEMICOLON block DUTOK_SEMICOLON procfunc_def_block
		;

begin_cmd_end_block:	DUTOK_BEGIN cmd DUTOK END
		;

block:	label_block
		const_def_block
		type_def_block
		var_def_block
		begin_cmd_end_block
		;

procfunc_header:	DUTOK_PROCEDURE DUTOK_IDENTIFIER params_opt
					| DUTOK_FUNCTION DUTOK_IDENTIFIER params_opt DUTOK_COLON DUTOK_IDENTIFIER
		;

params_opt: /*empty*/
			| DUTOK_LPAR params DUTOK_RPAR
		;

params: DUTOK_VAR ident_list DUTOK_COLON DUTOK_IDENTIFIER
		| DUTOK_VAR ident_list DUTOK_COLON DUTOK_IDENTIFIER DUTOK_SEMICOLON params
		;

type:	ordtype
		| structtype
		| DUTOK_IDENTIFIER
		;

ordtype:	ordtype
			| ordconst DUTOK_DOTDOT ordconst
		;

structtype:	structtype
			| DUTOK_ARRAY LSBRA ordtype_list RSBRA DUTOK_OF type
		;

ordtype_list:	ordtype
				| ordtype DUTOK_COMMA ordtype_list;

cmd:	/*empty*/
		| DUTOK_UINT DUTOK_COLON
		| func_var DUTOK_ASSIGN expr
		| DUTOK_PROCEDURE concrete_params_opt
		| DUTOK_BEGIN cmd_list DUTOK_END
		| for
		| ecf
		| enf
		;

cmd_list:	cmd
			| cmd DUTOK_SEMICOLON cmd
		;

ecf:	DUTOK_GOTO DUTOK_UINT
		| DUTOK_IF expr DUTOK_THEN ecf DUTOK_ELSE ecf
		| DUTOK_WHILE expr DUTOK_DO ecf
		| DUTOK_REPEAT cmd DUTOK_UNTIL expr
		;

enf:	DUTOK_IF expr DUTOK_THEN cmd
		| DUTOK_WHILE expr DUTOK_DO enf
		| DUTOK_IF expr DUTOK_THEN ecf ELSE enf
		;

for:	DUTOK_FOR DUTOK_IDENTIFIER DUTOK_ASSIGN expr DUTOK_FOR_DIRECTION expr DUTOK_DO cmd
		;

func_var:	DUTOK_IDENTIFIER
			| DUTOK_IDENTIFIER LSBRA ordtype_list RSBRA
		;

concrete_params_opt:	/*empty*/
						| expr
						| var_list
		;

var_list:	var
			| var DUTOK_COMMA var_list
		;


expr:	simple_expr
		| simple_expr DUTOK_OPER_REL simple_expr
		;

simple_expr:	DUTOK_OPER_SIGNADD term
				| DUTOK_OPER_SIGNADD term DUTOK_OPER_SIGNADD term
				| DUTOK_OPER_SIGNADD term DUTOK_OR term
		;

term:	factor
		| faktor DUTOK_OPER_MUL factor
		| faktor DUTOK_AND factor
		;

factor:	u_constant
		| var
		| DUTOK_IDENTIFIER LPAR concrete_params LPAR
		| LPAR expr LPAR
		| DUTOK_NOT factor
		;

u_constant:	DUTOK_IDENTIFIER
			| DUTOK_UINT
			| DUTOK_REAL
			| DUTOK_STRING
		;


		

%%

static void yyerror(unsigned *line, MlaskalCtx *, const char *m)
{
    error(DUERR_SYNTAX, *line, m);
}
