
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

#include "SyntacticActions.h"
#include "gramatica.tab.hpp"
#include "../IntermediateCodeGenerator/IntermediateCodeGenerator.h"


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
#line 10 "gramatica.ypp"

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

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
      35,    36,    42,    41,    33,    38,    30,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    34,
      39,    29,    40,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    18,    21,    24,
      26,    28,    30,    32,    34,    36,    38,    40,    42,    44,
      46,    48,    50,    53,    56,    60,    62,    66,    69,    72,
      80,    88,    89,    92,    97,   100,   101,   107,   112,   119,
     123,   124,   127,   128,   131,   137,   140,   148,   151,   152,
     156,   160,   164,   165,   173,   177,   181,   185,   186,   189,
     191,   196,   197,   201,   205,   208,   214,   219,   221,   225,
     231,   234,   239,   243,   245,   247,   252,   259,   261,   265,
     266,   275,   282,   288,   296,   298,   300,   304,   307,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   330,   333,
     335,   337,   343,   348,   353,   358,   362,   366,   370,   374,
     380,   387,   391,   393,   394,   398,   402,   407,   413,   419,
     423,   425,   429,   433,   437,   439,   441,   445,   449,   451,
     454,   456,   458,   460,   462,   464,   466
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    31,    46,    -1,
      46,    32,    -1,    47,    -1,    46,    47,    -1,    48,    33,
      -1,    49,    33,    -1,    50,    -1,    54,    -1,    52,    -1,
      57,    -1,    61,    -1,    74,    -1,    66,    -1,    76,    -1,
      78,    -1,    80,    -1,    86,    -1,    87,    -1,    75,    -1,
      95,    51,    -1,     1,    51,    -1,    51,    34,    24,    -1,
      24,    -1,    24,     1,    33,    -1,    24,    51,    -1,     7,
      24,    -1,    53,    31,    55,    62,    63,    67,    32,    -1,
      53,    31,    62,    63,    67,    32,    33,    -1,    -1,     8,
      24,    -1,    56,    31,    58,    32,    -1,    58,    59,    -1,
      -1,    65,    35,    71,    36,    33,    -1,     7,    24,     9,
      24,    -1,    60,    31,    62,    63,    67,    32,    -1,    62,
      50,    33,    -1,    -1,    63,    64,    -1,    -1,    66,    33,
      -1,    65,    35,    71,    36,    33,    -1,     6,    24,    -1,
      65,    35,    71,    36,    31,    68,    32,    -1,    24,    33,
      -1,    -1,    68,    50,    33,    -1,    68,    49,    33,    -1,
      68,    69,    33,    -1,    -1,    65,    35,    71,    36,    31,
      70,    32,    -1,    70,    50,    33,    -1,    70,    49,    33,
      -1,    70,    69,    33,    -1,    -1,    95,    24,    -1,    24,
      -1,    71,    34,    95,    24,    -1,    -1,    10,    15,    24,
      -1,    73,    66,    33,    -1,    66,    33,    -1,    72,    37,
      31,    73,    32,    -1,    72,    37,    31,    32,    -1,    18,
      -1,    24,    77,    90,    -1,    24,    30,    24,    77,    90,
      -1,    24,    77,    -1,    24,    30,    24,    77,    -1,    24,
      77,    38,    -1,    29,    -1,    23,    -1,    24,    35,    79,
      36,    -1,    24,    30,    24,    35,    79,    36,    -1,    90,
      -1,    79,    34,    90,    -1,    -1,    11,    35,    83,    36,
      81,    12,    82,    13,    -1,    11,    35,    83,    36,    81,
      13,    -1,    11,    35,    83,    36,    81,    -1,    11,    35,
      83,    36,    81,    12,    82,    -1,    85,    -1,    85,    -1,
      90,    84,    90,    -1,    90,    84,    -1,    84,    90,    -1,
      90,    -1,    39,    -1,    40,    -1,    19,    -1,    20,    -1,
      21,    -1,    22,    -1,    47,    -1,    31,    46,    32,    -1,
      14,    25,    -1,    14,    -1,    25,    -1,    88,    35,    89,
      36,    85,    -1,    88,    35,    89,    85,    -1,    88,    89,
      36,    85,    -1,    15,    24,    16,    17,    -1,    24,    16,
      17,    -1,    15,    16,    17,    -1,    15,    24,    16,    -1,
      15,    24,    17,    -1,    94,    34,    94,    34,    94,    -1,
      94,    34,    94,    34,    38,    94,    -1,    94,    34,    94,
      -1,    94,    -1,    -1,    90,    41,    92,    -1,    90,    38,
      92,    -1,    95,    35,    90,    36,    -1,    90,    41,    35,
      91,    36,    -1,    90,    38,    35,    91,    36,    -1,    35,
      91,    36,    -1,    92,    -1,    35,    91,    36,    -1,    92,
      41,    92,    -1,    92,    38,    92,    -1,    92,    -1,    93,
      -1,    92,    42,    93,    -1,    92,    43,    93,    -1,    24,
      -1,    38,    94,    -1,    94,    -1,    26,    -1,    28,    -1,
      27,    -1,     3,    -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    30,    33,    34,    37,    38,    41,
      42,    43,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    56,    59,    61,    64,    71,    78,    81,    91,   102,
     107,   109,   112,   122,   126,   127,   130,   135,   147,   157,
     158,   161,   162,   165,   166,   178,   190,   197,   198,   201,
     202,   203,   204,   207,   213,   214,   215,   217,   220,   225,
     226,   227,   230,   239,   240,   243,   246,   249,   252,   254,
     259,   260,   261,   264,   270,   279,   281,   288,   289,   291,
     295,   297,   299,   300,   303,   309,   312,   316,   317,   318,
     321,   327,   333,   340,   347,   354,   363,   364,   367,   369,
     370,   373,   378,   384,   392,   400,   410,   411,   421,   433,
     439,   448,   449,   450,   454,   459,   464,   465,   469,   473,
     474,   477,   478,   484,   490,   493,   494,   498,   513,   514,
     522,   530,   531,   532,   535,   536,   537
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
  "EQUAL", "NOT_EQUAL", "PLUS_EQUAL", "ID", "STRING", "CTE_SHORT",
  "CTE_UINT", "CTE_DOUBLE", "'='", "'.'", "'{'", "'}'", "','", "';'",
  "'('", "')'", "':'", "'-'", "'<'", "'>'", "'+'", "'*'", "'/'", "$accept",
  "programa", "sentencias", "sentencia", "declarativa", "ejecutable",
  "declaracion_variables", "lista_variables", "objeto_declaration",
  "encabezado_clase", "clase_declaration", "nested_class_declaration",
  "encabezado_interfaz", "interface_declaration", "interface_metodos",
  "interface_metodo_declaration", "encabezado_implement",
  "implement_declaration", "atributos", "metodos_clase",
  "metodo_declaration", "encabezado_funcion", "funcion_declaration",
  "herencia_composicion", "sentencias_metodo",
  "local_function_declaration", "sentencias_funcion_local", "parametro",
  "distributed_header", "distributed_methods",
  "distributed_method_implementation", "retorno", "asignacion",
  "asignador", "invocacion", "argumentos", "seleccion", "bloque_if",
  "bloque_else", "condicion", "comparador", "bloque_sentencias", "print",
  "bucle_for", "encabezado_for", "argumento_bucle_for", "expresion",
  "expresion_parentesis", "termino", "factor", "constante", "tipo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    61,
      46,   123,   125,    44,    59,    40,    41,    58,    45,    60,
      62,    43,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    45,    46,    46,    47,    47,    48,
      48,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    51,    52,    53,    54,
      55,    55,    56,    57,    58,    58,    59,    60,    61,    62,
      62,    63,    63,    64,    64,    65,    66,    67,    67,    68,
      68,    68,    68,    69,    70,    70,    70,    70,    71,    71,
      71,    71,    72,    73,    73,    74,    74,    75,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    81,    82,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      86,    87,    87,    87,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    92,    93,    93,
      93,    94,    94,    94,    95,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     3,     2,     2,     7,
       7,     0,     2,     4,     2,     0,     5,     4,     6,     3,
       0,     2,     0,     2,     5,     2,     7,     2,     0,     3,
       3,     3,     0,     7,     3,     3,     3,     0,     2,     1,
       4,     0,     3,     3,     2,     5,     4,     1,     3,     5,
       2,     4,     3,     1,     1,     4,     6,     1,     3,     0,
       8,     6,     5,     7,     1,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     5,     4,     4,     4,     3,     3,     3,     3,     5,
       6,     3,     1,     0,     3,     3,     4,     5,     5,     3,
       1,     3,     3,     3,     1,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   134,   135,   136,     0,     0,     0,     0,     0,
      99,     0,    67,     0,   100,     0,     0,     0,     5,     0,
       0,     9,    11,     0,    10,     0,    12,     0,    13,     0,
      15,     0,    14,    21,    16,    17,    18,    19,    20,   113,
       0,     0,    23,    45,    28,    32,     0,     0,    98,     0,
       0,     0,    74,    73,     0,    79,    27,    70,     0,     1,
       4,     6,     7,     8,    31,    35,    40,    61,     0,   131,
     133,   132,   113,     0,   112,    22,     0,     0,     0,    62,
      92,    93,    94,    95,   128,     0,     0,    90,    91,     0,
       0,    89,   120,   125,   130,     0,   106,   107,   108,   105,
       0,     0,    77,    72,    68,     2,     0,     0,    40,     0,
       0,    59,     0,     0,     0,     0,     0,     0,    26,    24,
      37,     0,     0,   124,   129,     0,    88,     0,     0,    87,
       0,     0,     0,   104,    79,    71,     0,    75,    28,    40,
       0,    33,    34,     0,     0,    48,     0,     0,    58,    66,
       0,     0,     0,     0,    96,   102,   103,   111,     0,   119,
       0,     0,    82,    84,     0,   115,     0,   114,    86,   126,
     127,     0,     0,    69,    78,     0,    48,    61,    39,     0,
      41,     0,     0,     0,     0,    52,    64,    65,     0,     0,
     101,     0,   121,   123,   122,     0,    81,     0,     0,   116,
      76,    48,     0,     0,    47,    61,    43,    38,    60,     0,
      63,    97,     0,   109,    83,    85,   118,   117,     0,    29,
       0,     0,     0,    46,     0,     0,     0,     0,   110,    80,
       0,    36,     0,    50,    49,    61,    51,    30,    44,     0,
       0,    57,     0,    53,     0,     0,     0,    55,    54,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,   154,    19,    20,    21,    42,    22,    23,
      24,   108,    25,    26,   109,   142,    27,    28,   110,   145,
     180,    29,    30,   183,   209,   227,   242,   112,    31,   151,
      32,    33,    34,    57,    35,   101,    36,   162,   214,    89,
      90,   155,    37,    38,    39,    73,   102,   122,    92,    93,
      94,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -191
