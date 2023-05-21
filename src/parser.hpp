/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    RIGHT_OP = 258,
    LEFT_OP = 259,
    EQ_OP = 260,
    NE_OP = 261,
    AND_OP = 262,
    OR_OP = 263,
    LE_OP = 264,
    GE_OP = 265,
    ADD_ASSIGN = 266,
    SUB_ASSIGN = 267,
    MUL_ASSIGN = 268,
    DIV_ASSIGN = 269,
    MOD_ASSIGN = 270,
    LEFT_ASSIGN = 271,
    RIGHT_ASSIGN = 272,
    AND_ASSIGN = 273,
    XOR_ASSIGN = 274,
    OR_ASSIGN = 275,
    UNSIGNED_RIGHT = 276,
    UNSIGNED_RIGHT_ASSIGN = 277,
    integerLiteral = 278,
    stringLiteral = 279,
    nullLiteral = 280,
    characterLiteral = 281,
    textBlock = 282,
    booleanLiteral = 283,
    FloatingPointLiteral = 284,
    Identifier = 285,
    CONTINUE = 286,
    FOR = 287,
    NEW = 288,
    IF = 289,
    PACKAGE = 290,
    BOOLEAN = 291,
    PRIVATE = 292,
    THIS = 293,
    BREAK = 294,
    DOUBLE = 295,
    THROW = 296,
    BYTE = 297,
    ELSE = 298,
    PUBLIC = 299,
    RETURN = 300,
    INT = 301,
    SHORT = 302,
    CHAR = 303,
    FINAL = 304,
    STATIC = 305,
    VOID = 306,
    CLASS = 307,
    LONG = 308,
    FLOAT = 309,
    WHILE = 310,
    _ = 311,
    YIELD = 312,
    eof = 313,
    INC_OP = 314,
    DEC_OP = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "parser.y++"
 
    char* str;
    treeNode* ptr;
    constants* num;
    int ind;

#line 125 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
