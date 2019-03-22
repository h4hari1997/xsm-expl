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
	int a,type,Ptype;

#line 79 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    OR = 270,
    AND = 271,
    NOT = 272,
    ID = 273,
    ASSIGN = 274,
    START = 275,
    END = 276,
    DECL = 277,
    ENDDECL = 278,
    BRKP = 279,
    READ = 280,
    WRITE = 281,
    IF = 282,
    THEN = 283,
    ELSE = 284,
    ENDIF = 285,
    WHILE = 286,
    DO = 287,
    ENDWHILE = 288,
    BREAK = 289,
    CONTINUE = 290,
    REPEAT = 291,
    UNTIL = 292,
    RETURN = 293,
    MAIN = 294,
    INT = 295,
    STR = 296,
    STRING = 297
  };
#endif
/* Tokens.  */
#define NUM 258
#define PLUS 259
#define MINUS 260
#define MUL 261
#define DIV 262
#define MOD 263
#define LT 264
#define GT 265
#define LE 266
#define GE 267
#define EQ 268
#define NE 269
#define OR 270
#define AND 271
#define NOT 272
#define ID 273
#define ASSIGN 274
#define START 275
#define END 276
#define DECL 277
#define ENDDECL 278
#define BRKP 279
#define READ 280
#define WRITE 281
#define IF 282
#define THEN 283
#define ELSE 284
#define ENDIF 285
#define WHILE 286
#define DO 287
#define ENDWHILE 288
#define BREAK 289
#define CONTINUE 290
#define REPEAT 291
#define UNTIL 292
#define RETURN 293
#define MAIN 294
#define INT 295
#define STR 296
#define STRING 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "ex1.y" /* yacc.c:355  */

	struct tnode *no;

#line 207 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,     2,
      47,    48,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    36,    37,    40,    46,    49,    50,    53,
      55,    56,    59,    60,    63,    64,    65,    66,    68,    74,
      75,    78,    87,    96,    97,    98,   101,   112,   125,   126,
     129,   130,   132,   133,   135,   137,   138,   139,   140,   144,
     148,   151,   152,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   166,   167,   168,   169,   172,   175,   176,   177,
     178,   181,   182,   185,   186,   187,   190,   193,   196,   199,
     202,   203,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "PLUS", "MINUS", "MUL", "DIV",
  "MOD", "LT", "GT", "LE", "GE", "EQ", "NE", "OR", "AND", "NOT", "ID",
  "ASSIGN", "START", "END", "DECL", "ENDDECL", "BRKP", "READ", "WRITE",
  "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK",
  "CONTINUE", "REPEAT", "UNTIL", "RETURN", "MAIN", "INT", "STR", "STRING",
  "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "'&'", "$accept",
  "program", "GdeclBlock", "GDecllist", "GDecl", "Type", "GidList", "Gid",
  "FDefBlock", "Fdef", "MainBlock", "ParamList", "Param", "Ptype",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "Body", "Slist", "Stmt",
  "InputStmt", "OutputStmt", "AsgStmt", "Ifstmt", "Whilestmt", "Breakstmt",
  "Continuestmt", "Debugstmt", "Returnstmt", "ArgList", "E", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    59,    44,    91,    93,    40,    41,   123,
     125,    38
};
# endif

