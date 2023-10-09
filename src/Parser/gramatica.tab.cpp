
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "gramatica.ypp"

// Declaraciones de código C si es necesario
#include "SyntacticActions.h"
#include "../TransitionMatrix/TransitionMatrix.h"
#include "gramatica.tab.hpp"


/* Line 189 of yacc.c  */
#line 81 "gramatica.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     SHORT = 258,
     UINT = 259,
     DOUBLE = 260,
     VOID = 261,
     CLASS = 262,
     INTERFACE = 263,
     IMPLEMENT = 264,
     IMPL = 265,
     IF = 266,
     ELSE = 267,
     END_IF = 268,
     PRINT = 269,
     FOR = 270,
     IN = 271,
     RANGE = 272,
     RETURN = 273,
     LESS_EQUAL = 274,
     GREATER_EQUAL = 275,
     EQUAL = 276,
     NOT_EQUAL = 277,
     PLUS_EQUAL = 278,
     ID = 279,
     STRING = 280,
     CTE_SHORT = 281,
     CTE_UINT = 282,
     CTE_DOUBLE = 283
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 17 "gramatica.ypp"

        int number = 0;
        char *string;



/* Line 214 of yacc.c  */
#line 152 "gramatica.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 164 "gramatica.tab.cpp"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,    42,    40,    33,    41,    25,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    34,
      38,    24,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    26,
      27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    15,    18,    20,    22,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    47,    51,    53,    61,    67,    70,    71,    78,    87,
      90,    91,    94,    97,    98,   101,   110,   111,   115,   116,
     120,   124,   128,   132,   133,   142,   146,   150,   154,   158,
     159,   162,   163,   171,   173,   176,   180,   182,   184,   188,
     194,   196,   198,   203,   210,   212,   213,   222,   229,   233,
     235,   237,   239,   241,   243,   245,   247,   251,   254,   267,
     271,   275,   279,   284,   290,   296,   300,   302,   306,   310,
     314,   316,   318,   322,   326,   328,   331,   333,   335,   337,
     339,   341,   343
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    47,    -1,    46,
      47,    -1,    48,    33,    -1,    49,    33,    -1,    50,    -1,
      52,    -1,    69,    -1,    53,    -1,    56,    -1,    67,    -1,
      61,    -1,    72,    -1,    74,    -1,    76,    -1,    80,    -1,
      81,    -1,    82,    -1,    88,    51,    -1,    51,    34,    26,
      -1,    26,    -1,     7,    26,    31,    57,    59,    62,    32,
      -1,     8,    26,    31,    54,    32,    -1,    54,    55,    -1,
      -1,     6,    26,    35,    66,    36,    33,    -1,     7,    26,
       9,    26,    31,    59,    62,    32,    -1,    57,    58,    -1,
      -1,    50,    33,    -1,    59,    60,    -1,    -1,    61,    33,
      -1,     6,    26,    35,    66,    36,    31,    63,    32,    -1,
      -1,    62,    26,    33,    -1,    -1,    63,    50,    33,    -1,
      63,    68,    33,    -1,    63,    49,    33,    -1,    63,    64,
      33,    -1,    -1,     6,    26,    35,    66,    36,    31,    65,
      32,    -1,    65,    50,    33,    -1,    65,    68,    33,    -1,
      65,    49,    33,    -1,    65,    64,    33,    -1,    -1,    88,
      26,    -1,    -1,    10,    15,    26,    37,    31,    59,    32,
      -1,    18,    -1,    26,    70,    -1,    70,    34,    71,    -1,
      71,    -1,    26,    -1,    26,    73,    83,    -1,    26,    25,
      26,    73,    83,    -1,    24,    -1,    23,    -1,    26,    35,
      75,    36,    -1,    26,    25,    26,    35,    75,    36,    -1,
      83,    -1,    -1,    11,    35,    77,    36,    79,    12,    79,
      13,    -1,    11,    35,    77,    36,    79,    13,    -1,    83,
      78,    83,    -1,    38,    -1,    39,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    47,    -1,    31,    46,    32,
      -1,    14,    27,    -1,    15,    26,    16,    17,    35,    87,
      34,    87,    34,    87,    36,    79,    -1,    26,    25,    26,
      -1,    83,    40,    85,    -1,    83,    41,    85,    -1,    88,
      35,    83,    36,    -1,    83,    40,    35,    84,    36,    -1,
      83,    41,    35,    84,    36,    -1,    35,    84,    36,    -1,
      85,    -1,    35,    84,    36,    -1,    85,    40,    85,    -1,
      85,    41,    85,    -1,    85,    -1,    86,    -1,    85,    42,
      86,    -1,    85,    43,    86,    -1,    26,    -1,    41,    87,
      -1,    87,    -1,    28,    -1,    30,    -1,    29,    -1,     3,
      -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    32,    33,    36,    37,    40,    41,    42,
      43,    44,    45,    46,    49,    50,    51,    52,    53,    54,
      57,    60,    61,    64,    67,    70,    71,    74,    77,    80,
      81,    84,    87,    88,    91,    94,    95,    98,    99,   102,
     103,   104,   105,   106,   109,   112,   113,   114,   115,   116,
     119,   120,   123,   126,   129,   132,   133,   136,   139,   140,
     143,   144,   147,   148,   151,   152,   155,   156,   159,   162,
     163,   164,   165,   166,   167,   170,   171,   174,   177,   180,
     183,   184,   185,   186,   187,   188,   189,   192,   193,   194,
     195,   198,   199,   200,   203,   204,   205,   208,   209,   210,
     213,   214,   215
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHORT", "UINT", "DOUBLE", "VOID",
  "CLASS", "INTERFACE", "IMPLEMENT", "IMPL", "IF", "ELSE", "END_IF",
  "PRINT", "FOR", "IN", "RANGE", "RETURN", "LESS_EQUAL", "GREATER_EQUAL",
  "EQUAL", "NOT_EQUAL", "PLUS_EQUAL", "'='", "'.'", "ID", "STRING",
  "CTE_SHORT", "CTE_UINT", "CTE_DOUBLE", "'{'", "'}'", "','", "';'", "'('",
  "')'", "':'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "$accept",
  "programa", "sentencias", "sentencia", "declarativa", "ejecutable",
  "declaracion_variables", "lista_variables", "clase_declaration",
  "interface_declaration", "interface_metodos",
  "interface_metodo_declaration", "implement_declaration", "atributos",
  "atributo_declaration", "metodos_clase", "metodo_declaration",
  "funcion_declaration", "herencia_composicion", "sentencias_metodo",
  "local_function_declaration", "sentencias_funcion_local", "parametro",
  "distributed_method_implementation", "retorno", "objeto_declaration",
  "lista_objetos", "objeto", "asignacion", "asignador", "invocacion",
  "argumentos", "seleccion", "condicion", "comparador",
  "bloque_sentencias", "print", "bucle_for", "acceso_atributo",
  "expresion", "expresion_parentesis", "termino", "factor", "constante",
  "tipo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    61,    46,   279,   280,   281,   282,
     283,   123,   125,    44,    59,    40,    41,    58,    60,    62,
      43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    48,    48,
      48,    48,    48,    48,    49,    49,    49,    49,    49,    49,
      50,    51,    51,    52,    53,    54,    54,    55,    56,    57,
      57,    58,    59,    59,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    64,    65,    65,    65,    65,    65,
      66,    66,    67,    68,    69,    70,    70,    71,    72,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    86,    87,    87,    87,
      88,    88,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     7,     5,     2,     0,     6,     8,     2,
       0,     2,     2,     0,     2,     8,     0,     3,     0,     3,
       3,     3,     3,     0,     8,     3,     3,     3,     3,     0,
       2,     0,     7,     1,     2,     3,     1,     1,     3,     5,
       1,     1,     4,     6,     1,     0,     8,     6,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     2,    12,     3,
       3,     3,     4,     5,     5,     3,     1,     3,     3,     3,
       1,     1,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    36,     0,   100,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     3,     0,     0,     7,     8,
      10,    11,    13,    12,     9,    14,    15,    16,    17,    18,
      19,     0,     1,     0,     0,     0,     0,     0,    77,     0,
      61,    60,     0,    57,    65,    54,    56,     0,     2,     4,
       5,     6,    22,    20,    51,     0,    30,    26,     0,    94,
      97,    99,    98,     0,     0,     0,     0,    86,    91,    96,
       0,     0,    79,     0,    64,     0,    58,     0,     0,     0,
       0,    33,     0,     0,     0,     0,    90,    95,    36,    71,
      72,    73,    74,    69,    70,     0,     0,     0,     0,     0,
       0,     0,    65,     0,    62,    55,    21,     0,    50,    33,
       0,    29,    38,     0,    24,    25,    33,     0,    85,     0,
       0,    36,    75,     0,     0,    80,     0,    81,    68,    92,
      93,     0,     0,     0,    59,    43,    38,    31,    32,     0,
       0,     0,    36,    87,    88,    89,    36,    36,    67,     0,
       0,    82,     0,    63,     0,     0,    34,     0,    23,    51,
      52,    76,     0,    83,    84,     0,     0,    53,     0,    35,
       0,     0,     0,     0,    28,    37,     0,    66,     0,     0,
      41,    39,    42,    40,     0,     0,    51,    27,     0,     0,
      36,     0,    78,    49,     0,    44,     0,     0,     0,     0,
      47,    45,    48,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    14,   122,    16,    17,    18,    53,    19,    20,
      82,   115,    21,    81,   111,   112,   138,    22,   140,   154,
     172,   194,    78,    23,   173,    24,    45,    46,    25,    47,
      26,    73,    27,    65,    97,   123,    28,    29,    30,    74,
      85,    67,    68,    69,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
      13,    91,    32,  -150,  -150,  -150,    36,    38,    49,    63,
      45,    60,    74,     1,    78,  -150,    85,    87,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,   108,  -150,    95,    -3,   119,   113,    26,  -150,   138,
    -150,  -150,   151,  -150,    26,   136,  -150,    26,  -150,  -150,
    -150,  -150,  -150,   150,   157,   152,  -150,  -150,   155,  -150,
    -150,  -150,  -150,   177,   144,   159,   161,    48,  -150,  -150,
     169,   179,    84,   172,   104,   184,   104,   185,   190,   193,
     189,   157,     6,   196,   177,   197,    71,  -150,   183,  -150,
    -150,  -150,  -150,  -150,  -150,   187,   195,    26,    -7,    -7,
      26,   194,    26,    26,  -150,  -150,  -150,   200,  -150,  -150,
     199,  -150,     7,   208,  -150,  -150,  -150,   201,  -150,    -7,
      -7,    91,  -150,   163,   177,    48,   177,    48,   104,  -150,
    -150,    97,   144,   202,   104,  -150,     7,  -150,  -150,   206,
       9,   205,    14,  -150,    48,    48,   121,   183,  -150,   207,
     209,  -150,   210,  -150,   137,    83,  -150,   213,  -150,   157,
    -150,  -150,   222,  -150,  -150,   144,   215,  -150,    34,  -150,
     214,   216,   217,   218,  -150,  -150,   212,  -150,   219,   220,
    -150,  -150,  -150,  -150,   221,   144,   157,  -150,   223,   224,
     183,   211,  -150,  -150,   153,  -150,   225,   228,   229,   230,
    -150,  -150,  -150,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,   131,     0,  -150,  -149,   -78,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,   -66,  -150,  -103,   120,  -150,
      70,  -150,  -144,  -150,    72,  -150,  -150,   182,  -150,   198,
    -150,   165,  -150,  -150,  -150,  -143,  -150,  -150,  -150,   -29,
     -73,   -47,    67,   -62,   -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -37