static const yytype_int16 yypact[] =
{
     348,    40,  -191,  -191,  -191,    79,    83,    90,   104,    95,
     113,     8,  -191,   219,  -191,   406,   143,   256,  -191,   115,
     137,  -191,  -191,   142,  -191,   160,  -191,   171,  -191,   174,
    -191,   176,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   128,
      40,    13,   204,  -191,   202,  -191,   215,   107,  -191,   229,
     167,   235,  -191,  -191,   231,   177,   204,   190,   226,  -191,
    -191,  -191,  -191,  -191,   246,  -191,  -191,   117,   225,  -191,
    -191,  -191,    97,   232,   239,   204,   236,   251,   252,  -191,
    -191,  -191,  -191,  -191,  -191,    50,    97,  -191,  -191,   241,
     177,   407,   135,  -191,  -191,   247,  -191,   266,  -191,  -191,
      -2,    -8,    21,    97,    21,  -191,   261,   255,  -191,     3,
     112,  -191,    34,   271,    23,   161,   377,    97,  -191,  -191,
    -191,    50,   262,   181,  -191,   377,    21,   172,   414,   177,
     427,   427,   177,  -191,   177,   177,   177,  -191,  -191,  -191,
     112,  -191,  -191,   264,   269,    32,   154,   278,  -191,  -191,
     279,    25,   406,   377,  -191,  -191,  -191,   280,   289,  -191,
     427,   427,   208,  -191,    50,   135,    50,   135,    21,  -191,
    -191,    45,    39,    21,    21,   112,    32,   117,  -191,   282,
    -191,   293,   297,   299,   311,  -191,  -191,  -191,   304,   286,
    -191,   123,  -191,   135,   135,   377,  -191,   303,   305,  -191,
    -191,    32,   306,    46,  -191,   117,  -191,  -191,  -191,   302,
    -191,  -191,    97,  -191,   327,  -191,  -191,  -191,   312,  -191,
     313,    64,   249,  -191,   314,   315,   310,   324,  -191,  -191,
     328,  -191,   175,  -191,  -191,   117,  -191,  -191,  -191,   211,
     329,  -191,   318,  -191,   331,   332,   334,  -191,  -191,  -191
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,   -12,     0,  -191,  -190,  -103,    10,  -191,   307,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   -95,  -132,
    -191,  -105,  -109,  -135,  -191,   126,  -191,  -166,  -191,  -191,
    -191,  -191,  -191,   270,  -191,   240,  -191,  -191,  -191,  -191,
     284,  -100,  -191,  -191,  -191,   317,   -27,  -115,   -67,    57,
     -38,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
      18,    74,    95,    58,   143,   150,   158,   144,   176,     5,
      95,   203,    95,   140,    76,    18,   156,    61,   123,   224,
      91,    52,   113,    56,    49,   163,   136,    53,   137,     5,
     104,     5,    50,   134,    74,   141,   182,   144,     5,   221,
     181,   202,   188,   201,   175,    95,   -25,   -25,   124,   197,
      75,   198,   244,   190,   123,   149,   179,   187,    61,   127,
     165,   167,   128,   126,    41,   124,   218,   182,   146,   239,
     147,   181,   144,   136,    84,   200,    69,    70,    71,   157,
     146,   199,   220,   127,    95,   121,   128,    95,    86,    95,
      95,    95,   182,   193,   194,   215,   181,   123,   146,   123,
     232,   184,   168,    43,   226,   171,   225,    44,   173,   174,
       2,     3,     4,     1,    45,     2,     3,     4,   -42,    46,
       2,     3,     4,    69,    70,    71,    80,    81,    82,    83,
      47,    84,   113,    69,    70,    71,   -42,   226,    48,   245,
     189,   111,    85,    59,   -42,    86,    87,    88,    62,    69,
      70,    71,    18,   213,    69,    70,    71,     2,     3,     4,
     113,   212,     1,    72,     2,     3,     4,     5,     6,     7,
      63,     8,     9,    64,   228,    10,    11,   130,   131,    12,
       2,     3,     4,    97,    98,    13,    14,   169,   170,    61,
     113,    65,   152,     2,     3,     4,    84,   153,    69,    70,
      71,    84,    66,    69,    70,    71,   185,   164,   238,    67,
      86,    78,    85,    68,    84,    86,    69,    70,    71,   160,
     195,   196,   161,   130,   131,    85,    -3,     1,   103,     2,
       3,     4,     5,     6,     7,    51,     8,     9,    77,    79,
      10,    11,    52,    41,    12,   146,    96,   240,    53,    54,
      13,    14,    99,   106,    55,   100,   114,     1,   105,     2,
       3,     4,     5,     6,     7,    51,     8,     9,   116,   118,
      10,    11,    52,   117,    12,   119,   120,   125,    53,    54,
      13,    14,   132,   133,    55,   138,   139,     1,    60,     2,
       3,     4,     5,     6,     7,   148,     8,     9,   159,   177,
      10,    11,   178,     1,    12,     2,     3,     4,     5,   185,
      13,    14,   186,     9,   191,   204,    10,    11,   211,     1,
      12,     2,     3,     4,     5,   192,   222,    14,   205,     9,
     206,   207,    10,    11,   223,   208,    12,   210,   219,   216,
     229,   217,   222,    14,   230,   235,   231,   233,   234,     1,
     243,     2,     3,     4,     5,     6,     7,   236,     8,     9,
     241,   237,    10,    11,   247,   248,    12,   249,   246,     0,
     135,   107,    13,    14,   172,   129,     0,     0,     1,    15,
       2,     3,     4,     5,     6,     7,     0,     8,     9,   115,
       0,    10,    11,     0,     0,    12,     0,     0,     0,     0,
       0,    13,    14,     0,     0,     0,     0,     1,   152,     2,
       3,     4,     5,     6,     7,     0,     8,     9,     0,     0,
      10,    11,     0,     0,    12,     0,    80,    81,    82,    83,
      13,    14,     0,     0,     0,     0,     0,     0,    84,     0,
      69,    70,    71,     0,     0,   127,    87,    88,   128,   166,
       0,    84,    86,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86
};