#define YYPACT_NINF -94

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-94)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,   -20,   -22,    28,    93,   -94,   -94,   -94,   -94,    71,
     -94,     0,    22,   -94,   -22,    19,    93,   -94,   -94,   -94,
     -94,    23,    20,   137,   -94,    59,    63,   -94,   -94,   -94,
     117,   143,   -94,     0,    79,   143,    89,   -94,   -94,   -21,
     -94,     8,   -94,   108,    51,   154,   143,   -94,   177,   -94,
      75,   180,   153,   200,   -94,   -94,   -94,    16,    85,   -94,
     398,   155,   108,   158,   188,   -94,   150,   -94,   -94,   189,
     -10,   -94,   -94,   161,   206,   209,   210,   494,   -94,   -94,
     494,    26,   420,   -94,   166,   211,   215,   216,   217,   218,
     219,   220,   222,   -94,   180,   -94,   -94,   -94,    24,   245,
      26,    26,    25,    26,    26,    26,   516,   442,   -94,   248,
      27,   -94,    26,   249,   551,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   223,   250,   -94,    26,
     551,   235,   252,    61,    76,   134,   148,   224,   225,   -94,
      26,    -2,   162,   -94,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,   -94,   -94,
     551,    -6,   226,    26,   -94,   -94,   247,   244,    26,    26,
     278,   -94,    83,   551,   -94,   184,   184,   260,   260,   260,
     565,   565,   565,   565,   565,   565,   181,    96,   260,    26,
      26,   -94,   292,   494,   494,   207,   221,   233,    26,   -94,
     551,   306,    84,   376,   457,   244,   -94,    26,   551,   261,
      26,   -94,   494,   -94,   -94,   349,    26,   363,   479,   -94,
     551,   231,   -94,   -94
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     6,    10,    11,     0,
       8,     0,     0,     1,    10,     0,     0,    20,     3,     5,
       7,     0,    14,     0,    13,     0,     0,    19,     2,    17,
       0,    25,     9,     0,     0,    25,     0,    28,    29,     0,
      24,     0,    12,     0,     0,    15,     0,    18,     0,    26,
       0,     0,     0,     0,    23,    27,    31,     0,     0,    33,
       0,     0,     0,     0,     0,    37,     0,    30,    32,     0,
       0,    40,    68,     0,     0,     0,     0,     0,    66,    67,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,    16,    38,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      89,    88,     0,     0,    69,    39,    41,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,    35,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,    92,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    36,
      60,     0,     0,     0,    52,    56,     0,     0,     0,     0,
       0,    94,     0,    71,    77,    72,    73,    74,    75,    76,
      82,    83,    80,    81,    78,    79,    85,    84,    86,     0,
       0,    55,     0,     0,     0,     0,     0,    90,     0,    95,
      58,     0,     0,     0,     0,    65,    64,     0,    70,     0,
       0,    53,     0,    62,    63,     0,     0,     0,     0,    91,
      59,     0,    61,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   -94,   316,    34,   -94,   293,   -94,   311,
      62,   294,   282,    21,   268,   -94,   273,   -94,   238,   -75,
     -82,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,   -93
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    10,    11,    23,    24,    16,    17,
       5,    39,    40,    41,    51,    58,    59,    66,    61,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     172,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   108,   106,     6,   109,   107,    21,   130,   131,   100,
     134,   135,   136,   189,    48,     1,   110,    12,    22,   142,
       7,     8,    64,    46,   116,   116,    49,    47,    13,   108,
     127,   132,   109,     2,    65,   101,   160,    26,    15,   190,
     111,    29,   128,   133,   110,   112,   171,   170,   173,   113,
      15,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    30,    18,    31,   111,    25,
     192,    57,   140,   112,   141,   195,   196,   113,    28,    57,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,    19,    46,   200,   201,    56,    52,
     144,   145,   146,   147,   148,   208,   163,    34,    67,   164,
      35,     7,     8,   157,   215,    37,    38,   217,   203,   204,
      36,   116,   116,   220,   165,    37,    38,   198,    43,   210,
      50,   199,   211,    14,     8,    45,   116,   218,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
      32,    33,   166,    37,    38,   144,   145,   146,   147,   148,
     146,   147,   148,    97,    98,    55,   167,   156,   157,    53,
      60,   157,    62,    63,    95,    93,    96,    99,   102,   117,
     174,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   103,   118,   205,   104,   105,   119,   120,
     121,   122,   123,   124,   129,   125,   139,   143,   159,   206,
     162,   168,   169,   158,   191,   193,   194,   157,   207,   223,
     216,   161,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   197,    20,    42,    27,    54,    44,
      94,    68,   126,     0,     0,     0,     0,     0,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,   219,     0,     0,     0,     0,
      72,    73,    74,    75,    69,   212,   213,    76,    77,   221,
      78,    79,    80,     0,    81,     0,    70,     0,     0,    71,
       0,     0,    72,    73,    74,    75,    69,     0,     0,    76,
      77,     0,    78,    79,    80,     0,    81,     0,    70,     0,
       0,   115,     0,     0,    72,    73,    74,    75,    69,     0,
       0,    76,    77,     0,    78,    79,    80,     0,    81,     0,
      70,     0,     0,    69,     0,     0,    72,    73,    74,    75,
       0,     0,     0,    76,    77,    70,    78,    79,    80,   138,
      81,    72,    73,    74,    75,    69,     0,     0,    76,    77,
     214,    78,    79,    80,     0,    81,     0,    70,     0,     0,
      69,     0,     0,    72,    73,    74,    75,     0,     0,   222,
      76,    77,    70,    78,    79,    80,     0,    81,    72,    73,
      74,    75,    69,     0,     0,    76,    77,     0,    78,    79,
      80,     0,    81,     0,    70,     0,     0,     0,     0,     0,
      72,    73,    74,    75,     0,     0,     0,   137,    77,     0,
      78,    79,    80,     0,    81,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   144,
     145,   146,   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,
     155,   156,   157
};

