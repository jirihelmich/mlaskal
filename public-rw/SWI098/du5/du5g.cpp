
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"

    #include "du5.h"
    #include "du5lval.hpp"
    #include "duerr.h"
    #include "du5tok.h"
    #include "du5sem.h"

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
    


/* Line 189 of yacc.c  */
#line 97 "du5g.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DUTOK_PROGRAM = 258,
     DUTOK_LABEL = 259,
     DUTOK_CONST = 260,
     DUTOK_TYPE = 261,
     DUTOK_VAR = 262,
     DUTOK_BEGIN = 263,
     DUTOK_END = 264,
     DUTOK_PROCEDURE = 265,
     DUTOK_FUNCTION = 266,
     DUTOK_ARRAY = 267,
     DUTOK_OF = 268,
     DUTOK_GOTO = 269,
     DUTOK_IF = 270,
     DUTOK_THEN = 271,
     DUTOK_ELSE = 272,
     DUTOK_WHILE = 273,
     DUTOK_DO = 274,
     DUTOK_REPEAT = 275,
     DUTOK_UNTIL = 276,
     DUTOK_FOR = 277,
     DUTOK_OR = 278,
     DUTOK_NOT = 279,
     DUTOK_RECORD = 280,
     DUTOK_IDENTIFIER = 281,
     DUTOK_UINT = 282,
     DUTOK_REAL = 283,
     DUTOK_STRING = 284,
     DUTOK_SEMICOLON = 285,
     DUTOK_DOT = 286,
     DUTOK_COMMA = 287,
     DUTOK_EQ = 288,
     DUTOK_COLON = 289,
     DUTOK_LPAR = 290,
     DUTOK_RPAR = 291,
     DUTOK_DOTDOT = 292,
     DUTOK_LSBRA = 293,
     DUTOK_RSBRA = 294,
     DUTOK_ASSIGN = 295,
     DUTOK_OPER_REL = 296,
     DUTOK_OPER_SIGNADD = 297,
     DUTOK_OPER_MUL = 298,
     DUTOK_FOR_DIRECTION = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 195 "du5g.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    16,    17,    21,    23,    27,    28,
      31,    36,    42,    44,    47,    50,    52,    54,    56,    58,
      60,    63,    66,    68,    70,    71,    74,    79,    85,    86,
      89,    94,   100,   102,   106,   107,   113,   117,   123,   127,
     133,   134,   138,   143,   150,   151,   155,   157,   161,   162,
     164,   166,   171,   173,   175,   177,   181,   188,   190,   192,
     196,   198,   200,   202,   206,   209,   216,   221,   226,   235,
     238,   242,   246,   250,   251,   256,   261,   268,   277,   281,
     283,   287,   291,   293,   297,   299,   302,   306,   310,   312,
     314,   318,   320,   322,   327,   331
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     3,    26,    30,    47,    31,    -1,    48,
      50,    56,    58,    61,    62,    -1,    -1,     4,    49,    30,
      -1,    27,    -1,    49,    32,    27,    -1,    -1,     5,    51,
      -1,    26,    33,    52,    30,    -1,    51,    26,    33,    52,
      30,    -1,    53,    -1,    42,    27,    -1,    42,    28,    -1,
      26,    -1,    54,    -1,    27,    -1,    28,    -1,    29,    -1,
      42,    26,    -1,    42,    27,    -1,    27,    -1,    26,    -1,
      -1,     6,    57,    -1,    26,    33,    71,    30,    -1,    57,
      26,    33,    71,    30,    -1,    -1,     7,    59,    -1,    60,
      34,    71,    30,    -1,    60,    34,    71,    30,    59,    -1,
      26,    -1,    60,    32,    26,    -1,    -1,    61,    30,    64,
      30,    63,    -1,     8,    76,     9,    -1,    48,    50,    56,
      58,    62,    -1,    10,    26,    65,    -1,    11,    26,    65,
      34,    26,    -1,    -1,    35,    66,    36,    -1,    69,    60,
      34,    26,    -1,    69,    60,    34,    26,    30,    66,    -1,
      -1,    35,    68,    36,    -1,    79,    -1,    79,    32,    68,
      -1,    -1,     7,    -1,    26,    -1,    70,    38,    80,    39,
      -1,    72,    -1,    73,    -1,    26,    -1,    55,    37,    55,
      -1,    12,    38,    74,    39,    13,    71,    -1,    72,    -1,
      26,    -1,    74,    32,    72,    -1,    77,    -1,    78,    -1,
      75,    -1,    76,    30,    75,    -1,    14,    27,    -1,    15,
      79,    16,    77,    17,    77,    -1,    18,    79,    19,    77,
      -1,    20,    76,    21,    79,    -1,    22,    26,    40,    79,
      44,    79,    19,    77,    -1,    26,    67,    -1,    27,    34,
      77,    -1,    70,    40,    79,    -1,     8,    76,     9,    -1,
      -1,    15,    79,    16,    75,    -1,    18,    79,    19,    78,
      -1,    15,    79,    16,    77,    17,    78,    -1,    22,    26,
      40,    79,    44,    79,    19,    78,    -1,    27,    34,    78,
      -1,    81,    -1,    81,    41,    81,    -1,    81,    33,    81,
      -1,    79,    -1,    80,    32,    79,    -1,    82,    -1,    42,
      82,    -1,    83,    42,    82,    -1,    83,    23,    82,    -1,
      83,    -1,    84,    -1,    84,    43,    83,    -1,    54,    -1,
      70,    -1,    26,    35,    68,    36,    -1,    35,    79,    36,
      -1,    24,    84,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   136,   148,   149,   154,   155,   160,   161,
     166,   170,   177,   178,   186,   192,   193,   196,   197,   198,
     201,   204,   210,   211,   217,   218,   221,   222,   228,   229,
     232,   233,   236,   237,   242,   243,   248,   251,   263,   264,
     269,   270,   273,   274,   277,   278,   281,   282,   288,   289,
     292,   293,   298,   299,   300,   303,   306,   309,   310,   311,
     316,   317,   320,   321,   324,   325,   326,   327,   328,   329,
     330,   331,   334,   335,   338,   339,   340,   341,   342,   347,
     348,   349,   352,   353,   355,   356,   359,   360,   361,   364,
     365,   368,   369,   370,   371,   372
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DUTOK_PROGRAM", "DUTOK_LABEL",
  "DUTOK_CONST", "DUTOK_TYPE", "DUTOK_VAR", "DUTOK_BEGIN", "DUTOK_END",
  "DUTOK_PROCEDURE", "DUTOK_FUNCTION", "DUTOK_ARRAY", "DUTOK_OF",
  "DUTOK_GOTO", "DUTOK_IF", "DUTOK_THEN", "DUTOK_ELSE", "DUTOK_WHILE",
  "DUTOK_DO", "DUTOK_REPEAT", "DUTOK_UNTIL", "DUTOK_FOR", "DUTOK_OR",
  "DUTOK_NOT", "DUTOK_RECORD", "DUTOK_IDENTIFIER", "DUTOK_UINT",
  "DUTOK_REAL", "DUTOK_STRING", "DUTOK_SEMICOLON", "DUTOK_DOT",
  "DUTOK_COMMA", "DUTOK_EQ", "DUTOK_COLON", "DUTOK_LPAR", "DUTOK_RPAR",
  "DUTOK_DOTDOT", "DUTOK_LSBRA", "DUTOK_RSBRA", "DUTOK_ASSIGN",
  "DUTOK_OPER_REL", "DUTOK_OPER_SIGNADD", "DUTOK_OPER_MUL",
  "DUTOK_FOR_DIRECTION", "$accept", "mlaskal", "program_block",
  "label_block", "label_name_block", "const_def_block", "const_set_block",
  "constant", "u_constant", "u_constant_no_ident", "ordconst",
  "type_def_block", "type_set_block", "var_def_block", "var_set_block",
  "ident_list", "procfunc_def_block", "begin_cmd_end_block", "block",
  "procfunc_header", "params_opt", "params", "concrete_params_opt",
  "concrete_params", "var_opt", "var", "type", "ordtype", "structtype",
  "ordtype_list", "cmd", "cmd_list", "ecf", "enf", "expr", "expr_cycle",
  "simple_expr", "term_cycle", "term", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    52,    53,    53,    54,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    71,    72,    73,    74,    74,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,     0,     3,     1,     3,     0,     2,
       4,     5,     1,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     0,     2,     4,     5,     0,     2,
       4,     5,     1,     3,     0,     5,     3,     5,     3,     5,
       0,     3,     4,     6,     0,     3,     1,     3,     0,     1,
       1,     4,     1,     1,     1,     3,     6,     1,     1,     3,
       1,     1,     1,     3,     2,     6,     4,     4,     8,     2,
       3,     3,     3,     0,     4,     4,     6,     8,     3,     1,
       3,     3,     1,     3,     1,     2,     3,     3,     1,     1,
       3,     1,     1,     4,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     0,     8,     6,
       0,     2,     0,    24,     5,     0,     0,     9,     0,    28,
       7,     0,     0,     0,    25,     0,    34,    15,    17,    18,
      19,     0,     0,    12,    16,     0,     0,     0,    32,    29,
       0,     0,    13,    14,    10,     0,     0,    23,    22,     0,
       0,     0,    52,    53,     0,     0,     0,    73,     0,     3,
      11,     0,    20,    21,     0,    26,     0,    33,     0,    73,
       0,     0,     0,    73,     0,    44,     0,     0,    62,     0,
      60,    61,     0,     0,     0,    58,    57,     0,    23,    55,
      27,    30,     0,    64,     0,    50,     0,     0,    91,    92,
       0,    79,    84,    88,    89,     0,     0,     0,     0,    69,
      73,     0,     0,    36,    73,    40,    40,     4,     0,     0,
      31,    72,    95,     0,     0,    85,    73,     0,     0,     0,
       0,     0,    73,     0,     0,     0,    46,    70,    78,    82,
       0,    71,    63,    48,    38,     0,     8,    35,    59,     0,
       0,    94,    74,    60,    81,    80,    87,    86,    90,    66,
      75,    67,     0,    45,     0,     0,    51,    49,     0,     0,
       0,    24,    56,    93,    73,     0,    47,    83,    41,     0,
      39,    28,    65,    76,     0,     0,     0,    73,    42,    37,
      68,    77,    48,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    10,    13,    17,    32,    33,    98,
      50,    19,    24,    26,    39,    40,    41,    59,   147,    84,
     144,   168,   109,   135,   169,    99,    51,    52,    53,    87,
      78,    79,    80,    81,   136,   140,   101,   102,   103,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
      17,    11,    49,    31,  -120,    64,    63,    85,    95,  -120,
      30,  -120,    96,   105,  -120,    97,    90,    99,   100,   120,
    -120,    60,    98,   101,   102,   103,  -120,  -120,  -120,  -120,
    -120,    45,   106,  -120,  -120,    60,    -3,   104,  -120,  -120,
      69,     2,  -120,  -120,  -120,   109,    94,   110,  -120,    87,
     107,   111,  -120,  -120,    -3,   112,    -3,    32,   108,  -120,
    -120,    40,  -120,  -120,    54,  -120,   113,  -120,   115,    32,
     119,    50,    50,    32,   116,    59,   114,    53,  -120,     4,
    -120,  -120,   121,   123,   122,   117,  -120,   -14,  -120,  -120,
    -120,   103,     5,  -120,    80,   118,    50,    80,  -120,   124,
     134,    15,  -120,    -6,    92,   132,     0,    93,    50,  -120,
      32,    50,    50,  -120,    32,   125,   125,    64,    54,   142,
    -120,  -120,  -120,    50,   127,  -120,    32,    50,    50,    80,
      80,    80,    32,    50,    50,   128,   126,  -120,  -120,  -120,
      -1,  -120,  -120,   149,  -120,   131,    95,  -120,  -120,    -3,
     130,  -120,  -120,   140,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,   129,  -120,    50,    50,  -120,  -120,   133,   103,
     135,   105,  -120,  -120,    32,    50,  -120,  -120,  -120,    78,
    -120,   120,  -120,  -120,   148,   144,   151,    32,   138,  -120,
    -120,  -120,   149,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,    55,  -120,    25,  -120,   139,  -120,    -2,
     136,     6,  -120,    -5,    84,     9,  -120,    -4,  -120,  -120,
      65,   -13,  -120,  -119,  -120,   -57,   -51,   -53,  -120,  -120,
     -99,   -18,  -104,  -103,   -70,  -120,    -7,   -86,    52,    86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -55
