
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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

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
     297,   299,   301,   303,   307,   310,   312,   314,   323,   331,
     339,   347,   355,   361,   365,   367,   368,   372,   376,   380,
     385,   391,   397,   401,   403,   407,   411,   415,   417,   419,
     423,   427,   429,   432,   434,   436,   438,   440,   442,   444
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    31,    46,    32,    -1,    31,    46,    -1,
      46,    32,    -1,    47,    -1,    46,    47,    -1,    48,    33,
      -1,    49,    33,    -1,    50,    -1,    52,    -1,    70,    -1,
      53,    -1,    57,    -1,    68,    -1,    62,    -1,    73,    -1,
      75,    -1,    77,    -1,    83,    -1,    84,    -1,    86,    -1,
      69,    -1,    92,    51,    -1,     1,    51,    -1,    51,    34,
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
      -1,    66,    65,    33,    -1,    -1,    92,    24,    -1,    24,
      -1,    67,    34,    92,    24,    -1,    -1,    10,    15,    24,
      37,    31,    60,    32,    -1,    18,    -1,    24,    71,    -1,
      71,    34,    72,    -1,    72,    -1,    24,    -1,    24,    74,
      87,    -1,    24,    30,    24,    74,    87,    -1,    24,    74,
      -1,    24,    30,    24,    74,    -1,    24,    74,    38,    -1,
      29,    -1,    23,    -1,    24,    35,    76,    36,    -1,    24,
      30,    24,    35,    76,    36,    -1,    87,    -1,    76,    34,
      87,    -1,    -1,    11,    35,    80,    36,    78,    12,    79,
      13,    -1,    11,    35,    80,    36,    78,    13,    -1,    11,
      35,    80,    36,    78,    -1,    11,    35,    80,    36,    78,
      12,    79,    -1,    82,    -1,    82,    -1,    87,    81,    87,
      -1,    87,    81,    -1,    81,    87,    -1,    87,    -1,    39,
      -1,    40,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    47,    -1,    31,    46,    32,    -1,    14,    25,    -1,
      14,    -1,    25,    -1,    15,    24,    16,    17,    35,    85,
      36,    82,    -1,    24,    16,    17,    35,    85,    36,    82,
      -1,    15,    16,    17,    35,    85,    36,    82,    -1,    15,
      24,    16,    35,    85,    36,    82,    -1,    15,    24,    17,
      35,    85,    36,    82,    -1,    91,    34,    91,    34,    91,
      -1,    91,    34,    91,    -1,    91,    -1,    -1,    24,    30,
      24,    -1,    87,    41,    89,    -1,    87,    38,    89,    -1,
      92,    35,    87,    36,    -1,    87,    41,    35,    88,    36,
      -1,    87,    38,    35,    88,    36,    -1,    35,    88,    36,
      -1,    89,    -1,    35,    88,    36,    -1,    89,    41,    89,
      -1,    89,    38,    89,    -1,    89,    -1,    90,    -1,    89,
      42,    90,    -1,    89,    43,    90,    -1,    24,    -1,    38,
      91,    -1,    91,    -1,    26,    -1,    28,    -1,    27,    -1,
       3,    -1,     4,    -1,     5,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    29,    30,    33,    34,    37,    38,    41,
      42,    43,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    55,    56,    59,    60,    63,    66,    69,    72,    76,
      80,    81,    84,    89,    93,    97,    98,   101,   104,   105,
     108,   111,   113,   116,   117,   120,   121,   122,   123,   126,
     130,   131,   132,   134,   137,   139,   140,   141,   144,   147,
     150,   153,   154,   157,   161,   163,   168,   169,   170,   173,
     179,   188,   189,   196,   197,   198,   201,   202,   203,   204,
     207,   209,   211,   212,   213,   214,   217,   223,   229,   236,
     243,   250,   259,   260,   263,   265,   266,   269,   272,   275,
     276,   279,   284,   285,   286,   287,   290,   296,   297,   298,
     299,   300,   301,   302,   307,   308,   309,   310,   313,   314,
     315,   318,   319,   323,   326,   327,   328,   331,   332,   333
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
  "argumento_bucle_for", "acceso_atributo", "expresion",
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
      84,    84,    85,    85,    85,    85,    86,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    88,    89,    89,
      89,    90,    90,    90,    91,    91,    91,    92,    92,    92
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
       1,     1,     1,     3,     2,     1,     1,     8,     7,     7,
       7,     7,     5,     3,     1,     0,     3,     3,     3,     4,
       5,     5,     3,     1,     3,     3,     3,     1,     1,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   127,   128,   129,     0,     0,     0,     0,     0,
      95,     0,    59,     0,    96,     0,     0,     0,     5,     0,
       0,     9,    10,    12,     0,    13,    15,    14,    22,    11,
      16,    17,    18,    19,    20,    21,     0,     0,    24,    32,
       0,     0,     0,     0,    94,     0,     0,     0,    70,    63,
      69,     0,    75,    60,    62,    66,     0,     1,     4,     6,
       7,     8,    57,    23,     0,     0,     0,    36,    31,     0,
      88,    89,    90,    91,   121,   124,   126,   125,     0,     0,
      86,    87,     0,     0,    85,   113,   118,   123,     0,     0,
       0,     0,     0,   106,     0,    73,     0,    68,    64,     2,
      55,     0,     0,    27,    25,     0,     0,     0,     0,     0,
       0,   117,   122,     0,    84,     0,     0,    83,     0,     0,
       0,   105,     0,   105,   105,   105,    75,    67,     0,    71,
      61,     0,     0,    54,    39,     0,    35,    44,    29,     0,
      30,    39,     0,   112,     0,     0,     0,    92,    78,    80,
       0,   108,     0,   107,    82,   119,   120,     0,     0,   104,
     105,     0,     0,     0,     0,    65,    74,     0,    48,    44,
      37,    38,     0,     0,    57,    42,   114,   116,   115,     0,
       0,    77,     0,     0,   109,     0,     0,     0,     0,     0,
       0,    72,    56,     0,     0,    40,     0,    28,     0,    58,
      93,    79,    81,   111,   110,    99,   103,     0,   100,   101,
      98,     0,    41,     0,     0,     0,     0,    34,    43,     0,
      76,     0,    97,    46,    45,    57,    47,    33,   102,     0,
       0,    53,     0,    49,     0,     0,     0,    51,    50,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,   147,    19,    20,    21,    38,    22,    23,
     107,    24,   140,    25,   106,   136,   137,   171,    26,   173,
     193,   216,   232,   101,    27,    28,    29,    53,    54,    30,
      55,    31,    94,    32,   148,   201,    82,    83,   149,    33,
      34,   158,    35,    95,   110,    85,    86,    87,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -186
