
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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  234

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
      78,    81,    86,    89,    90,    96,   101,   107,   110,   111,
     114,   117,   118,   121,   124,   132,   133,   136,   137,   141,
     145,   149,   150,   158,   162,   166,   170,   171,   174,   176,
     181,   182,   190,   192,   195,   199,   201,   203,   207,   213,
     216,   221,   225,   227,   229,   234,   241,   243,   247,   248,
     257,   264,   270,   278,   280,   282,   286,   289,   292,   294,
     296,   298,   300,   302,   304,   306,   308,   312,   315,   317,
     319,   325,   330,   335,   340,   344,   348,   352,   356,   362,
     369,   373,   375,   376,   380,   384,   388,   393,   399,   405,
     409,   411,   415,   419,   423,   425,   427,   431,   435,   437,
     440,   442,   444,   446,   448,   450,   452
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    31,    46,    -1,
      46,    32,    -1,    47,    -1,    46,    47,    -1,    48,    33,
      -1,    49,    33,    -1,    50,    -1,    53,    -1,    73,    -1,
      55,    -1,    59,    -1,    71,    -1,    65,    -1,    76,    -1,
      78,    -1,    80,    -1,    86,    -1,    87,    -1,    90,    -1,
      72,    -1,    96,    51,    -1,     1,    51,    -1,    51,    34,
      24,    -1,    24,    -1,    24,     1,    33,    -1,     7,    24,
      -1,    52,    31,    60,    62,    66,    32,    -1,     8,    24,
      -1,    54,    31,    56,    32,    -1,    56,    57,    -1,    -1,
      64,    35,    70,    36,    33,    -1,     7,    24,     9,    24,
      -1,    58,    31,    60,    62,    32,    -1,    60,    61,    -1,
      -1,    50,    33,    -1,    62,    63,    -1,    -1,    65,    33,
      -1,     6,    24,    -1,    64,    35,    70,    36,    31,    67,
      32,    -1,    -1,    24,    33,    -1,    -1,    67,    50,    33,
      -1,    67,    49,    33,    -1,    67,    68,    33,    -1,    -1,
      64,    35,    70,    36,    31,    69,    32,    -1,    69,    50,
      33,    -1,    69,    49,    33,    -1,    69,    68,    33,    -1,
      -1,    96,    24,    -1,    24,    -1,    70,    34,    96,    24,
      -1,    -1,    10,    15,    24,    37,    31,    62,    32,    -1,
      18,    -1,    24,    74,    -1,    74,    34,    75,    -1,    75,
      -1,    24,    -1,    24,    77,    91,    -1,    24,    30,    24,
      77,    91,    -1,    24,    77,    -1,    24,    30,    24,    77,
      -1,    24,    77,    38,    -1,    29,    -1,    23,    -1,    24,
      35,    79,    36,    -1,    24,    30,    24,    35,    79,    36,
      -1,    91,    -1,    79,    34,    91,    -1,    -1,    11,    35,
      83,    36,    81,    12,    82,    13,    -1,    11,    35,    83,
      36,    81,    13,    -1,    11,    35,    83,    36,    81,    -1,
      11,    35,    83,    36,    81,    12,    82,    -1,    85,    -1,
      85,    -1,    91,    84,    91,    -1,    91,    84,    -1,    84,
      91,    -1,    91,    -1,    39,    -1,    40,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    47,    -1,    31,    46,
      32,    -1,    14,    25,    -1,    14,    -1,    25,    -1,    88,
      35,    89,    36,    85,    -1,    88,    35,    89,    85,    -1,
      88,    89,    36,    85,    -1,    15,    24,    16,    17,    -1,
      24,    16,    17,    -1,    15,    16,    17,    -1,    15,    24,
      16,    -1,    15,    24,    17,    -1,    95,    34,    95,    34,
      95,    -1,    95,    34,    95,    34,    38,    95,    -1,    95,
      34,    95,    -1,    95,    -1,    -1,    24,    30,    24,    -1,
      91,    41,    93,    -1,    91,    38,    93,    -1,    96,    35,
      91,    36,    -1,    91,    41,    35,    92,    36,    -1,    91,
      38,    35,    92,    36,    -1,    35,    92,    36,    -1,    93,
      -1,    35,    92,    36,    -1,    93,    41,    93,    -1,    93,
      38,    93,    -1,    93,    -1,    94,    -1,    93,    42,    94,
      -1,    93,    43,    94,    -1,    24,    -1,    38,    95,    -1,
      95,    -1,    26,    -1,    28,    -1,    27,    -1,     3,    -1,
       4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    30,    33,    34,    37,    38,    41,
      42,    43,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    55,    56,    59,    60,    63,    69,    75,    78,    90,
      94,   105,   109,   110,   113,   118,   132,   141,   142,   145,
     148,   149,   152,   155,   167,   170,   174,   175,   178,   179,
     180,   181,   184,   189,   190,   191,   193,   196,   202,   203,
     204,   207,   211,   214,   221,   222,   225,   234,   236,   243,
     244,   245,   248,   254,   263,   265,   274,   275,   276,   281,
     283,   285,   286,   289,   294,   296,   300,   301,   302,   305,
     311,   317,   324,   331,   338,   347,   348,   351,   353,   354,
     357,   362,   368,   376,   384,   394,   395,   405,   417,   424,
     434,   435,   436,   439,   449,   454,   459,   460,   464,   468,
     469,   472,   473,   479,   485,   488,   489,   493,   500,   501,
     509,   517,   518,   519,   522,   523,   524
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
  "interface_metodos", "interface_metodo_declaration",
  "encabezado_implement", "implement_declaration", "atributos",
  "atributo_declaration", "metodos_clase", "metodo_declaration",
  "encabezado_funcion", "funcion_declaration", "herencia_composicion",
  "sentencias_metodo", "local_function_declaration",
  "sentencias_funcion_local", "parametro",
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
      54,    55,    56,    56,    57,    58,    59,    60,    60,    61,
      62,    62,    63,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    68,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    72,    73,    74,    74,    75,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    80,
      80,    80,    80,    81,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    90,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    93,    93,    93,    94,    94,
      94,    95,    95,    95,    96,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     3,     2,     6,
       2,     4,     2,     0,     5,     4,     5,     2,     0,     2,
       2,     0,     2,     2,     7,     0,     2,     0,     3,     3,
       3,     0,     7,     3,     3,     3,     0,     2,     1,     4,
       0,     7,     1,     2,     3,     1,     1,     3,     5,     2,
       4,     3,     1,     1,     4,     6,     1,     3,     0,     8,
       6,     5,     7,     1,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       5,     4,     4,     4,     3,     3,     3,     3,     5,     6,
       3,     1,     0,     3,     3,     3,     4,     5,     5,     3,
       1,     3,     3,     3,     1,     1,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   134,   135,   136,     0,     0,     0,     0,     0,
      98,     0,    62,     0,    99,     0,     0,     0,     5,     0,
       0,     9,     0,    10,     0,    12,     0,    13,     0,    15,
      14,    22,    11,    16,    17,    18,    19,    20,   112,    21,
       0,     0,    24,    43,    28,    30,     0,     0,    97,     0,
       0,     0,    73,    66,    72,     0,    78,    63,    65,    69,
       0,     1,     4,     6,     7,     8,    38,    33,    38,    60,
     131,   133,   132,   112,     0,   111,    23,     0,     0,     0,
       0,    91,    92,    93,    94,   128,     0,     0,    89,    90,
       0,     0,    88,   120,   125,   130,     0,   105,   106,   107,
     104,   113,     0,    76,     0,    71,    67,     2,     0,     0,
       0,    58,     0,     0,     0,     0,     0,    27,    25,    35,
       0,     0,     0,   124,   129,     0,    87,     0,     0,    86,
       0,     0,     0,   103,    78,    70,     0,    74,    64,     0,
      37,    45,    31,    32,     0,    45,     0,     0,    57,     0,
       0,    95,   101,   102,   110,    41,     0,   119,     0,     0,
      81,    83,     0,   115,     0,   114,    85,   126,   127,     0,
       0,    68,    77,    39,     0,    40,     0,     0,    60,    36,
       0,    51,     0,   100,     0,    45,   121,   123,   122,     0,
      80,     0,     0,   116,    75,    46,    42,    29,     0,    59,
       0,    96,     0,   108,    61,    82,    84,   118,   117,     0,
       0,    44,     0,     0,     0,     0,   109,    79,    34,    49,
      48,    60,    50,     0,     0,    56,     0,    52,     0,     0,
       0,    54,    53,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,   151,    19,    20,    21,    42,    22,    23,
      24,    25,   109,   143,    26,    27,   108,   140,   141,   175,
      28,    29,   177,   200,   215,   226,   112,    30,    31,    32,
      57,    58,    33,    59,    34,   102,    35,   160,   205,    90,
      91,   152,    36,    37,    38,    74,    39,   103,   122,    93,
      94,    95,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
     249,    25,  -172,  -172,  -172,    38,    57,    86,    24,     9,
      59,    43,  -172,   175,  -172,   377,    87,   280,  -172,    80,
      84,  -172,    90,  -172,   100,  -172,   109,  -172,   112,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,    44,  -172,
      25,     8,   117,  -172,   155,  -172,   131,   141,  -172,   154,
      78,   177,  -172,  -172,  -172,   187,    88,   178,  -172,   115,
     216,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,    61,
    -172,  -172,  -172,   107,   189,   194,   117,   196,   208,   214,
     202,  -172,  -172,  -172,  -172,  -172,   209,   107,  -172,  -172,
     206,    88,   434,    60,  -172,  -172,   210,  -172,   226,  -172,
    -172,     5,    63,    20,   222,   107,    20,  -172,   393,    15,
     124,  -172,   102,   227,   182,   313,   107,  -172,  -172,  -172,
     230,   209,   229,    35,  -172,   313,    20,   273,   337,    88,
     146,   146,    88,  -172,    88,    88,    88,  -172,  -172,   225,
    -172,    14,  -172,  -172,   231,    16,   265,   240,  -172,   377,
     313,  -172,  -172,  -172,   228,  -172,   236,  -172,   146,   146,
     165,  -172,   209,    60,   209,    60,    20,  -172,  -172,    -6,
     118,    20,    20,  -172,   243,  -172,   245,   247,    61,  -172,
     268,  -172,   344,  -172,    -2,    21,  -172,    60,    60,   313,
    -172,   253,   257,  -172,  -172,  -172,  -172,  -172,   167,  -172,
     417,  -172,   107,  -172,  -172,   283,  -172,  -172,  -172,   269,
     179,  -172,   270,   274,   271,   276,  -172,  -172,  -172,  -172,
    -172,    61,  -172,   241,   279,  -172,   433,  -172,   282,   289,
     292,  -172,  -172,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,   -12,     0,  -172,  -171,  -104,   286,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,   261,  -172,  -105,  -172,
    -102,  -129,  -172,  -172,   104,  -172,  -164,  -172,  -172,  -172,
    -172,   232,  -172,   233,  -172,   198,  -172,  -172,  -172,  -172,
     248,  -107,  -172,  -172,  -172,   260,  -172,   -28,  -110,   -53,
      28,   -36,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -48