static const yytype_int16 yytable[] =
{
      77,   100,   105,    66,   150,    68,   137,   138,    86,    46,
      57,   125,    77,   113,   121,   142,    77,   129,   118,    34,
       1,   133,   153,    47,    48,   119,   124,   152,   159,   160,
     114,   165,    58,    34,   114,   114,   130,     3,   166,    49,
      69,   139,   141,   156,   157,   176,    70,    71,   127,     4,
      72,    92,    73,    77,    74,   106,   128,    77,    75,    76,
      14,     5,    15,   161,   162,   148,    85,    48,     6,    77,
     182,   183,    42,    43,    94,    77,    95,    28,    29,    30,
      88,    48,    49,   190,   191,    96,    27,    28,    29,    30,
       9,   111,    97,   112,   108,   177,    49,   -50,   172,   -50,
      12,    55,    31,    56,    94,   184,    95,    28,    29,    30,
      55,    18,   185,    62,    63,    96,    11,    77,    82,    83,
     154,   155,    16,    21,    20,    22,    23,    25,    37,    38,
      77,    35,    61,   134,    36,   131,    44,    54,    67,    60,
     -54,    65,   107,    90,    64,    91,    93,   115,   110,   116,
     126,   132,   117,   123,   -23,   149,   167,   174,   164,    57,
     143,   180,   111,   151,   163,   170,   173,   187,   192,   178,
     188,   171,   146,   175,    45,   120,   186,   181,   179,   193,
     122,   145,   189,   158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89
};

