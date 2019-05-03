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
	struct Classtable *Ctype;

#line 81 "y.tab.c" /* yacc.c:339  */

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
    CLASS = 301,
    ENDCLASS = 302,
    EXTENDS = 303,
    NEW = 304,
    DELETE = 305,
    SELF = 306,
    INT = 307,
    STR = 308,
    STRING = 309
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
#define CLASS 301
#define ENDCLASS 302
#define EXTENDS 303
#define NEW 304
#define DELETE 305
#define SELF 306
#define INT 307
#define STR 308
#define STRING 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "ex1.y" /* yacc.c:355  */

	struct tnode *no;

#line 233 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  338

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    64,     2,
      58,    59,     2,     2,    60,     2,    63,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    45,    46,    49,    50,
      53,    53,    62,    63,    66,    69,    70,    71,    74,   104,
     107,   108,   111,   152,   157,   189,   190,   193,   201,   202,
     205,   219,   220,   223,   229,   236,   237,   240,   242,   246,
     250,   262,   263,   266,   267,   268,   269,   271,   277,   278,
     281,   282,   283,   293,   302,   311,   312,   313,   316,   327,
     339,   340,   341,   351,   352,   354,   355,   357,   359,   360,
     361,   362,   365,   367,   370,   371,   374,   375,   376,   377,
     378,   379,   380,   381,   384,   385,   386,   387,   388,   391,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   409,   410,   413,   414,   415,   418,   421,
     424,   427,   430,   431,   432,   435,   451,   476,   497,   528,
     545,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   583
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
  "INITIALIZE", "ALLOC", "FREE", "NIL", "CLASS", "ENDCLASS", "EXTENDS",
  "NEW", "DELETE", "SELF", "INT", "STR", "STRING", "'{'", "'}'", "';'",
  "'('", "')'", "','", "'['", "']'", "'.'", "'&'", "$accept", "Program",
  "TypeDefBlock", "TypeDefList", "TypeDef", "$@1", "FieldDeclList",
  "FieldDecl", "TypeName", "ClassDefBlock", "ClassDefList", "ClassDef",
  "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl", "MethodDefns",
  "GdeclBlock", "GDecllist", "GDecl", "Type", "GidList", "Gid",
  "FDefBlock", "Ftype", "Fdef", "MainBlock", "ParamList", "Param", "Ptype",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "Body", "Slist", "Stmt",
  "InputStmt", "OutputStmt", "AsgStmt", "Ifstmt", "Whilestmt", "Breakstmt",
  "Continuestmt", "Debugstmt", "Returnstmt", "ArgList", "Field",
  "FieldFunction", "E", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   123,   125,    59,    40,    41,
      44,    91,    93,    46,    38
};
# endif

