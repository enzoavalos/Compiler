
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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  229

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
      46,    48,    50,    52,    55,    58,    62,    64,    68,    76,
      82,    85,    86,    89,    95,   104,   107,   108,   111,   114,
     115,   118,   126,   127,   131,   132,   136,   140,   144,   145,
     153,   157,   161,   165,   166,   169,   171,   176,   177,   185,
     187,   190,   194,   196,   198,   202,   208,   211,   216,   220,
     222,   224,   229,   236,   238,   242,   243,   252,   259,   265,
     273,   275,   277,   281,   284,   287,   289,   291,   293,   295,
     297,   299,   301,   303,   307,   310,   312,   314,   320,   325,
     330,   335,   339,   343,   347,   351,   357,   361,   363,   364,
     368,   372,   376,   381,   387,   393,   397,   399,   403,   407,
     411,   413,   415,   419,   423,   425,   428,   430,   432,   434,
     436,   438,   440
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    31,    46,    -1,
      46,    32,    -1,    47,    -1,    46,    47,    -1,    48,    33,
      -1,    49,    33,    -1,    50,    -1,    52,    -1,    70,    -1,
      53,    -1,    57,    -1,    68,    -1,    62,    -1,    73,    -1,
      75,    -1,    77,    -1,    83,    -1,    84,    -1,    87,    -1,
      69,    -1,    93,    51,    -1,     1,    51,    -1,    51,    34,
      24,    -1,    24,    -1,    24,     1,    33,    -1,     7,    24,
      31,    58,    60,    63,    32,    -1,     8,    24,    31,    54,
      32,    -1,    54,    56,    -1,    -1,     6,    24,    -1,    55,
      35,    67,    36,    33,    -1,     7,    24,     9,    24,    31,
      60,    63,    32,    -1,    58,    59,    -1,    -1,    50,    33,
      -1,    60,    61,    -1,    -1,    62,    33,    -1,    55,    35,
      67,    36,    31,    64,    32,    -1,    -1,    63,    24,    33,
      -1,    -1,    64,    50,    33,    -1,    64,    49,    33,    -1,
      64,    65,    33,    -1,    -1,    55,    35,    67,    36,    31,
      66,    32,    -1,    66,    50,    33,    -1,    66,    49,    33,
      -1,    66,    65,    33,    -1,    -1,    93,    24,    -1,    24,
      -1,    67,    34,    93,    24,    -1,    -1,    10,    15,    24,
      37,    31,    60,    32,    -1,    18,    -1,    24,    71,    -1,
      71,    34,    72,    -1,    72,    -1,    24,    -1,    24,    74,
      88,    -1,    24,    30,    24,    74,    88,    -1,    24,    74,
      -1,    24,    30,    24,    74,    -1,    24,    74,    38,    -1,
      29,    -1,    23,    -1,    24,    35,    76,    36,    -1,    24,
      30,    24,    35,    76,    36,    -1,    88,    -1,    76,    34,
      88,    -1,    -1,    11,    35,    80,    36,    78,    12,    79,
      13,    -1,    11,    35,    80,    36,    78,    13,    -1,    11,
      35,    80,    36,    78,    -1,    11,    35,    80,    36,    78,
      12,    79,    -1,    82,    -1,    82,    -1,    88,    81,    88,
      -1,    88,    81,    -1,    81,    88,    -1,    88,    -1,    39,
      -1,    40,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    47,    -1,    31,    46,    32,    -1,    14,    25,    -1,
      14,    -1,    25,    -1,    85,    35,    86,    36,    82,    -1,
      85,    35,    86,    82,    -1,    85,    86,    36,    82,    -1,
      15,    24,    16,    17,    -1,    24,    16,    17,    -1,    15,
      16,    17,    -1,    15,    24,    16,    -1,    15,    24,    17,
      -1,    92,    34,    92,    34,    92,    -1,    92,    34,    92,
      -1,    92,    -1,    -1,    24,    30,    24,    -1,    88,    41,
      90,    -1,    88,    38,    90,    -1,    93,    35,    88,    36,
      -1,    88,    41,    35,    89,    36,    -1,    88,    38,    35,
      89,    36,    -1,    35,    89,    36,    -1,    90,    -1,    35,
      89,    36,    -1,    90,    41,    90,    -1,    90,    38,    90,
      -1,    90,    -1,    91,    -1,    90,    42,    91,    -1,    90,
      43,    91,    -1,    24,    -1,    38,    92,    -1,    92,    -1,
      26,    -1,    28,    -1,    27,    -1,     3,    -1,     4,    -1,
       5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    30,    31,    34,    35,    38,    39,    42,
      43,    44,    45,    46,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    60,    61,    64,    73,    82,    85,    90,
      95,    96,    99,   111,   115,   123,   124,   127,   130,   131,
     134,   137,   139,   142,   143,   146,   147,   148,   149,   152,
     156,   157,   158,   160,   163,   166,   167,   168,   171,   175,
     178,   182,   183,   186,   197,   199,   206,   207,   208,   211,
     217,   226,   228,   237,   238,   239,   242,   243,   244,   245,
     248,   250,   252,   253,   254,   255,   258,   264,   270,   277,
     284,   291,   300,   301,   304,   306,   307,   310,   313,   317,
     324,   330,   337,   338,   345,   354,   355,   356,   357,   360,
     369,   370,   371,   372,   373,   374,   375,   380,   381,   382,
     383,   386,   387,   388,   391,   392,   396,   399,   400,   401,
     404,   405,   406
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
  "declaracion_variables", "lista_variables", "clase_declaration",
  "interface_declaration", "interface_metodos", "encabezado_funcion",
  "interface_metodo_declaration", "implement_declaration", "atributos",
  "atributo_declaration", "metodos_clase", "metodo_declaration",
  "funcion_declaration", "herencia_composicion", "sentencias_metodo",
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
      54,    54,    55,    56,    57,    58,    58,    59,    60,    60,
      61,    62,    62,    63,    63,    64,    64,    64,    64,    65,
      66,    66,    66,    66,    67,    67,    67,    67,    68,    69,
      70,    71,    71,    72,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      78,    79,    80,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    82,    82,    83,    83,    83,    84,    84,    84,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    87,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      93,    93,    93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     3,     7,     5,
       2,     0,     2,     5,     8,     2,     0,     2,     2,     0,
       2,     7,     0,     3,     0,     3,     3,     3,     0,     7,
       3,     3,     3,     0,     2,     1,     4,     0,     7,     1,
       2,     3,     1,     1,     3,     5,     2,     4,     3,     1,
       1,     4,     6,     1,     3,     0,     8,     6,     5,     7,
       1,     1,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     5,     4,     4,
       4,     3,     3,     3,     3,     5,     3,     1,     0,     3,
       3,     3,     4,     5,     5,     3,     1,     3,     3,     3,
       1,     1,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   130,   131,   132,     0,     0,     0,     0,     0,
      95,     0,    59,     0,    96,     0,     0,     0,     5,     0,
       0,     9,    10,    12,     0,    13,    15,    14,    22,    11,
      16,    17,    18,    19,    20,   108,    21,     0,     0,    24,
      32,     0,     0,     0,     0,    94,     0,     0,     0,    70,
      63,    69,     0,    75,    60,    62,    66,     0,     1,     4,
       6,     7,     8,    57,   127,   129,   128,   108,     0,   107,
      23,     0,     0,     0,    36,    31,     0,    88,    89,    90,
      91,   124,     0,     0,    86,    87,     0,     0,    85,   116,
     121,   126,     0,   102,   103,   104,   101,   109,     0,    73,
       0,    68,    64,     2,    55,     0,     0,     0,     0,     0,
      27,    25,     0,     0,     0,     0,     0,     0,   120,   125,
       0,    84,     0,     0,    83,     0,     0,     0,   100,    75,
      67,     0,    71,    61,     0,     0,    54,     0,     0,    92,
      98,    99,   106,    39,     0,    35,    44,    29,     0,    30,
      39,     0,   115,     0,     0,    78,    80,     0,   111,     0,
     110,    82,   122,   123,     0,     0,    65,    74,     0,    48,
       0,    97,     0,    44,    37,    38,     0,     0,    57,    42,
     117,   119,   118,     0,    77,     0,     0,   112,    72,    56,
       0,    93,   105,     0,    40,     0,    28,     0,    58,    79,
      81,   114,   113,     0,    41,     0,     0,     0,     0,    34,
      43,     0,    76,    46,    45,    57,    47,    33,     0,     0,
      53,     0,    49,     0,     0,     0,    51,    50,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,   139,    19,    20,    21,    39,    22,    23,
     114,    24,   149,    25,   113,   145,   146,   175,    26,   177,
     190,   208,   221,   105,    27,    28,    29,    54,    55,    30,
      56,    31,    98,    32,   155,   199,    86,    87,   140,    33,
      34,    35,    68,    36,    99,   117,    89,    90,    91,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -181