static const yytype_int16 yytable[] =
{
      70,    15,    87,   110,   162,   170,    55,    70,    66,   139,
      70,   117,   113,     6,    49,   176,    86,    79,    76,    59,
       6,    60,    61,    62,    40,    41,    42,    43,    56,     3,
       4,     5,    32,   139,    64,   157,    44,    86,   114,   139,
     -36,   158,   189,   136,     1,   196,   160,   192,   125,   127,
     142,   149,    59,   150,    60,    61,    62,    40,    41,    42,
      70,    63,    33,    70,    34,    70,    70,    64,   128,    44,
     152,   131,   144,   145,   134,    35,   171,    86,    36,    86,
      37,     3,     4,     5,     6,     7,     8,    38,     9,    10,
      98,    99,    11,    12,     3,     4,     5,     6,     7,     8,
      39,     9,    10,   178,    13,    11,    12,    40,    41,   157,
      48,   119,   120,    98,    99,   174,   197,    13,    50,   102,
      51,    15,    79,   188,     3,     4,     5,     6,     7,     8,
      54,     9,    10,   151,    52,    11,    12,    95,    96,    58,
       3,     4,     5,   166,    95,    96,    49,    13,    10,    79,
      57,    11,    12,   161,    71,   167,     3,     4,     5,   166,
       3,     4,     5,   168,    10,   129,   130,    11,    12,   169,
      75,   167,    60,    61,    62,   147,   148,    72,    80,   168,
      89,    90,    91,    92,    77,   195,     3,     4,     5,     6,
       7,     8,    83,     9,    10,    88,   101,    11,    12,    93,
      94,    95,    96,    59,   100,    60,    61,    62,   104,    13,
      43,   106,    84,    59,   121,    60,    61,    62,    64,   108,
     109,    59,   124,    60,    61,    62,   107,   116,    64,   132,
     126,   135,   137,   118,   141,   177,    64,   143,   153,   156,
     159,   179,   193,   163,   165,   164,   175,   180,   184,   181,
     182,   183,   146,   185,   187,   186,   155,   105,   200,   190,
     191,   201,   202,   203,   198,     0,   199,   133,     0,     0,
     103
};