static const yytype_int16 yycheck[] =
{
      57,    71,    72,    54,   123,    56,   110,   110,    61,    12,
       8,    97,    69,     9,     9,   114,    73,    23,    32,    21,
       3,    21,   126,    26,    27,    39,    96,   126,   132,   132,
      30,    32,    30,    35,    30,    30,    42,    26,    39,    42,
       8,   111,   112,   129,   130,   164,    14,    15,    33,     0,
      18,    69,    20,   110,    22,    73,    41,   114,    26,    27,
      30,    30,    32,   133,   134,   118,    26,    27,     4,   126,
     174,   174,    27,    28,    24,   132,    26,    27,    28,    29,
      26,    27,    42,   187,   187,    35,    26,    27,    28,    29,
      27,    38,    42,    40,    35,   165,    42,    38,   149,    40,
       5,    32,    42,    34,    24,   175,    26,    27,    28,    29,
      32,     6,    34,    26,    27,    35,    31,   174,    10,    11,
     127,   128,    26,    33,    27,    26,    26,     7,    26,    26,
     187,    33,    38,    40,    33,    43,    30,    33,    26,    30,
      30,    30,    26,    30,    37,    30,    27,    26,    34,    26,
      16,    19,    30,    35,    37,    13,     7,    17,    32,     8,
      35,    26,    38,    36,    36,    34,    36,    19,    30,    36,
      26,   146,   117,    44,    35,    91,   181,   171,   169,   192,
      94,   116,   186,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,    26,     0,    30,     4,    47,    48,    27,
      49,    31,     5,    50,    30,    32,    26,    51,     6,    56,
      27,    33,    26,    26,    57,     7,    58,    26,    27,    28,
      29,    42,    52,    53,    54,    33,    33,    26,    26,    59,
      60,    61,    27,    28,    30,    52,    12,    26,    27,    42,
      55,    71,    72,    73,    33,    32,    34,     8,    30,    62,
      30,    38,    26,    27,    37,    30,    71,    26,    71,     8,
      14,    15,    18,    20,    22,    26,    27,    70,    75,    76,
      77,    78,    10,    11,    64,    26,    72,    74,    26,    55,
      30,    30,    76,    27,    24,    26,    35,    42,    54,    70,
      79,    81,    82,    83,    84,    79,    76,    26,    35,    67,
      34,    38,    40,     9,    30,    26,    26,    30,    32,    39,
      59,     9,    84,    35,    79,    82,    16,    33,    41,    23,
      42,    43,    19,    21,    40,    68,    79,    77,    78,    79,
      80,    79,    75,    35,    65,    65,    48,    63,    72,    13,
      68,    36,    75,    77,    81,    81,    82,    82,    83,    77,
      78,    79,    79,    36,    32,    32,    39,     7,    66,    69,
      34,    50,    71,    36,    17,    44,    68,    79,    36,    60,
      26,    56,    77,    78,    79,    34,    58,    19,    26,    62,
      77,    78,    30,    66
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, ctx, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, ctx); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, mlc::MlaskalCtx *ctx)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    mlc::MlaskalCtx *ctx;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (ctx);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, mlc::MlaskalCtx *ctx)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, ctx)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    mlc::MlaskalCtx *ctx;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, mlc::MlaskalCtx *ctx)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, ctx)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    mlc::MlaskalCtx *ctx;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, ctx); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, mlc::MlaskalCtx *ctx)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, ctx)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    mlc::MlaskalCtx *ctx;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (ctx);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (mlc::MlaskalCtx *ctx);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (mlc::MlaskalCtx *ctx)
#else
int
yyparse (ctx)
    mlc::MlaskalCtx *ctx;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 125 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
						if ((yyvsp[(4) - (5)].expr_).block == NULL)
						{
							(yyvsp[(4) - (5)].expr_).block = mlc::icblock_create();
						}
						ctx->tab->set_main_code((yyvsp[(2) - (5)].id_ci_),(yyvsp[(4) - (5)].expr_).block);
					;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 141 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
						(yyval.expr_).block->append_clear_block(*(yyvsp[(6) - (6)].expr_).block);
					;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 154 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { ctx->tab->add_label_entry((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].int_ci_), new_label(ctx)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 155 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { ctx->tab->add_label_entry((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].int_ci_), new_label(ctx)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 161 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
							mlc::add_const((yyvsp[(2) - (2)].vector_const_def_struct_), ctx);
						;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 166 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
							(yyvsp[(3) - (4)].const_def_struct_).ident_index = (yyvsp[(1) - (4)].id_ci_);
							(yyval.vector_const_def_struct_).push_back((yyvsp[(3) - (4)].const_def_struct_));
						;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 170 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
							(yyvsp[(4) - (5)].const_def_struct_).ident_index = (yyvsp[(2) - (5)].id_ci_);
							(yyvsp[(1) - (5)].vector_const_def_struct_).push_back((yyvsp[(4) - (5)].const_def_struct_));
							(yyval.vector_const_def_struct_).swap((yyvsp[(1) - (5)].vector_const_def_struct_));
						;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 178 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
						//we need to determine if it is lower than 0 and based on that add a new symbol
						//into the table
						if((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS){ (yyvsp[(2) - (2)].int_ci_) = ctx->tab->ls_int().add(-(*(yyvsp[(2) - (2)].int_ci_))); }

						//fill the rest of the data
						(yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(2) - (2)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(2) - (2)]);
					;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 186 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
						if((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS){ (yyvsp[(2) - (2)].real_ci_) = ctx->tab->ls_real().add(-(*(yyvsp[(2) - (2)].real_ci_))); }
						(yyval.const_def_struct_).type = 'R'; (yyval.const_def_struct_).real_ = (yyvsp[(2) - (2)].real_ci_); (yyval.const_def_struct_).line = (yylsp[(2) - (2)]);
					;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 192 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { conditionally_fill_constant((yyval.const_def_struct_),(yyvsp[(1) - (1)].id_ci_),(yylsp[(1) - (1)]),ctx, false); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 193 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.const_def_struct_) = (yyvsp[(1) - (1)].const_def_struct_); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 196 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(1) - (1)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 197 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.const_def_struct_).type = 'R'; (yyval.const_def_struct_).real_ = (yyvsp[(1) - (1)].real_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 198 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.const_def_struct_).type = 'S'; (yyval.const_def_struct_).str_ = (yyvsp[(1) - (1)].str_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 201 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
					conditionally_fill_constant((yyval.const_def_struct_),(yyvsp[(2) - (2)].id_ci_),(yylsp[(1) - (2)]),ctx,((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS)); 
				;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 204 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {

					if((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS){ (yyvsp[(2) - (2)].int_ci_) = ctx->tab->ls_int().add(-(*(yyvsp[(2) - (2)].int_ci_))); }

					(yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(2) - (2)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (2)]);
				;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 210 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(1) - (1)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 211 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { conditionally_fill_constant((yyval.const_def_struct_),(yyvsp[(1) - (1)].id_ci_),(yylsp[(1) - (1)]),ctx, false); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 221 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { ctx->tab->add_type((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].id_ci_), (yyvsp[(3) - (4)].type_)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 222 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { ctx->tab->add_type((yylsp[(2) - (5)]),(yyvsp[(2) - (5)].id_ci_),(yyvsp[(4) - (5)].type_)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 232 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { define_vars((yyvsp[(1) - (4)].vector_id_), (yyvsp[(3) - (4)].type_), (yylsp[(1) - (4)]), ctx); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 233 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { define_vars((yyvsp[(1) - (5)].vector_id_), (yyvsp[(3) - (5)].type_), (yylsp[(1) - (5)]), ctx); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 236 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.vector_id_).push_back((yyvsp[(1) - (1)].id_ci_)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 237 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyvsp[(1) - (3)].vector_id_).push_back((yyvsp[(3) - (3)].id_ci_)); (yyval.vector_id_).swap((yyvsp[(1) - (3)].vector_id_)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 248 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { ctx->tab->leave((yylsp[(3) - (3)])); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 256 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
			(yyval.expr_).block->append_clear_block(*(yyvsp[(5) - (5)].expr_).block);
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 263 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.id_ci_) = (yyvsp[(2) - (3)].id_ci_); define_proc((yyvsp[(2) - (3)].id_ci_),(yyvsp[(3) - (3)].params_),(yylsp[(2) - (3)]),ctx); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 264 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.id_ci_) = (yyvsp[(2) - (5)].id_ci_); define_func((yyvsp[(2) - (5)].id_ci_),(yyvsp[(3) - (5)].params_),(yyvsp[(5) - (5)].id_ci_),(yylsp[(2) - (5)]),ctx); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 269 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.params_) = (yyval.params_); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 270 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.params_) = (yyvsp[(2) - (3)].params_); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 273 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { add_param((yyval.params_), (yyvsp[(1) - (4)].is_var_), (yyvsp[(2) - (4)].vector_id_), (yyvsp[(4) - (4)].id_ci_), (yylsp[(1) - (4)]), ctx); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 274 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { add_param((yyvsp[(6) - (6)].params_), (yyvsp[(1) - (6)].is_var_), (yyvsp[(2) - (6)].vector_id_), (yyvsp[(4) - (6)].id_ci_), (yylsp[(1) - (6)]), ctx); (yyval.params_) = (yyvsp[(6) - (6)].params_); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 281 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(1) - (1)].expr_); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 282 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { params_block((yyval.expr_),(yyvsp[(1) - (3)].expr_),(yyvsp[(3) - (3)].expr_)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 288 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.is_var_) = false; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 289 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.is_var_) = true; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 298 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.type_) = (yyval.type_); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 299 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.type_) = (yyval.type_); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 300 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { check_type((yyval.type_), (yyvsp[(1) - (1)].id_ci_), (yylsp[(1) - (1)]), ctx); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 303 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.type_) = add_rangetype((yyvsp[(1) - (3)].const_def_struct_),(yyvsp[(3) - (3)].const_def_struct_),ctx); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 306 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.type_) = add_array((yyvsp[(3) - (6)].type_list_),(yyvsp[(6) - (6)].type_),ctx); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 309 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.type_list_).push_back((yyvsp[(1) - (1)].type_)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 310 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.type_list_).push_back(get_type((yyvsp[(1) - (1)].id_ci_), (yylsp[(1) - (1)]), ctx)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 311 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyvsp[(1) - (3)].type_list_).push_back((yyvsp[(3) - (3)].type_)); (yyval.type_list_).swap((yyvsp[(1) - (3)].type_list_)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 320 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(1) - (1)].expr_); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 321 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyvsp[(1) - (3)].expr_).block->append_clear_block(*(yyvsp[(3) - (3)].expr_).block); (yyval.expr_) = (yyvsp[(1) - (3)].expr_); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 324 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 325 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 326 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 327 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 328 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 329 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { callfunc((yyval.expr_),(yyvsp[(1) - (2)].id_ci_),ctx); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 330 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 331 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    {
				assign((yyval.expr_), (yyvsp[(1) - (3)].id_ci_), (yyvsp[(3) - (3)].expr_), ctx);
			;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 334 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(2) - (3)].expr_); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 335 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 338 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 339 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 340 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 341 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 342 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_).block = mlc::icblock_create(); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 347 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(1) - (1)].expr_); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 348 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { relation((yyval.expr_), (yyvsp[(1) - (3)].expr_), (yyvsp[(2) - (3)].dtge_), (yyvsp[(3) - (3)].expr_)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 349 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { relation((yyval.expr_), (yyvsp[(1) - (3)].expr_), DUTOK_EQ, (yyvsp[(3) - (3)].expr_)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 355 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(1) - (1)].expr_); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 356 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { unary_operator((yyval.expr_),(yyvsp[(2) - (2)].expr_),(yyvsp[(1) - (2)].dtge_)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 359 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { compute((yyval.expr_),(yyvsp[(1) - (3)].expr_),(yyvsp[(2) - (3)].dtge_),(yyvsp[(3) - (3)].expr_)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 360 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { or((yyval.expr_),(yyvsp[(1) - (3)].expr_),(yyvsp[(3) - (3)].expr_)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 361 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(1) - (1)].expr_); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 364 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(1) - (1)].expr_); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 365 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { compute((yyval.expr_), (yyvsp[(1) - (3)].expr_),(yyvsp[(2) - (3)].dtge_),(yyvsp[(3) - (3)].expr_)); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 368 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { get_block_val((yyval.expr_),(yyvsp[(1) - (1)].const_def_struct_)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 369 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { /* get_block_val($$,$1); */ ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 370 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { /*call_func($$,$1,$3);*/ ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 371 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { (yyval.expr_) = (yyvsp[(2) - (3)].expr_); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 372 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"
    { negation((yyval.expr_),(yyvsp[(2) - (2)].expr_)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2181 "du5g.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, ctx, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, ctx, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, ctx, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc, ctx);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, ctx);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 377 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du5\\du5g.y"


static void yyerror(unsigned *line, MlaskalCtx *, const char *m)
{
    error(DUERR_SYNTAX, *line, m);
}