static const yytype_int16 yypact[] =
{
     238,    -2,  -181,  -181,  -181,    13,    18,    32,    44,    31,
      54,    90,  -181,   135,  -181,   366,    84,   269,  -181,    60,
      70,  -181,  -181,  -181,    95,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,    94,  -181,    -2,    28,    85,
    -181,     4,   137,   111,   122,  -181,   163,    15,   174,  -181,
    -181,  -181,   176,    12,   180,  -181,   128,   205,  -181,  -181,
    -181,  -181,  -181,    68,  -181,  -181,  -181,    42,   162,   183,
      85,   185,   197,   207,  -181,  -181,   195,  -181,  -181,  -181,
    -181,  -181,   198,    42,  -181,  -181,   199,    12,   408,    73,
    -181,  -181,   212,  -181,   217,  -181,  -181,   164,    66,    14,
     226,    42,    14,  -181,  -181,   133,   227,   171,   302,    42,
    -181,  -181,   209,   104,    19,   224,   198,   225,   216,  -181,
     302,    14,   262,   326,    12,    50,    50,    12,  -181,    12,
      12,    12,  -181,  -181,   261,   229,  -181,   366,   302,  -181,
    -181,  -181,   233,  -181,   235,  -181,     1,  -181,   243,  -181,
    -181,   245,  -181,    50,    50,   215,  -181,   198,    73,   198,
      73,    14,  -181,  -181,   156,   154,    14,    14,   258,  -181,
     333,  -181,    42,     1,  -181,  -181,   252,   115,    68,    21,
    -181,    73,    73,   302,  -181,   255,   256,  -181,  -181,  -181,
     382,  -181,  -181,   121,  -181,   263,  -181,   167,  -181,   282,
    -181,  -181,  -181,    88,  -181,   265,   266,   276,   271,  -181,
    -181,   281,  -181,  -181,  -181,    68,  -181,  -181,   285,   284,
    -181,   407,  -181,   289,   290,   291,  -181,  -181,  -181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,   -13,     3,  -181,  -180,  -109,   288,  -181,  -181,
    -181,  -108,  -181,  -181,  -181,  -181,  -122,  -181,  -116,   145,
    -181,   107,  -181,  -170,  -181,  -181,  -181,  -181,   230,  -181,
     232,  -181,   202,  -181,  -181,  -181,  -181,   244,   -94,  -181,
    -181,  -181,   275,  -181,   -33,  -111,   -58,    58,   -34,   -44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
      92,    69,    57,    18,   144,   151,   148,     5,   197,    92,
     205,    88,    92,    73,   141,     2,     3,     4,    18,   106,
      60,   173,    38,   102,   118,     5,   156,     5,   179,    71,
     176,    94,    95,    69,   -42,    74,    81,    40,    64,    65,
      66,   223,    41,    92,   171,   218,   185,    82,   186,   119,
      83,   147,   122,   198,   121,   123,    42,   176,   118,    43,
      60,   -26,   -26,   176,   158,   160,    44,   119,    64,    65,
      66,     2,     3,     4,    81,   142,    64,    65,    66,    45,
      92,   206,   207,    92,    58,    92,    92,    92,    83,   200,
     168,   161,   104,    61,   164,   181,   182,   166,   167,   118,
     131,   118,   132,    62,    48,     1,    46,     2,     3,     4,
     -39,    49,   224,   207,    47,   125,   126,    51,    52,    72,
      64,    65,    66,    53,   170,     2,     3,     4,   -39,    67,
      63,     2,     3,     4,   106,    76,   -39,   -39,   192,   195,
      18,    77,    78,    79,    80,   195,    81,   196,    64,    65,
      66,    48,    81,   209,    64,    65,    66,    82,    49,    50,
      83,    84,    85,    82,    51,    52,   101,   134,    75,   135,
      53,   106,     1,    60,     2,     3,     4,     5,     6,     7,
      93,     8,     9,   162,   163,    10,    11,    49,   131,    12,
     188,    96,   187,    51,   122,    13,    14,   123,   108,   129,
      97,   134,   137,   211,   -42,    -3,     1,   138,     2,     3,
       4,     5,     6,     7,   100,     8,     9,   109,   110,    10,
      11,   111,    81,    12,    64,    65,    66,   183,   184,    13,
      14,   112,   115,   116,   128,   120,    83,   103,   -42,     1,
     143,     2,     3,     4,     5,     6,     7,   127,     8,     9,
      50,   136,    10,    11,   153,   150,    12,   154,   125,   126,
     169,   152,    13,    14,     2,     3,     4,   172,   174,    15,
       1,   -42,     2,     3,     4,     5,     6,     7,   178,     8,
       9,   180,   189,    10,    11,   194,    81,    12,    64,    65,
      66,   201,   202,    13,    14,   212,   210,   157,   213,   214,
      83,    59,   -42,     1,   216,     2,     3,     4,     5,     6,
       7,   215,     8,     9,   217,   220,    10,    11,   193,   134,
      12,   219,   226,   227,   228,    70,    13,    14,   225,   130,
     133,   165,   124,   137,     1,   -42,     2,     3,     4,     5,
       6,     7,   107,     8,     9,     0,     0,    10,    11,     0,
      81,    12,    64,    65,    66,     0,     0,    13,    14,     0,
       0,   159,     0,     0,    83,   191,   -42,     1,     0,     2,
       3,     4,     5,     6,     7,     0,     8,     9,     0,     0,
      10,    11,     0,     1,    12,     2,     3,     4,     5,     0,
      13,    14,     0,     9,     0,     0,    10,    11,     0,   -42,
      12,     0,     0,     0,     0,     0,   203,    14,     1,     0,
       2,     3,     4,     5,   204,     0,     0,     0,     9,     0,
       0,    10,    11,     0,     0,    12,     0,    77,    78,    79,
      80,   203,    14,     0,     0,     0,     0,     0,     0,   222,
       0,     0,     0,     0,     0,     0,   122,    84,    85,   123
};

