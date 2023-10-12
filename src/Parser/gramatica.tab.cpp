
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
#include "gramatica.tab.hpp"


/* Line 189 of yacc.c  */
#line 80 "gramatica.tab.cpp"

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
#line 15 "gramatica.ypp"

        int number = 0;
        char *string;



/* Line 214 of yacc.c  */
#line 151 "gramatica.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 163 "gramatica.tab.cpp"

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
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   388

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  235

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
      35,    36,    42,    41,    33,    38,    25,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    34,
      39,    24,    40,     2,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     7,    10,    13,    15,    18,    21,    24,
      26,    28,    30,    32,    34,    36,    38,    40,    42,    44,
      46,    48,    50,    52,    55,    59,    61,    69,    75,    78,
      79,    86,    95,    98,    99,   102,   105,   106,   109,   118,
     119,   123,   124,   128,   132,   136,   137,   146,   150,   154,
     158,   159,   162,   164,   169,   170,   178,   180,   183,   187,
     189,   191,   195,   201,   204,   209,   213,   215,   217,   222,
     229,   231,   235,   236,   245,   252,   258,   266,   270,   273,
     276,   278,   280,   282,   284,   286,   288,   290,   292,   296,
     299,   301,   303,   312,   320,   328,   336,   344,   350,   354,
     356,   357,   361,   365,   369,   374,   380,   386,   390,   392,
     396,   400,   404,   406,   408,   412,   416,   418,   421,   423,
     425,   427,   429,   431,   433
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    31,    46,    -1,
      46,    32,    -1,    47,    -1,    46,    47,    -1,    48,    33,
      -1,    49,    33,    -1,    50,    -1,    52,    -1,    69,    -1,
      53,    -1,    56,    -1,    67,    -1,    61,    -1,    72,    -1,
      74,    -1,    76,    -1,    80,    -1,    81,    -1,    83,    -1,
      68,    -1,    89,    51,    -1,    51,    34,    26,    -1,    26,
      -1,     7,    26,    31,    57,    59,    62,    32,    -1,     8,
      26,    31,    54,    32,    -1,    54,    55,    -1,    -1,     6,
      26,    35,    66,    36,    33,    -1,     7,    26,     9,    26,
      31,    59,    62,    32,    -1,    57,    58,    -1,    -1,    50,
      33,    -1,    59,    60,    -1,    -1,    61,    33,    -1,     6,
      26,    35,    66,    36,    31,    63,    32,    -1,    -1,    62,
      26,    33,    -1,    -1,    63,    50,    33,    -1,    63,    49,
      33,    -1,    63,    64,    33,    -1,    -1,     6,    26,    35,
      66,    36,    31,    65,    32,    -1,    65,    50,    33,    -1,
      65,    49,    33,    -1,    65,    64,    33,    -1,    -1,    89,
      26,    -1,    26,    -1,    66,    34,    89,    26,    -1,    -1,
      10,    15,    26,    37,    31,    59,    32,    -1,    18,    -1,
      26,    70,    -1,    70,    34,    71,    -1,    71,    -1,    26,
      -1,    26,    73,    84,    -1,    26,    25,    26,    73,    84,
      -1,    26,    73,    -1,    26,    25,    26,    73,    -1,    26,
      73,    38,    -1,    24,    -1,    23,    -1,    26,    35,    75,
      36,    -1,    26,    25,    26,    35,    75,    36,    -1,    84,
      -1,    75,    34,    84,    -1,    -1,    11,    35,    77,    36,
      79,    12,    79,    13,    -1,    11,    35,    77,    36,    79,
      13,    -1,    11,    35,    77,    36,    79,    -1,    11,    35,
      77,    36,    79,    12,    79,    -1,    84,    78,    84,    -1,
      84,    78,    -1,    78,    84,    -1,    84,    -1,    39,    -1,
      40,    -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,
      47,    -1,    31,    46,    32,    -1,    14,    27,    -1,    14,
      -1,    27,    -1,    15,    26,    16,    17,    35,    82,    36,
      79,    -1,    26,    16,    17,    35,    82,    36,    79,    -1,
      15,    16,    17,    35,    82,    36,    79,    -1,    15,    26,
      16,    35,    82,    36,    79,    -1,    15,    26,    17,    35,
      82,    36,    79,    -1,    88,    34,    88,    34,    88,    -1,
      88,    34,    88,    -1,    88,    -1,    -1,    26,    25,    26,
      -1,    84,    41,    86,    -1,    84,    38,    86,    -1,    89,
      35,    84,    36,    -1,    84,    41,    35,    85,    36,    -1,
      84,    38,    35,    85,    36,    -1,    35,    85,    36,    -1,
      86,    -1,    35,    85,    36,    -1,    86,    41,    86,    -1,
      86,    38,    86,    -1,    86,    -1,    87,    -1,    86,    42,
      87,    -1,    86,    43,    87,    -1,    26,    -1,    38,    88,
      -1,    88,    -1,    28,    -1,    30,    -1,    29,    -1,     3,
      -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    28,    29,    32,    33,    36,    37,    40,
      41,    42,    43,    44,    45,    46,    49,    50,    51,    52,
      53,    54,    55,    58,    62,    63,    66,    69,    72,    73,
      76,    79,    82,    83,    86,    89,    90,    93,    96,    97,
     100,   101,   104,   105,   106,   107,   110,   113,   114,   115,
     116,   119,   120,   121,   122,   125,   128,   131,   134,   135,
     138,   141,   142,   143,   144,   145,   148,   149,   152,   153,
     156,   157,   158,   161,   162,   163,   164,   167,   168,   169,
     170,   173,   174,   175,   176,   177,   178,   181,   182,   185,
     186,   187,   190,   191,   192,   193,   194,   197,   198,   199,
     200,   203,   206,   207,   208,   209,   210,   211,   212,   215,
     216,   217,   218,   221,   222,   223,   226,   227,   228,   231,
     232,   233,   236,   237,   238
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
  "')'", "':'", "'-'", "'<'", "'>'", "'+'", "'*'", "'/'", "$accept",
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
  "bloque_sentencias", "print", "bucle_for", "argumento_bucle_for",
  "acceso_atributo", "expresion", "expresion_parentesis", "termino",
  "factor", "constante", "tipo", 0
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
     283,   123,   125,    44,    59,    40,    41,    58,    45,    60,
      62,    43,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      48,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    50,    51,    51,    52,    53,    54,    54,
      55,    56,    57,    57,    58,    59,    59,    60,    61,    61,
      62,    62,    63,    63,    63,    63,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    68,    69,    70,    70,
      71,    72,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    77,    77,    77,
      77,    78,    78,    78,    78,    78,    78,    79,    79,    80,
      80,    80,    81,    81,    81,    81,    81,    82,    82,    82,
      82,    83,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    89,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     7,     5,     2,     0,
       6,     8,     2,     0,     2,     2,     0,     2,     8,     0,
       3,     0,     3,     3,     3,     0,     8,     3,     3,     3,
       0,     2,     1,     4,     0,     7,     1,     2,     3,     1,
       1,     3,     5,     2,     4,     3,     1,     1,     4,     6,
       1,     3,     0,     8,     6,     5,     7,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     8,     7,     7,     7,     7,     5,     3,     1,
       0,     3,     3,     3,     4,     5,     5,     3,     1,     3,
       3,     3,     1,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      39,   122,   123,   124,     0,     0,     0,     0,     0,    90,
       0,    56,     0,    91,    39,     0,    39,     5,     0,     0,
       9,    10,    12,    13,    15,    14,    22,    11,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,    67,    66,     0,    60,    72,    57,
      59,    63,     3,     1,     4,     6,     7,     8,    25,    23,
      54,     0,    33,    29,     0,    83,    84,    85,    86,   116,
     119,   121,   120,     0,     0,    81,    82,     0,     0,    80,
     108,   113,   118,     0,     0,     0,     0,     0,   101,     0,
      70,     0,    65,    61,     2,     0,    52,     0,     0,     0,
      36,     0,     0,     0,     0,   112,   117,    39,    79,     0,
       0,    78,     0,     0,     0,   100,     0,   100,   100,   100,
      72,    64,     0,    68,    58,    24,     0,     0,    51,    36,
       0,    32,    41,     0,    27,    28,    36,     0,   107,     0,
       0,    39,    87,    75,     0,   103,     0,   102,    77,   114,
     115,     0,     0,    99,   100,     0,     0,     0,     0,    62,
      71,     0,    45,    41,    34,    35,     0,     0,     0,    39,
     109,   111,   110,    39,    39,    74,     0,     0,   104,    39,
       0,     0,    39,    39,    39,    69,    53,     0,     0,    37,
       0,    26,    54,    55,    88,    76,   106,   105,    94,    98,
      39,    95,    96,    93,     0,     0,    38,     0,     0,     0,
      31,    40,     0,    73,     0,    92,     0,    43,    42,    44,
       0,    97,    54,    30,     0,     0,    50,     0,    46,     0,
       0,     0,    48,    47,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,   142,    18,    19,    20,    59,    21,    22,
     101,   135,    23,   100,   131,   132,   165,    24,   167,   187,
     209,   227,    97,    25,    26,    27,    49,    50,    28,    51,
      29,    89,    30,    77,    78,   143,    31,    32,   152,    33,
      90,   104,    80,    81,    82,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -185
