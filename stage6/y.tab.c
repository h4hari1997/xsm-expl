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
	int a;
	struct Typetable *type,*Ftype,*Ptype,*Ttype;

#line 80 "y.tab.c" /* yacc.c:339  */

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
    TYPE = 295,
    ENDTYPE = 296,
    INITIALIZE = 297,
    ALLOC = 298,
    FREE = 299,
    NIL = 300,
    INT = 301,
    STR = 302,
    STRING = 303
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
#define TYPE 295
#define ENDTYPE 296
#define INITIALIZE 297
#define ALLOC 298
#define FREE 299
#define NIL 300
#define INT 301
#define STR 302
#define STRING 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "ex1.y" /* yacc.c:355  */

	struct tnode *no;

#line 220 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   725

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,     2,
      55,    56,     2,     2,    52,     2,    57,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    42,    43,    46,    47,    50,
      50,    59,    60,    63,    66,    67,    68,    71,    77,    80,
      81,    84,    86,    87,    88,    98,    99,   102,   103,   104,
     105,   107,   113,   114,   117,   118,   119,   129,   138,   147,
     148,   149,   152,   163,   175,   176,   177,   187,   188,   190,
     191,   193,   195,   196,   197,   198,   201,   203,   206,   207,
     210,   211,   212,   213,   214,   215,   216,   217,   220,   221,
     222,   223,   224,   227,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   242,   243,   246,   247,   248,   251,
     254,   257,   260,   263,   264,   267,   277,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322
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
  "CONTINUE", "REPEAT", "UNTIL", "RETURN", "MAIN", "TYPE", "ENDTYPE",
  "INITIALIZE", "ALLOC", "FREE", "NIL", "INT", "STR", "STRING", "'{'",
  "'}'", "';'", "','", "'['", "']'", "'('", "')'", "'.'", "'&'", "$accept",
  "Program", "TypeDefBlock", "TypeDefList", "TypeDef", "$@1",
  "FieldDeclList", "FieldDecl", "TypeName", "GdeclBlock", "GDecllist",
  "GDecl", "Type", "GidList", "Gid", "FDefBlock", "Ftype", "Fdef",
  "MainBlock", "ParamList", "Param", "Ptype", "LdeclBlock", "LDecList",
  "LDecl", "IdList", "Body", "Slist", "Stmt", "InputStmt", "OutputStmt",
  "AsgStmt", "Ifstmt", "Whilestmt", "Breakstmt", "Continuestmt",
  "Debugstmt", "Returnstmt", "ArgList", "Field", "E", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   123,
     125,    59,    44,    91,    93,    40,    41,    46,    38
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,     0,    29,    -7,  -120,    -6,  -120,  -120,    14,    18,
      70,  -120,    51,  -120,  -120,  -120,  -120,  -120,  -120,    86,
    -120,    13,    12,  -120,    18,  -120,    70,   117,  -120,  -120,
      95,  -120,  -120,   134,   119,    63,  -120,    66,  -120,  -120,
     100,  -120,  -120,  -120,    84,  -120,   144,  -120,   165,   107,
    -120,    13,   132,   107,  -120,  -120,   187,   189,  -120,  -120,
    -120,    45,  -120,    15,  -120,   222,    71,  -120,   193,   107,
    -120,   229,  -120,   120,   230,   199,   246,  -120,  -120,  -120,
      28,   133,  -120,   535,   202,   222,   200,   235,  -120,   125,
    -120,  -120,   237,   -17,  -120,  -120,   201,   203,   204,   205,
     631,  -120,  -120,   631,   206,   557,  -120,   211,   212,   213,
     257,   258,   259,   260,   261,   -15,  -120,   230,  -120,  -120,
    -120,    44,   238,    10,   102,   295,    48,   102,   102,   102,
     653,   572,   296,   102,  -120,   294,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,    81,   298,   267,   301,  -120,   102,
    -120,   302,   118,   266,   268,  -120,  -120,   102,   304,   269,
     694,   343,  -120,   306,    50,    33,   181,   195,   209,   270,
     272,   126,   185,   501,  -120,   273,   694,  -120,  -120,  -120,
     694,  -120,   102,    38,   274,   275,   262,  -120,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,    -8,   277,   102,  -120,  -120,  -120,   307,   297,
     102,   102,  -120,  -120,  -120,   278,   357,  -120,   109,   694,
    -120,  -120,  -120,   104,   104,   319,   319,   319,   708,   708,
     708,   708,   708,   708,   223,   228,   319,   102,   102,  -120,
     371,   631,   631,   276,   290,  -120,   284,   102,  -120,   694,
     422,    42,   513,   594,   297,  -120,   102,   694,   320,   102,
    -120,   631,  -120,  -120,   436,   102,   450,   616,  -120,   694,
     282,  -120,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     0,     9,     0,     8,     1,     0,     0,
       0,     4,     0,     5,     7,    24,    18,    22,    23,     0,
      20,     0,     0,    36,    34,    35,     0,     0,    33,     3,
       0,    17,    19,     0,    27,     0,    26,     0,    32,     2,
       0,    16,    14,    15,     0,    12,     0,    30,     0,    41,
      21,     0,     0,    41,    10,    11,     0,     0,    46,    44,
      45,     0,    40,     0,    25,     0,     0,    13,    28,     0,
      31,     0,    42,     0,     0,     0,     0,    39,    43,    48,
       0,     0,    50,     0,     0,     0,     0,     0,    54,     0,
      47,    49,     0,     0,    57,    91,     0,     0,     0,     0,
       0,    89,    90,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    29,    55,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,     0,     0,    52,     0,
     112,     0,   116,     0,     0,   114,   113,     0,     0,   115,
      74,     0,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    80,    96,    37,    53,
      77,   119,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    72,    73,     0,     0,
       0,     0,    82,    83,    92,     0,     0,   121,     0,    94,
      78,    79,   102,    97,    98,    99,   100,   101,   107,   108,
     105,   106,   103,   104,   110,   109,   111,     0,     0,    71,
       0,     0,     0,     0,     0,    81,   117,     0,   122,    75,
       0,     0,     0,     0,    88,    87,     0,    93,     0,     0,
      69,     0,    85,    86,     0,     0,     0,     0,   118,    76,
       0,    84,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,  -120,   335,  -120,  -120,   299,  -120,  -120,
    -120,   322,   -22,  -120,   291,  -120,  -120,   318,    -3,   292,
     321,  -120,   308,  -120,   310,  -120,   279,   -97,  -104,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   -83,
    -119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    12,    44,    45,    46,    10,
      19,    20,    21,    35,    36,    26,    27,    28,    11,    61,
      62,    63,    74,    81,    82,    89,    84,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   135,   218,   159,
     160
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     115,   134,   123,   130,   144,   161,   131,    29,   166,   167,
     168,   237,     4,   150,   173,     8,   151,   115,     4,    33,
     115,    71,   115,    39,     1,   176,   134,   134,   152,     7,
     180,    34,    15,    72,    87,    13,   124,    16,   186,     9,
     125,   150,   145,   165,   151,   238,    88,   115,   115,   172,
     147,    80,   153,   154,   163,   155,   152,    22,   156,    80,
      17,    18,   148,   216,   219,   157,   164,    37,   158,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   155,   150,   240,   156,   151,    23,   206,
     145,   243,   244,   157,   217,   259,   158,    69,   260,   152,
      30,    70,    41,   204,    15,   150,   205,   125,   151,    31,
     190,   191,   192,    41,    50,    51,    24,    25,   249,   250,
     152,   201,    52,    69,   175,    58,   155,    75,   257,   156,
      42,    43,    17,    18,    54,    40,   157,   264,    15,   158,
     266,    42,    43,    79,   252,   253,   269,   155,   134,   134,
     156,    15,    47,    59,    60,    53,    90,   157,   115,   115,
     158,   247,    56,   134,   267,   248,    17,    18,    57,   115,
     115,   182,    48,   183,    49,   125,   120,   121,   115,    17,
      18,    65,   212,   125,   115,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   188,   189,   190,
     191,   192,   188,   189,   190,   191,   192,   207,    67,   200,
     201,   213,   145,    68,    73,   201,    76,    78,    85,    86,
      83,   208,   116,   119,   118,   122,   126,   149,   127,   128,
     129,   132,   136,   137,   138,   209,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   139,   140,
     141,   142,   143,   162,   171,   174,   177,   178,   222,   179,
     181,   184,   187,   185,   203,   210,   145,   211,   215,   242,
     220,   221,   254,   239,   245,   241,   201,   256,   272,   265,
      14,    32,    64,    55,    38,    66,   255,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,     0,
      77,    91,     0,   117,     0,     0,   146,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,     0,     0,
       0,     0,     0,     0,     0,     0,   258,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   270,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,    95,    96,    97,
      98,    92,   261,   262,    99,   100,     0,   101,   102,   103,
       0,     0,   214,    93,     0,     0,    94,   104,     0,    95,
      96,    97,    98,    92,     0,     0,    99,   100,     0,   101,
     102,   103,     0,     0,     0,    93,     0,     0,    92,   104,
       0,    95,    96,    97,    98,     0,     0,     0,    99,   100,
      93,   101,   102,   103,     0,   133,    95,    96,    97,    98,
      92,   104,     0,    99,   100,     0,   101,   102,   103,   170,
       0,     0,    93,     0,     0,     0,   104,     0,    95,    96,
      97,    98,    92,     0,     0,    99,   100,   263,   101,   102,
     103,     0,     0,     0,    93,     0,     0,    92,   104,     0,
      95,    96,    97,    98,     0,     0,   271,    99,   100,    93,
     101,   102,   103,     0,     0,    95,    96,    97,    98,    92,
     104,     0,    99,   100,     0,   101,   102,   103,     0,     0,
       0,    93,     0,     0,     0,   104,     0,    95,    96,    97,
      98,     0,     0,     0,   169,   100,     0,   101,   102,   103,
       0,     0,     0,     0,     0,     0,     0,   104,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   188,   189,   190,   191,   192,    -1,    -1,    -1,
      -1,    -1,    -1,   199,   200,   201
};

