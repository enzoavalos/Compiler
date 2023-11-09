
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
#include "../IntermediateCodeGenerator/IntermediateCodeGenerator.h"


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
#line 11 "gramatica.ypp"

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   452

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  232

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
      46,    48,    50,    52,    55,    58,    62,    64,    68,    71,
      78,    81,    86,    89,    90,    93,    99,   104,   110,   113,
     114,   117,   120,   121,   124,   132,   133,   137,   138,   142,
     146,   150,   151,   159,   163,   167,   171,   172,   175,   177,
     182,   183,   191,   193,   196,   200,   202,   204,   208,   214,
     217,   222,   226,   228,   230,   235,   242,   244,   248,   249,
     258,   265,   271,   279,   281,   283,   287,   290,   293,   295,
     297,   299,   301,   303,   305,   307,   309,   313,   316,   318,
     320,   326,   331,   336,   341,   345,   349,   353,   357,   363,
     367,   369,   370,   374,   378,   382,   387,   393,   399,   403,
     405,   409,   413,   417,   419,   421,   425,   429,   431,   434,
     436,   438,   440,   442,   444,   446
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    31,    46,    -1,
      46,    32,    -1,    47,    -1,    46,    47,    -1,    48,    33,
      -1,    49,    33,    -1,    50,    -1,    53,    -1,    73,    -1,
      55,    -1,    60,    -1,    71,    -1,    65,    -1,    76,    -1,
      78,    -1,    80,    -1,    86,    -1,    87,    -1,    90,    -1,
      72,    -1,    96,    51,    -1,     1,    51,    -1,    51,    34,
      24,    -1,    24,    -1,    24,     1,    33,    -1,     7,    24,
      -1,    52,    31,    61,    63,    66,    32,    -1,     8,    24,
      -1,    54,    31,    56,    32,    -1,    56,    58,    -1,    -1,
       6,    24,    -1,    57,    35,    70,    36,    33,    -1,     7,
      24,     9,    24,    -1,    59,    31,    63,    66,    32,    -1,
      61,    62,    -1,    -1,    50,    33,    -1,    63,    64,    -1,
      -1,    65,    33,    -1,    57,    35,    70,    36,    31,    67,
      32,    -1,    -1,    66,    24,    33,    -1,    -1,    67,    50,
      33,    -1,    67,    49,    33,    -1,    67,    68,    33,    -1,
      -1,    57,    35,    70,    36,    31,    69,    32,    -1,    69,
      50,    33,    -1,    69,    49,    33,    -1,    69,    68,    33,
      -1,    -1,    96,    24,    -1,    24,    -1,    70,    34,    96,
      24,    -1,    -1,    10,    15,    24,    37,    31,    63,    32,
      -1,    18,    -1,    24,    74,    -1,    74,    34,    75,    -1,
      75,    -1,    24,    -1,    24,    77,    91,    -1,    24,    30,
      24,    77,    91,    -1,    24,    77,    -1,    24,    30,    24,
      77,    -1,    24,    77,    38,    -1,    29,    -1,    23,    -1,
      24,    35,    79,    36,    -1,    24,    30,    24,    35,    79,
      36,    -1,    91,    -1,    79,    34,    91,    -1,    -1,    11,
      35,    83,    36,    81,    12,    82,    13,    -1,    11,    35,
      83,    36,    81,    13,    -1,    11,    35,    83,    36,    81,
      -1,    11,    35,    83,    36,    81,    12,    82,    -1,    85,
      -1,    85,    -1,    91,    84,    91,    -1,    91,    84,    -1,
      84,    91,    -1,    91,    -1,    39,    -1,    40,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    47,    -1,    31,
      46,    32,    -1,    14,    25,    -1,    14,    -1,    25,    -1,
      88,    35,    89,    36,    85,    -1,    88,    35,    89,    85,
      -1,    88,    89,    36,    85,    -1,    15,    24,    16,    17,
      -1,    24,    16,    17,    -1,    15,    16,    17,    -1,    15,
      24,    16,    -1,    15,    24,    17,    -1,    95,    34,    95,
      34,    95,    -1,    95,    34,    95,    -1,    95,    -1,    -1,
      24,    30,    24,    -1,    91,    41,    93,    -1,    91,    38,
      93,    -1,    96,    35,    91,    36,    -1,    91,    41,    35,
      92,    36,    -1,    91,    38,    35,    92,    36,    -1,    35,
      92,    36,    -1,    93,    -1,    35,    92,    36,    -1,    93,
      41,    93,    -1,    93,    38,    93,    -1,    93,    -1,    94,
      -1,    93,    42,    94,    -1,    93,    43,    94,    -1,    24,
      -1,    38,    95,    -1,    95,    -1,    26,    -1,    28,    -1,
      27,    -1,     3,    -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    30,    31,    34,    35,    38,    39,    42,
      43,    44,    45,    46,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    60,    61,    64,    73,    82,    85,    92,
      96,   102,   106,   107,   110,   122,   126,   136,   143,   144,
     147,   150,   151,   154,   157,   159,   162,   163,   166,   167,
     168,   169,   172,   176,   177,   178,   180,   183,   186,   187,
     188,   191,   195,   198,   202,   203,   206,   217,   219,   226,
     227,   228,   231,   237,   246,   248,   257,   258,   259,   262,
     263,   264,   265,   268,   270,   272,   273,   274,   275,   278,
     284,   290,   297,   304,   311,   320,   321,   324,   326,   327,
     330,   333,   337,   343,   354,   367,   368,   381,   396,   397,
     398,   399,   403,   412,   413,   414,   415,   416,   417,   418,
     423,   424,   425,   426,   429,   430,   431,   434,   435,   439,
     442,   443,   444,   447,   448,   449
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
  "declaracion_variables", "lista_variables", "encabezado_clase",
  "clase_declaration", "encabezado_interfaz", "interface_declaration",
  "interface_metodos", "encabezado_funcion",
  "interface_metodo_declaration", "encabezado_implement",
  "implement_declaration", "atributos", "atributo_declaration",
  "metodos_clase", "metodo_declaration", "funcion_declaration",
  "herencia_composicion", "sentencias_metodo",
  "local_function_declaration", "sentencias_funcion_local", "parametro",
  "distributed_method_implementation", "retorno", "objeto_declaration",
  "lista_objetos", "objeto", "asignacion", "asignador", "invocacion",
  "argumentos", "seleccion", "bloque_if", "bloque_else", "condicion",
  "comparador", "bloque_sentencias", "print", "bucle_for",
  "encabezado_for", "argumento_bucle_for", "acceso_atributo", "expresion",
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
      49,    49,    49,    50,    50,    51,    51,    51,    52,    53,
      54,    55,    56,    56,    57,    58,    59,    60,    61,    61,
      62,    63,    63,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    68,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    72,    73,    74,    74,    75,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    80,
      80,    80,    80,    81,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    90,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    96,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     3,     2,     6,
       2,     4,     2,     0,     2,     5,     4,     5,     2,     0,
       2,     2,     0,     2,     7,     0,     3,     0,     3,     3,
       3,     0,     7,     3,     3,     3,     0,     2,     1,     4,
       0,     7,     1,     2,     3,     1,     1,     3,     5,     2,
       4,     3,     1,     1,     4,     6,     1,     3,     0,     8,
       6,     5,     7,     1,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       5,     4,     4,     4,     3,     3,     3,     3,     5,     3,
       1,     0,     3,     3,     3,     4,     5,     5,     3,     1,
       3,     3,     3,     1,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   133,   134,   135,     0,     0,     0,     0,     0,
      98,     0,    62,     0,    99,     0,     0,     0,     5,     0,
       0,     9,     0,    10,     0,    12,     0,     0,    13,    15,
      14,    22,    11,    16,    17,    18,    19,    20,   111,    21,
       0,     0,    24,    34,    28,    30,     0,     0,    97,     0,
       0,     0,    73,    66,    72,     0,    78,    63,    65,    69,
       0,     1,     4,     6,     7,     8,    39,    33,    60,    42,
     130,   132,   131,   111,     0,   110,    23,     0,     0,     0,
       0,    91,    92,    93,    94,   127,     0,     0,    89,    90,
       0,     0,    88,   119,   124,   129,     0,   105,   106,   107,
     104,   112,     0,    76,     0,    71,    67,     2,     0,     0,
      58,     0,     0,    47,     0,     0,     0,    27,    25,    36,
       0,     0,     0,   123,   128,     0,    87,     0,     0,    86,
       0,     0,     0,   103,    78,    70,     0,    74,    64,     0,
      38,    47,    31,     0,    32,     0,     0,    57,    41,     0,
       0,     0,     0,    95,   101,   102,   109,    42,     0,   118,
       0,     0,    81,    83,     0,   114,     0,   113,    85,   125,
     126,     0,     0,    68,    77,    40,     0,    60,     0,    51,
      43,     0,    37,     0,   100,     0,    45,   120,   122,   121,
       0,    80,     0,     0,   115,    75,    29,     0,    59,     0,
      46,    96,   108,    61,    82,    84,   117,   116,     0,     0,
      44,     0,     0,     0,     0,    79,    35,    49,    48,    60,
      50,     0,     0,    56,     0,    52,     0,     0,     0,    54,
      53,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,   153,    19,    20,    21,    42,    22,    23,
      24,    25,   109,    26,   144,    27,    28,   108,   140,   113,
     148,    29,   150,   199,   214,   224,   111,    30,    31,    32,
      57,    58,    33,    59,    34,   102,    35,   162,   204,    90,
      91,   154,    36,    37,    38,    74,    39,   103,   122,    93,
      94,    95,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -181