static const yytype_int16 yycheck[] =
{
       0,    39,    47,    15,   109,   114,   121,   110,   140,     6,
      55,   177,    57,   108,     1,    15,   116,    17,    85,   209,
      47,    23,    67,    13,    16,   125,    34,    29,    36,     6,
      57,     6,    24,    35,    72,    32,   145,   140,     6,   205,
     145,   176,   151,   175,   139,    90,    33,    34,    86,   164,
      40,   166,   242,   153,   121,    32,    24,    32,    58,    38,
     127,   128,    41,    90,    24,   103,   201,   176,    34,   235,
      36,   176,   175,    34,    24,    36,    26,    27,    28,   117,
      34,    36,    36,    38,   129,    35,    41,   132,    38,   134,
     135,   136,   201,   160,   161,   195,   201,   164,    34,   166,
      36,   146,   129,    24,   209,   132,   209,    24,   135,   136,
       3,     4,     5,     1,    24,     3,     4,     5,     6,    15,
       3,     4,     5,    26,    27,    28,    19,    20,    21,    22,
      35,    24,   177,    26,    27,    28,    24,   242,    25,   242,
     152,    24,    35,     0,    32,    38,    39,    40,    33,    26,
      27,    28,   152,   191,    26,    27,    28,     3,     4,     5,
     205,    38,     1,    35,     3,     4,     5,     6,     7,     8,
      33,    10,    11,    31,   212,    14,    15,    42,    43,    18,
       3,     4,     5,    16,    17,    24,    25,   130,   131,   189,
     235,    31,    31,     3,     4,     5,    24,    36,    26,    27,
      28,    24,    31,    26,    27,    28,    31,    35,    33,    35,
      38,     9,    35,    37,    24,    38,    26,    27,    28,    38,
      12,    13,    41,    42,    43,    35,     0,     1,    38,     3,
       4,     5,     6,     7,     8,    16,    10,    11,    34,    24,
      14,    15,    23,    24,    18,    34,    17,    36,    29,    30,
      24,    25,    17,     7,    35,    24,    31,     1,    32,     3,
       4,     5,     6,     7,     8,    16,    10,    11,    36,    33,
      14,    15,    23,    34,    18,    24,    24,    36,    29,    30,
      24,    25,    35,    17,    35,    24,    31,     1,    32,     3,
       4,     5,     6,     7,     8,    24,    10,    11,    36,    35,
      14,    15,    33,     1,    18,     3,     4,     5,     6,    31,
      24,    25,    33,    11,    34,    33,    14,    15,    32,     1,
      18,     3,     4,     5,     6,    36,    24,    25,    35,    11,
      33,    32,    14,    15,    32,    24,    18,    33,    32,    36,
      13,    36,    24,    25,    32,    35,    33,    33,    33,     1,
      32,     3,     4,     5,     6,     7,     8,    33,    10,    11,
      31,    33,    14,    15,    33,    33,    18,    33,   242,    -1,
     100,    64,    24,    25,   134,    91,    -1,    -1,     1,    31,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    72,
      -1,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,    -1,     1,    31,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    -1,    -1,    18,    -1,    19,    20,    21,    22,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      26,    27,    28,    -1,    -1,    38,    39,    40,    41,    35,
      -1,    24,    38,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      14,    15,    18,    24,    25,    31,    45,    46,    47,    48,
      49,    50,    52,    53,    54,    56,    57,    60,    61,    65,
      66,    72,    74,    75,    76,    78,    80,    86,    87,    88,
      95,    24,    51,    24,    24,    24,    15,    35,    25,    16,
      24,    16,    23,    29,    30,    35,    51,    77,    46,     0,
      32,    47,    33,    33,    31,    31,    31,    35,    37,    26,
      27,    28,    35,    89,    94,    51,     1,    34,     9,    24,
      19,    20,    21,    22,    24,    35,    38,    39,    40,    83,
      84,    90,    92,    93,    94,    95,    17,    16,    17,    17,
      24,    79,    90,    38,    90,    32,     7,    53,    55,    58,
      62,    24,    71,    95,    31,    89,    36,    34,    33,    24,
      24,    35,    91,    92,    94,    36,    90,    38,    41,    84,
      42,    43,    35,    17,    35,    77,    34,    36,    24,    31,
      62,    32,    59,    65,    50,    63,    34,    36,    24,    32,
      66,    73,    31,    36,    47,    85,    85,    94,    91,    36,
      38,    41,    81,    85,    35,    92,    35,    92,    90,    93,
      93,    90,    79,    90,    90,    62,    63,    35,    33,    24,
      64,    65,    66,    67,    95,    31,    33,    32,    66,    46,
      85,    34,    36,    92,    92,    12,    13,    91,    91,    36,
      36,    63,    67,    71,    33,    35,    33,    32,    24,    68,
      33,    32,    38,    94,    82,    85,    36,    36,    67,    32,
      36,    71,    24,    32,    49,    50,    65,    69,    94,    13,
      32,    33,    36,    33,    33,    35,    33,    33,    33,    71,
      36,    31,    70,    32,    49,    50,    69,    33,    33,    33
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
#line 29 "gramatica.ypp"
    { Logger::logError("Se esperaba llave como fin del programa") ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 30 "gramatica.ypp"
    { Logger::logError("Se esperaba llave como inicion del programa") ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 56 "gramatica.ypp"
    { if(SyntacticActions::checkReturnScope()) IntermediateCodeGenerator::returnStatement(); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 59 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de variables");
                                                        SyntacticActions::emptyObjects(true); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 61 "gramatica.ypp"
    { Logger::logError("Falta especificar el tipo de las variables") ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 64 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(3) - (3)].string))){
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(3) - (3)].string));
                                                        SyntacticActions::setIdType((yyvsp[(3) - (3)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(3) - (3)].string), "variable");
                                                        SyntacticActions::addObject((yyvsp[(3) - (3)].string));
                                                }
                                        ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 71 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(1) - (1)].string))){
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (1)].string));
                                                        SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable");
                                                        SyntacticActions::addObject((yyvsp[(1) - (1)].string));
                                                }
                                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 78 "gramatica.ypp"
    { Logger::logError("declaracion de variables invalida") ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 81 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(1) - (2)].string))) {
                                                        SyntacticActions::lastType = (yyvsp[(1) - (2)].string);
                                                        SyntacticActions::addClassToObjects((yyvsp[(1) - (2)].string));
                                                        Logger::infoMsg("Declaracion de objeto");
                                                } else {
                                                        SyntacticActions::emptyObjects(true);
                                                }
                                                ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 91 "gramatica.ypp"
    {
                                        if (SyntacticActions::checkRedeclaration((yyvsp[(2) - (2)].string))) {
                                                IntermediateCodeGenerator::isInvalidScope = true;
                                        } else {
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-clase");
                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                        }
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 103 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase");
                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 107 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase local");
                                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 112 "gramatica.ypp"
    { if (SyntacticActions::checkRedeclaration((yyvsp[(2) - (2)].string))) {
                                                        IntermediateCodeGenerator::isInvalidScope = true;
                                                } else {
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-interfaz");
                                                        IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                                }
                                                ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 122 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz");
                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 130 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz");
                                                                                SyntacticActions::addParamToMethod((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 135 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(4) - (4)].string))){
                                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                                                SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "nombre-clase");
                                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (4)].string));
                                                                SyntacticActions::addClassComposition((yyvsp[(4) - (4)].string));
                                                                (yyval.string) = (yyvsp[(4) - (4)].string);
                                                        }else{
                                                                IntermediateCodeGenerator::isInvalidScope = true;
                                                        }
                                                        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 148 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz");
                                SyntacticActions::removeClassComposition((yyvsp[(5) - (6)].string));
                                if(!IntermediateCodeGenerator::isInvalidScope && !SyntacticActions::classImplementsInterfaceMethods((yyvsp[(1) - (6)].string))){
                                        IntermediateCodeGenerator::isInvalidScope = true;
                                }
                                IntermediateCodeGenerator::onScopeFinished();
                        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 157 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase") ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 165 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo") ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 166 "gramatica.ypp"
    { Logger::infoMsg("Prototipo de metodo");
                                                                                if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        SyntacticActions::addParamToMethod((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                                                                                        IntermediateCodeGenerator::onScopeFinished();
                                                                                        SyntacticActions::setIdUse((yyvsp[(1) - (5)].string), "prototipo-metodo");
                                                                                        IntermediateCodeGenerator::setCustomScope((yyvsp[(1) - (5)].string), "prototype");
                                                                                        // Deletes begin of function label
                                                                                        IntermediateCodeGenerator::removeTerceto(IntermediateCodeGenerator::lastTerceto);
                                                                                }
                                                                        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 178 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(2) - (2)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-funcion");
                                                IntermediateCodeGenerator::addLabelTerceto("inic_func", (yyvsp[(2) - (2)].string));
                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                                (yyval.string) = (yyvsp[(2) - (2)].string);
                                        }else{
                                                IntermediateCodeGenerator::isInvalidScope = true;
                                        }
                                ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 190 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion");
                                                                                        SyntacticActions::addParamToMethod((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].string));
                                                                                        IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string));
                                                                                        IntermediateCodeGenerator::addLabelTerceto("end_func", (yyvsp[(1) - (7)].string));
                                                                                        (yyval.string) = (yyvsp[(1) - (7)].string); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 197 "gramatica.ypp"
    { SyntacticActions::addClassComposition((yyvsp[(1) - (2)].string)); (yyval.string) = (yyvsp[(1) - (2)].string); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 198 "gramatica.ypp"
    { (yyval.string) = NULL; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 201 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 202 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 203 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 204 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 207 "gramatica.ypp"
    {      Logger::infoMsg("Declaracion de funcion local");
                                                                                                                SyntacticActions::addParamToMethod((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].string));
                                                                                                                IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string));
                                                                                                                IntermediateCodeGenerator::addLabelTerceto("end_func", (yyvsp[(1) - (7)].string)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 213 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 214 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 215 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales");
                                                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 217 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 220 "gramatica.ypp"
    { IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                SyntacticActions::setIdType((yyvsp[(2) - (2)].string));
                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "parametro");
                                (yyval.string) = (yyvsp[(2) - (2)].string);
                                ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 225 "gramatica.ypp"
    { Logger::logError("Falta el tipo del argumento") ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 226 "gramatica.ypp"
    { Logger::logError("Solo se permite un parametro en declaracion de funcion") ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 227 "gramatica.ypp"
    { (yyval.string) = NULL; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 230 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(3) - (3)].string))){
                                                IntermediateCodeGenerator::addScope((yyvsp[(3) - (3)].string));
                                                (yyval.string) = (yyvsp[(3) - (3)].string);
                                        } else{
                                                IntermediateCodeGenerator::isInvalidScope = true;
                                        }
                                        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 239 "gramatica.ypp"
    { IntermediateCodeGenerator::setCustomScope((yyvsp[(2) - (3)].string), "dist-implementation"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 240 "gramatica.ypp"
    { IntermediateCodeGenerator::setCustomScope((yyvsp[(1) - (2)].string), "dist-implementation"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 243 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos");
                                                                                                SyntacticActions::checkDistributedMethodImplementation((yyvsp[(1) - (5)].string));
                                                                                                IntermediateCodeGenerator::onScopeFinished(); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 246 "gramatica.ypp"
    { Logger::logError("Implementacion distrbuida de metodos vacia"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 252 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple");
                                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string)) && SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 254 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo");
                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (5)].string))) {
                                        SyntacticActions::checkHasMember((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), NULL, (yyvsp[(5) - (5)].string), (yyvsp[(4) - (5)].string));
                                }
                        ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 259 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 260 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 261 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 264 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '=';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 270 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '+';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                 ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 279 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion");
                                if(SyntacticActions::checkDeclaredMethod((yyvsp[(1) - (4)].string)) && SyntacticActions::checkParameters((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string))) IntermediateCodeGenerator::addTerceto("INVOKE", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 281 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo");
                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (6)].string))){
                                        SyntacticActions::checkHasMember((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string), NULL, NULL);
                                }
                        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 288 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 289 "gramatica.ypp"
    { Logger::logError("Solo se permite un argumento en invocacion de funcion");
                                                (yyval.string) = (yyvsp[(1) - (3)].string); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 291 "gramatica.ypp"
    { char *aux = (char*) malloc(1);
                        (yyval.string) = aux; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 295 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa");
                                                                                IntermediateCodeGenerator::ifElseExpression((yyvsp[(3) - (8)].string), (yyvsp[(5) - (8)].string), (yyvsp[(7) - (8)].string)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 297 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE");
                                                                        IntermediateCodeGenerator::ifExpression((yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 299 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 300 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 303 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("BI", "", "");
                                        IntermediateCodeGenerator::addStack(IntermediateCodeGenerator::lastTerceto);
                                        IntermediateCodeGenerator::addLabelTerceto();
                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 312 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control");
                                                                IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                                IntermediateCodeGenerator::endCondition();
                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 316 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado derecho de comparacion") ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 317 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado izquierdo de comparacion") ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 318 "gramatica.ypp"
    { Logger::logError("Se esperaba un operador de comparacion") ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 321 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '<';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 327 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '>';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 333 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '<';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 340 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '>';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 347 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '=';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 354 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '!';
                        aux[1] = '!';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 363 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 364 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 367 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT");
                        IntermediateCodeGenerator::addTerceto("PRINT", (yyvsp[(2) - (2)].string), ""); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 369 "gramatica.ypp"
    { Logger::logError("Se esperaba cadena para imprimir") ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 370 "gramatica.ypp"
    { Logger::logError("Falta sentencia PRINT") ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 373 "gramatica.ypp"
    { if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        IntermediateCodeGenerator::forBlock((yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string));
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 378 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 384 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 392 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (4)].string);
                                        IntermediateCodeGenerator::addScope("for");
                                        if(!SyntacticActions::checkRedeclaration((yyvsp[(2) - (4)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "variable");
                                                SyntacticActions::lastType = "short";
                                                SyntacticActions::setIdType((yyvsp[(2) - (4)].string)); }
                                        ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 400 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (3)].string);
                                        Logger::logWarning("Falta sentencia FOR");
                                        IntermediateCodeGenerator::addScope("for");
                                        if(!SyntacticActions::checkRedeclaration((yyvsp[(1) - (3)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(1) - (3)].string), "variable");
                                                SyntacticActions::lastType = "short";
                                                SyntacticActions::setIdType((yyvsp[(1) - (3)].string));
                                        }
                                        ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 410 "gramatica.ypp"
    { Logger::logError("Se esperaba una variable") ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 411 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string);
                                        Logger::logWarning("Falta sentencia RANGE");
                                        IntermediateCodeGenerator::addScope("for");
                                        if(!SyntacticActions::checkRedeclaration((yyvsp[(2) - (3)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (3)].string), "variable");
                                                SyntacticActions::lastType = "short";
                                                SyntacticActions::setIdType((yyvsp[(2) - (3)].string));
                                        }
                                        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 421 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string);
                                        Logger::logError("Falta sentencia IN");
                                        IntermediateCodeGenerator::addScope("for");
                                        if(!SyntacticActions::checkRedeclaration((yyvsp[(2) - (3)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (3)].string), "variable");
                                                SyntacticActions::lastType = "short";
                                                SyntacticActions::setIdType((yyvsp[(2) - (3)].string));
                                        }
                                        ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 433 "gramatica.ypp"
    { if(SyntacticActions::checkForArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string))){
                                                                        IntermediateCodeGenerator::forArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string));
                                                                } else {
                                                                        IntermediateCodeGenerator::isInvalidScope = true;
                                                                }
                                                                ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 439 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(6) - (6)].string));
                                                                        char *aux = (char*) malloc(sizeof((yyvsp[(6) - (6)].string)) + 2);
                                                                        sprintf(aux, "-%s", (yyvsp[(6) - (6)].string));
                                                                        if(SyntacticActions::checkForArguments((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string), aux)){
                                                                        IntermediateCodeGenerator::forArguments((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string), aux);
                                                                        } else {
                                                                                IntermediateCodeGenerator::isInvalidScope = true;
                                                                        }
                                                                        ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 448 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 2 encontrados") ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 449 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 1 encontrados") ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 450 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, ninguno encontrado") ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 454 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                        } 
                                        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 459 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                        }
                                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 464 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida") ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 465 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string))) {
                                                                IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); 
                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                                };}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 469 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string))) {
                                                                IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string));
                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                                }  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 473 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 474 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 477 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida") ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 478 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                        IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); 
                                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                } else {
                                                        (yyval.string) = NULL;
                                                }  ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 484 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                        IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); 
                                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                } else {
                                                        (yyval.string) = NULL;
                                                }  ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 493 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 494 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                        IntermediateCodeGenerator::addTerceto("*", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                }  ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 498 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                        SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string));
                                        IntermediateCodeGenerator::addTerceto("/", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); 
                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                        }  ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 513 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (1)].string))) (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 514 "gramatica.ypp"
    { if(SyntacticActions::addNegativeConstant((yyvsp[(2) - (2)].string))){
                                        char *aux = (char*) malloc(sizeof((yyvsp[(2) - (2)].string)) + 2);
                                        sprintf(aux, "-%s", (yyvsp[(2) - (2)].string));
                                        (yyval.string) = aux;        
                                        }else{
                                                (yyval.string) = NULL;
                                        }
                                ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 522 "gramatica.ypp"
    { if(SyntacticActions::checkLimits((yyvsp[(1) - (1)].string))){
                                        (yyval.string) = (yyvsp[(1) - (1)].string);
                                }else{
                                        (yyval.string) = NULL;
                                }
                                ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 530 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = "short"; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 531 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = "double"; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 532 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); SyntacticActions::lastType = "uint"; ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 535 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 536 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 537 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2664 "gramatica.tab.cpp"
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