static const yytype_int16 yypact[] =
{
     219,    -7,  -186,  -186,  -186,    83,   108,   112,   158,   125,
     188,    10,  -186,   179,  -186,   347,   228,   250,  -186,   198,
     199,  -186,  -186,  -186,   200,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,    -7,    30,   187,  -186,
       5,   205,   215,    99,  -186,   224,   129,   225,  -186,  -186,
    -186,   222,   137,   229,  -186,   150,   186,  -186,  -186,  -186,
    -186,  -186,    57,   187,   233,   238,   248,  -186,  -186,   236,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,    70,    -5,
    -186,  -186,   240,   137,   130,   124,  -186,  -186,   242,   244,
      51,   245,   257,    44,    59,    28,   261,    -5,    28,  -186,
    -186,    88,   271,  -186,  -186,   265,   111,    14,   268,    70,
     264,   174,  -186,   283,    28,   243,   307,   137,   221,   221,
     137,    -5,   267,    -5,    -5,    -5,   137,   137,   137,  -186,
    -186,   202,   272,  -186,  -186,   273,  -186,     4,  -186,   269,
    -186,  -186,   274,  -186,   221,   221,   347,  -186,   171,  -186,
      70,   124,    70,   124,    28,  -186,  -186,   121,   275,   278,
      -5,   277,   287,   290,   122,    28,    28,   281,  -186,     4,
    -186,  -186,   276,    21,    57,    27,  -186,   124,   124,   314,
     283,  -186,   291,   294,  -186,   283,    -5,   300,   283,   283,
     283,  -186,  -186,   363,    48,  -186,   304,  -186,   145,  -186,
    -186,   327,  -186,  -186,  -186,  -186,   309,   283,  -186,  -186,
    -186,     9,  -186,   308,   311,   321,   316,  -186,  -186,   326,
    -186,    -5,  -186,  -186,  -186,    57,  -186,  -186,  -186,   204,
     329,  -186,   388,  -186,   330,   337,   340,  -186,  -186,  -186
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,   -13,     1,  -186,  -185,  -103,   339,  -186,  -186,
    -186,  -102,  -186,  -186,  -186,  -186,   -59,  -186,  -126,   207,
    -186,   147,  -186,  -167,  -186,  -186,  -186,  -186,   286,  -186,
     292,  -186,   258,  -186,  -186,  -186,  -186,   299,   -79,  -186,
    -186,   -95,  -186,   -28,   -96,   -74,    80,   -73,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
      88,    18,    56,   135,   111,   139,   112,   198,   213,    88,
       5,   172,    88,   142,    66,    84,    18,    37,    59,   102,
       5,    75,    76,    77,   112,    47,    45,    98,   161,   162,
     163,    64,    48,     5,    46,   111,    67,   -42,    50,    51,
      88,   151,   153,   172,    52,   196,   138,   234,   159,   172,
     159,   159,   159,   197,   182,   114,   183,    59,   229,   199,
       2,     3,     4,   -26,   -26,   187,   115,    48,   122,   116,
     177,   178,   196,    50,    88,   169,   111,    88,   111,   126,
     217,   100,   175,    88,    88,    88,   123,   159,   167,   154,
     214,   215,   157,   128,    74,   129,    75,    76,    77,   165,
     166,   202,     2,     3,     4,   109,   205,    39,    79,   208,
     209,   210,     1,   206,     2,     3,     4,   -39,    70,    71,
      72,    73,   131,    74,   132,    75,    76,    77,   222,   235,
     215,   102,    40,   179,    78,   -39,    41,    79,    80,    81,
       2,     3,     4,   -39,   -39,    90,    91,    18,   228,    70,
      71,    72,    73,     2,     3,     4,   128,   184,   191,   115,
      43,    74,   116,    75,    76,    77,   118,   119,   115,    80,
      81,   116,    78,    42,    74,    79,    75,    76,    77,   131,
      59,   219,   102,   180,   181,    78,    -3,     1,    97,     2,
       3,     4,     5,     6,     7,    47,     8,     9,   155,   156,
      10,    11,    48,    49,    12,     2,     3,     4,    50,    51,
      13,    14,   144,    44,    52,   145,   118,   119,    99,   -42,
       1,    65,     2,     3,     4,     5,     6,     7,    57,     8,
       9,    60,    61,    10,    11,    62,    68,    12,   131,    69,
     230,    89,    92,    13,    14,    74,    93,    75,    76,    77,
      15,     1,   -42,     2,     3,     4,     5,     6,     7,    79,
       8,     9,   104,    96,    10,    11,   103,    74,    12,    75,
      76,    77,   105,   108,    13,    14,   113,   120,   150,   121,
     124,    79,    58,   -42,     1,    49,     2,     3,     4,     5,
       6,     7,   125,     8,     9,   133,   134,    10,    11,   141,
     143,    12,   160,   168,   174,   192,   170,    13,    14,   195,
     176,   185,   186,   188,   146,     1,   -42,     2,     3,     4,
       5,     6,     7,   189,     8,     9,   190,   203,    10,    11,
     204,    74,    12,    75,    76,    77,   207,   218,    13,    14,
     220,   223,   152,   221,   224,    79,   200,   -42,     1,   226,
       2,     3,     4,     5,     6,     7,   225,     8,     9,   227,
     231,    10,    11,   237,     1,    12,     2,     3,     4,     5,
     238,    13,    14,   239,     9,    63,   194,    10,    11,   236,
     -42,    12,   130,   117,   164,   127,     0,   211,    14,     1,
       0,     2,     3,     4,     5,   212,     0,     0,     0,     9,
       0,     0,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,   211,    14,     0,     0,     0,     0,     0,     0,
     233
};