static const yytype_int16 yycheck[] =
{
      37,     1,    64,    81,   147,   154,     9,    44,    37,   112,
      47,    84,     6,     6,    14,   159,    63,    54,    47,    26,
       6,    28,    29,    30,    23,    24,    25,    26,    31,     3,
       4,     5,     0,   136,    41,    26,    35,    84,    32,   142,
      33,    32,   186,   109,    31,   194,    32,   190,    95,    96,
     116,   124,    26,   126,    28,    29,    30,    23,    24,    25,
      97,    35,    26,   100,    26,   102,   103,    41,    97,    35,
     132,   100,   119,   120,   103,    26,   154,   124,    15,   126,
      35,     3,     4,     5,     6,     7,     8,    27,    10,    11,
      42,    43,    14,    15,     3,     4,     5,     6,     7,     8,
      26,    10,    11,   165,    26,    14,    15,    23,    24,    26,
      32,    40,    41,    42,    43,    32,   194,    26,    33,    35,
      33,   121,   159,   185,     3,     4,     5,     6,     7,     8,
      35,    10,    11,    36,    26,    14,    15,    40,    41,    26,
       3,     4,     5,     6,    40,    41,   146,    26,    11,   186,
      31,    14,    15,    32,    16,    18,     3,     4,     5,     6,
       3,     4,     5,    26,    11,    98,    99,    14,    15,    32,
      34,    18,    28,    29,    30,    12,    13,    26,    26,    26,
      19,    20,    21,    22,    34,    32,     3,     4,     5,     6,
       7,     8,    37,    10,    11,    36,    17,    14,    15,    38,
      39,    40,    41,    26,    35,    28,    29,    30,    36,    26,
      26,    26,    35,    26,    31,    28,    29,    30,    41,    26,
      31,    26,    35,    28,    29,    30,    36,    31,    41,    35,
      35,    31,    33,    36,    26,    13,    41,    36,    36,    33,
      35,    26,    31,    36,    34,    36,    33,    33,    36,    33,
      33,    33,   121,    34,    33,    35,   136,    75,    33,    36,
      36,    33,    33,    33,   194,    -1,   194,   102,    -1,    -1,
      72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    45,     3,     4,     5,     6,     7,     8,    10,
      11,    14,    15,    26,    46,    47,    48,    49,    50,    52,
      53,    56,    61,    67,    69,    72,    74,    76,    80,    81,
      82,    88,     0,    26,    26,    26,    15,    35,    27,    26,
      23,    24,    25,    26,    35,    70,    71,    73,    32,    47,
      33,    33,    26,    51,    35,     9,    31,    31,    26,    26,
      28,    29,    30,    35,    41,    77,    83,    85,    86,    87,
      88,    16,    26,    75,    83,    34,    83,    34,    66,    88,
      26,    57,    54,    37,    35,    84,    85,    87,    36,    19,
      20,    21,    22,    38,    39,    40,    41,    78,    42,    43,
      35,    17,    35,    73,    36,    71,    26,    36,    26,    31,
      50,    58,    59,     6,    32,    55,    31,    84,    36,    40,
      41,    31,    47,    79,    35,    85,    35,    85,    83,    86,
      86,    83,    35,    75,    83,    31,    59,    33,    60,    61,
      62,    26,    59,    36,    85,    85,    46,    12,    13,    84,
      84,    36,    87,    36,    63,    62,    33,    26,    32,    35,
      32,    32,    79,    36,    36,    34,     6,    18,    26,    32,
      49,    50,    64,    68,    32,    33,    66,    13,    87,    26,
      33,    33,    33,    33,    36,    34,    35,    33,    87,    66,
      36,    36,    79,    31,    65,    32,    49,    50,    64,    68,
      33,    33,    33,    33
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 7:

/* Line 1455 of yacc.c  */
#line 40 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de variables") ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 64 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase", TransitionMatrix::getLine()) ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 67 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz", TransitionMatrix::getLine()) ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 74 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz", TransitionMatrix::getLine()) ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 77 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz", TransitionMatrix::getLine()) ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 84 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase", TransitionMatrix::getLine()) ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 91 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo", TransitionMatrix::getLine()) ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 94 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion", TransitionMatrix::getLine()) ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 98 "gramatica.ypp"
    { Logger::infoMsg("Herencia por composicion", TransitionMatrix::getLine()) ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 109 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion local", TransitionMatrix::getLine()) ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 115 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales", TransitionMatrix::getLine()) ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 123 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos", TransitionMatrix::getLine()) ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 139 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple", TransitionMatrix::getLine()) ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 140 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo", TransitionMatrix::getLine()) ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 147 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion", TransitionMatrix::getLine()) ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 148 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo", TransitionMatrix::getLine()) ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 155 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa", TransitionMatrix::getLine()) ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 156 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE", TransitionMatrix::getLine()) ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 159 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control", TransitionMatrix::getLine()) ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 174 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT", TransitionMatrix::getLine()) ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 177 "gramatica.ypp"
    { Logger::infoMsg("Sentencia FOR", TransitionMatrix::getLine()) ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 180 "gramatica.ypp"
    { Logger::infoMsg("Acceso a atributo", TransitionMatrix::getLine()) ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 185 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida", TransitionMatrix::getLine()) ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 192 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida", TransitionMatrix::getLine()) ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 200 "gramatica.ypp"
    { SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string)) ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 204 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(2) - (2)].string)) ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 208 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = CTE_SHORT; ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 209 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = CTE_DOUBLE; ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 210 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = CTE_UINT; ;}
    break;



/* Line 1455 of yacc.c  */
#line 1764 "gramatica.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