static const yytype_int16 yycheck[] =
{
      44,    35,    15,     0,   113,   116,   114,     6,   178,    53,
     190,    44,    56,     9,   108,     3,     4,     5,    15,    63,
      17,   143,    24,    56,    82,     6,   120,     6,   150,     1,
     146,    16,    17,    67,    33,    31,    24,    24,    26,    27,
      28,   221,    24,    87,   138,   215,   157,    35,   159,    83,
      38,    32,    38,    32,    87,    41,    24,   173,   116,    15,
      57,    33,    34,   179,   122,   123,    35,   101,    26,    27,
      28,     3,     4,     5,    24,   109,    26,    27,    28,    25,
     124,   190,   190,   127,     0,   129,   130,   131,    38,   183,
     134,   124,    24,    33,   127,   153,   154,   130,   131,   157,
      34,   159,    36,    33,    16,     1,    16,     3,     4,     5,
       6,    23,   221,   221,    24,    42,    43,    29,    30,    34,
      26,    27,    28,    35,   137,     3,     4,     5,    24,    35,
      35,     3,     4,     5,   178,    24,    32,    33,   172,    24,
     137,    19,    20,    21,    22,    24,    24,    32,    26,    27,
      28,    16,    24,    32,    26,    27,    28,    35,    23,    24,
      38,    39,    40,    35,    29,    30,    38,    34,    31,    36,
      35,   215,     1,   170,     3,     4,     5,     6,     7,     8,
      17,    10,    11,   125,   126,    14,    15,    23,    34,    18,
      36,    17,    36,    29,    38,    24,    25,    41,    36,    35,
      24,    34,    31,    36,    33,     0,     1,    36,     3,     4,
       5,     6,     7,     8,    34,    10,    11,    34,    33,    14,
      15,    24,    24,    18,    26,    27,    28,    12,    13,    24,
      25,    24,    37,    35,    17,    36,    38,    32,    33,     1,
      31,     3,     4,     5,     6,     7,     8,    35,    10,    11,
      24,    24,    14,    15,    38,    31,    18,    41,    42,    43,
      31,    36,    24,    25,     3,     4,     5,    34,    33,    31,
       1,    33,     3,     4,     5,     6,     7,     8,    35,    10,
      11,    36,    24,    14,    15,    33,    24,    18,    26,    27,
      28,    36,    36,    24,    25,    13,    33,    35,    33,    33,
      38,    32,    33,     1,    33,     3,     4,     5,     6,     7,
       8,    35,    10,    11,    33,    31,    14,    15,   173,    34,
      18,    36,    33,    33,    33,    37,    24,    25,   221,    97,
     100,   129,    88,    31,     1,    33,     3,     4,     5,     6,
       7,     8,    67,    10,    11,    -1,    -1,    14,    15,    -1,
      24,    18,    26,    27,    28,    -1,    -1,    24,    25,    -1,
      -1,    35,    -1,    -1,    38,    32,    33,     1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      14,    15,    -1,     1,    18,     3,     4,     5,     6,    -1,
      24,    25,    -1,    11,    -1,    -1,    14,    15,    -1,    33,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,     1,    -1,
       3,     4,     5,     6,    32,    -1,    -1,    -1,    11,    -1,
      -1,    14,    15,    -1,    -1,    18,    -1,    19,    20,    21,
      22,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      14,    15,    18,    24,    25,    31,    45,    46,    47,    48,
      49,    50,    52,    53,    55,    57,    62,    68,    69,    70,
      73,    75,    77,    83,    84,    85,    87,    93,    24,    51,
      24,    24,    24,    15,    35,    25,    16,    24,    16,    23,
      24,    29,    30,    35,    71,    72,    74,    46,     0,    32,
      47,    33,    33,    35,    26,    27,    28,    35,    86,    92,
      51,     1,    34,     9,    31,    31,    24,    19,    20,    21,
      22,    24,    35,    38,    39,    40,    80,    81,    88,    90,
      91,    92,    93,    17,    16,    17,    17,    24,    76,    88,
      34,    38,    88,    32,    24,    67,    93,    86,    36,    34,
      33,    24,    24,    58,    54,    37,    35,    89,    90,    92,
      36,    88,    38,    41,    81,    42,    43,    35,    17,    35,
      74,    34,    36,    72,    34,    36,    24,    31,    36,    47,
      82,    82,    92,    31,    50,    59,    60,    32,    55,    56,
      31,    89,    36,    38,    41,    78,    82,    35,    90,    35,
      90,    88,    91,    91,    88,    76,    88,    88,    93,    31,
      46,    82,    34,    60,    33,    61,    62,    63,    35,    60,
      36,    90,    90,    12,    13,    89,    89,    36,    36,    24,
      64,    32,    92,    63,    33,    24,    32,    67,    32,    79,
      82,    36,    36,    24,    32,    49,    50,    55,    65,    32,
      33,    36,    13,    33,    33,    35,    33,    33,    67,    36,
      31,    66,    32,    49,    50,    65,    33,    33,    33
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
    { Logger::infoMsg("Declaracion de clase");
                                                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (7)].string));
                                                                                        SyntacticActions::setIdUse((yyvsp[(2) - (7)].string), "nombre-clase"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 90 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz");
                                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (5)].string));
                                                                SyntacticActions::setIdUse((yyvsp[(2) - (5)].string), "nombre-interfaz"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 99 "gramatica.ypp"
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

  case 33:

/* Line 1455 of yacc.c  */
#line 111 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 115 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz");
                                                                                        if(SyntacticActions::checkDeclaredClass((yyvsp[(4) - (8)].string))){
                                                                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (8)].string));
                                                                                                SyntacticActions::setIdUse((yyvsp[(2) - (8)].string), "nombre-clase");
                                                                                        }
                                                                                ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 127 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase") ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 134 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo") ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 137 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion");
                                                                                        IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 142 "gramatica.ypp"
    { Logger::infoMsg("Herencia por composicion"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 146 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 147 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 148 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 149 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 152 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion local");
                                                                                                                IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)) ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 156 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 157 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 158 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales");
                                                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 160 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 163 "gramatica.ypp"
    { SyntacticActions::setIdType((yyvsp[(2) - (2)].string));
                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "parametro"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 166 "gramatica.ypp"
    { Logger::logError("Falta el tipo del argumento") ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 167 "gramatica.ypp"
    { Logger::logError("Solo se permite un parametro en declaracion de funcion") ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 171 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos");
                                                                                        SyntacticActions::checkDeclaredClass((yyvsp[(3) - (7)].string)) ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 178 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(1) - (2)].string))) SyntacticActions::lastType = (yyvsp[(1) - (2)].string);
                                                Logger::infoMsg("Declaracion de objeto") ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 186 "gramatica.ypp"
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

  case 64:

/* Line 1455 of yacc.c  */
#line 197 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple");
                                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string))) IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 199 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo");
                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (5)].string))){
                                        char *aux = (char*) malloc(sizeof((yyvsp[(1) - (5)].string)) + sizeof((yyvsp[(3) - (5)].string)) + 2);
                                        sprintf(aux, "%s.%s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                                        IntermediateCodeGenerator::addTerceto((yyvsp[(4) - (5)].string), aux, (yyvsp[(5) - (5)].string));
                                }
                        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 206 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 207 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 208 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 211 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '=';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 217 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '+';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                 ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 226 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion");
                                if(SyntacticActions::checkDeclaredMethod((yyvsp[(1) - (4)].string))) IntermediateCodeGenerator::addTerceto("INVOKE", (yyvsp[(1) - (4)].string), "-"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 228 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo");
                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (6)].string))){
                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (6)].string)) + sizeof((yyvsp[(3) - (6)].string)) + 2);
                                sprintf(aux, "%s.%s", (yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string));
                                IntermediateCodeGenerator::addTerceto("INVOKE", aux, "-");
                                }
                        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 238 "gramatica.ypp"
    { Logger::logError("Solo se permite un argumento en invocacion de funcion") ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 242 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa"); IntermediateCodeGenerator::ifElseExpression((yyvsp[(3) - (8)].string), (yyvsp[(5) - (8)].string), (yyvsp[(7) - (8)].string)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 243 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE"); IntermediateCodeGenerator::ifExpression((yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 244 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 245 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 248 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("BI", "", "-"); IntermediateCodeGenerator::addStack(IntermediateCodeGenerator::lastTerceto); (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 252 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control");  IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); IntermediateCodeGenerator::endCondition(); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 253 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado derecho de comparacion") ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 254 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado izquierdo de comparacion") ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 255 "gramatica.ypp"
    { Logger::logError("Se esperaba un operador de comparacion") ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 258 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '<';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 264 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '>';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 270 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '<';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 277 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '>';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 284 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '=';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 291 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 3);
                        aux[0] = '!';
                        aux[1] = '=';
                        aux[2] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 300 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 301 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 304 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT");
                        IntermediateCodeGenerator::addTerceto("PRINT", (yyvsp[(2) - (2)].string), "-"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 306 "gramatica.ypp"
    { Logger::logError("Se esperaba cadena para imprimir") ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 307 "gramatica.ypp"
    { Logger::logError("Falta sentencia PRINT") ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 310 "gramatica.ypp"
    { IntermediateCodeGenerator::forBlock((yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string));
                                                                                IntermediateCodeGenerator::onScopeFinished()
                                                                                ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 313 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(1) - (4)].string), "variable");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 317 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(1) - (4)].string), "variable");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 324 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (4)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        IntermediateCodeGenerator::addScope(aux);
                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                        SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "variable"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 330 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (3)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        Logger::logWarning("Falta sentencia FOR");
                                        IntermediateCodeGenerator::addScope(aux);
                                        IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (3)].string));
                                        SyntacticActions::setIdUse((yyvsp[(1) - (3)].string), "variable"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 337 "gramatica.ypp"
    { Logger::logError("Se esperaba una variable") ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 338 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        Logger::logWarning("Falta sentencia RANGE");
                                        IntermediateCodeGenerator::addScope(aux);
                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (3)].string)); 
                                        SyntacticActions::setIdUse((yyvsp[(2) - (3)].string), "variable");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 345 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string);
                                        char *aux = (char*) malloc(sizeof(char) * 4);
                                        aux[0] = 'f'; aux[1] = 'o'; aux[2] = 'r'; aux[3] = '\0';
                                        Logger::logError("Falta sentencia IN");
                                        IntermediateCodeGenerator::addScope(aux);
                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (3)].string));
                                        SyntacticActions::setIdUse((yyvsp[(2) - (3)].string), "variable"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 354 "gramatica.ypp"
    { IntermediateCodeGenerator::forArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string)) ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 355 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 2 encontrados") ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 356 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 1 encontrados") ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 357 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, ninguno encontrado") ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 360 "gramatica.ypp"
    { Logger::infoMsg("Acceso a atributo");
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string))){
                                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (3)].string)) + sizeof((yyvsp[(3) - (3)].string)) + 2);
                                                sprintf(aux, "%s.%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = aux;
                                        }
                                ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 369 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 370 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 371 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida") ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 372 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 373 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 374 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 375 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 380 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida") ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 386 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 387 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("*", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 388 "gramatica.ypp"
    { SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string)); IntermediateCodeGenerator::addTerceto("/", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 391 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (1)].string))) (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 392 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(2) - (2)].string));
                                char *aux = (char*) malloc(sizeof((yyvsp[(2) - (2)].string)) + 2);
                                sprintf(aux, "-%s", (yyvsp[(2) - (2)].string));
                                (yyval.string) = aux; ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 396 "gramatica.ypp"
    { SyntacticActions::checkLimits((yyvsp[(1) - (1)].string)); (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 399 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 400 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 401 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 404 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 405 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 406 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2438 "gramatica.tab.cpp"
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



