/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ex1.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include "ex1.h"
	#include "ex1.c"
	int yylex(void);
	int yyerror(char const *);
	extern FILE *yyin;
	int a,type;

#line 79 "ex1.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    PLUS = 259,
    MINUS = 260,
    MUL = 261,
    DIV = 262,
    MOD = 263,
    LT = 264,
    GT = 265,
    LE = 266,
    GE = 267,
    EQ = 268,
    NE = 269,
    ID = 270,
    ASSIGN = 271,
    START = 272,
    END = 273,
    DECL = 274,
    ENDDECL = 275,
    BRKP = 276,
    READ = 277,
    WRITE = 278,
    IF = 279,
    THEN = 280,
    ELSE = 281,
    ENDIF = 282,
    WHILE = 283,
    DO = 284,
    ENDWHILE = 285,
    BREAK = 286,
    CONTINUE = 287,
    REPEAT = 288,
    UNTIL = 289,
    INT = 290,
    STR = 291,
    STRING = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "ex1.y" /* yacc.c:355  */

	struct tnode *no;

#line 158 "ex1.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 175 "ex1.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
      42,    43,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    37,    40,    43,    44,    47,    49,    50,
      53,    54,    55,    56,    57,    58,    59,    60,    63,    66,
      69,    70,    73,    74,    75,    76,    77,    78,    79,    80,
      84,    85,    86,    87,    90,    93,    94,    95,    96,    97,
     100,   101,   104,   105,   106,   109,   112,   115,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "PLUS", "MINUS", "MUL", "DIV",
  "MOD", "LT", "GT", "LE", "GE", "EQ", "NE", "ID", "ASSIGN", "START",
  "END", "DECL", "ENDDECL", "BRKP", "READ", "WRITE", "IF", "THEN", "ELSE",
  "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK", "CONTINUE", "REPEAT",
  "UNTIL", "INT", "STR", "STRING", "';'", "','", "'['", "']'", "'('",
  "')'", "'&'", "$accept", "program", "Declarations", "Decllist", "Decl",
  "Type", "Varlist", "Body", "Slist", "Stmt", "InputStmt", "OutputStmt",
  "AsgStmt", "Ifstmt", "Whilestmt", "Breakstmt", "Continuestmt",
  "Debugstmt", "E", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    59,    44,
      91,    93,    40,    41,    38
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -40

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-40)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,    50,    46,    33,   -40,   -40,   -40,    67,   -40,    32,
     -40,   339,   -40,   -40,   -40,    36,    25,    29,    54,    23,
     -40,   -40,    31,    59,    62,    73,   415,   -40,   -40,   415,
     358,   -40,    78,    81,    82,    83,    84,    85,    87,    89,
     -40,   121,   -40,    99,   147,    -1,     0,   103,     0,     0,
       0,   434,   319,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   123,   150,   127,     0,   -40,   151,   128,
     -40,     0,   155,   464,   156,   199,   157,   -27,    70,    86,
     126,   131,   132,   135,   -40,   173,   464,   -40,     0,   137,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -40,    24,   136,     0,   -40,   -40,   153,   152,
       0,     0,   179,   142,   210,   -40,    12,    12,   -40,   -40,
     -40,   475,   475,   475,   475,   475,   475,     0,     0,   -40,
     248,   415,   415,   148,   188,   143,   145,   146,   464,   259,
       5,     2,   377,   152,   -40,   -40,   184,     0,   172,     0,
     -40,   415,   -40,   -40,   149,   270,     0,   308,   396,   -40,
     -40,   464,   182,   -40,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     4,     8,     9,     0,     6,     0,
       1,     0,     2,     3,     5,     0,    14,     0,     0,     0,
      19,    47,     0,     0,     0,     0,     0,    45,    46,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    20,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,    10,     0,    60,     0,    62,
      61,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    13,     0,    38,    65,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,    30,    34,     0,     0,
       0,     0,     0,     0,     0,    53,    48,    49,    50,    51,
      52,    58,    59,    56,    57,    54,    55,     0,     0,    33,
       0,     0,     0,     0,     0,     0,    11,    63,    36,     0,
       0,     0,     0,    44,    43,    16,     0,     0,     0,     0,
      31,     0,    41,    42,     0,     0,     0,     0,     0,    12,
      64,    37,     0,    40,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -40,   -40,   -40,   -40,   219,   -40,   -40,   -40,   -25,   -30,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -39
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,     8,     9,    17,    12,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    51,    67,    67,    52,    68,    68,    75,    18,    78,
      79,    80,     1,   105,    69,    69,   106,    19,    93,    94,
      95,    54,    54,    21,    22,    23,    24,    86,   151,   152,
      25,    26,    89,    27,    28,    29,    70,    70,    15,    45,
     127,    71,    71,    72,    74,   149,    10,    16,   150,   114,
      11,    40,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    46,   128,    41,   130,    42,    43,    44,
       4,   133,   134,    47,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     5,     6,    13,   138,   139,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    48,     5,     6,    49,    64,   141,   142,   155,    76,
     157,    54,    54,   107,    65,    50,    55,   161,    77,    56,
      57,    58,    59,    60,    63,    61,   158,    62,    54,   108,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    66,    83,    84,    87,    85,    88,   109,
      90,   102,   104,   110,   111,   112,   113,   -39,   131,   129,
     115,   132,   135,   136,   145,   146,   147,   154,   156,     0,
     159,   143,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   164,    14,     0,     0,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   160,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
      21,    22,    23,    24,     0,    18,     0,    25,    26,   162,
      27,    28,    29,    82,    19,     0,     0,    20,     0,     0,
      21,    22,    23,    24,    18,     0,     0,    25,    26,     0,
      27,    28,    29,    19,     0,     0,    53,     0,     0,    21,
      22,    23,    24,    18,     0,     0,    25,    26,     0,    27,
      28,    29,    19,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    18,     0,     0,    25,    26,   153,    27,    28,
      29,    19,     0,     0,     0,     0,     0,    21,    22,    23,
      24,    18,     0,   163,    25,    26,     0,    27,    28,    29,
      19,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      18,     0,     0,    25,    26,     0,    27,    28,    29,    19,
       0,     0,     0,     0,     0,    21,    22,    23,    24,     0,
       0,     0,    81,    26,     0,    27,    28,    29,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    91,
      92,    93,    94,    95,   -40,   -40,   -40,   -40,   -40,   -40
};