static const yytype_int16 yytable[] =
{
      18,    96,    75,    60,   139,   145,   139,   144,   153,    77,
      96,   156,   176,    96,   198,    18,   176,    63,   161,    92,
       5,     5,     5,   113,    70,    71,    72,     5,    52,   212,
     193,   106,   127,   123,    54,   128,   202,    75,   174,    46,
     134,   -26,   -26,   183,    47,    96,   -47,   142,   179,    41,
     185,   124,   191,   204,   192,   228,   176,   223,   127,    49,
      63,   128,    43,   126,     2,     3,     4,    50,   123,   124,
      70,    71,    72,   158,   163,   165,   159,   130,   131,    73,
     154,    44,   206,    96,    48,   111,    96,    61,    96,    96,
      96,     2,     3,     4,    98,    99,   213,   136,   214,   137,
     180,   166,   130,   131,   169,   187,   188,   171,   172,   123,
      45,   123,    85,    64,    70,    71,    72,    65,     2,     3,
       4,    66,   229,    86,   214,     1,    87,     2,     3,     4,
     -41,    67,   113,    70,    71,    72,   146,   182,   147,    85,
      68,    70,    71,    72,     2,     3,     4,    69,   203,    18,
      86,    78,   136,   105,   194,    80,   -41,   -41,   167,   168,
      81,    82,    83,    84,    79,    85,   216,    70,    71,    72,
      85,    97,    70,    71,    72,   113,    86,   189,   190,    87,
      88,    89,    63,     1,    87,     2,     3,     4,     5,     6,
       7,    51,     8,     9,   100,    51,    10,    11,    52,    53,
      12,   146,    52,   209,    54,    55,    13,    14,    54,    55,
      56,   101,   104,   149,    56,   -45,    -3,     1,   150,     2,
       3,     4,     5,     6,     7,   115,     8,     9,   116,   117,
      10,    11,   118,    85,    12,    70,    71,    72,   119,   120,
      13,    14,   125,   133,   121,   132,    53,    87,   107,   -45,
       1,   148,     2,     3,     4,     5,     6,     7,   173,     8,
       9,   155,   184,    10,    11,   157,   178,    12,     2,     3,
       4,   181,   186,    13,    14,   146,   195,   224,   196,   197,
      15,     1,   -45,     2,     3,     4,     5,     6,     7,   207,
       8,     9,   199,   208,    10,    11,   217,    85,    12,    70,
      71,    72,   218,   219,    13,    14,   221,   220,   162,   222,
     225,    87,    62,   -45,     1,   231,     2,     3,     4,     5,
       6,     7,   232,     8,     9,   233,    76,    10,    11,   110,
     230,    12,   170,   114,   135,     0,   138,    13,    14,     0,
     129,     0,     0,     0,   149,     1,   -45,     2,     3,     4,
       5,     6,     7,     0,     8,     9,     0,     0,    10,    11,
       0,    85,    12,    70,    71,    72,     0,     0,    13,    14,
       0,     0,   164,     0,     0,    87,   201,   -45,     1,     0,
       2,     3,     4,     5,     6,     7,     0,     8,     9,     0,
       0,    10,    11,     0,     1,    12,     2,     3,     4,   -41,
       0,    13,    14,     0,     0,     0,     0,     0,     0,     0,
     -45,     0,     0,     0,     0,     0,     0,   -41,     1,     0,
       2,     3,     4,     5,     0,   -41,   -41,     0,     9,     0,
       0,    10,    11,     0,     1,    12,     2,     3,     4,     5,
       0,   210,    14,     0,     9,     0,     0,    10,    11,   211,
       0,    12,     0,    81,    82,    83,    84,   210,    14,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,     0,
       0,     0,   127,    88,    89,   128
};