static const yytype_int16 yycheck[] =
{
      83,   105,    19,   100,    19,   124,   103,    10,   127,   128,
     129,    19,    18,     3,   133,    22,     6,   100,    18,     6,
     103,     6,   105,    26,    40,   144,   130,   131,    18,     0,
     149,    18,    18,    18,     6,    41,    53,    23,   157,    46,
      57,     3,    57,   126,     6,    53,    18,   130,   131,   132,
       6,    73,    42,    43,     6,    45,    18,    39,    48,    81,
      46,    47,    18,   182,   183,    55,    18,    55,    58,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    45,     3,   204,    48,     6,    18,    56,
      57,   210,   211,    55,    56,    53,    58,    52,    56,    18,
      49,    56,    18,    53,    18,     3,    56,    57,     6,    23,
       6,     7,     8,    18,    51,    52,    46,    47,   237,   238,
      18,    17,    56,    52,    43,    18,    45,    56,   247,    48,
      46,    47,    46,    47,    50,    18,    55,   256,    18,    58,
     259,    46,    47,    23,   241,   242,   265,    45,   252,   253,
      48,    18,    18,    46,    47,    55,    23,    55,   241,   242,
      58,    52,    18,   267,   261,    56,    46,    47,     3,   252,
     253,    53,    53,    55,    55,    57,    51,    52,   261,    46,
      47,    49,    56,    57,   267,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     4,     5,     6,
       7,     8,     4,     5,     6,     7,     8,    56,    51,    16,
      17,    56,    57,    54,    22,    17,    53,    18,    49,     3,
      20,    56,    50,    18,    54,    18,    55,    19,    55,    55,
      55,    55,    51,    51,    51,    56,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    51,    51,
      51,    51,    51,    18,    18,    21,    18,    50,    56,    18,
      18,    55,    18,    55,    18,    55,    57,    55,    55,    32,
      56,    56,    56,    56,    56,    28,    17,    53,    56,    19,
       5,    19,    51,    44,    26,    53,    56,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      69,    81,    -1,    85,    -1,    -1,   117,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,     6,    29,    30,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    51,    18,    -1,    -1,    21,    44,    -1,    24,
      25,    26,    27,     6,    -1,    -1,    31,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,    18,    -1,    -1,     6,    44,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      18,    34,    35,    36,    -1,    38,    24,    25,    26,    27,
       6,    44,    -1,    31,    32,    -1,    34,    35,    36,    37,
      -1,    -1,    18,    -1,    -1,    -1,    44,    -1,    24,    25,
      26,    27,     6,    -1,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    18,    -1,    -1,     6,    44,    -1,
      24,    25,    26,    27,    -1,    -1,    30,    31,    32,    18,
      34,    35,    36,    -1,    -1,    24,    25,    26,    27,     6,
      44,    -1,    31,    32,    -1,    34,    35,    36,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    44,    -1,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    60,    61,    18,    62,    63,     0,    22,    46,
      68,    77,    64,    41,    63,    18,    23,    46,    47,    69,
      70,    71,    39,    18,    46,    47,    74,    75,    76,    77,
      49,    23,    70,     6,    18,    72,    73,    55,    76,    77,
      18,    18,    46,    47,    65,    66,    67,    18,    53,    55,
      51,    52,    56,    55,    50,    66,    18,     3,    18,    46,
      47,    78,    79,    80,    73,    49,    78,    51,    54,    52,
      56,     6,    18,    22,    81,    56,    53,    79,    18,    23,
      71,    82,    83,    20,    85,    49,     3,     6,    18,    84,
      23,    83,     6,    18,    21,    24,    25,    26,    27,    31,
      32,    34,    35,    36,    44,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    98,    50,    81,    54,    18,
      51,    52,    18,    19,    53,    57,    55,    55,    55,    55,
      86,    86,    55,    38,    87,    96,    51,    51,    51,    51,
      51,    51,    51,    51,    19,    57,    85,     6,    18,    19,
       3,     6,    18,    42,    43,    45,    48,    55,    58,    98,
      99,    99,    18,     6,    18,    98,    99,    99,    99,    31,
      37,    18,    98,    99,    21,    43,    99,    18,    50,    18,
      99,    18,    53,    55,    55,    55,    99,    18,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    54,    18,    53,    56,    56,    56,    56,    56,
      55,    55,    56,    56,    51,    55,    99,    56,    97,    99,
      56,    56,    56,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    19,    53,    56,
      99,    28,    32,    99,    99,    56,    54,    52,    56,    99,
      99,    54,    86,    86,    56,    56,    53,    99,    54,    53,
      56,    29,    30,    33,    99,    19,    99,    86,    54,    99,
      54,    30,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    60,    61,    61,    62,    62,    64,
      63,    65,    65,    66,    67,    67,    67,    68,    68,    69,
      69,    70,    71,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    75,    75,    75,    76,    77,    78,
      78,    78,    79,    79,    80,    80,    80,    81,    81,    82,
      82,    83,    84,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    93,
      94,    95,    96,    97,    97,    98,    98,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     2,     3,     0,     2,     1,     0,
       5,     2,     1,     3,     1,     1,     1,     3,     2,     2,
       1,     3,     1,     1,     1,     3,     1,     1,     4,     7,
       2,     4,     2,     1,     1,     1,     1,     9,     8,     3,
       1,     0,     2,     3,     1,     1,     1,     3,     2,     2,
       1,     3,     3,     4,     1,     2,     4,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     7,
      10,     5,     4,     4,     3,     6,     9,     4,     5,     5,
       3,     5,     4,     4,     9,     7,     7,     6,     6,     1,
       1,     1,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     4,     7,     2,
       2,     3,     4
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
#line 37 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 38 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "ex1.y" /* yacc.c:1646  */
    {printTypetable();}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "ex1.y" /* yacc.c:1646  */
    {TInstall((yyvsp[0].no)->varname,0,NULL);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "ex1.y" /* yacc.c:1646  */
    {
																				  																Ttype= TLookup((yyvsp[-4].no)->varname);
																																					Ttype->fields=Fhead;
																																					Typesizeallocator(Ttype);
																																					Fhead=Ftail=NULL;
																																					Findex=0;
																																		 		}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "ex1.y" /* yacc.c:1646  */
    {FInstall(Ttype,(yyvsp[-1].no)->varname);}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "ex1.y" /* yacc.c:1646  */
    {Ttype = TLookup("Integer");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "ex1.y" /* yacc.c:1646  */
    {Ttype = TLookup("String");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 68 "ex1.y" /* yacc.c:1646  */
    {Ttype = TLookup((yyvsp[0].no)->varname);}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "ex1.y" /* yacc.c:1646  */
    {
																					declprint(Ghead);
																					initialxsmcode();
																					localbind=1;
																					parambind=1;
																			}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 77 "ex1.y" /* yacc.c:1646  */
    {initialxsmcode();}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 86 "ex1.y" /* yacc.c:1646  */
    {type = TLookup("Integer");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 87 "ex1.y" /* yacc.c:1646  */
    {type = TLookup("String");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 88 "ex1.y" /* yacc.c:1646  */
    {
									type = TLookup((yyvsp[0].no)->varname);
									if(type==NULL)
									{
										printf("Unknown type : %s \n",(yyvsp[0].no)->varname);
										exit(0);
									}
								}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0].no)->varname,type,1,1,_ID_,NULL);}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 103 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-3].no)->varname,type,(yyvsp[-1].no)->val,1,_ARRAY_,NULL);}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 104 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-6].no)->varname,type,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,_MATRIX_,NULL);}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 105 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0].no)->varname,type,1,1,_PTR_,NULL);}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 107 "ex1.y" /* yacc.c:1646  */
    {
																			GInstall((yyvsp[-3].no)->varname,type,0,0,_FUNC_,Phead);
																			Phead=Ptail=NULL;
																		}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 117 "ex1.y" /* yacc.c:1646  */
    {Ftype=TLookup("Integer");}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 118 "ex1.y" /* yacc.c:1646  */
    {Ftype=TLookup("String");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 119 "ex1.y" /* yacc.c:1646  */
    {
								Ftype=TLookup((yyvsp[0].no)->varname);
								if(Ftype==NULL)
								{
									printf("Unknown type: %s\n", (yyvsp[0].no)->varname);
									exit(0);
								}
							}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 129 "ex1.y" /* yacc.c:1646  */
    {
																																	funcdef(Ftype,(yyvsp[-7].no),Phead,(yyvsp[-1].no));	//Code of the Function Body
																																	Phead=Ptail=NULL;
																																	Lhead=Ltail=NULL;
																																	localbind=1;
																																	parambind=1;
																														}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "ex1.y" /* yacc.c:1646  */
    {
																																	mainfundef((yyvsp[-1].no));
																																	Lhead=Ltail=NULL;
																																	Phead=Ptail=NULL;
																																	localbind=1;
																																	parambind=1;
																													}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 152 "ex1.y" /* yacc.c:1646  */
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
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 163 "ex1.y" /* yacc.c:1646  */
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
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 175 "ex1.y" /* yacc.c:1646  */
    {Ptype = TLookup("Integer");}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 176 "ex1.y" /* yacc.c:1646  */
    {Ptype = TLookup("String");}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 177 "ex1.y" /* yacc.c:1646  */
    {
									Ptype = TLookup((yyvsp[0].no)->varname);
									if(Ptype==NULL)
									{
										printf("Unknown type : %s \n",(yyvsp[0].no)->varname);
										exit(0);
									}
								}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 195 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_ID_);}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 196 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_PTR_);}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 197 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_ID_);}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 198 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_PTR_);}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 201 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BODY_,(yyvsp[-2].no),NULL,(yyvsp[-1].no));}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 203 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 206 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BODY_,(yyvsp[-1].no),NULL,(yyvsp[0].no));}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 207 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 210 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 211 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 212 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 214 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 215 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 216 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 217 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 220 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_,(yyvsp[-1].no),NULL,NULL);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 221 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_ARRAY_,(yyvsp[-4].no),(yyvsp[-2].no),NULL);}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 222 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_MATRIX_,(yyvsp[-7].no),(yyvsp[-5].no),(yyvsp[-2].no));}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 223 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_PTR_,(yyvsp[-1].no),NULL,NULL);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 224 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_FIELD_,(yyvsp[-1].no),NULL,NULL);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 227 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_WRITE_,(yyvsp[-1].no),NULL,NULL);}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 230 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 231 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_ARRAY_,(yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[0].no));}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 232 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_MATRIX_,(yyvsp[-8].no),createTree(0,TLookup("void"),"\0",_BODY_,(yyvsp[-6].no),(yyvsp[-3].no),NULL),(yyvsp[0].no));}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 233 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_PTR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 234 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-4].no),NULL,createTree(0,TLookup("Integer"),"\0",_INIT_,NULL,NULL,NULL));}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 235 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-4].no),NULL,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 236 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 237 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,(yyvsp[-4].no),NULL,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 238 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_FREE_,(yyvsp[-1].no),NULL,NULL);}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 239 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_FREE_,(yyvsp[-1].no),NULL,NULL);}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 242 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,TLookup("void"),"\0",_IF_THEN_ELSE_,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 243 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,TLookup("void"),"\0",_IF_THEN_,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 246 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,TLookup("void"),"\0",_WHILE_,(yyvsp[-4].no),NULL,(yyvsp[-1].no));}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 247 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_REPEAT_UNTIL_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 248 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_DO_WHILE_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 251 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BREAK_,NULL,NULL,NULL);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 254 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_CONTINUE_,NULL,NULL,NULL);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 257 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BRKP_,NULL,NULL,NULL);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 260 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_RET_,(yyvsp[-1].no),NULL,NULL);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 263 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ARG_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 264 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ARG_,NULL,NULL,(yyvsp[0].no));}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 267 "ex1.y" /* yacc.c:1646  */
    {
															struct Fieldlist *Ftemp = FLookup((yyvsp[-2].no)->type,(yyvsp[0].no)->varname);
															if(Ftemp==NULL)
															{
																printf("No Field named %s in %s\n",(yyvsp[0].no)->varname,(yyvsp[-2].no)->varname);
																exit(0);
															}
															(yyval.no) = createTree(0,Ftemp->type,"\0",_FIELD_,(yyvsp[-2].no),NULL,createTree(0,TLookup("void"),"\0",_FIELD_,(yyvsp[0].no),NULL,NULL));
														}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 277 "ex1.y" /* yacc.c:1646  */
    {
															struct tnode *t1,*t2;
															t2 = (yyvsp[-2].no);
															while(t2->right!=NULL)
																	t2=t2->right;

															struct Fieldlist *Ftemp = FLookup((yyvsp[-2].no)->type,(yyvsp[0].no)->varname);
															if(Ftemp==NULL)
															{
																printf("No Field named %s in %s \n",(yyvsp[0].no)->varname,t2->left->varname);
																exit(0);
															}

															t1 = createTree(0,TLookup("void"),"\0",_FIELD_,(yyvsp[0].no),NULL,NULL);
															t2->right = t1;
															(yyval.no) = (yyvsp[-2].no);
															(yyval.no)->type = (yyvsp[0].no)->type;
														}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 297 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_PLUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 298 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_MINUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 299 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_MUL_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 300 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_DIV_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 301 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_MOD_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 302 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 303 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_EQ_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 304 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_NE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 305 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_LE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 306 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_GE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 307 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_LT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 308 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_GT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 309 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_AND_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 310 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_OR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 311 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_NOT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 312 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 313 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 314 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("Type"), "\0", _NULL_, NULL, NULL, NULL);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 315 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 316 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 317 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_ARRAY_,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 318 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-6].no)->type,(yyvsp[-6].no)->varname,_MATRIX_,(yyvsp[-6].no),(yyvsp[-4].no),(yyvsp[-1].no));}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 319 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_PTR_,(yyvsp[0].no),NULL,NULL);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 320 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_ADDR_,(yyvsp[0].no),NULL,NULL);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 321 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-2].no)->type,(yyvsp[-2].no)->varname,_FUNC_,(yyvsp[-2].no),NULL,NULL);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 322 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_FUNC_,(yyvsp[-3].no),NULL,(yyvsp[-1].no));}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2287 "y.tab.c" /* yacc.c:1646  */
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
#line 325 "ex1.y" /* yacc.c:1906  */


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
	TypeTableCreate();
	yyparse();
	return 0;
}
