%{
    #include "du4.h"
    #include "du4lval.hpp"
    #include "duerr.h"
    #include "du4tok.h"
    #include "du4sem.h"

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
%token<id_ci_>		DUTOK_IDENTIFIER			    /* identifier */
%token<int_ci_>	DUTOK_UINT						/* unsigned integer */
%token<real_ci_>	DUTOK_REAL						/* real number */
%token<str_ci_>		DUTOK_STRING					/* string */

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
%token<dtge_> DUTOK_OPER_SIGNADD		    /* +, - */
%token DUTOK_OPER_MUL			    /* *, /, div, mod, and */
%token DUTOK_FOR_DIRECTION		    /* to, downto */

%start mlaskal
%error-verbose
%pure-parser
%parse-param {mlc::MlaskalCtx *ctx}
%locations

/* terminals */
%type<vector_const_def_struct_> const_set_block
%type<const_def_struct_> constant
%type<const_def_struct_> u_constant
%type<const_def_struct_> u_constant_no_ident
%type<const_def_struct_> ordconst

%type<vector_id_>	ident_list
%type<type_>		type;

%type<params_>		params_opt
%type<params_>		params
%type<is_var_>		var_opt

%type<type_>		ordtype
%type<type_list_>	ordtype_list
%type<type_>		structtype


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


/* labels made on-the-fly, the compiler was complaining abou types */

label_name_block:	DUTOK_UINT { ctx->tab->add_label_entry(@1, $1, new_label(ctx)); }
					| label_name_block DUTOK_COMMA DUTOK_UINT { ctx->tab->add_label_entry(@3, $3, new_label(ctx)); }
		;

const_def_block:	/* empty */
					| DUTOK_CONST const_set_block { mlc::add_const($2, ctx); }
		;

const_set_block:	DUTOK_IDENTIFIER DUTOK_EQ constant DUTOK_SEMICOLON {
							$3.ident_index = $1; $$.push_back($3);
						}
					| const_set_block DUTOK_IDENTIFIER DUTOK_EQ constant DUTOK_SEMICOLON {
							$4.ident_index = $2;
							$1.push_back($4);
							$$.swap($1);
						}
		;

constant:		u_constant
				| DUTOK_OPER_SIGNADD DUTOK_UINT {
						//we need to determine if it is lower than 0 and based on that add a new symbol
						//into the table
						if($1 == DUTOKGE_MINUS){ $2 = ctx->tab->ls_int().add(-(*$2)); }

						//fill the rest of the data
						$$.type = 'I'; $$.int_ = $2; $$.line = @2;
					}
				| DUTOK_OPER_SIGNADD DUTOK_REAL {
						if($1 == DUTOKGE_MINUS){ $2 = ctx->tab->ls_real().add(-(*$2)); }
						$$.type = 'R'; $$.real_ = $2; $$.line = @2;
					}
		;
				
type_def_block: /*empty*/
				| DUTOK_TYPE type_set_block
		;

type_set_block: DUTOK_IDENTIFIER DUTOK_EQ type DUTOK_SEMICOLON { ctx->tab->add_type(@1, $1, $3); }
				| type_set_block DUTOK_IDENTIFIER DUTOK_EQ type DUTOK_SEMICOLON { ctx->tab->add_type(@2,$2,$4); }
		;

var_def_block:	/*empty*/
				| DUTOK_VAR var_set_block
		;

var_set_block:	ident_list DUTOK_COLON type DUTOK_SEMICOLON { define_vars($1, $3, @1, ctx); }
				| ident_list DUTOK_COLON type DUTOK_SEMICOLON var_set_block { define_vars($1, $3, @1, ctx); }
		;

ident_list:	DUTOK_IDENTIFIER { $$.push_back($1); }
			| ident_list DUTOK_COMMA DUTOK_IDENTIFIER { $1.push_back($3); $$.swap($1); }
		;

procfunc_def_block:	/*empty*/
			| procfunc_header DUTOK_SEMICOLON block DUTOK_SEMICOLON procfunc_def_block
		;

begin_cmd_end_block:	DUTOK_BEGIN cmd_list DUTOK_END { ctx->tab->leave(@3); }
		;

block:	label_block
		const_def_block
		type_def_block
		var_def_block
		begin_cmd_end_block
		;

procfunc_header:	DUTOK_PROCEDURE DUTOK_IDENTIFIER params_opt { define_proc($2,$3,@2,ctx); }
					| DUTOK_FUNCTION DUTOK_IDENTIFIER params_opt DUTOK_COLON DUTOK_IDENTIFIER { define_func($2,$3,$5,@2,ctx); }
		;

params_opt: /*empty*/ { $$ = $$; }
			| DUTOK_LPAR params DUTOK_RPAR { $$ = $2; }
		;

params: var_opt ident_list DUTOK_COLON DUTOK_IDENTIFIER { add_param($$, $1, $2, $4, @1, ctx); }
		| var_opt ident_list DUTOK_COLON DUTOK_IDENTIFIER DUTOK_SEMICOLON params { add_param($6, $1, $2, $4, @1, ctx); $$ = $6; }
		;

var_opt:	/*empty*/ { $$ = false; }
			| DUTOK_VAR { $$ = true; }
		;

type:	ordtype { $$ = $$; }
		| structtype  { $$ = $$; }
		| DUTOK_IDENTIFIER { check_type($$, $1, @1, ctx); }
		;

ordtype:	ordconst DUTOK_DOTDOT ordconst { $$ = add_rangetype($1,$3,ctx); }
		;

structtype:	DUTOK_ARRAY DUTOK_LSBRA ordtype_list DUTOK_RSBRA DUTOK_OF type { $$ = add_array($3,$6,ctx); }
		;

ordtype_list:	ordtype { $$.push_back($1); }
				| DUTOK_IDENTIFIER { $$.push_back(get_type($1, @1, ctx)); }
				| ordtype_list DUTOK_COMMA ordtype { $1.push_back($3); $$.swap($1); }
		;

cmd:	ecf
		| enf
		;

cmd_list:	cmd
			| cmd_list DUTOK_SEMICOLON cmd
		;

ecf:	DUTOK_GOTO DUTOK_UINT
		| DUTOK_IF expr DUTOK_THEN ecf DUTOK_ELSE ecf
		| DUTOK_WHILE expr DUTOK_DO ecf
		| DUTOK_REPEAT cmd_list DUTOK_UNTIL expr
		| DUTOK_FOR DUTOK_IDENTIFIER DUTOK_ASSIGN expr DUTOK_FOR_DIRECTION expr DUTOK_DO ecf
		| DUTOK_IDENTIFIER concrete_params_opt
		| DUTOK_UINT DUTOK_COLON ecf
		| var DUTOK_ASSIGN expr
		| DUTOK_BEGIN cmd_list DUTOK_END
		| /*empty*/
		;

enf:	DUTOK_IF expr DUTOK_THEN cmd
		| DUTOK_WHILE expr DUTOK_DO enf
		| DUTOK_IF expr DUTOK_THEN ecf DUTOK_ELSE enf
		| DUTOK_FOR DUTOK_IDENTIFIER DUTOK_ASSIGN expr DUTOK_FOR_DIRECTION expr DUTOK_DO enf
		| DUTOK_UINT DUTOK_COLON enf
		;

var:	DUTOK_IDENTIFIER
		| var DUTOK_LSBRA expr_cycle DUTOK_RSBRA
		;

concrete_params_opt:	/*empty*/
						| DUTOK_LPAR concrete_params DUTOK_RPAR
		;

concrete_params:	expr
					| expr DUTOK_COMMA concrete_params
		;
		
expr:	simple_expr
		| simple_expr DUTOK_OPER_REL simple_expr
		| simple_expr DUTOK_EQ simple_expr
		;

expr_cycle:	expr
			| expr_cycle DUTOK_COMMA expr;

simple_expr:	term_cycle
				| DUTOK_OPER_SIGNADD term_cycle
		;

term_cycle:	term DUTOK_OPER_SIGNADD term_cycle
			| term DUTOK_OR term_cycle
			| term
		;

term:	factor
		| factor DUTOK_OPER_MUL term
		;

factor:	u_constant_no_ident
		| var
		| DUTOK_IDENTIFIER DUTOK_LPAR concrete_params DUTOK_RPAR
		| DUTOK_LPAR expr DUTOK_RPAR
		| DUTOK_NOT factor
		;

u_constant:	DUTOK_IDENTIFIER { conditionally_fill_constant($$,$1,@1,ctx, false); }
			| u_constant_no_ident { $$ = $1; }
		;

u_constant_no_ident:	DUTOK_UINT { $$.type = 'I'; $$.int_ = $1; $$.line = @1; }
			| DUTOK_REAL { $$.type = 'R'; $$.real_ = $1; $$.line = @1; }
			| DUTOK_STRING { $$.type = 'S'; $$.str_ = $1; $$.line = @1; }
		;

ordconst:	DUTOK_OPER_SIGNADD DUTOK_IDENTIFIER {
					conditionally_fill_constant($$,$2,@1,ctx,($1 == DUTOKGE_MINUS)); 
				}
			| DUTOK_OPER_SIGNADD DUTOK_UINT {

					if($1 == DUTOKGE_MINUS){ $2 = ctx->tab->ls_int().add(-(*$2)); }

					$$.type = 'I'; $$.int_ = $2; $$.line = @1;
				}
			| DUTOK_UINT { $$.type = 'I'; $$.int_ = $1; $$.line = @1; }
			| DUTOK_IDENTIFIER { conditionally_fill_constant($$,$1,@1,ctx, false); }
		;



%%

static void yyerror(unsigned *line, MlaskalCtx *, const char *m)
{
    error(DUERR_SYNTAX, *line, m);
}