static const yytype_int16 yycheck[] =
{
      43,     0,    15,   106,    78,   107,    79,   174,   193,    52,
       6,   137,    55,   109,     9,    43,    15,    24,    17,    62,
       6,    26,    27,    28,    97,    16,    16,    55,   123,   124,
     125,     1,    23,     6,    24,   109,    31,    33,    29,    30,
      83,   115,   116,   169,    35,    24,    32,   232,   121,   175,
     123,   124,   125,    32,   150,    83,   152,    56,   225,    32,
       3,     4,     5,    33,    34,   160,    38,    23,    17,    41,
     144,   145,    24,    29,   117,   134,   150,   120,   152,    35,
      32,    24,   141,   126,   127,   128,    35,   160,   131,   117,
     193,   193,   120,    34,    24,    36,    26,    27,    28,   127,
     128,   180,     3,     4,     5,    35,   185,    24,    38,   188,
     189,   190,     1,   186,     3,     4,     5,     6,    19,    20,
      21,    22,    34,    24,    36,    26,    27,    28,   207,   232,
     232,   174,    24,   146,    35,    24,    24,    38,    39,    40,
       3,     4,     5,    32,    33,    16,    17,   146,   221,    19,
      20,    21,    22,     3,     4,     5,    34,    36,    36,    38,
      35,    24,    41,    26,    27,    28,    42,    43,    38,    39,
      40,    41,    35,    15,    24,    38,    26,    27,    28,    34,
     179,    36,   225,    12,    13,    35,     0,     1,    38,     3,
       4,     5,     6,     7,     8,    16,    10,    11,   118,   119,
      14,    15,    23,    24,    18,     3,     4,     5,    29,    30,
      24,    25,    38,    25,    35,    41,    42,    43,    32,    33,
       1,    34,     3,     4,     5,     6,     7,     8,     0,    10,
      11,    33,    33,    14,    15,    35,    31,    18,    34,    24,
      36,    17,    17,    24,    25,    24,    24,    26,    27,    28,
      31,     1,    33,     3,     4,     5,     6,     7,     8,    38,
      10,    11,    24,    34,    14,    15,    33,    24,    18,    26,
      27,    28,    24,    37,    24,    25,    36,    35,    35,    35,
      35,    38,    32,    33,     1,    24,     3,     4,     5,     6,
       7,     8,    35,    10,    11,    24,    31,    14,    15,    31,
      36,    18,    35,    31,    35,    24,    33,    24,    25,    33,
      36,    36,    34,    36,    31,     1,    33,     3,     4,     5,
       6,     7,     8,    36,    10,    11,    36,    36,    14,    15,
      36,    24,    18,    26,    27,    28,    36,    33,    24,    25,
      13,    33,    35,    34,    33,    38,    32,    33,     1,    33,
       3,     4,     5,     6,     7,     8,    35,    10,    11,    33,
      31,    14,    15,    33,     1,    18,     3,     4,     5,     6,
      33,    24,    25,    33,    11,    36,   169,    14,    15,   232,
      33,    18,    96,    84,   126,    93,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,    32,    -1,    -1,    -1,    11,
      -1,    -1,    14,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,    10,    11,
      14,    15,    18,    24,    25,    31,    45,    46,    47,    48,
      49,    50,    52,    53,    55,    57,    62,    68,    69,    70,
      73,    75,    77,    83,    84,    86,    92,    24,    51,    24,
      24,    24,    15,    35,    25,    16,    24,    16,    23,    24,
      29,    30,    35,    71,    72,    74,    46,     0,    32,    47,
      33,    33,    35,    51,     1,    34,     9,    31,    31,    24,
      19,    20,    21,    22,    24,    26,    27,    28,    35,    38,
      39,    40,    80,    81,    87,    89,    90,    91,    92,    17,
      16,    17,    17,    24,    76,    87,    34,    38,    87,    32,
      24,    67,    92,    33,    24,    24,    58,    54,    37,    35,
      88,    89,    91,    36,    87,    38,    41,    81,    42,    43,
      35,    35,    17,    35,    35,    35,    35,    74,    34,    36,
      72,    34,    36,    24,    31,    50,    59,    60,    32,    55,
      56,    31,    88,    36,    38,    41,    31,    47,    78,    82,
      35,    89,    35,    89,    87,    90,    90,    87,    85,    91,
      35,    85,    85,    85,    76,    87,    87,    92,    31,    60,
      33,    61,    62,    63,    35,    60,    36,    89,    89,    46,
      12,    13,    88,    88,    36,    36,    34,    85,    36,    36,
      36,    36,    24,    64,    63,    33,    24,    32,    67,    32,
      32,    79,    82,    36,    36,    82,    91,    36,    82,    82,
      82,    24,    32,    49,    50,    55,    65,    32,    33,    36,
      13,    34,    82,    33,    33,    35,    33,    33,    91,    67,
      36,    31,    66,    32,    49,    50,    65,    33,    33,    33
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

  case 9:

/* Line 1455 of yacc.c  */
#line 41 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de variables") ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 56 "gramatica.ypp"
    { if(SyntacticActions::checkReturnScope()) IntermediateCodeGenerator::returnStatement(); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 60 "gramatica.ypp"
    { Logger::logError("Falta especificar el tipo de las variables") ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 63 "gramatica.ypp"
    { IntermediateCodeGenerator::setVarScope((yyvsp[(3) - (3)].string));
                                                SyntacticActions::setIdType((yyvsp[(3) - (3)].string));
                                                SyntacticActions::setIdUse((yyvsp[(3) - (3)].string), "variable");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 66 "gramatica.ypp"
    { IntermediateCodeGenerator::setVarScope((yyvsp[(1) - (1)].string));
                                                SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                                                SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable"); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 69 "gramatica.ypp"
    { Logger::logError("declaracion de variables invalida") ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 72 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de clase");
                                                                                        SyntacticActions::setIdUse((yyvsp[(2) - (7)].string), "nombre-clase"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 76 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de interfaz");
                                                                SyntacticActions::setIdUse((yyvsp[(2) - (5)].string), "nombre-interfaz"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 84 "gramatica.ypp"
    { IntermediateCodeGenerator::addScope((yyvsp[(2) - (2)].string));
                                        (yyval.string) = (yyvsp[(2) - (2)].string);
                                        SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "nombre-funcion");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 89 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo de interfaz");
                                                                                IntermediateCodeGenerator::onScopeFinished() ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 93 "gramatica.ypp"
    { Logger::infoMsg("Implementacion de interfaz");
                                                                                                SyntacticActions::setIdUse((yyvsp[(2) - (8)].string), "nombre-clase"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 101 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de atributos de clase") ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 108 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de metodo") ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 111 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion");
                                                                                        IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 116 "gramatica.ypp"
    { Logger::infoMsg("Herencia por composicion"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 120 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 121 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 122 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 123 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 126 "gramatica.ypp"
    { Logger::infoMsg("Declaracion de funcion local");
                                                                                                                IntermediateCodeGenerator::onScopeFinished((yyvsp[(6) - (7)].string)) ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 130 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 131 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 132 "gramatica.ypp"
    { Logger::logError("No se permite anidamiento multiple de funciones locales");
                                                                                                (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 134 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 137 "gramatica.ypp"
    { SyntacticActions::setIdType((yyvsp[(2) - (2)].string));
                                SyntacticActions::setIdUse((yyvsp[(2) - (2)].string), "parametro"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 139 "gramatica.ypp"
    { Logger::logError("Falta el tipo del argumento") ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 140 "gramatica.ypp"
    { Logger::logError("Solo se permite un parametro en declaracion de funcion") ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 144 "gramatica.ypp"
    { Logger::infoMsg("Declaracion distribuida de metodos") ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 150 "gramatica.ypp"
    { SyntacticActions::lastType = (yyvsp[(1) - (2)].string) ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 157 "gramatica.ypp"
    { SyntacticActions::setIdType((yyvsp[(1) - (1)].string));
                        SyntacticActions::setIdUse((yyvsp[(1) - (1)].string), "variable-objeto"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 161 "gramatica.ypp"
    { Logger::infoMsg("Asignacion simple");
                                                IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)) ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 163 "gramatica.ypp"
    { Logger::infoMsg("Asignacion de atributo");
                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (5)].string)) + sizeof((yyvsp[(3) - (5)].string)) + 2);
                sprintf(aux, "%s.%s", (yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string));
                IntermediateCodeGenerator::addTerceto((yyvsp[(4) - (5)].string), aux, (yyvsp[(5) - (5)].string));
                ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 168 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 169 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 170 "gramatica.ypp"
    { Logger::logError("Asignacion vacia") ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 173 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '=';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 179 "gramatica.ypp"
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
#line 188 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de funcion"); IntermediateCodeGenerator::addTerceto("INVOKE", (yyvsp[(1) - (4)].string), "-"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 189 "gramatica.ypp"
    { Logger::infoMsg("Invocacion de metodo");
                        char *aux = (char*) malloc(sizeof((yyvsp[(1) - (6)].string)) + sizeof((yyvsp[(3) - (6)].string)) + 2);
                        sprintf(aux, "%s.%s", (yyvsp[(1) - (6)].string), (yyvsp[(3) - (6)].string));
                        IntermediateCodeGenerator::addTerceto("INVOKE", aux, "-");
                        ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 197 "gramatica.ypp"
    { Logger::logError("Solo se permite un argumento en invocacion de funcion") ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 201 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF completa"); IntermediateCodeGenerator::ifElseExpression((yyvsp[(3) - (8)].string), (yyvsp[(5) - (8)].string), (yyvsp[(7) - (8)].string)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 202 "gramatica.ypp"
    { Logger::infoMsg("Sentencia IF sin ELSE"); IntermediateCodeGenerator::ifExpression((yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].string)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 203 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 204 "gramatica.ypp"
    { Logger::logError("Falta sentencia END_IF") ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 207 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("BI", "", "-"); IntermediateCodeGenerator::addStack(IntermediateCodeGenerator::lastTerceto); (yyval.string) = IntermediateCodeGenerator::getLastTerceto() ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 211 "gramatica.ypp"
    { Logger::infoMsg("Condicion de control");  IntermediateCodeGenerator::addTerceto((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); IntermediateCodeGenerator::endCondition(); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 212 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado derecho de comparacion") ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 213 "gramatica.ypp"
    { Logger::logError("Se esperaba expresion en lado izquierdo de comparacion") ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 214 "gramatica.ypp"
    { Logger::logError("Se esperaba un operador de comparacion") ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 217 "gramatica.ypp"
    { 
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '<';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 223 "gramatica.ypp"
    {
                        char *aux = (char*) malloc(sizeof(char) * 2);
                        aux[0] = '>';
                        aux[1] = '\0';
                        (yyval.string) = aux;
                ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 229 "gramatica.ypp"
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
#line 236 "gramatica.ypp"
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
#line 243 "gramatica.ypp"
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
#line 250 "gramatica.ypp"
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
#line 259 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 260 "gramatica.ypp"
    { (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 263 "gramatica.ypp"
    { Logger::infoMsg("Sentencia PRINT");
                        IntermediateCodeGenerator::addTerceto("PRINT", (yyvsp[(2) - (2)].string), "-"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 265 "gramatica.ypp"
    { Logger::logError("Se esperaba cadena para imprimir") ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 266 "gramatica.ypp"
    { Logger::logError("Falta sentencia PRINT") ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 269 "gramatica.ypp"
    { Logger::infoMsg("Sentencia FOR");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(2) - (8)].string), (yyvsp[(8) - (8)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(2) - (8)].string), "variable"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 272 "gramatica.ypp"
    { Logger::logError("Falta sentencia FOR");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(1) - (7)].string), (yyvsp[(7) - (7)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(1) - (7)].string), "variable"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 275 "gramatica.ypp"
    { Logger::logError("Se esperaba una variable") ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 276 "gramatica.ypp"
    { Logger::logError("Falta sentencia RANGE");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(2) - (7)].string), (yyvsp[(7) - (7)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(2) - (7)].string), "variable"); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 279 "gramatica.ypp"
    { Logger::logError("Falta sentencia IN");
                                                                                IntermediateCodeGenerator::forBlock((yyvsp[(2) - (7)].string), (yyvsp[(7) - (7)].string));
                                                                                SyntacticActions::setIdUse((yyvsp[(2) - (7)].string), "variable"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 284 "gramatica.ypp"
    { IntermediateCodeGenerator::forArguments((yyvsp[(1) - (5)].string), (yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string)) ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 285 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 2 encontrados") ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 286 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, 1 encontrados") ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 287 "gramatica.ypp"
    { Logger::logError("Sentencia FOR recibe 3 parametros, ninguno encontrado") ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 290 "gramatica.ypp"
    { Logger::infoMsg("Acceso a atributo");
                                char *aux = (char*) malloc(sizeof((yyvsp[(1) - (3)].string)) + sizeof((yyvsp[(3) - (3)].string)) + 2);
                                sprintf(aux, "%s.%s", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string));
                                (yyval.string) = aux; ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 296 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 297 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 298 "gramatica.ypp"
    { Logger::logError("Conversion explicita no permitida") ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 299 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("+", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 300 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("-", (yyvsp[(1) - (5)].string), (yyvsp[(4) - (5)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto();;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 301 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(2) - (3)].string); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 302 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 307 "gramatica.ypp"
    { Logger::logError("Anidamiento de expresiones con parentesis no permitida") ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 313 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 314 "gramatica.ypp"
    { IntermediateCodeGenerator::addTerceto("*", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 315 "gramatica.ypp"
    { SyntacticActions::check_division_by_zero((yyvsp[(3) - (3)].string)); IntermediateCodeGenerator::addTerceto("/", (yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)); (yyval.string) = IntermediateCodeGenerator::getLastTerceto(); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 318 "gramatica.ypp"
    { (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 319 "gramatica.ypp"
    { SyntacticActions::addNegativeConstant((yyvsp[(2) - (2)].string));
                                char *aux = (char*) malloc(sizeof((yyvsp[(2) - (2)].string)) + 2);
                                sprintf(aux, "-%s", (yyvsp[(2) - (2)].string));
                                (yyval.string) = aux; ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 323 "gramatica.ypp"
    { SyntacticActions::checkLimits((yyvsp[(1) - (1)].string)); (yyval.string) = (yyvsp[(1) - (1)].string); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 326 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 327 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 328 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 331 "gramatica.ypp"
    { SyntacticActions::lastType = "short"; ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 332 "gramatica.ypp"
    { SyntacticActions::lastType = "uint"; ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 333 "gramatica.ypp"
    { SyntacticActions::lastType = "double"; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2346 "gramatica.tab.cpp"
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