static const yytype_int16 yycheck[] =
{
      30,    26,     3,     3,    29,     6,     6,    46,     6,    48,
      49,    50,    19,    40,    15,    15,    43,    15,     6,     7,
       8,    51,    52,    21,    22,    23,    24,    66,    26,    27,
      28,    29,    71,    31,    32,    33,    37,    37,     6,    16,
      16,    42,    42,    44,    44,    40,     0,    15,    43,    88,
      17,    15,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    40,    40,    40,   105,    38,    39,    15,
      20,   110,   111,    42,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    35,    36,    20,   127,   128,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    42,    35,    36,    42,     6,   131,   132,   147,     6,
     149,   141,   142,    43,    15,    42,    38,   156,    15,    38,
      38,    38,    38,    38,     3,    38,   151,    38,   158,    43,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    16,    41,    15,    15,    40,    40,    43,
      15,    15,    15,    42,    42,    40,     3,    38,    25,    43,
      43,    29,     3,    41,    41,    40,    40,     3,    16,    -1,
      41,    43,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    43,     7,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,     6,    -1,    28,    29,    41,
      31,    32,    33,    34,    15,    -1,    -1,    18,    -1,    -1,
      21,    22,    23,    24,     6,    -1,    -1,    28,    29,    -1,
      31,    32,    33,    15,    -1,    -1,    18,    -1,    -1,    21,
      22,    23,    24,     6,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,     6,    -1,    -1,    28,    29,    30,    31,    32,
      33,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,     6,    -1,    27,    28,    29,    -1,    31,    32,    33,
      15,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
       6,    -1,    -1,    28,    29,    -1,    31,    32,    33,    15,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    19,    46,    47,    20,    35,    36,    48,    49,    50,
       0,    17,    52,    20,    49,     6,    15,    51,     6,    15,
      18,    21,    22,    23,    24,    28,    29,    31,    32,    33,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      15,    40,    38,    39,    15,    16,    40,    42,    42,    42,
      42,    53,    53,    18,    54,    38,    38,    38,    38,    38,
      38,    38,    38,     3,     6,    15,    16,     3,     6,    15,
      37,    42,    44,    63,    44,    63,     6,    15,    63,    63,
      63,    28,    34,    41,    15,    40,    63,    15,    40,    63,
      15,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    41,    15,    40,    43,    43,    43,    43,
      42,    42,    40,     3,    63,    43,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    16,    40,    43,
      63,    25,    29,    63,    63,     3,    41,    41,    63,    63,
      41,    53,    53,    43,    43,    41,    40,    40,    41,    40,
      43,    26,    27,    30,     3,    63,    16,    63,    53,    41,
      41,    63,    41,    27,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    51,    51,    51,    51,    51,    51,    51,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    56,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    59,    60,    61,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     1,     3,     1,     1,
       3,     6,     9,     4,     1,     4,     7,     2,     3,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     7,    10,     5,     4,     3,     6,     9,     4,     4,
       9,     7,     7,     6,     6,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     4,     7,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 29 "ex1.y" /* yacc.c:1646  */
    {	inorderprint((yyvsp[0].no));
																fprintf(target_file,"MOV SP, %d\n",bind);
																codeGen((yyvsp[0].no));
																xsmterminate();
																exit(0);
															}
#line 1424 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "ex1.y" /* yacc.c:1646  */
    {
											declprint(Ghead);
										}
#line 1432 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 49 "ex1.y" /* yacc.c:1646  */
    {type = inttype;}
#line 1438 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "ex1.y" /* yacc.c:1646  */
    {type = stringtype;}
#line 1444 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[0].no)->varname,type,1,1,_ID_);}
#line 1450 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[-3].no)->varname,type,(yyvsp[-1].no)->val,1,_ARRAY_);}
#line 1456 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[-6].no)->varname,type,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,_MATRIX_);}
#line 1462 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[0].no)->varname,type,1,1,_PTR_);}
#line 1468 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[0].no)->varname,type,1,1,_ID_);}
#line 1474 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[-3].no)->varname,type,(yyvsp[-1].no)->val,1,_ARRAY_);}
#line 1480 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[-6].no)->varname,type,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,_MATRIX_);}
#line 1486 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 60 "ex1.y" /* yacc.c:1646  */
    {Install((yyvsp[0].no)->varname,type,1,1,_PTR_);}
#line 1492 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "ex1.y" /* yacc.c:1646  */
    {
															(yyval.no) = (yyvsp[-1].no);
													}
#line 1500 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 66 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1506 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_BODY_,(yyvsp[-1].no),NULL,(yyvsp[0].no));}
#line 1512 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 70 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 1518 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 73 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1524 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 74 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1530 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 75 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1536 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 76 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1542 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 77 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1548 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 78 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1554 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 79 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1560 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 80 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1566 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 84 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_,(yyvsp[-1].no),NULL,NULL);}
#line 1572 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 85 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_ARRAY_,(yyvsp[-4].no),(yyvsp[-2].no),NULL);}
#line 1578 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 86 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_MATRIX_,(yyvsp[-7].no),(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1584 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 87 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_PTR_,(yyvsp[-1].no),NULL,NULL);}
#line 1590 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 90 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_WRITE_,(yyvsp[-1].no),NULL,NULL);}
#line 1596 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1602 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 94 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_ARRAY_,(yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[0].no));}
#line 1608 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 95 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_MATRIX_,(yyvsp[-8].no),createTree(0,-1,"\0",_BODY_,(yyvsp[-6].no),(yyvsp[-3].no),NULL),(yyvsp[0].no));}
#line 1614 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 96 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_PTR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1620 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 97 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_PTR_ADDR_,(yyvsp[-3].no),NULL,(yyvsp[0].no));}
#line 1626 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 100 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,-1,"\0",_IF_THEN_ELSE_,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1632 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 101 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0, -1,"\0",_IF_THEN_,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1638 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 104 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,-1,"\0",_WHILE_,(yyvsp[-4].no),NULL,(yyvsp[-1].no));}
#line 1644 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 105 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_REPEAT_UNTIL_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 1650 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 106 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_DO_WHILE_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 1656 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 109 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_BREAK_,NULL,NULL,NULL);}
#line 1662 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 112 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_CONTINUE_,NULL,NULL,NULL);}
#line 1668 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 115 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_BRKP_,NULL,NULL,NULL);}
#line 1674 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 118 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_PLUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1680 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 119 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_MINUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1686 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 120 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_MUL_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1692 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 121 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_DIV_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1698 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 122 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_MOD_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1704 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 123 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 1710 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_EQ_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1716 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 125 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_NE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1722 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 126 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_LE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1728 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 127 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_GE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1734 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 128 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_LT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1740 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 129 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_GT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1746 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 130 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1752 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 131 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1758 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 132 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1764 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_ARRAY_,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1770 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-6].no)->type,(yyvsp[-6].no)->varname,_MATRIX_,(yyvsp[-6].no),(yyvsp[-4].no),(yyvsp[-1].no));}
#line 1776 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 135 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_PTR_,(yyvsp[0].no),NULL,NULL);}
#line 1782 "ex1.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 136 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_ADDR_,(yyvsp[0].no),NULL,NULL);}
#line 1788 "ex1.tab.c" /* yacc.c:1646  */
    break;


#line 1792 "ex1.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 139 "ex1.y" /* yacc.c:1906  */


int yyerror(char const *s)
{
	printf("yyerror %s",s);
}


int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1],"r");
	if(fp)
		yyin=fp;
	target_file=fopen("ex1.xsm","w");
	fprintf(target_file,"0\n2056\n0\n0\n0\n0\n0\n0\n");
	yyparse();
	return 0;
}