#define YYPACT_NINF -265

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-265)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,    46,    81,    77,  -265,    -5,  -265,  -265,   108,    56,
     100,  -265,  -265,    84,    -6,  -265,   148,   142,   149,    10,
    -265,    34,   181,  -265,  -265,   192,  -265,  -265,  -265,  -265,
     152,  -265,    96,   225,  -265,   149,  -265,    10,   262,  -265,
    -265,  -265,  -265,  -265,    95,  -265,   276,  -265,  -265,  -265,
    -265,   281,    22,   155,  -265,   246,  -265,  -265,   260,  -265,
    -265,   263,   111,  -265,   158,   316,  -265,    96,   266,   158,
    -265,  -265,   154,  -265,   304,  -265,  -265,  -265,   -36,  -265,
     143,   318,  -265,   359,   159,   168,  -265,   365,   235,  -265,
     158,   366,  -265,   324,   156,   367,   331,  -265,   101,  -265,
     330,  -265,   158,  -265,  -265,   386,  -265,   144,   164,  -265,
     536,   335,   359,  -265,  -265,   248,   328,   374,  -265,   222,
    -265,  -265,   376,    13,  -265,   337,   338,   339,   340,   642,
    -265,  -265,   642,    67,   341,   342,   343,   536,  -265,   344,
     345,   346,   347,   351,   352,   353,   354,   384,   -17,  -265,
     367,   355,  -265,  -265,  -265,   160,   394,     2,    67,   396,
      -2,    67,    67,    67,   673,   567,  -265,   397,   240,  -265,
     356,  -265,    67,   398,   357,  -265,   502,    -9,    -3,   399,
    -265,   443,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,    66,   400,   409,  -265,   448,  -265,    67,   410,   411,
     412,   721,   129,  -265,   449,   243,   -45,   334,   348,   362,
     413,   414,  -265,    67,    67,   455,   456,   418,  -265,   457,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,  -265,    93,   130,   415,   133,  -265,
    -265,   421,   422,   721,  -265,  -265,  -265,   721,   417,   423,
     463,    14,   424,  -265,    67,  -265,  -265,   458,   452,    67,
      67,   251,   721,   219,   427,   429,  -265,   430,   283,   283,
     472,   472,   472,   735,   735,   735,   735,   735,   735,   280,
      99,   472,  -265,  -265,  -265,   431,   474,  -265,  -265,   434,
      67,    67,  -265,   233,   642,   642,   432,   446,  -265,    67,
     433,    67,    67,    67,  -265,   436,  -265,   721,   247,   112,
     514,   589,   452,  -265,   721,    67,   253,   255,   257,  -265,
     477,  -265,    67,   642,  -265,  -265,   261,  -265,  -265,  -265,
      67,   320,   620,  -265,   721,   438,  -265,  -265
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,    19,    10,     0,     9,     1,     0,     5,
       0,     6,     8,    23,     0,    21,     0,     0,     0,     0,
       4,     0,     0,    18,    20,     0,    40,    34,    38,    39,
       0,    36,     0,     0,    52,    50,    51,     0,     0,    49,
       3,    17,    15,    16,     0,    13,     0,    24,    26,    33,
      35,     0,    43,     0,    42,     0,    48,     2,     0,    11,
      12,     0,     0,    46,    57,     0,    37,     0,     0,    57,
      14,    25,     0,    29,     0,    62,    60,    61,     0,    56,
       0,     0,    41,     0,     0,     0,    28,     0,     0,    47,
       0,     0,    58,    44,     0,     0,     0,    50,     0,    32,
       0,    27,    57,    55,    59,     0,    64,     0,     0,    66,
       0,     0,     0,    22,    31,     0,     0,     0,    70,     0,
      63,    65,     0,     0,   110,     0,     0,     0,     0,     0,
     108,   109,     0,     0,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,    45,    71,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   136,     0,   141,   138,
       0,   137,     0,     0,   139,   140,     0,     0,     0,     0,
      74,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      73,     0,     0,     0,    30,     0,    68,     0,     0,     0,
       0,    90,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,   144,   114,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,   117,
      72,     0,     0,    96,   116,    53,    69,    93,     0,     0,
       0,     0,     0,    84,     0,    88,    89,     0,     0,     0,
       0,     0,   113,     0,   115,   117,   126,   116,   121,   122,
     123,   124,   125,   131,   132,   129,   130,   127,   128,   134,
     133,   135,    98,    99,   102,     0,     0,    94,    95,     0,
       0,     0,    87,     0,     0,     0,     0,     0,   146,     0,
     142,   114,   114,   114,    97,     0,   100,    91,     0,     0,
       0,     0,   107,   106,   112,     0,     0,     0,     0,   101,
       0,    85,     0,     0,   104,   105,     0,   118,   119,   120,
       0,     0,     0,   143,    92,     0,   103,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -265,  -265,   493,  -265,  -265,   459,  -265,  -265,
    -265,   485,  -265,  -265,  -265,  -265,   428,  -265,  -265,  -265,
     471,   -51,  -265,   435,  -265,  -265,   -27,    42,     8,   437,
    -265,   392,  -265,   416,  -265,   371,  -126,  -130,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,   385,  -264,  -110,  -265,
    -132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    10,    44,    45,    46,     9,
      14,    15,    16,    62,    71,    72,    73,    98,    19,    30,
      31,    32,    53,    54,    37,    38,    39,    20,    78,    79,
      80,    95,   108,   109,   119,   111,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   261,   174,   175,
     262
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     148,   176,   191,   164,   204,   166,   165,   180,   167,   235,
      56,    74,    13,     4,   255,   237,   205,     1,   192,   148,
     168,    87,   148,    89,    90,   201,   202,   148,    34,   207,
     208,   209,   157,   290,   180,   180,    11,   316,   317,   318,
     217,    23,   136,   107,   198,   199,   192,   169,   136,   136,
     206,   200,    41,   170,   148,   148,   171,   107,    99,   243,
     172,    40,    35,    36,     4,   247,   173,   236,   238,   166,
     166,   114,   167,   167,   158,   291,   159,    84,    17,    57,
      64,     7,   263,    65,   168,   168,    42,    43,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,    51,   220,   221,   222,   223,   224,    18,   241,
     115,   169,   169,    41,    52,   242,   233,   170,   170,    34,
     171,   171,   293,     8,   172,   172,    13,   296,   297,    26,
     173,   173,    22,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,    42,    43,    91,
     117,    59,   282,    97,    36,    21,   159,   113,   307,   308,
      26,    92,   118,    28,    29,    27,   195,   314,   310,   311,
      26,   321,    26,   322,    26,    49,    75,    85,   196,   106,
     180,   180,    26,   326,   148,   148,    34,   120,    33,   283,
     331,   251,   284,   192,    28,    29,   192,   332,   334,    47,
     148,   148,   180,    25,    28,    29,    28,    29,    28,    29,
      76,    77,    66,   148,    48,    67,    28,    29,    96,    90,
      97,    36,   148,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   154,
      58,   300,   155,    55,   220,   221,   222,   223,   224,   222,
     223,   224,   101,   102,    61,   309,   232,   233,   213,    63,
     233,   214,   253,   215,   254,    68,   159,   151,    90,   320,
     298,   299,   327,   299,   328,   299,   329,   299,    69,    81,
      70,    83,    88,   333,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
      93,    94,   335,   100,   104,   105,   112,   110,   102,   116,
     152,   149,   153,   256,   156,   160,   161,   162,   163,   177,
     178,   182,   183,   184,   185,   190,   179,   257,   186,   187,
     188,   189,   194,   197,   203,   212,   218,   239,   244,   216,
     219,   258,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   240,   245,   246,   252,   248,   249,
     250,   259,   260,   264,   265,   267,   287,   266,   159,   285,
     286,   289,   288,   292,   295,   301,   294,   302,   303,   233,
     304,   312,   305,   306,   315,   319,   330,   337,    12,    24,
      86,    50,    82,    60,   150,   313,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     122,   193,   181,     0,   121,     0,     0,   103,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   122,   323,   324,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   123,     0,     0,     0,   134,   234,
     124,   125,   126,   127,   135,   136,     0,   128,   129,     0,
     130,   131,   132,   122,   133,     0,     0,     0,     0,     0,
     134,     0,     0,     0,     0,   123,   135,   136,     0,     0,
       0,   124,   125,   126,   127,   122,     0,     0,   128,   129,
       0,   130,   131,   132,   211,     0,     0,   123,     0,     0,
       0,   134,     0,   124,   125,   126,   127,   135,   136,     0,
     128,   129,   325,   130,   131,   132,   122,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,     0,   123,   135,
     136,     0,     0,     0,   124,   125,   126,   127,   122,     0,
     336,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     123,     0,     0,     0,   134,     0,   124,   125,   126,   127,
     135,   136,     0,   128,   129,     0,   130,   131,   132,   122,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
       0,   123,   135,   136,     0,     0,     0,   124,   125,   126,
     127,     0,     0,     0,   210,   129,     0,   130,   131,   132,
       0,     0,     0,     0,     0,     0,     0,   134,     0,     0,
       0,     0,     0,   135,   136,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   220,
     221,   222,   223,   224,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,   233
};