static const yytype_int16 yypact[] =
{
     303,  -185,  -185,  -185,     6,    36,    50,    71,    86,    97,
      38,  -185,   170,  -185,   361,   172,   205,  -185,    95,   142,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,   150,   152,    20,   159,   165,    87,
    -185,   180,    53,   181,  -185,  -185,   188,  -185,    30,   183,
    -185,   128,   174,  -185,  -185,  -185,  -185,  -185,  -185,   184,
     133,   195,  -185,  -185,   185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,   117,   111,  -185,  -185,   189,    30,   129,
      62,  -185,  -185,   194,   199,    44,   200,   209,    76,    78,
      56,   204,   111,    56,  -185,   221,  -185,   137,   222,   220,
     157,    34,   232,   117,   230,   161,  -185,   332,    56,   198,
     266,    30,   226,   226,    30,   111,   239,   111,   111,   111,
      30,    30,    30,  -185,  -185,  -185,   157,   244,  -185,  -185,
     256,  -185,    17,   264,  -185,  -185,  -185,   234,  -185,   226,
     226,   361,  -185,   122,   117,    62,   117,    62,    56,  -185,
    -185,    82,   246,   259,   111,   261,   262,   267,   237,    56,
      56,   276,  -185,    17,  -185,  -185,   279,   -16,   280,    35,
    -185,    62,    62,   235,   332,  -185,   283,   287,  -185,   332,
     111,   288,   332,   332,   332,  -185,  -185,   254,    45,  -185,
     292,  -185,   133,  -185,  -185,   313,  -185,  -185,  -185,   282,
     332,  -185,  -185,  -185,   301,    -5,  -185,   295,   298,   299,
    -185,  -185,   249,  -185,   111,  -185,   306,  -185,  -185,  -185,
     300,  -185,   133,  -185,   286,   314,  -185,   273,  -185,   311,
     315,   316,  -185,  -185,  -185
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,   -11,     1,  -185,  -181,   -98,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -105,  -185,  -127,   190,  -185,
     124,  -185,  -184,  -185,  -185,  -185,  -185,   263,  -185,   268,
    -185,   240,  -185,  -185,   278,   -81,  -185,  -185,   -91,  -185,
     -26,   -89,   -66,    52,   -70,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -40
static const yytype_int16 yytable[] =
{
      83,    17,   130,    52,   106,   166,   207,   105,   212,    83,
     190,    43,    83,    79,   137,    17,   191,    55,    44,    45,
      46,    98,   106,     4,   163,    93,   155,   156,   157,    61,
      48,   169,    35,     1,     2,     3,   166,   105,   224,    83,
     133,     4,   166,   145,   147,   153,   229,   153,   153,   153,
     -39,    62,   108,    55,    41,   176,    69,   177,    70,    71,
      72,   116,    36,   181,    42,    73,   134,   193,    74,    85,
      86,   190,    83,   171,   172,    83,    37,   210,   105,   117,
     105,    83,    83,    83,   153,   148,    38,   161,   151,   208,
       1,     2,     3,   195,   109,   159,   160,   110,   198,    44,
      45,   201,   202,   203,   112,   113,    65,    66,    67,    68,
     199,   120,   122,    69,   123,    70,    71,    72,   178,   215,
     109,    39,    73,   110,    40,    74,    75,    76,    56,   230,
     173,     1,     2,     3,   174,   175,     1,     2,     3,    70,
      71,    72,    17,    69,   221,    70,    71,    72,    65,    66,
      67,    68,   103,    98,    69,    74,    70,    71,    72,    96,
       1,     2,     3,    73,   149,   150,    92,   109,    75,    76,
     110,   126,    53,   127,    55,    57,    58,     1,     2,     3,
       4,     5,     6,    98,     7,     8,    43,    60,     9,    10,
      63,    64,    11,    44,    45,    46,    47,    84,    87,   139,
      12,    13,   140,   112,   113,    48,    94,   -39,     1,     2,
       3,     4,     5,     6,    88,     7,     8,    91,    95,     9,
      10,    99,   102,    11,    69,   107,    70,    71,    72,   114,
      47,    12,    13,   144,   115,   118,    74,    54,     1,     2,
       3,     4,     5,     6,   119,     7,     8,   125,   128,     9,
      10,   129,    69,    11,    70,    71,    72,     1,     2,     3,
     204,    12,    13,   136,    74,     8,   138,   194,     9,    10,
     170,   122,    11,   185,   154,   162,     1,     2,     3,   204,
     205,    13,   179,   126,     8,   220,   206,     9,    10,   164,
     168,    11,    69,   180,    70,    71,    72,   182,   183,   205,
      13,   146,   186,   184,    74,   228,     1,     2,     3,     4,
       5,     6,   189,     7,     8,   192,   214,     9,    10,   196,
     126,    11,   225,   197,   200,   211,   213,   216,   217,    12,
      13,   218,   219,   223,    14,     1,     2,     3,     4,     5,
       6,   222,     7,     8,   232,   226,     9,    10,   233,   234,
      11,   231,     0,   188,   124,     0,   121,   111,    12,    13,
     158,     0,     0,   141,     1,     2,     3,     4,     5,     6,
       0,     7,     8,     0,     0,     9,    10,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
      39,     0,   100,    14,    74,   132,   187,    73,   192,    48,
      26,    16,    51,    39,   103,    14,    32,    16,    23,    24,
      25,    60,    92,     6,   129,    51,   117,   118,   119,     9,
      35,   136,    26,     3,     4,     5,   163,   103,   222,    78,
       6,     6,   169,   109,   110,   115,   227,   117,   118,   119,
      33,    31,    78,    52,    16,   144,    26,   146,    28,    29,
      30,    17,    26,   154,    26,    35,    32,    32,    38,    16,
      17,    26,   111,   139,   140,   114,    26,    32,   144,    35,
     146,   120,   121,   122,   154,   111,    15,   126,   114,   187,
       3,     4,     5,   174,    38,   121,   122,    41,   179,    23,
      24,   182,   183,   184,    42,    43,    19,    20,    21,    22,
     180,    35,    34,    26,    36,    28,    29,    30,    36,   200,
      38,    35,    35,    41,    27,    38,    39,    40,    33,   227,
     141,     3,     4,     5,    12,    13,     3,     4,     5,    28,
      29,    30,   141,    26,   214,    28,    29,    30,    19,    20,
      21,    22,    35,   192,    26,    38,    28,    29,    30,    26,
       3,     4,     5,    35,   112,   113,    38,    38,    39,    40,
      41,    34,     0,    36,   173,    33,    26,     3,     4,     5,
       6,     7,     8,   222,    10,    11,    16,    35,    14,    15,
      31,    26,    18,    23,    24,    25,    26,    17,    17,    38,
      26,    27,    41,    42,    43,    35,    32,    33,     3,     4,
       5,     6,     7,     8,    26,    10,    11,    34,    34,    14,
      15,    26,    37,    18,    26,    36,    28,    29,    30,    35,
      26,    26,    27,    35,    35,    35,    38,    32,     3,     4,
       5,     6,     7,     8,    35,    10,    11,    26,    26,    14,
      15,    31,    26,    18,    28,    29,    30,     3,     4,     5,
       6,    26,    27,    31,    38,    11,    36,    32,    14,    15,
      36,    34,    18,    36,    35,    31,     3,     4,     5,     6,
      26,    27,    36,    34,    11,    36,    32,    14,    15,    33,
      26,    18,    26,    34,    28,    29,    30,    36,    36,    26,
      27,    35,    26,    36,    38,    32,     3,     4,     5,     6,
       7,     8,    33,    10,    11,    35,    34,    14,    15,    36,
      34,    18,    36,    36,    36,    33,    13,    26,    33,    26,
      27,    33,    33,    33,    31,     3,     4,     5,     6,     7,
       8,    35,    10,    11,    33,    31,    14,    15,    33,    33,
      18,   227,    -1,   163,    91,    -1,    88,    79,    26,    27,
     120,    -1,    -1,    31,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    14,
      15,    18,    26,    27,    31,    45,    46,    47,    48,    49,
      50,    52,    53,    56,    61,    67,    68,    69,    72,    74,
      76,    80,    81,    83,    89,    26,    26,    26,    15,    35,
      27,    16,    26,    16,    23,    24,    25,    26,    35,    70,
      71,    73,    46,     0,    32,    47,    33,    33,    26,    51,
      35,     9,    31,    31,    26,    19,    20,    21,    22,    26,
      28,    29,    30,    35,    38,    39,    40,    77,    78,    84,
      86,    87,    88,    89,    17,    16,    17,    17,    26,    75,
      84,    34,    38,    84,    32,    34,    26,    66,    89,    26,
      57,    54,    37,    35,    85,    86,    88,    36,    84,    38,
      41,    78,    42,    43,    35,    35,    17,    35,    35,    35,
      35,    73,    34,    36,    71,    26,    34,    36,    26,    31,
      50,    58,    59,     6,    32,    55,    31,    85,    36,    38,
      41,    31,    47,    79,    35,    86,    35,    86,    84,    87,
      87,    84,    82,    88,    35,    82,    82,    82,    75,    84,
      84,    89,    31,    59,    33,    60,    61,    62,    26,    59,
      36,    86,    86,    46,    12,    13,    85,    85,    36,    36,
      34,    82,    36,    36,    36,    36,    26,    63,    62,    33,
      26,    32,    35,    32,    32,    79,    36,    36,    79,    88,
      36,    79,    79,    79,     6,    26,    32,    49,    50,    64,
      32,    33,    66,    13,    34,    79,    26,    33,    33,    33,
      36,    88,    35,    33,    66,    36,    31,    65,    32,    49,
      50,    64,    33,    33,    33
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
        case 3:

/* Line 1455 of yacc.c  */
#line 28 "gramatica.ypp"
    { Logger::logError("Se esperaba llave como fin del programa") ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 29 "gramatica.ypp"
    { Logger::logError("Se esperaba llave como inicion del programa") ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 40 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de variables") ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 66 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase") ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 69 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz") ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 76 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz") ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 79 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz") ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 86 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase") ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 93 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo") ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 96 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion") ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 100 "gramatica.ypp"
    { Logger::infoMsg("Herencia por composicion") ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 110 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion local") ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 115 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales") ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 120 "gramatica.ypp"
    { Logger::logError("Falta el tipo del argumento") ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 121 "gramatica.ypp"
    { Logger::logError("Solo se permite un parametro en declaracion de funcion") ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 125 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos") ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 141 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple") ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 142 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo") ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 143 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 144 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 145 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 152 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion") ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 153 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo") ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 157 "gramatica.ypp"
    { Logger::logError("Solo se permite un argumento en invocacion de funcion") ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 161 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa") ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 162 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE") ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 163 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 164 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 167 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control") ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 168 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado derecho de comparacion") ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 169 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado izquierdo de comparacion") ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 170 "gramatica.ypp"
    { Logger::logError("Se esperaba un operador de comparacion") ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 185 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT") ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 186 "gramatica.ypp"
    { Logger::logError("Se esperaba cadena para imprimir") ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 187 "gramatica.ypp"
    { Logger::logError("Falta sentencia PRINT") ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 190 "gramatica.ypp"
    { Logger::infoMsg("Sentencia FOR") ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 191 "gramatica.ypp"
    { Logger::logError("Falta sentencia FOR") ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 192 "gramatica.ypp"
    { Logger::logError("Se esperaba una variable") ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 193 "gramatica.ypp"
    { Logger::logError("Falta sentencia RANGE") ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 194 "gramatica.ypp"
    { Logger::logError("Falta sentencia IN") ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 198 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 2 encontrados") ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 199 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 1 encontrados") ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 200 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, ninguno encontrado") ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 203 "gramatica.ypp"
    { Logger::infoMsg("Acceso a atributo") ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 208 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida") ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 215 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida") ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 223 "gramatica.ypp"
    { SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string)) ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 227 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(2) - (2)].string)) ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 231 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = CTE_SHORT; ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 232 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = CTE_DOUBLE; ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 233 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = CTE_UINT; ;}
    break;



/* Line 1455 of yacc.c  */
#line 1965 "gramatica.tab.cpp"
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