static const yytype_int16 yycheck[] =
{
       0,    47,    38,    15,   108,   110,   110,   109,   115,     1,
      56,   121,   141,    59,   178,    15,   145,    17,   125,    47,
       6,     6,     6,    69,    26,    27,    28,     6,    23,   200,
      36,    59,    38,    86,    29,    41,    38,    73,    24,    15,
      35,    33,    34,   150,    35,    91,    32,    32,    32,    24,
     155,    87,   162,    32,   164,   226,   185,   221,    38,    16,
      60,    41,    24,    91,     3,     4,     5,    24,   121,   105,
      26,    27,    28,    38,   127,   128,    41,    42,    43,    35,
     116,    24,   189,   129,    25,    24,   132,     0,   134,   135,
     136,     3,     4,     5,    16,    17,   200,    34,   200,    36,
     146,   129,    42,    43,   132,   158,   159,   135,   136,   162,
      24,   164,    24,    33,    26,    27,    28,    33,     3,     4,
       5,    31,   226,    35,   226,     1,    38,     3,     4,     5,
       6,    31,   178,    26,    27,    28,    34,   149,    36,    24,
      31,    26,    27,    28,     3,     4,     5,    35,   184,   149,
      35,    34,    34,    38,    36,    24,    32,    33,   130,   131,
      19,    20,    21,    22,     9,    24,   202,    26,    27,    28,
      24,    17,    26,    27,    28,   221,    35,    12,    13,    38,
      39,    40,   182,     1,    38,     3,     4,     5,     6,     7,
       8,    16,    10,    11,    17,    16,    14,    15,    23,    24,
      18,    34,    23,    36,    29,    30,    24,    25,    29,    30,
      35,    24,    34,    31,    35,    33,     0,     1,    36,     3,
       4,     5,     6,     7,     8,    36,    10,    11,    34,    33,
      14,    15,    24,    24,    18,    26,    27,    28,    24,    37,
      24,    25,    36,    17,    35,    35,    24,    38,    32,    33,
       1,    24,     3,     4,     5,     6,     7,     8,    33,    10,
      11,    31,    34,    14,    15,    36,    35,    18,     3,     4,
       5,    31,    36,    24,    25,    34,    33,    36,    33,    32,
      31,     1,    33,     3,     4,     5,     6,     7,     8,    36,
      10,    11,    24,    36,    14,    15,    13,    24,    18,    26,
      27,    28,    33,    33,    24,    25,    35,    33,    35,    33,
      31,    38,    32,    33,     1,    33,     3,     4,     5,     6,
       7,     8,    33,    10,    11,    33,    40,    14,    15,    68,
     226,    18,   134,    73,   101,    -1,   104,    24,    25,    -1,
      92,    -1,    -1,    -1,    31,     1,    33,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    14,    15,
      -1,    24,    18,    26,    27,    28,    -1,    -1,    24,    25,
      -1,    -1,    35,    -1,    -1,    38,    32,    33,     1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    14,    15,    -1,     1,    18,     3,     4,     5,     6,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    24,     1,    -1,
       3,     4,     5,     6,    -1,    32,    33,    -1,    11,    -1,
      -1,    14,    15,    -1,     1,    18,     3,     4,     5,     6,
      -1,    24,    25,    -1,    11,    -1,    -1,    14,    15,    32,
      -1,    18,    -1,    19,    20,    21,    22,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      14,    15,    18,    24,    25,    31,    45,    46,    47,    48,
      49,    50,    52,    53,    54,    55,    58,    59,    64,    65,
      71,    72,    73,    76,    78,    80,    86,    87,    88,    90,
      96,    24,    51,    24,    24,    24,    15,    35,    25,    16,
      24,    16,    23,    24,    29,    30,    35,    74,    75,    77,
      46,     0,    32,    47,    33,    33,    31,    31,    31,    35,
      26,    27,    28,    35,    89,    95,    51,     1,    34,     9,
      24,    19,    20,    21,    22,    24,    35,    38,    39,    40,
      83,    84,    91,    93,    94,    95,    96,    17,    16,    17,
      17,    24,    79,    91,    34,    38,    91,    32,    60,    56,
      60,    24,    70,    96,    89,    36,    34,    33,    24,    24,
      37,    35,    92,    93,    95,    36,    91,    38,    41,    84,
      42,    43,    35,    17,    35,    77,    34,    36,    75,    50,
      61,    62,    32,    57,    64,    62,    34,    36,    24,    31,
      36,    47,    85,    85,    95,    31,    92,    36,    38,    41,
      81,    85,    35,    93,    35,    93,    91,    94,    94,    91,
      79,    91,    91,    33,    24,    63,    65,    66,    35,    32,
      96,    31,    46,    85,    34,    62,    36,    93,    93,    12,
      13,    92,    92,    36,    36,    33,    33,    32,    70,    24,
      67,    32,    38,    95,    32,    82,    85,    36,    36,    36,
      24,    32,    49,    50,    64,    68,    95,    13,    33,    33,
      33,    35,    33,    70,    36,    31,    69,    32,    49,    50,
      68,    33,    33,    33
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

  case 22:

/* Line 1455 of yacc.c  */
#line 56 "gramatica.ypp"
    { if(SyntacticActions::checkReturnScope()) IntermediateCodeGenerator::returnStatement(); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 59 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de variables") ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 60 "gramatica.ypp"
    { Logger::logError("Falta especificar el tipo de las variables") ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 63 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(3) - (3)].string))){
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(3) - (3)].string));
                                                        SyntacticActions::setIdType((yyvsp[(3) - (3)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(3) - (3)].string), "variable");
                                                }
                                        ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 69 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(1) - (1)].string))){
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (1)].string));
                                                        SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable");
                                                }
                                        ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 75 "gramatica.ypp"
    { Logger::logError("declaracion de variables invalida") ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 78 "gramatica.ypp"
    {
                                        if (SyntacticActions::checkRedeclaration((yyvsp[(2) - (2)].string))) {
                                                IntermediateCodeGenerator::isInvalidScope = true;
                                                IntermediateCodeGenerator::addScope("remove");
                                        } else {
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-clase");
                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                        }
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 90 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase");
                                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 94 "gramatica.ypp"
    { if (SyntacticActions::checkRedeclaration((yyvsp[(2) - (2)].string))) {
                                                        IntermediateCodeGenerator::isInvalidScope = true;
                                                        IntermediateCodeGenerator::addScope("remove");
                                                } else {
                                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                        SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-interfaz");
                                                        IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                                }
                                                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 105 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz");
                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 113 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz");
                                                                                SyntacticActions::addParamToMethod((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 118 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(4) - (4)].string))){
                                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                                                SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "nombre-clase");
                                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (4)].string));
                                                                SyntacticActions::addClassComposition((yyvsp[(4) - (4)].string));
                                                                (yyval.string) = (yyvsp[(4) - (4)].string);
                                                        }else{
                                                                IntermediateCodeGenerator::isInvalidScope = true;
                                                                IntermediateCodeGenerator::addScope("remove");
                                                        }
                                                        ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 132 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz");
                                                                                if(!IntermediateCodeGenerator::isInvalidScope && !SyntacticActions::classImplementsInterfaceMethods((yyvsp[(1) - (5)].string))){
                                                                                        IntermediateCodeGenerator::isInvalidScope = true;
                                                                                        IntermediateCodeGenerator::addScope("remove");
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 145 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase") ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 152 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo") ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 155 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(2) - (2)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-funcion");
                                                string aux = (yyvsp[(2) - (2)].string);
                                                string label = "inic_func";
                                                IntermediateCodeGenerator::addLabelTerceto(label, (yyvsp[(2) - (2)].string));
                                                IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                                (yyval.string) = (yyvsp[(2) - (2)].string);
                                        }
                                ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 167 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion");
                                                                                        SyntacticActions::addParamToMethod((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].string));
                                                                                        IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 174 "gramatica.ypp"
    { SyntacticActions::addClassComposition((yyvsp[(1) - (2)].string)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 178 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 179 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 180 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 181 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 184 "gramatica.ypp"
    {      Logger::infoMsg("Declaracion de funcion local");
                                                                                                                SyntacticActions::addParamToMethod((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].string));
                                                                                                                IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)) ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 189 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 190 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 191 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales");
                                                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 193 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 196 "gramatica.ypp"
    { 
                                        IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (2)].string));
        SyntacticActions::setIdType((yyvsp[(2) - (2)].string));
                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "parametro");
                                (yyval.string) = (yyvsp[(2) - (2)].string);
                                 ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 202 "gramatica.ypp"
    { Logger::logError("Falta el tipo del argumento") ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 203 "gramatica.ypp"
    { Logger::logError("Solo se permite un parametro en declaracion de funcion") ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 204 "gramatica.ypp"
    { (yyval.string) = NULL; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 207 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos");
                                                                                        SyntacticActions::checkDeclaredClass((yyvsp[(3) - (7)].string)) ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 214 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredClass((yyvsp[(1) - (2)].string))) {
                                                        SyntacticActions::lastType = (yyvsp[(1) - (2)].string);
                                                        SyntacticActions::addClassToObjects((yyvsp[(1) - (2)].string));
                                                }
                                                Logger::infoMsg("Declaracion de objeto") ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 225 "gramatica.ypp"
    { if(!SyntacticActions::checkRedeclaration((yyvsp[(1) - (1)].string))){
                                IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (1)].string));
                                SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                                SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable-objeto");
                                SyntacticActions::addObject((yyvsp[(1) - (1)].string));
                        }
                ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 234 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple");
                                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string)) && SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 236 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo");
                                if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (5)].string)) && SyntacticActions::checkHasMember((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), NULL, (yyvsp[(5) - (5)].string))) {
                                        char *aux = (char*) malloc(sizeof((yyvsp[(1) - (5)].string)) + sizeof((yyvsp[(3) - (5)].string)) + 2);
                                        sprintf(aux, "%s.%s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                                        IntermediateCodeGenerator::addTerceto((yyvsp[(4) - (5)].string), aux, (yyvsp[(5) - (5)].string));
                                }
                        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 243 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 244 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 245 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 248 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '=';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 254 "gramatica.ypp"
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
#line 263 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion");
                                if(SyntacticActions::checkDeclaredMethod((yyvsp[(1) - (4)].string)) && SyntacticActions::checkParameters((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string))) IntermediateCodeGenerator::addTerceto("INVOKE", (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 265 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo");
                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (6)].string)) && SyntacticActions::checkHasMember((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string))){
                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (6)].string)) + sizeof((yyvsp[(3) - (6)].string)) + 2);
                                sprintf(aux, "%s.%s", (yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string));
                                IntermediateCodeGenerator::addTerceto("INVOKE", aux, (yyvsp[(5) - (6)].string));
                                }
                        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 274 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 275 "gramatica.ypp"
    { Logger::logError("Solo se permite un argumento en invocacion de funcion") ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 276 "gramatica.ypp"
    { char *aux = (char*) malloc(2);
                        aux[0] = '-';
                        (yyval.string) = aux; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 281 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa");
                                                                                IntermediateCodeGenerator::ifElseExpression((yyvsp[(3) - (8)].string), (yyvsp[(5) - (8)].string), (yyvsp[(7) - (8)].string)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 283 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE");
                                                                        IntermediateCodeGenerator::ifExpression((yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 285 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 286 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 289 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("BI", "", "-");
                                        IntermediateCodeGenerator::addStack(IntermediateCodeGenerator::lastTerceto);
                                        IntermediateCodeGenerator::addLabelTerceto();
                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 296 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control");
                                                                IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                                IntermediateCodeGenerator::endCondition();
                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 300 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado derecho de comparacion") ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 301 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado izquierdo de comparacion") ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 302 "gramatica.ypp"
    { Logger::logError("Se esperaba un operador de comparacion") ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 305 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '<';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 311 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '>';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 317 "gramatica.ypp"
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
#line 324 "gramatica.ypp"
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
#line 331 "gramatica.ypp"
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
#line 338 "gramatica.ypp"
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
#line 347 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 348 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 351 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT");
                        IntermediateCodeGenerator::addTerceto("PRINT", (yyvsp[(2) - (2)].string), "-"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 353 "gramatica.ypp"
    { Logger::logError("Se esperaba cadena para imprimir") ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 354 "gramatica.ypp"
    { Logger::logError("Falta sentencia PRINT") ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 357 "gramatica.ypp"
    { if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        IntermediateCodeGenerator::forBlock((yyvsp[(1) - (5)].string), (yyvsp[(5) - (5)].string));
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 362 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 368 "gramatica.ypp"
    { Logger::logWarning("Falta parentesis en los argumentos del bloque for");
                                                                                if(!IntermediateCodeGenerator::isInvalidScope){
                                                                                        IntermediateCodeGenerator::forBlock((yyvsp[(1) - (4)].string), (yyvsp[(4) - (4)].string));
                                                                                }
                                                                                IntermediateCodeGenerator::onScopeFinished();
                                                                                ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 376 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (4)].string);
                                        IntermediateCodeGenerator::addScope("for");
                                        if(!SyntacticActions::checkRedeclaration((yyvsp[(2) - (4)].string))){
                                                IntermediateCodeGenerator::setVarScope((yyvsp[(2) - (4)].string));
                                                SyntacticActions::setIdUse((yyvsp[(2) - (4)].string), "variable");
                                                SyntacticActions::lastType = "short";
                                                SyntacticActions::setIdType((yyvsp[(2) - (4)].string)); }
                                        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 384 "gramatica.ypp"
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

  case 105:

/* Line 1455 of yacc.c  */
#line 394 "gramatica.ypp"
    { Logger::logError("Se esperaba una variable") ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 395 "gramatica.ypp"
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

  case 107:

/* Line 1455 of yacc.c  */
#line 405 "gramatica.ypp"
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

  case 108:

/* Line 1455 of yacc.c  */
#line 417 "gramatica.ypp"
    { if(SyntacticActions::checkForArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string))){
                                                                        IntermediateCodeGenerator::forArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string));
                                                                } else {
                                                                        IntermediateCodeGenerator::isInvalidScope = true;
                                                                        IntermediateCodeGenerator::addScope("remove");
                                                                }
                                                                ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 424 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(6) - (6)].string));
                                                                        char *aux = (char*) malloc(sizeof((yyvsp[(6) - (6)].string)) + 2);
                                                                        sprintf(aux, "-%s", (yyvsp[(6) - (6)].string));
                                                                        if(SyntacticActions::checkForArguments((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string), aux)){
                                                                        IntermediateCodeGenerator::forArguments((yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string), aux);
                                                                        } else {
                                                                                IntermediateCodeGenerator::isInvalidScope = true;
                                                                                IntermediateCodeGenerator::addScope("remove");
                                                                        }
                                                                        ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 434 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 2 encontrados") ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 435 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 1 encontrados") ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 436 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, ninguno encontrado") ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 439 "gramatica.ypp"
    { Logger::infoMsg("Acceso a atributo");
                                        if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (3)].string)) && SyntacticActions::checkHasMember((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (3)].string)) + sizeof((yyvsp[(3) - (3)].string)) + 2);
                                                sprintf(aux, "%s.%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = aux;
                                        }
                                ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 449 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                        } 
                                        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 454 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                        }
                                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 459 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida") ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 460 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string))) {
                                                                IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); 
                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                                };}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 464 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string))) {
                                                                IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string));
                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                                }  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 468 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 469 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 472 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida") ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 473 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                        IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); 
                                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                } else {
                                                        (yyval.string) = NULL;
                                                }  ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 479 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                                        IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); 
                                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                                } else {
                                                        (yyval.string) = NULL;
                                                }  ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 488 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 489 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                        IntermediateCodeGenerator::addTerceto("*", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                }  ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 493 "gramatica.ypp"
    { if (SyntacticActions::checkTypes((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string))) {
                                        SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string));
                                        IntermediateCodeGenerator::addTerceto("/", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); 
                                        (yyval.string) = IntermediateCodeGenerator::getLastTerceto();
                                        }  ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 500 "gramatica.ypp"
    { if(SyntacticActions::checkDeclaredVar((yyvsp[(1) - (1)].string))) (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 501 "gramatica.ypp"
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
#line 509 "gramatica.ypp"
    { if(SyntacticActions::checkLimits((yyvsp[(1) - (1)].string))){
                                        (yyval.string) = (yyvsp[(1) - (1)].string);        
                                }else{
                                        (yyval.string) = NULL;
                                }
                                ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 517 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 518 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 519 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 522 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 523 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 524 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2623 "gramatica.tab.cpp"
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



