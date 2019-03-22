/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 15 "ex1.y" /* yacc.c:1909  */

	struct tnode *no;

#line 142 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