static const yytype_int16 yypact[] =
{
     236,    44,  -181,  -181,  -181,    76,    81,    91,    69,    -3,
     104,    -4,  -181,   196,  -181,   364,   140,   267,  -181,   120,
     127,  -181,   116,  -181,   137,  -181,   132,   149,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,     8,  -181,
      44,    13,   147,  -181,   176,  -181,   168,   106,  -181,   179,
     107,   181,  -181,  -181,  -181,   191,    35,   182,  -181,   167,
     203,  -181,  -181,  -181,  -181,  -181,  -181,  -181,    98,  -181,
    -181,  -181,  -181,    86,   193,   199,   147,   197,   214,   224,
     212,  -181,  -181,  -181,  -181,  -181,   162,    86,  -181,  -181,
     217,    35,    97,   -18,  -181,  -181,   227,  -181,   239,  -181,
    -181,    42,    72,    66,   241,    86,    66,  -181,   380,    20,
    -181,   114,   242,    17,   151,   300,    86,  -181,  -181,  -181,
     232,   162,   240,   136,  -181,   300,    66,   260,   324,    35,
       3,     3,    35,  -181,    35,    35,    35,  -181,  -181,   246,
    -181,    17,  -181,   245,  -181,   219,   252,  -181,  -181,   256,
      40,   364,   300,  -181,  -181,  -181,   259,  -181,   254,  -181,
       3,     3,   130,  -181,   162,   -18,   162,   -18,    66,  -181,
    -181,    38,   165,    66,    66,  -181,    43,    98,   270,  -181,
    -181,   263,  -181,   331,  -181,    86,    60,  -181,   -18,   -18,
     300,  -181,   261,   266,  -181,  -181,  -181,   198,  -181,   404,
    -181,  -181,  -181,  -181,   296,  -181,  -181,  -181,   279,   229,
    -181,   280,   283,   282,   286,  -181,  -181,  -181,  -181,    98,
    -181,   221,   289,  -181,   420,  -181,   288,   290,   293,  -181,
    -181,  -181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,   -12,     0,  -181,  -180,  -104,   287,  -181,  -181,
    -181,  -181,  -181,  -103,  -181,  -181,  -181,  -181,  -181,  -100,
    -181,  -108,   187,  -181,   105,  -181,  -161,  -181,  -181,  -181,
    -181,   218,  -181,   243,  -181,   206,  -181,  -181,  -181,  -181,
     238,   -97,  -181,  -181,  -181,   274,  -181,   -38,  -110,   -79,
      33,   -36,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -46
static const yytype_int16 yytable[] =
{
      18,    96,    75,    60,   139,   149,   143,   123,   141,    92,
      96,   158,    49,    96,    77,    18,   197,    63,   155,   211,
      50,   106,   112,     5,   130,   131,     5,    85,   163,    70,
      71,    72,    47,   149,    70,    71,    72,    75,     2,     3,
       4,    87,   123,    73,   226,    96,   -26,   -26,   165,   167,
     -45,   124,   142,   126,   192,   184,   193,   186,   221,    85,
      63,    70,    71,    72,   181,    52,     5,   181,    41,   124,
      86,    54,   182,    87,   194,   196,   127,   134,   149,   128,
     156,   188,   189,    96,    46,   123,    96,   123,    96,    96,
      96,   168,   203,   205,   171,   212,   213,   173,   174,   178,
      43,     2,     3,     4,   127,    44,   136,   128,   137,     2,
       3,     4,    70,    71,    72,    45,    81,    82,    83,    84,
     227,   213,   110,    98,    99,    81,    82,    83,    84,    48,
      85,   112,    70,    71,    72,   127,    88,    89,   128,   183,
      61,    86,   190,   191,    87,    88,    89,    66,   145,   202,
     146,    18,     1,    64,     2,     3,     4,     5,     6,     7,
      65,     8,     9,   169,   170,    10,    11,    68,    67,    12,
       2,     3,     4,   112,   160,    13,    14,   161,   130,   131,
      69,    78,   151,    63,   -45,    79,    85,   152,    70,    71,
      72,    85,    80,    70,    71,    72,    97,   121,   100,   136,
      87,   195,    86,    -3,     1,   105,     2,     3,     4,     5,
       6,     7,    51,     8,     9,   101,   104,    10,    11,    52,
      53,    12,     2,     3,     4,    54,    55,    13,    14,   115,
     117,    56,   145,   116,   208,   107,   -45,     1,   118,     2,
       3,     4,     5,     6,     7,    51,     8,     9,   119,   120,
      10,    11,    52,   125,    12,   145,   133,   222,    54,    55,
      13,    14,   132,   157,    56,    53,   147,    15,     1,   -45,
       2,     3,     4,     5,     6,     7,   159,     8,     9,   175,
     177,    10,    11,   179,    85,    12,    70,    71,    72,   180,
     187,    13,    14,   185,   198,   164,   200,   206,    87,    62,
     -45,     1,   207,     2,     3,     4,     5,     6,     7,   215,
       8,     9,   216,   217,    10,    11,   218,   219,    12,   220,
     223,   229,   138,   230,    13,    14,   231,    76,   176,   228,
     129,   151,     1,   -45,     2,     3,     4,     5,     6,     7,
     172,     8,     9,     0,   135,    10,    11,   114,    85,    12,
      70,    71,    72,     0,     0,    13,    14,     0,     0,   166,
       0,     0,    87,   201,   -45,     1,     0,     2,     3,     4,
       5,     6,     7,     0,     8,     9,     0,     0,    10,    11,
       0,     1,    12,     2,     3,     4,   -42,     0,    13,    14,
       0,     0,     0,     0,     0,     0,     0,   -45,     0,     0,
       0,     0,     0,     0,   -42,     1,     0,     2,     3,     4,
       5,     0,   -42,   -42,     0,     9,     0,     0,    10,    11,
       0,     1,    12,     2,     3,     4,     5,     0,   209,    14,
       0,     9,     0,     0,    10,    11,   210,     0,    12,     0,
       0,     0,     0,     0,   209,    14,     0,     0,     0,     0,
       0,     0,   225
};

static const yytype_int16 yycheck[] =
{
       0,    47,    38,    15,   108,   113,   109,    86,   108,    47,
      56,   121,    16,    59,     1,    15,   177,    17,   115,   199,
      24,    59,    68,     6,    42,    43,     6,    24,   125,    26,
      27,    28,    35,   141,    26,    27,    28,    73,     3,     4,
       5,    38,   121,    35,   224,    91,    33,    34,   127,   128,
      33,    87,    32,    91,   164,   152,   166,   157,   219,    24,
      60,    26,    27,    28,    24,    23,     6,    24,    24,   105,
      35,    29,    32,    38,    36,    32,    38,    35,   186,    41,
     116,   160,   161,   129,    15,   164,   132,   166,   134,   135,
     136,   129,    32,   190,   132,   199,   199,   135,   136,   145,
      24,     3,     4,     5,    38,    24,    34,    41,    36,     3,
       4,     5,    26,    27,    28,    24,    19,    20,    21,    22,
     224,   224,    24,    16,    17,    19,    20,    21,    22,    25,
      24,   177,    26,    27,    28,    38,    39,    40,    41,   151,
       0,    35,    12,    13,    38,    39,    40,    31,    34,   185,
      36,   151,     1,    33,     3,     4,     5,     6,     7,     8,
      33,    10,    11,   130,   131,    14,    15,    35,    31,    18,
       3,     4,     5,   219,    38,    24,    25,    41,    42,    43,
      31,    34,    31,   183,    33,     9,    24,    36,    26,    27,
      28,    24,    24,    26,    27,    28,    17,    35,    17,    34,
      38,    36,    35,     0,     1,    38,     3,     4,     5,     6,
       7,     8,    16,    10,    11,    24,    34,    14,    15,    23,
      24,    18,     3,     4,     5,    29,    30,    24,    25,    36,
      33,    35,    34,    34,    36,    32,    33,     1,    24,     3,
       4,     5,     6,     7,     8,    16,    10,    11,    24,    37,
      14,    15,    23,    36,    18,    34,    17,    36,    29,    30,
      24,    25,    35,    31,    35,    24,    24,    31,     1,    33,
       3,     4,     5,     6,     7,     8,    36,    10,    11,    33,
      35,    14,    15,    31,    24,    18,    26,    27,    28,    33,
      36,    24,    25,    34,    24,    35,    33,    36,    38,    32,
      33,     1,    36,     3,     4,     5,     6,     7,     8,    13,
      10,    11,    33,    33,    14,    15,    33,    35,    18,    33,
      31,    33,   104,    33,    24,    25,    33,    40,   141,   224,
      92,    31,     1,    33,     3,     4,     5,     6,     7,     8,
     134,    10,    11,    -1,   101,    14,    15,    73,    24,    18,
      26,    27,    28,    -1,    -1,    24,    25,    -1,    -1,    35,
      -1,    -1,    38,    32,    33,     1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      -1,     1,    18,     3,     4,     5,     6,    -1,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    24,     1,    -1,     3,     4,     5,
       6,    -1,    32,    33,    -1,    11,    -1,    -1,    14,    15,
      -1,     1,    18,     3,     4,     5,     6,    -1,    24,    25,
      -1,    11,    -1,    -1,    14,    15,    32,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      14,    15,    18,    24,    25,    31,    45,    46,    47,    48,
      49,    50,    52,    53,    54,    55,    57,    59,    60,    65,
      71,    72,    73,    76,    78,    80,    86,    87,    88,    90,
      96,    24,    51,    24,    24,    24,    15,    35,    25,    16,
      24,    16,    23,    24,    29,    30,    35,    74,    75,    77,
      46,     0,    32,    47,    33,    33,    31,    31,    35,    31,
      26,    27,    28,    35,    89,    95,    51,     1,    34,     9,
      24,    19,    20,    21,    22,    24,    35,    38,    39,    40,
      83,    84,    91,    93,    94,    95,    96,    17,    16,    17,
      17,    24,    79,    91,    34,    38,    91,    32,    61,    56,
      24,    70,    96,    63,    89,    36,    34,    33,    24,    24,
      37,    35,    92,    93,    95,    36,    91,    38,    41,    84,
      42,    43,    35,    17,    35,    77,    34,    36,    75,    50,
      62,    63,    32,    57,    58,    34,    36,    24,    64,    65,
      66,    31,    36,    47,    85,    85,    95,    31,    92,    36,
      38,    41,    81,    85,    35,    93,    35,    93,    91,    94,
      94,    91,    79,    91,    91,    33,    66,    35,    96,    31,
      33,    24,    32,    46,    85,    34,    63,    36,    93,    93,
      12,    13,    92,    92,    36,    36,    32,    70,    24,    67,
      33,    32,    95,    32,    82,    85,    36,    36,    36,    24,
      32,    49,    50,    57,    68,    13,    33,    33,    33,    35,
      33,    70,    36,    31,    69,    32,    49,    50,    68,    33,
      33,    33
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
#line 30 "gramatica.ypp"
    { Logger::logError("Se esperaba llave como fin del programa") ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 31 "gramatica.ypp"
    { Logger::logError("Se esperaba llave como inicion del programa") ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 57 "gramatica.ypp"
    { if(SyntacticActions::checkReturnScope()) IntermediateCodeGenerator::returnStatement(); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 60 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de variables") ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 61 "gramatica.ypp"
    { Logger::logError("Falta especificar el tipo de las variables") ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 64 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(3) - (3)].string), false)){
                                                        string aux = (yyvsp[(3) - (3)].string);
                                                        Logger::logError("Redeclaracion de variable " + aux);
                                                }else{
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(3) - (3)].string));
                                                        SyntacticActions::setIdType((yyvsp[(3) - (3)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(3) - (3)].string), "variable");
                                                }
                                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 73 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (1)].string), false)){
                                                        string aux = (yyvsp[(1) - (1)].string);
                                                        Logger::logError("Redeclaracion de variable " + aux);
                                                }else{
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (1)].string));
                                                        SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable");
                                                }
                                        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 82 "gramatica.ypp"
    { Logger::logError("declaracion de variables invalida") ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 85 "gramatica.ypp"
    { IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                        SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-clase");
                                        IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 92 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase");
                                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 96 "gramatica.ypp"
    { IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-interfaz");
                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 102 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz");
                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 110 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredMethod((yyvsp[(2) - (2)].string), false)){
                                                string aux = (yyvsp[(2) - (2)].string);
                                                Logger::logError("Redeclaracion de funcion " + aux);
                                        }else{
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                                (yyval.string) = (yyvsp[(2) - (2)].string);
                                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-funcion");
                                        }
                                ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 122 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 126 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(4) - (4)].string);
                                                        if(SyntacticActions::checkDeclaredClass((yyvsp[(4) - (4)].string))){
                                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                                                SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "nombre-clase");
                                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (4)].string));
                                                        }
                                                        ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 136 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz");
                                                                                        if(SyntacticActions::checkDeclaredClass((yyvsp[(1) - (5)].string), false)){
                                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                        }
                                                                                ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 147 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase") ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 154 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo") ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 157 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion");
                                                                                        IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 162 "gramatica.ypp"
    { Logger::infoMsg("Herencia por composicion"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 166 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 167 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 168 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 169 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 172 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion local");
                                                                                                                IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)) ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 176 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 177 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 178 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales");
                                                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 180 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 183 "gramatica.ypp"
    { SyntacticActions::setIdType((yyvsp[(2) - (2)].string));
                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "parametro"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 186 "gramatica.ypp"
    { Logger::logError("Falta el tipo del argumento") ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 187 "gramatica.ypp"
    { Logger::logError("Solo se permite un parametro en declaracion de funcion") ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 191 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos");
                                                                                        SyntacticActions::checkDeclaredClass((yyvsp[(3) - (7)].string)) ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 198 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(1) - (2)].string))) SyntacticActions::lastType = (yyvsp[(1) - (2)].string);
                                                Logger::infoMsg("Declaracion de objeto") ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 206 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (1)].string), false)){
                                string aux = (yyvsp[(1) - (1)].string);
                                Logger::logError("Redeclaracion de objeto " + aux);
                        }else{
                                IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (1)].string));
                                SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                                SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable-objeto");
                        }
                ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 217 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple");
                                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string))) IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 219 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo");
                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (5)].string))){
                                        char *aux = (char*) malloc(sizeof((yyvsp[(1) - (5)].string)) + sizeof((yyvsp[(3) - (5)].string)) + 2);
                                        sprintf(aux, "%s.%s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                                        IntermediateCodeGenerator::addTerceto((yyvsp[(4) - (5)].string), aux, (yyvsp[(5) - (5)].string));
                                }
                        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 226 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 227 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 228 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 231 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '=';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 237 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '+';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                 ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 246 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion");
                                if(SyntacticActions::checkDeclaredMethod((yyvsp[(1) - (4)].string))) IntermediateCodeGenerator::addTerceto("INVOKE", (yyvsp[(1) - (4)].string), "-"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 248 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo");
                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (6)].string))){
                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (6)].string)) + sizeof((yyvsp[(3) - (6)].string)) + 2);
                                sprintf(aux, "%s.%s", (yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string));
                                IntermediateCodeGenerator::addTerceto("INVOKE", aux, "-");
                                }
                        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 258 "gramatica.ypp"
    { Logger::logError("Solo se permite un argumento en invocacion de funcion") ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 262 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa"); IntermediateCodeGenerator::ifElseExpression((yyvsp[(3) - (8)].string), (yyvsp[(5) - (8)].string), (yyvsp[(7) - (8)].string)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 263 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE"); IntermediateCodeGenerator::ifExpression((yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 264 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 265 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 268 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("BI", "", "-"); IntermediateCodeGenerator::addStack(IntermediateCodeGenerator::lastTerceto); (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 272 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control");  IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); IntermediateCodeGenerator::endCondition(); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 273 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado derecho de comparacion") ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 274 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado izquierdo de comparacion") ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 275 "gramatica.ypp"
    { Logger::logError("Se esperaba un operador de comparacion") ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 278 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '<';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 284 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '>';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 290 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '<';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 297 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '>';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 304 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '=';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 311 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '!';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 320 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 321 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 324 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT");
                        IntermediateCodeGenerator::addTerceto("PRINT", (yyvsp[(2) - (2)].string), "-"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 326 "gramatica.ypp"
    { Logger::logError("Se esperaba cadena para imprimir") ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 327 "gramatica.ypp"
    { Logger::logError("Falta sentencia PRINT") ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 330 "gramatica.ypp"
    { IntermediateCodeGenerator::forBlock((yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string));
                                                                                IntermediateCodeGenerator::onScopeFinished()
                                                                                ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 333 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(1) - (4)].string), "variable");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 337 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(1) - (4)].string), "variable");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 343 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (4)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        IntermediateCodeGenerator::addScope(aux);
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(2) - (4)].string), false)){
                                                string id = (yyvsp[(2) - (4)].string);
                                                Logger::logError("Redeclaracion de variable " + id);
                                        }else{
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "variable"); }
                                        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 354 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (3)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        Logger::logWarning("Falta sentencia FOR");
                                        IntermediateCodeGenerator::addScope(aux);
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string), false)){
                                                string id = (yyvsp[(1) - (3)].string);
                                                Logger::logError("Redeclaracion de variable " + id);
                                        }else{
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(1) - (3)].string), "variable");
                                        }
                                        ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 367 "gramatica.ypp"
    { Logger::logError("Se esperaba una variable") ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 368 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        Logger::logWarning("Falta sentencia RANGE");
                                        IntermediateCodeGenerator::addScope(aux);
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(2) - (3)].string), false)){
                                                string id = (yyvsp[(2) - (3)].string);
                                                Logger::logError("Redeclaracion de variable " + id);
                                        }else{
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (3)].string), "variable");
                                        }
                                        ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 381 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        Logger::logError("Falta sentencia IN");
                                        IntermediateCodeGenerator::addScope(aux);
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(2) - (3)].string), false)){
                                                string id = (yyvsp[(2) - (3)].string);
                                                Logger::logError("Redeclaracion de variable " + id);
                                        }else{
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (3)].string), "variable");
                                        }
                                        ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 396 "gramatica.ypp"
    { IntermediateCodeGenerator::forArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string)) ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 397 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 2 encontrados") ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 398 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 1 encontrados") ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 399 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, ninguno encontrado") ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 403 "gramatica.ypp"
    { Logger::infoMsg("Acceso a atributo");
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string))){
                                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (3)].string)) + sizeof((yyvsp[(3) - (3)].string)) + 2);
                                                sprintf(aux, "%s.%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = aux;
                                        }
                                ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 412 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 413 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 414 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida") ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 415 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 416 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 417 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 418 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 423 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida") ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 429 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 430 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("*", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 431 "gramatica.ypp"
    { SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string)); IntermediateCodeGenerator::addTerceto("/", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 434 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (1)].string))) (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 435 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(2) - (2)].string));
                                char *aux = (char*) malloc(sizeof((yyvsp[(2) - (2)].string)) + 2);
                                sprintf(aux, "-%s", (yyvsp[(2) - (2)].string));
                                (yyval.string) = aux; ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 439 "gramatica.ypp"
    { SyntacticActions::checkLimits((yyvsp[(1) - (1)].string)); (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 442 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 443 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 444 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 447 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 448 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 449 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2500 "gramatica.tab.cpp"
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