static const yytype_int16 yycheck[] =
{
      82,     3,    77,    23,     6,    80,     6,   100,   101,    19,
     103,   104,   105,    19,     6,    22,    18,    39,    18,   112,
      40,    41,     6,    44,   106,   107,    18,    48,     0,     3,
       6,     6,     6,    40,    18,    45,   129,    18,     4,    45,
      42,    18,    18,    18,    18,    47,    48,   140,   141,    51,
      16,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    45,     4,    47,    42,    47,
     163,    50,    45,    47,    47,   168,   169,    51,    16,    58,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    23,    44,   189,   190,    23,    48,
       4,     5,     6,     7,     8,   198,    45,    48,    23,    48,
      47,    40,    41,    17,   207,    40,    41,   210,   193,   194,
       3,   203,   204,   216,    48,    40,    41,    44,    49,    45,
      22,    48,    48,    40,    41,    46,   218,   212,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      43,    44,    48,    40,    41,     4,     5,     6,     7,     8,
       6,     7,     8,    43,    44,    18,    48,    16,    17,    45,
      20,    17,    49,     3,    46,    50,    18,    18,    47,    43,
      48,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    47,    43,    48,    47,    47,    43,    43,
      43,    43,    43,    43,    19,    43,    18,    18,    18,    48,
      18,    47,    47,    50,    48,    28,    32,    17,    45,    48,
      19,    46,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    46,     9,    33,    16,    46,    35,
      62,    58,    94,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    46,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,     6,    29,    30,    31,    32,    46,
      34,    35,    36,    -1,    38,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    26,    27,     6,    -1,    -1,    31,
      32,    -1,    34,    35,    36,    -1,    38,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    25,    26,    27,     6,    -1,
      -1,    31,    32,    -1,    34,    35,    36,    -1,    38,    -1,
      18,    -1,    -1,     6,    -1,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    18,    34,    35,    36,    37,
      38,    24,    25,    26,    27,     6,    -1,    -1,    31,    32,
      33,    34,    35,    36,    -1,    38,    -1,    18,    -1,    -1,
       6,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    30,
      31,    32,    18,    34,    35,    36,    -1,    38,    24,    25,
      26,    27,     6,    -1,    -1,    31,    32,    -1,    34,    35,
      36,    -1,    38,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      34,    35,    36,    -1,    38,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    22,    40,    53,    54,    62,    23,    40,    41,    55,
      56,    57,    39,     0,    40,    57,    60,    61,    62,    23,
      56,     6,    18,    58,    59,    47,    18,    61,    62,    18,
      45,    47,    43,    44,    48,    47,     3,    40,    41,    63,
      64,    65,    59,    49,    63,    46,    44,    48,     6,    18,
      22,    66,    48,    45,    64,    18,    23,    65,    67,    68,
      20,    70,    49,     3,     6,    18,    69,    23,    68,     6,
      18,    21,    24,    25,    26,    27,    31,    32,    34,    35,
      36,    38,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    50,    66,    46,    18,    43,    44,    18,
      19,    45,    47,    47,    47,    47,    71,    71,     3,     6,
      18,    42,    47,    51,    83,    21,    72,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    70,     6,    18,    19,
      83,    83,     6,    18,    83,    83,    83,    31,    37,    18,
      45,    47,    83,    18,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    50,    18,
      83,    46,    18,    45,    48,    48,    48,    48,    47,    47,
      83,    48,    82,    83,    48,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    19,
      45,    48,    83,    28,    32,    83,    83,    46,    44,    48,
      83,    83,    46,    71,    71,    48,    48,    45,    83,    46,
      45,    48,    29,    30,    33,    83,    19,    83,    71,    46,
      83,    46,    30,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    55,    55,    56,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    61,    62,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    74,    75,    75,    75,
      75,    76,    76,    77,    77,    77,    78,    79,    80,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     3,     2,     2,     1,     3,
       1,     1,     3,     1,     1,     4,     7,     2,     4,     2,
       1,     9,     8,     3,     1,     0,     2,     3,     1,     1,
       3,     2,     2,     1,     3,     3,     4,     1,     2,     3,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     7,    10,     5,     4,     3,     6,     9,
       4,     9,     7,     7,     6,     6,     1,     1,     1,     2,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       4,     7,     2,     2,     3,     4
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
#line 35 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 37 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "ex1.y" /* yacc.c:1646  */
    {
											declprint(Ghead);
											initialxsmcode();
											localbind=1;
											parambind=1;
									}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 46 "ex1.y" /* yacc.c:1646  */
    {initialxsmcode();}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 55 "ex1.y" /* yacc.c:1646  */
    {type = inttype;}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 56 "ex1.y" /* yacc.c:1646  */
    {type = stringtype;}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 63 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0].no)->varname,type,1,1,_ID_,NULL);}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-3].no)->varname,type,(yyvsp[-1].no)->val,1,_ARRAY_,NULL);}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 65 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-6].no)->varname,type,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,_MATRIX_,NULL);}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0].no)->varname,type,1,1,_PTR_,NULL);}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "ex1.y" /* yacc.c:1646  */
    {
																			GInstall((yyvsp[-3].no)->varname,type,0,0,_FUNC_,Phead);
																			Phead=Ptail=NULL;
																		}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "ex1.y" /* yacc.c:1646  */
    {
																																	funcdef(type,(yyvsp[-7].no),Phead,(yyvsp[-1].no));
																																	Phead=Ptail=NULL;
																																	Lhead=Ltail=NULL;
																																	localbind=1;
																																	parambind=1;
																														}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "ex1.y" /* yacc.c:1646  */
    {
																																	mainfundef((yyvsp[-1].no));
																																	Lhead=Ltail=NULL;
																																	Phead=Ptail=NULL;
																																	localbind=1;
																																	parambind=1;
																													}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 101 "ex1.y" /* yacc.c:1646  */
    {
																  	struct Paramstruct *temp;
																		temp=PLookup((yyvsp[0].no)->varname);
																		if(temp!=NULL)
																		{
																			printf("Mutiple Declaration For %s variable in Paramlist ",(yyvsp[0].no)->varname);
																			exit(0);
																		}
																		PInstall((yyvsp[0].no)->varname,Ptype,_ID_);
																	}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 112 "ex1.y" /* yacc.c:1646  */
    {
																		  	struct Paramstruct *temp;
																				temp=PLookup((yyvsp[0].no)->varname);
																				if(temp!=NULL)
																				{
																					printf("Mutiple Declaration For %s variable in Paramlist ",(yyvsp[0].no)->varname);
																					exit(0);
																				}
																				PInstall((yyvsp[0].no)->varname,Ptype,_PTR_);
																			}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 125 "ex1.y" /* yacc.c:1646  */
    {Ptype = inttype;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 126 "ex1.y" /* yacc.c:1646  */
    {Ptype = stringtype;}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 137 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,Ptype,_ID_);}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 138 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,Ptype,_PTR_);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 139 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,Ptype,_ID_);}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,Ptype,_PTR_);}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 144 "ex1.y" /* yacc.c:1646  */
    {
															//codeGen($2);
															(yyval.no) = (yyvsp[-1].no);
													}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 148 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 151 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_BODY_,(yyvsp[-1].no),NULL,(yyvsp[0].no));}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 152 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 155 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 156 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 157 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 158 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 159 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 160 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 161 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 162 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 163 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 166 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_,(yyvsp[-1].no),NULL,NULL);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 167 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_ARRAY_,(yyvsp[-4].no),(yyvsp[-2].no),NULL);}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 168 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_MATRIX_,(yyvsp[-7].no),(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 169 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_READ_PTR_,(yyvsp[-1].no),NULL,NULL);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 172 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_WRITE_,(yyvsp[-1].no),NULL,NULL);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 175 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 176 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_ARRAY_,(yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[0].no));}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 177 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_MATRIX_,(yyvsp[-8].no),createTree(0,-1,"\0",_BODY_,(yyvsp[-6].no),(yyvsp[-3].no),NULL),(yyvsp[0].no));}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 178 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ASSIGN_PTR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 181 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,-1,"\0",_IF_THEN_ELSE_,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no));}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 182 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0, -1,"\0",_IF_THEN_,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 185 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,-1,"\0",_WHILE_,(yyvsp[-4].no),NULL,(yyvsp[-1].no));}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 186 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_REPEAT_UNTIL_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 187 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_DO_WHILE_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 190 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_BREAK_,NULL,NULL,NULL);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 193 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_CONTINUE_,NULL,NULL,NULL);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 196 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_BRKP_,NULL,NULL,NULL);}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 199 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_RET_,(yyvsp[0].no),NULL,NULL);}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 202 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ARG_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 203 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,-1,"\0",_ARG_,NULL,NULL,(yyvsp[0].no));}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 206 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_PLUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 207 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_MINUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 208 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_MUL_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 209 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_DIV_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 210 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, inttype, "\0",_MOD_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 211 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 212 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_EQ_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 213 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_NE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 214 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_LE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 215 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_GE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 216 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_LT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 217 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_GT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 218 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_AND_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 219 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_OR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 220 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, booltype, "\0",_NOT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 221 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 222 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 223 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 224 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_ARRAY_,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 225 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-6].no)->type,(yyvsp[-6].no)->varname,_MATRIX_,(yyvsp[-6].no),(yyvsp[-4].no),(yyvsp[-1].no));}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 226 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_PTR_,(yyvsp[0].no),NULL,NULL);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 227 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_ADDR_,(yyvsp[0].no),NULL,NULL);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 228 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-2].no)->type,(yyvsp[-2].no)->varname,_FUNC_,(yyvsp[-2].no),NULL,NULL);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 229 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_FUNC_,(yyvsp[-3].no),NULL,(yyvsp[-1].no));}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2035 "y.tab.c" /* yacc.c:1646  */
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
#line 232 "ex1.y" /* yacc.c:1906  */


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
	yyparse();
	return 0;
}