static const yytype_int16 yycheck[] =
{
     110,   133,    19,   129,     6,     3,   132,   137,     6,    18,
      37,    62,    18,    18,    59,    18,    18,    40,    63,   129,
      18,    72,   132,    59,    60,   157,   158,   137,    18,   161,
     162,   163,    19,    19,   164,   165,    41,   301,   302,   303,
     172,    47,    51,    94,    42,    43,    63,    45,    51,    51,
     160,    49,    18,    51,   164,   165,    54,   108,    85,   191,
      58,    19,    52,    53,    18,   197,    64,   177,   178,     3,
       3,    98,     6,     6,    61,    61,    63,    69,    22,    37,
      58,     0,   214,    61,    18,    18,    52,    53,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,     6,     4,     5,     6,     7,     8,    52,    43,
     102,    45,    45,    18,    18,    49,    17,    51,    51,    18,
      54,    54,   254,    46,    58,    58,    18,   259,   260,    18,
      64,    64,    48,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    52,    53,     6,
       6,    56,    59,    52,    53,    55,    63,    56,   290,   291,
      18,    18,    18,    52,    53,    23,     6,   299,   294,   295,
      18,    59,    18,    61,    18,    23,    18,    23,    18,    23,
     310,   311,    18,   315,   294,   295,    18,    23,    39,    59,
     322,    62,    59,    63,    52,    53,    63,   323,   330,    18,
     310,   311,   332,    55,    52,    53,    52,    53,    52,    53,
      52,    53,    57,   323,    22,    60,    52,    53,    59,    60,
      52,    53,   332,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    57,
      18,    62,    60,    58,     4,     5,     6,     7,     8,     6,
       7,     8,    57,    58,    18,    62,    16,    17,    58,    18,
      17,    61,    59,    63,    61,    59,    63,    59,    60,    62,
      59,    60,    59,    60,    59,    60,    59,    60,    58,     3,
      57,    55,    18,    62,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      62,    22,    62,    18,    18,    61,    55,    20,    58,     3,
      62,    56,    18,    59,    18,    58,    58,    58,    58,    58,
      58,    57,    57,    57,    57,    21,    63,    59,    57,    57,
      57,    57,    57,    19,    18,    18,    18,    18,    18,    63,
      63,    59,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    21,    56,    18,    18,    58,    58,
      58,    58,    58,    18,    18,    18,    59,    59,    63,    58,
      58,    18,    59,    59,    32,    58,    28,    58,    58,    17,
      59,    59,    18,    59,    61,    59,    19,    59,     5,    14,
      72,    30,    67,    44,   112,    59,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       6,   150,   137,    -1,   108,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,     6,    29,    30,    31,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    18,    -1,    -1,    -1,    44,    57,
      24,    25,    26,    27,    50,    51,    -1,    31,    32,    -1,
      34,    35,    36,     6,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    18,    50,    51,    -1,    -1,
      -1,    24,    25,    26,    27,     6,    -1,    -1,    31,    32,
      -1,    34,    35,    36,    37,    -1,    -1,    18,    -1,    -1,
      -1,    44,    -1,    24,    25,    26,    27,    50,    51,    -1,
      31,    32,    33,    34,    35,    36,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    18,    50,
      51,    -1,    -1,    -1,    24,    25,    26,    27,     6,    -1,
      30,    31,    32,    -1,    34,    35,    36,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    44,    -1,    24,    25,    26,    27,
      50,    51,    -1,    31,    32,    -1,    34,    35,    36,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    18,    50,    51,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    66,    67,    18,    68,    69,     0,    46,    74,
      70,    41,    69,    18,    75,    76,    77,    22,    52,    83,
      92,    55,    48,    47,    76,    55,    18,    23,    52,    53,
      84,    85,    86,    39,    18,    52,    53,    89,    90,    91,
      92,    18,    52,    53,    71,    72,    73,    18,    22,    23,
      85,     6,    18,    87,    88,    58,    91,    92,    18,    56,
      72,    18,    78,    18,    58,    61,    57,    60,    59,    58,
      57,    79,    80,    81,    86,    18,    52,    53,    93,    94,
      95,     3,    88,    55,    93,    23,    81,    86,    18,    59,
      60,     6,    18,    62,    22,    96,    59,    52,    82,    91,
      18,    57,    58,    94,    18,    61,    23,    86,    97,    98,
      20,   100,    55,    56,    91,    93,     3,     6,    18,    99,
      23,    98,     6,    18,    24,    25,    26,    27,    31,    32,
      34,    35,    36,    38,    44,    50,    51,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   113,    56,
      96,    59,    62,    18,    57,    60,    18,    19,    61,    63,
      58,    58,    58,    58,   101,   101,     3,     6,    18,    45,
      51,    54,    58,    64,   113,   114,   115,    58,    58,    63,
     102,   111,    57,    57,    57,    57,    57,    57,    57,    57,
      21,    19,    63,   100,    57,     6,    18,    19,    42,    43,
      49,   115,   115,    18,     6,    18,   113,   115,   115,   115,
      31,    37,    18,    58,    61,    63,    63,   115,    18,    63,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    57,    18,   113,    18,   113,    18,
      21,    43,    49,   115,    18,    56,    18,   115,    58,    58,
      58,    62,    18,    59,    61,    59,    59,    59,    59,    58,
      58,   112,   115,   115,    18,    18,    59,    18,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,    59,    59,    59,    58,    58,    59,    59,    18,
      19,    61,    59,   115,    28,    32,   115,   115,    59,    60,
      62,    58,    58,    58,    59,    18,    59,   115,   115,    62,
     101,   101,    59,    59,   115,    61,   112,   112,   112,    59,
      62,    59,    61,    29,    30,    33,   115,    59,    59,    59,
      19,   115,   101,    62,   115,    62,    30,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    67,    67,    68,    68,
      70,    69,    71,    71,    72,    73,    73,    73,    74,    74,
      75,    75,    76,    77,    77,    78,    78,    79,    80,    80,
      81,    82,    82,    83,    83,    84,    84,    85,    86,    86,
      86,    87,    87,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    91,    92,    93,    93,    93,    94,    94,
      95,    95,    95,    96,    96,    97,    97,    98,    99,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   103,   103,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   107,   108,   109,
     110,   111,   112,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     3,     2,     3,     0,     2,     1,
       0,     5,     2,     1,     3,     1,     1,     1,     3,     0,
       2,     1,     8,     1,     3,     2,     0,     3,     2,     1,
       6,     2,     1,     3,     2,     2,     1,     3,     1,     1,
       1,     3,     1,     1,     4,     7,     2,     4,     2,     1,
       1,     1,     1,     9,     8,     3,     1,     0,     2,     3,
       1,     1,     1,     3,     2,     2,     1,     3,     3,     4,
       1,     2,     4,     3,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     7,    10,     5,     4,     4,
       3,     6,     9,     4,     5,     5,     3,     5,     4,     4,
       6,     6,     4,     9,     7,     7,     6,     6,     1,     1,
       1,     3,     3,     1,     0,     3,     3,     3,     6,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     4,     7,     2,     2,     4
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
#line 39 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "ex1.y" /* yacc.c:1646  */
    {exit(0);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 45 "ex1.y" /* yacc.c:1646  */
    {printTypetable();}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "ex1.y" /* yacc.c:1646  */
    {TInstall((yyvsp[0].no)->varname,0,NULL);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 53 "ex1.y" /* yacc.c:1646  */
    {
																				  																Ttype= TLookup((yyvsp[-4].no)->varname);
																																					Ttype->fields=Fhead;
																																					Typesizeallocator(Ttype);
																																					Fhead=Ftail=NULL;
																																					Findex=0;
																																		 		}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "ex1.y" /* yacc.c:1646  */
    {FInstall(Ttype,(yyvsp[-1].no)->varname);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "ex1.y" /* yacc.c:1646  */
    {Ttype = TLookup("Integer");}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "ex1.y" /* yacc.c:1646  */
    {Ttype = TLookup("String");}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "ex1.y" /* yacc.c:1646  */
    {Ttype = TLookup((yyvsp[0].no)->varname);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 74 "ex1.y" /* yacc.c:1646  */
    {
																								printClasstable();
																								struct Classtable *Ctemp=Chead;
																								struct Memberfunclist *Mtemp;
																								int f;

																								fprintf(target_file, "L%d:\n", start);
																								fprintf(target_file, "MOV SP, 4095\n");
																								while(Ctemp!=NULL)
																								{
																									bind+=8;
																									Mtemp=Ctemp->Vfuncptr;
																									f=0;
																									while(Mtemp!=NULL)
																									{
																										fprintf(target_file, "MOV R0, F%d\n", Mtemp->flabel);
																										fprintf(target_file, "PUSH R0\n");
																										f++;
																										Mtemp=Mtemp->next;
																									}
																									fprintf(target_file, "MOV R0, -1\n");
																									while(f<8)
																									{
																										fprintf(target_file, "PUSH R0\n");
																										f++;
																									}
																									Ctemp=Ctemp->next;
																								}
																							}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 104 "ex1.y" /* yacc.c:1646  */
    {fprintf(target_file, "L%d:\n", start);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "ex1.y" /* yacc.c:1646  */
    {
																																							struct Fieldlist *Ftemp=Class->Memberfield;
																																							struct Memberfunclist *Mtemp=Class->Vfuncptr;

																																							a=0;
																																							while(Ftemp!=NULL)
																																							{
																																								Ftemp->fieldIndex=a++;
																																								if(Ftemp->type==NULL)
																																									a++;
																																								Ftemp=Ftemp->next;
																																							}
																																							if(a>8)
																																							{
																																								printf("Class Member Field count exceeded (>8) : %s\n", Class->name);
																																								exit(1);
																																							}
																																							Class->Fieldcount=a;

																																							a=0;
																																							while(Mtemp!=NULL)
																																							{
																																								if(Mtemp->Funcposition==-1)
																																								{
																																									printf("Class Member Function not defined: %s.%s\n", Class->name, Mtemp->name);
																																									exit(1);
																																								}
																																								Mtemp->Funcposition=a++;
																																								Mtemp=Mtemp->next;
																																							}
																																							if(a>8){
																																								printf("Class Member Function count exceeded (>8) : %s\n", Class->name);
																																								exit(1);
																																							}
																																							Class->Methodcount=a;

																																							Class=NULL;
																																						}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 152 "ex1.y" /* yacc.c:1646  */
    {
																CInstall((yyvsp[0].no)->varname,NULL);
																Class=CLookup((yyvsp[0].no)->varname);
														}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 157 "ex1.y" /* yacc.c:1646  */
    {
																struct Fieldlist *Ftemp;
																struct Memberfunclist *Mtemp,*Mtemp1;

																CInstall((yyvsp[-2].no)->varname, (yyvsp[0].no)->varname);
																Class=CLookup((yyvsp[0].no)->varname);

																Ftemp=Class->Memberfield;
																while(Ftemp!=NULL)
																{
																	if(Ftemp->type!=NULL)
																		Class_Finstall(CLookup((yyvsp[-2].no)->varname), Ftemp->type->name, Ftemp->name);
																	else
																		Class_Finstall(CLookup((yyvsp[-2].no)->varname), Ftemp->Ctype->name, Ftemp->name);
																	Ftemp=Ftemp->next;
																}

																Mtemp=Class->Vfuncptr;
																while(Mtemp!=NULL)
																{
																	Class_Minstall(CLookup((yyvsp[-2].no)->varname), Mtemp->name, Mtemp->type, Mtemp->paramlist);
																	Mtemp1=Class_Mlookup(CLookup((yyvsp[-2].no)->varname),Mtemp->name);
																	Mtemp1->Funcposition=0;
																	Mtemp1->flabel=Mtemp->flabel;
																	flabel--;
																	Mtemp=Mtemp->next;
																}
																Class=CLookup((yyvsp[-2].no)->varname);

														}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 193 "ex1.y" /* yacc.c:1646  */
    { 																											//Installing the field to the class
													if(type!=NULL)
															Class_Finstall(Class,type->name,(yyvsp[-1].no)->varname);
													else if(Ctype!=NULL)
															Class_Finstall(Class,Ctype->name,(yyvsp[-1].no)->varname);
											}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 205 "ex1.y" /* yacc.c:1646  */
    {																			//Installing the method to class
																						if(Ctype!=NULL)
																						{
																							printf("Return type of method (%s) cannot be a Class type\n",(yyvsp[-4].no)->varname);
																							exit(0);
																						}
																						Class_Minstall(Class,(yyvsp[-4].no)->varname,type,Phead);
																						Phead=Ptail=NULL;
																						Lhead=Ltail=NULL;
																						localbind=1;
																						parambind=1;
																					}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "ex1.y" /* yacc.c:1646  */
    {
																					declprint(Ghead);
																					initialxsmcode();
																					localbind=1;
																					parambind=1;
																			}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 229 "ex1.y" /* yacc.c:1646  */
    {
																					initialxsmcode();
																					localbind=1;
																					parambind=1;
																			}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 242 "ex1.y" /* yacc.c:1646  */
    {
									type = TLookup("Integer");
									Ctype = NULL;
								}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 246 "ex1.y" /* yacc.c:1646  */
    {
									type = TLookup("String");
									Ctype = NULL;
								}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 250 "ex1.y" /* yacc.c:1646  */
    {
									type = TLookup((yyvsp[0].no)->varname);
									Ctype = CLookup((yyvsp[0].no)->varname);

									if(type==NULL && Ctype==NULL)
									{
										printf("Unknown type : %s \n",(yyvsp[0].no)->varname);
										exit(0);
									}
								}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 266 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0].no)->varname,type,Ctype,1,1,_ID_,NULL);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 267 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-3].no)->varname,type,NULL,(yyvsp[-1].no)->val,1,_ARRAY_,NULL);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 268 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[-6].no)->varname,type,NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val,_MATRIX_,NULL);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 269 "ex1.y" /* yacc.c:1646  */
    {GInstall((yyvsp[0].no)->varname,type,NULL,1,1,_PTR_,NULL);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 271 "ex1.y" /* yacc.c:1646  */
    {
																			GInstall((yyvsp[-3].no)->varname,type,NULL,0,0,_FUNC_,Phead);
																			Phead=Ptail=NULL;
																		}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 281 "ex1.y" /* yacc.c:1646  */
    {Ftype=TLookup("Integer");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 282 "ex1.y" /* yacc.c:1646  */
    {Ftype=TLookup("String");}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 283 "ex1.y" /* yacc.c:1646  */
    {
								Ftype=TLookup((yyvsp[0].no)->varname);
								if(Ftype==NULL)
								{
									printf("Unknown type: %s\n", (yyvsp[0].no)->varname);
									exit(0);
								}
							}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 293 "ex1.y" /* yacc.c:1646  */
    {
																																	funcdef(Ftype,Class,(yyvsp[-7].no),Phead,(yyvsp[-1].no));
																																	Phead=Ptail=NULL;
																																	Lhead=Ltail=NULL;
																																	localbind=1;
																																	parambind=1;
																														}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 302 "ex1.y" /* yacc.c:1646  */
    {
																																	mainfundef((yyvsp[-1].no));
																																	Lhead=Ltail=NULL;
																																	Phead=Ptail=NULL;
																																	localbind=1;
																																	parambind=1;
																													}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 316 "ex1.y" /* yacc.c:1646  */
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
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 327 "ex1.y" /* yacc.c:1646  */
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
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "ex1.y" /* yacc.c:1646  */
    {Ptype = TLookup("Integer");}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 340 "ex1.y" /* yacc.c:1646  */
    {Ptype = TLookup("String");}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 341 "ex1.y" /* yacc.c:1646  */
    {
									Ptype = TLookup((yyvsp[0].no)->varname);
									if(Ptype==NULL)
									{
										printf("Unknown type : %s \n",(yyvsp[0].no)->varname);
										exit(0);
									}
								}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 359 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_ID_);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 360 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_PTR_);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 361 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_ID_);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 362 "ex1.y" /* yacc.c:1646  */
    {LInstall((yyvsp[0].no)->varname,type,_PTR_);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 365 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BODY_,(yyvsp[-2].no),NULL,(yyvsp[-1].no));}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 367 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BODY_,NULL,NULL,(yyvsp[-1].no));}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 370 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BODY_,(yyvsp[-1].no),NULL,(yyvsp[0].no));}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 371 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[0].no);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 374 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 375 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 376 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 377 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 378 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 379 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 380 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 381 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=(yyvsp[-1].no);}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 384 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_,(yyvsp[-1].no),NULL,NULL);}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 385 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_ARRAY_,(yyvsp[-4].no),(yyvsp[-2].no),NULL);}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 386 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_MATRIX_,(yyvsp[-7].no),(yyvsp[-5].no),(yyvsp[-2].no));}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 387 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_PTR_,(yyvsp[-1].no),NULL,NULL);}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 388 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_READ_FIELD_,(yyvsp[-1].no),NULL,NULL);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 391 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_WRITE_,(yyvsp[-1].no),NULL,NULL);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 394 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 395 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_ARRAY_,(yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[0].no));}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 396 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_MATRIX_,(yyvsp[-8].no),createTree(0,TLookup("void"),"\0",_BODY_,(yyvsp[-6].no),(yyvsp[-3].no),NULL),(yyvsp[0].no));}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 397 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_PTR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 398 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-4].no),NULL,createTree(0,TLookup("Integer"),"\0",_INIT_,NULL,NULL,NULL));}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 399 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-4].no),NULL,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 400 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 401 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,(yyvsp[-4].no),NULL,createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 402 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_FREE_,(yyvsp[-1].no),NULL,NULL);}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 403 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_FREE_,(yyvsp[-1].no),NULL,NULL);}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 404 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_,(yyvsp[-5].no),(yyvsp[-1].no),createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 405 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ASSIGN_FIELD_,(yyvsp[-5].no),(yyvsp[-1].no),createTree(0,TLookup("Type"),"\0",_ALLOC_,NULL,NULL,NULL));}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 406 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_FREE_,(yyvsp[-1].no),NULL,NULL);}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 409 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,TLookup("void"),"\0",_IF_THEN_ELSE_,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no));}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 410 "ex1.y" /* yacc.c:1646  */
    {(yyval.no)=createTree(0,TLookup("void"),"\0",_IF_THEN_,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 413 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_WHILE_,(yyvsp[-4].no),NULL,(yyvsp[-1].no));}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 414 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_REPEAT_UNTIL_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 415 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_DO_WHILE_,(yyvsp[-1].no),NULL,(yyvsp[-4].no));}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 418 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BREAK_,NULL,NULL,NULL);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 421 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_CONTINUE_,NULL,NULL,NULL);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 424 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_BRKP_,NULL,NULL,NULL);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 427 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_RET_,(yyvsp[-1].no),NULL,NULL);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 430 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ARG_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 431 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("void"),"\0",_ARG_,NULL,NULL,(yyvsp[0].no));}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 432 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = NULL;}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 435 "ex1.y" /* yacc.c:1646  */
    {
														/*	if(Class!=NULL)
															{
																printf("Private members (%s) cannot be used outside class definition\n",$3->varname);
																exit(0);
															}*/

															struct Fieldlist *Ftemp = FLookup((yyvsp[-2].no)->type,(yyvsp[0].no)->varname);
															if(Ftemp==NULL)
															{
																printf("No Field named %s in %s\n",(yyvsp[0].no)->varname,(yyvsp[-2].no)->varname);
																exit(0);
															}
															(yyval.no) = createTree(0,Ftemp->type,"\0",_FIELD_,(yyvsp[-2].no),NULL,createTree(0,TLookup("void"),"\0",_FIELD_,(yyvsp[0].no),NULL,NULL));
														}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 451 "ex1.y" /* yacc.c:1646  */
    {
															if(strcmp((yyvsp[-2].no)->varname,"\0")!=0 && (yyvsp[-2].no)->type==NULL)
															{
																printf("Private members (%s) cannot be used outside class definition\n",(yyvsp[0].no)->varname);
																exit(0);
															}

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
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 476 "ex1.y" /* yacc.c:1646  */
    {
																if(Class==NULL)
																{
																	printf("Self cannot be used outside class definition\n");
																	exit(0);
																}

																struct Fieldlist *Ftemp= Class_Flookup(Class,(yyvsp[0].no)->varname);

																if(Ftemp==NULL)
																{
																	printf("No member field named %s in Class %s\n",(yyvsp[0].no)->varname,Class->name);
																	exit(0);
																}

																(yyval.no) = createTree(0,Ftemp->type,Class->name,_FIELD_,(yyvsp[0].no),NULL,NULL);

														}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 497 "ex1.y" /* yacc.c:1646  */
    {																	//This will not occur inside a class.
																								struct Gsymbol *Gtemp;
																								Gtemp=GLookup((yyvsp[-5].no)->varname);

																								if(Gtemp==NULL)
																								{
																									printf("Unknown identifier: %s\n", (yyvsp[-5].no)->varname);
																									exit(0);
																								}

																								if(Class!=NULL)
																								{
																									printf("Self should be used inside class definition\n");
																									exit(0);
																								}

																								if((yyvsp[-5].no)->Gentry->Ctype==NULL)
																								{
																									printf("Method (%s) can be called only by an object\n",(yyvsp[-3].no)->varname);
																									exit(0);
																								}

																								struct Memberfunclist *Mtemp = Class_Mlookup(Gtemp->Ctype,(yyvsp[-3].no)->varname);
																								if(Mtemp==NULL)
																								{
																									printf("No Method named %s in class %s\n",(yyvsp[-3].no)->varname,(yyvsp[-5].no)->varname);
																									exit(0);
																								}
																								(yyval.no) = createTree(0,Mtemp->type,"\0",_METHOD1_,(yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[-1].no));
																							}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 528 "ex1.y" /* yacc.c:1646  */
    {
 																								if(Class==NULL)
 																								{
 																									printf("Self cannot be used outside class definition\n");
 																									exit(0);
 																								}
 																								struct Memberfunclist *Mtemp = Class_Mlookup(Class,(yyvsp[-3].no)->varname);

 																								if(Mtemp==NULL)
 																								{
 																									printf("No method named %s in Class %s\n",(yyvsp[-3].no)->varname,Class->name);
 																									exit(0);
 																								}

 																								(yyval.no) = createTree(0,Mtemp->type,Class->name,_METHOD2_,(yyvsp[-3].no),NULL,(yyvsp[-1].no));
 																							}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 545 "ex1.y" /* yacc.c:1646  */
    {
																								struct Fieldlist *Ftemp = Class_Flookup(Class,(yyvsp[-5].no)->left->varname);

																								struct Memberfunclist *Mtemp = Class_Mlookup(Ftemp->Ctype,(yyvsp[-3].no)->varname);
																								if(Mtemp==NULL)
																								{
																									printf("***No Method named %s in class %s\n",(yyvsp[-3].no)->varname,(yyvsp[-5].no)->varname);
																									exit(0);
																								}
																								(yyval.no) = createTree(0,Mtemp->type,"\0",_METHOD3_,(yyvsp[-5].no),(yyvsp[-3].no),(yyvsp[-1].no));
																						 }
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 557 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_PLUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 558 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_MINUS_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 559 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_MUL_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 560 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_DIV_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 561 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Integer"), "\0",_MOD_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 562 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[-1].no);}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 563 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_EQ_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 564 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_NE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 565 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_LE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 566 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_GE_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 567 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_LT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 568 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_GT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 569 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_AND_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 570 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_OR_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 571 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0, TLookup("Boolean"), "\0",_NOT_,(yyvsp[-2].no),NULL,(yyvsp[0].no));}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 572 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 573 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 574 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,TLookup("Type"), "\0", _NULL_, NULL, NULL, NULL);}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 575 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 576 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 577 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = (yyvsp[0].no);}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 578 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_ARRAY_,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 579 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-6].no)->type,(yyvsp[-6].no)->varname,_MATRIX_,(yyvsp[-6].no),(yyvsp[-4].no),(yyvsp[-1].no));}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 580 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_PTR_,(yyvsp[0].no),NULL,NULL);}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 581 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[0].no)->type,(yyvsp[0].no)->varname,_ADDR_,(yyvsp[0].no),NULL,NULL);}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 583 "ex1.y" /* yacc.c:1646  */
    {(yyval.no) = createTree(0,(yyvsp[-3].no)->type,(yyvsp[-3].no)->varname,_FUNC_,(yyvsp[-3].no),NULL,(yyvsp[-1].no));}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2640 "y.tab.c" /* yacc.c:1646  */
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
#line 586 "ex1.y" /* yacc.c:1906  */


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
	start=getLabel();
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "JMP L%d\n", start);
	TypeTableCreate();
	yyparse();
	return 0;
}
