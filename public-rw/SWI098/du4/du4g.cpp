
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
#line 1 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"

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
    


/* Line 189 of yacc.c  */
#line 97 "du4g.cpp"

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
#line 195 "du4g.cpp"

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
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

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
      31,    36,    42,    44,    47,    50,    51,    54,    59,    65,
      66,    69,    74,    80,    82,    86,    87,    93,    97,   103,
     107,   113,   114,   118,   123,   130,   131,   133,   135,   137,
     139,   143,   150,   152,   154,   158,   160,   162,   164,   168,
     171,   178,   183,   188,   197,   200,   204,   208,   212,   213,
     218,   223,   230,   239,   243,   245,   250,   251,   255,   257,
     261,   263,   267,   271,   273,   277,   279,   282,   286,   290,
     292,   294,   298,   300,   302,   307,   311,   314,   316,   318,
     320,   322,   324,   327,   330,   332
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     3,    26,    30,    47,    31,    -1,    48,
      50,    53,    55,    58,    59,    -1,    -1,     4,    49,    30,
      -1,    27,    -1,    49,    32,    27,    -1,    -1,     5,    51,
      -1,    26,    33,    52,    30,    -1,    51,    26,    33,    52,
      30,    -1,    82,    -1,    42,    27,    -1,    42,    28,    -1,
      -1,     6,    54,    -1,    26,    33,    65,    30,    -1,    54,
      26,    33,    65,    30,    -1,    -1,     7,    56,    -1,    57,
      34,    65,    30,    -1,    57,    34,    65,    30,    56,    -1,
      26,    -1,    57,    32,    26,    -1,    -1,    61,    30,    60,
      30,    58,    -1,     8,    70,     9,    -1,    48,    50,    53,
      55,    59,    -1,    10,    26,    62,    -1,    11,    26,    62,
      34,    26,    -1,    -1,    35,    63,    36,    -1,    64,    57,
      34,    26,    -1,    64,    57,    34,    26,    30,    63,    -1,
      -1,     7,    -1,    66,    -1,    67,    -1,    26,    -1,    84,
      37,    84,    -1,    12,    38,    68,    39,    13,    65,    -1,
      66,    -1,    26,    -1,    68,    32,    66,    -1,    71,    -1,
      72,    -1,    69,    -1,    70,    30,    69,    -1,    14,    27,
      -1,    15,    76,    16,    71,    17,    71,    -1,    18,    76,
      19,    71,    -1,    20,    70,    21,    76,    -1,    22,    26,
      40,    76,    44,    76,    19,    71,    -1,    26,    74,    -1,
      27,    34,    71,    -1,    73,    40,    76,    -1,     8,    70,
       9,    -1,    -1,    15,    76,    16,    69,    -1,    18,    76,
      19,    72,    -1,    15,    76,    16,    71,    17,    72,    -1,
      22,    26,    40,    76,    44,    76,    19,    72,    -1,    27,
      34,    72,    -1,    26,    -1,    73,    38,    77,    39,    -1,
      -1,    35,    75,    36,    -1,    76,    -1,    76,    32,    75,
      -1,    78,    -1,    78,    41,    78,    -1,    78,    33,    78,
      -1,    76,    -1,    77,    32,    76,    -1,    79,    -1,    42,
      79,    -1,    80,    42,    79,    -1,    80,    23,    79,    -1,
      80,    -1,    81,    -1,    81,    43,    80,    -1,    83,    -1,
      73,    -1,    26,    35,    75,    36,    -1,    35,    76,    36,
      -1,    24,    81,    -1,    26,    -1,    83,    -1,    27,    -1,
      28,    -1,    29,    -1,    42,    26,    -1,    42,    27,    -1,
      27,    -1,    26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   103,   111,   112,   118,   119,   122,   123,
     126,   129,   136,   137,   145,   151,   152,   155,   156,   159,
     160,   163,   164,   167,   168,   171,   172,   175,   178,   185,
     186,   189,   190,   193,   194,   197,   198,   201,   202,   203,
     206,   209,   212,   213,   214,   217,   218,   221,   222,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   237,
     238,   239,   240,   241,   244,   245,   248,   249,   252,   253,
     256,   257,   258,   261,   262,   264,   265,   268,   269,   270,
     273,   274,   277,   278,   279,   280,   281,   284,   285,   288,
     289,   290,   293,   296,   302,   303
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
  "constant", "type_def_block", "type_set_block", "var_def_block",
  "var_set_block", "ident_list", "procfunc_def_block",
  "begin_cmd_end_block", "block", "procfunc_header", "params_opt",
  "params", "var_opt", "type", "ordtype", "structtype", "ordtype_list",
  "cmd", "cmd_list", "ecf", "enf", "var", "concrete_params_opt",
  "concrete_params", "expr", "expr_cycle", "simple_expr", "term_cycle",
  "term", "factor", "u_constant", "u_constant_no_ident", "ordconst", 0
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
      51,    51,    52,    52,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      66,    67,    68,    68,    68,    69,    69,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    83,    84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,     0,     3,     1,     3,     0,     2,
       4,     5,     1,     2,     2,     0,     2,     4,     5,     0,
       2,     4,     5,     1,     3,     0,     5,     3,     5,     3,
       5,     0,     3,     4,     6,     0,     1,     1,     1,     1,
       3,     6,     1,     1,     3,     1,     1,     1,     3,     2,
       6,     4,     4,     8,     2,     3,     3,     3,     0,     4,
       4,     6,     8,     3,     1,     4,     0,     3,     1,     3,
       1,     3,     3,     1,     3,     1,     2,     3,     3,     1,
       1,     3,     1,     1,     4,     3,     2,     1,     1,     1,
       1,     1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     0,     0,     8,     6,
       0,     2,     0,    15,     5,     0,     0,     9,     0,    19,
       7,     0,     0,     0,    16,     0,    25,    87,    89,    90,
      91,     0,     0,    12,    88,     0,     0,     0,    23,    20,
       0,     0,     0,     0,     0,    13,    14,    10,     0,     0,
      39,    94,     0,     0,    37,    38,     0,     0,     0,     0,
      31,    31,    58,     3,     4,    11,     0,    92,    93,    17,
       0,     0,    24,     0,    35,    29,     0,    58,     0,     0,
       0,    58,     0,    66,     0,    47,     0,    45,    46,     0,
       8,     0,    43,    42,     0,    95,    40,    18,    21,    36,
       0,     0,     0,     0,    49,     0,    64,     0,     0,    83,
       0,    70,    75,    79,    80,    82,     0,     0,     0,     0,
      54,    58,    27,    58,     0,     0,    15,    25,     0,     0,
      22,    32,     0,    30,    57,    86,     0,     0,    76,    58,
       0,     0,     0,     0,     0,    58,     0,     0,     0,    68,
      55,    63,    48,    73,     0,    56,    19,    26,    44,     0,
       0,     0,    85,    59,    45,    72,    71,    78,    77,    81,
      51,    60,    52,     0,    67,     0,     0,    65,     0,    41,
      33,    84,    58,     0,    69,    74,    28,    35,    50,    61,
       0,    34,    58,    53,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    10,    13,    17,    32,    19,    24,
      26,    39,    40,    43,    63,    91,    44,    75,   100,   101,
      53,    54,    55,    94,    85,    86,    87,    88,   109,   120,
     148,   149,   154,   111,   112,   113,   114,    33,   115,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
      14,    31,    60,    72,  -127,   111,    39,    86,   113,  -127,
     -14,  -127,    90,   115,  -127,    92,    89,    98,    99,   116,
    -127,    62,    93,    94,   102,   103,    97,  -127,  -127,  -127,
    -127,    82,   101,  -127,  -127,    62,    -4,   100,  -127,  -127,
      11,   106,   108,   127,   107,  -127,  -127,  -127,   109,   104,
     110,  -127,    85,   114,  -127,  -127,   112,    -4,   117,    -4,
     105,   105,    36,  -127,   111,  -127,    -2,  -127,  -127,  -127,
      10,   118,  -127,   120,   129,  -127,   119,    36,   124,    58,
      58,    36,   126,    38,   121,  -127,     2,  -127,  -127,    41,
     113,   128,   110,  -127,    16,  -127,  -127,  -127,   103,  -127,
     123,   103,   130,     4,  -127,    68,   122,    58,    68,   125,
     138,   -13,  -127,   -11,    95,  -127,   141,     5,   131,    58,
    -127,    36,  -127,    36,    58,    58,   115,    97,    10,   132,
    -127,  -127,    67,  -127,  -127,  -127,    58,   133,  -127,    36,
      58,    58,    68,    68,    68,    36,    58,    58,   134,   135,
    -127,  -127,  -127,  -127,    33,  -127,   116,  -127,  -127,    -4,
     136,   137,  -127,  -127,   144,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,   139,  -127,    58,    58,  -127,   127,  -127,
     142,  -127,    36,    58,  -127,  -127,  -127,   129,  -127,  -127,
     145,  -127,    36,  -127,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,    77,  -127,    56,  -127,   140,    40,  -127,
       9,    70,    73,    49,    -1,  -127,  -127,   143,    -9,  -127,
     -53,   -61,  -127,  -127,  -109,    -6,  -118,  -112,   -62,  -127,
    -126,   -78,  -127,   -27,  -101,    35,    75,  -127,    18,   146
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -96
static const yytype_int16 yytable[] =
{
      89,   110,   116,   150,    71,    93,    73,   138,    49,   151,
     161,   122,   142,   134,   152,    89,    14,     1,    15,    89,
     140,   164,    50,    51,    92,    51,   146,   170,   141,   137,
     163,   143,   123,   171,   123,   123,    95,    51,    52,    34,
      52,   167,   168,    58,    77,    59,   153,   155,   128,   184,
      78,    79,    52,    34,    80,   129,    81,     3,    82,    89,
       4,    89,    83,    84,   188,   176,     9,   158,   172,   173,
     189,   103,   177,   119,   193,   117,   -64,    89,   -64,   124,
     194,   125,   105,    89,   106,    28,    29,    30,    27,    28,
      29,    30,   105,   107,   106,    28,    29,    30,   185,    58,
     108,   160,     5,   107,    31,   190,   179,    41,    42,    45,
      46,    67,    68,   165,   166,     6,    16,    11,    12,    20,
      89,    18,    21,    25,    22,    23,    35,    36,    37,    38,
      89,    47,    60,    57,    61,    62,    99,    64,   144,    65,
      74,    90,    66,    72,    69,   159,   126,   -95,    97,    70,
      98,   104,   118,   102,   139,   121,   133,   136,   127,   131,
     145,   182,   180,   124,   192,   178,   156,   175,   130,   162,
     174,   147,   187,   181,   132,    48,   157,   186,   191,   169,
     135,     0,     0,   183,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      62,    79,    80,   121,    57,    66,    59,   108,    12,   121,
     136,     9,    23,     9,   123,    77,    30,     3,    32,    81,
      33,   139,    26,    27,    26,    27,    21,   145,    41,   107,
     139,    42,    30,   145,    30,    30,    26,    27,    42,    21,
      42,   142,   143,    32,     8,    34,   124,   125,    32,   175,
      14,    15,    42,    35,    18,    39,    20,    26,    22,   121,
       0,   123,    26,    27,   182,    32,    27,   128,   146,   147,
     182,    77,    39,    35,   192,    81,    38,   139,    40,    38,
     192,    40,    24,   145,    26,    27,    28,    29,    26,    27,
      28,    29,    24,    35,    26,    27,    28,    29,   176,    32,
      42,    34,    30,    35,    42,   183,   159,    10,    11,    27,
      28,    26,    27,   140,   141,     4,    26,    31,     5,    27,
     182,     6,    33,     7,    26,    26,    33,    33,    26,    26,
     192,    30,    26,    33,    26,     8,     7,    30,    43,    30,
      35,    64,    38,    26,    30,    13,    90,    37,    30,    37,
      30,    27,    26,    34,    16,    34,    26,    35,    30,    36,
      19,    17,    26,    38,    19,   156,   126,    32,    98,    36,
      36,    40,    30,    36,   101,    35,   127,   178,   187,   144,
     105,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,    26,     0,    30,     4,    47,    48,    27,
      49,    31,     5,    50,    30,    32,    26,    51,     6,    53,
      27,    33,    26,    26,    54,     7,    55,    26,    27,    28,
      29,    42,    52,    82,    83,    33,    33,    26,    26,    56,
      57,    10,    11,    58,    61,    27,    28,    30,    52,    12,
      26,    27,    42,    65,    66,    67,    84,    33,    32,    34,
      26,    26,     8,    59,    30,    30,    38,    26,    27,    30,
      37,    65,    26,    65,    35,    62,    62,     8,    14,    15,
      18,    20,    22,    26,    27,    69,    70,    71,    72,    73,
      48,    60,    26,    66,    68,    26,    84,    30,    30,     7,
      63,    64,    34,    70,    27,    24,    26,    35,    42,    73,
      76,    78,    79,    80,    81,    83,    76,    70,    26,    35,
      74,    34,     9,    30,    38,    40,    50,    30,    32,    39,
      56,    36,    57,    26,     9,    81,    35,    76,    79,    16,
      33,    41,    23,    42,    43,    19,    21,    40,    75,    76,
      71,    72,    69,    76,    77,    76,    53,    58,    66,    13,
      34,    75,    36,    69,    71,    78,    78,    79,    79,    80,
      71,    72,    76,    76,    36,    32,    32,    39,    55,    65,
      26,    36,    17,    44,    75,    76,    59,    30,    71,    72,
      76,    63,    19,    71,    72
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
        case 6:

/* Line 1455 of yacc.c  */
#line 118 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { ctx->tab->add_label_entry((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].int_ci_), new_label(ctx)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 119 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { ctx->tab->add_label_entry((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].int_ci_), new_label(ctx)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 123 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { mlc::add_const((yyvsp[(2) - (2)].vector_const_def_struct_), ctx); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 126 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    {
							(yyvsp[(3) - (4)].const_def_struct_).ident_index = (yyvsp[(1) - (4)].id_ci_); (yyval.vector_const_def_struct_).push_back((yyvsp[(3) - (4)].const_def_struct_));
						;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 129 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    {
							(yyvsp[(4) - (5)].const_def_struct_).ident_index = (yyvsp[(2) - (5)].id_ci_);
							(yyvsp[(1) - (5)].vector_const_def_struct_).push_back((yyvsp[(4) - (5)].const_def_struct_));
							(yyval.vector_const_def_struct_).swap((yyvsp[(1) - (5)].vector_const_def_struct_));
						;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 137 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
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
#line 145 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    {
						if((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS){ (yyvsp[(2) - (2)].real_ci_) = ctx->tab->ls_real().add(-(*(yyvsp[(2) - (2)].real_ci_))); }
						(yyval.const_def_struct_).type = 'R'; (yyval.const_def_struct_).real_ = (yyvsp[(2) - (2)].real_ci_); (yyval.const_def_struct_).line = (yylsp[(2) - (2)]);
					;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 155 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { ctx->tab->add_type((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].id_ci_), (yyvsp[(3) - (4)].type_)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 156 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { ctx->tab->add_type((yylsp[(2) - (5)]),(yyvsp[(2) - (5)].id_ci_),(yyvsp[(4) - (5)].type_)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 163 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { define_vars((yyvsp[(1) - (4)].vector_id_), (yyvsp[(3) - (4)].type_), (yylsp[(1) - (4)]), ctx); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 164 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { define_vars((yyvsp[(1) - (5)].vector_id_), (yyvsp[(3) - (5)].type_), (yylsp[(1) - (5)]), ctx); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 167 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.vector_id_).push_back((yyvsp[(1) - (1)].id_ci_)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 168 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyvsp[(1) - (3)].vector_id_).push_back((yyvsp[(3) - (3)].id_ci_)); (yyval.vector_id_).swap((yyvsp[(1) - (3)].vector_id_)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 175 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { ctx->tab->leave((yylsp[(3) - (3)])); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 185 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { define_proc((yyvsp[(2) - (3)].id_ci_),(yyvsp[(3) - (3)].params_),(yylsp[(2) - (3)]),ctx); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 186 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { define_func((yyvsp[(2) - (5)].id_ci_),(yyvsp[(3) - (5)].params_),(yyvsp[(5) - (5)].id_ci_),(yylsp[(2) - (5)]),ctx); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 189 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.params_) = (yyval.params_); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 190 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.params_) = (yyvsp[(2) - (3)].params_); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 193 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { add_param((yyval.params_), (yyvsp[(1) - (4)].is_var_), (yyvsp[(2) - (4)].vector_id_), (yyvsp[(4) - (4)].id_ci_), (yylsp[(1) - (4)]), ctx); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 194 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { add_param((yyvsp[(6) - (6)].params_), (yyvsp[(1) - (6)].is_var_), (yyvsp[(2) - (6)].vector_id_), (yyvsp[(4) - (6)].id_ci_), (yylsp[(1) - (6)]), ctx); (yyval.params_) = (yyvsp[(6) - (6)].params_); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 197 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.is_var_) = false; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 198 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.is_var_) = true; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 201 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.type_) = (yyval.type_); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 202 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.type_) = (yyval.type_); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 203 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { check_type((yyval.type_), (yyvsp[(1) - (1)].id_ci_), (yylsp[(1) - (1)]), ctx); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 206 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.type_) = add_rangetype((yyvsp[(1) - (3)].const_def_struct_),(yyvsp[(3) - (3)].const_def_struct_),ctx); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 209 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.type_) = add_array((yyvsp[(3) - (6)].type_list_),(yyvsp[(6) - (6)].type_),ctx); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 212 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.type_list_).push_back((yyvsp[(1) - (1)].type_)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 213 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.type_list_).push_back(get_type((yyvsp[(1) - (1)].id_ci_), (yylsp[(1) - (1)]), ctx)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 214 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyvsp[(1) - (3)].type_list_).push_back((yyvsp[(3) - (3)].type_)); (yyval.type_list_).swap((yyvsp[(1) - (3)].type_list_)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 284 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { conditionally_fill_constant((yyval.const_def_struct_),(yyvsp[(1) - (1)].id_ci_),(yylsp[(1) - (1)]),ctx, false); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 285 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.const_def_struct_) = (yyvsp[(1) - (1)].const_def_struct_); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 288 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(1) - (1)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 289 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.const_def_struct_).type = 'R'; (yyval.const_def_struct_).real_ = (yyvsp[(1) - (1)].real_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 290 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.const_def_struct_).type = 'S'; (yyval.const_def_struct_).str_ = (yyvsp[(1) - (1)].str_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 293 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    {
					conditionally_fill_constant((yyval.const_def_struct_),(yyvsp[(2) - (2)].id_ci_),(yylsp[(1) - (2)]),ctx,((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS)); 
				;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 296 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    {

					if((yyvsp[(1) - (2)].dtge_) == DUTOKGE_MINUS){ (yyvsp[(2) - (2)].int_ci_) = ctx->tab->ls_int().add(-(*(yyvsp[(2) - (2)].int_ci_))); }

					(yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(2) - (2)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (2)]);
				;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 302 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { (yyval.const_def_struct_).type = 'I'; (yyval.const_def_struct_).int_ = (yyvsp[(1) - (1)].int_ci_); (yyval.const_def_struct_).line = (yylsp[(1) - (1)]); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 303 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"
    { conditionally_fill_constant((yyval.const_def_struct_),(yyvsp[(1) - (1)].id_ci_),(yylsp[(1) - (1)]),ctx, false); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1909 "du4g.cpp"
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
#line 308 "C:\\cygwin\\home\\Jirka\\mlaskal\\public-rw\\SWI098\\du4\\du4g.y"


static void yyerror(unsigned *line, MlaskalCtx *, const char *m)
{
    error(DUERR_SYNTAX, *line, m);
}

