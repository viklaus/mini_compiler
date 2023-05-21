/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y++"

    #include "ast.h"
    #include "codegen.h"
    #include<iostream>
    #include<stdio.h>
    #include <fstream>
    using namespace std;
    
    extern char* yytext;
    extern int line;
    extern vector<quad> code;
	vector<string>par;

    extern void yyerror(char const*);
    extern void print3AC();
    int yylex (void); 

    FILE* dotfile;
	ofstream code_file;
    stack<int> block_stack;

    int func_flag = 0;
    int dump_tac = 1;  // testing
    int dump_sym_table = 1; // testing
    int block_count = 0;
    int if_found = 0;
	int isArray = 0;
    int previous_if_found = 0;
    int stop_compiler = 0;		// shows error while parsing
    int type_delim = 0;	
	int debug_mode = 0;		

    string funcName = "";
    string className = "";
    string funcType = "";
    string classTemp ="";
    string type = "";
    string storage_class = "";
    vector<string> funcArgs;
    vector<string> idList;
    vector<vector<string> > currArgs(1,vector<string>() );
    vector<qid> initializer_list_values;
    vector<int> array_dims;
    map<string, vector<int>> gotolablelist;
    map<string, int> gotolabel;
    map<string, int> func_usage_map;
    map<string, vector<qid>> global_array_init_map;
    void set_int_type(int);
    void set_real_type();
    int char_int(string str);
    #define YYDEBUG 1
    #define YYERROR_VERBOSE


#line 125 "parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 245 "parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  257
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  416

#define YYUNDEFTOK  2
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,     2,     2,    14,    15,     2,
       3,     4,    12,    10,    18,    11,     9,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    25,    19,
      20,    26,    21,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     7,     2,     8,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     5,    16,     6,    22,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    92,   103,   115,   125,   135,   144,   157,
     161,   172,   175,   181,   190,   198,   206,   214,   225,   233,
     244,   255,   276,   277,   280,   329,   370,   378,   384,   385,
     395,   396,   404,   423,   447,   448,   465,   469,   473,   477,
     484,   496,   497,   509,   510,   511,   512,   516,   530,   546,
     549,   559,   568,   593,   609,   632,   650,   673,   696,   720,
     746,   757,   812,   852,   871,   875,   876,   880,   884,   901,
     928,   929,   944,   955,   971,   979,   989,  1003,  1004,  1008,
    1009,  1019,  1032,  1048,  1049,  1069,  1070,  1074,  1075,  1079,
    1096,  1097,  1098,  1099,  1100,  1101,  1105,  1106,  1107,  1108,
    1109,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1123,  1152,
    1180,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1196,  1196,
    1211,  1232,  1256,  1280,  1302,  1324,  1338,  1355,  1370,  1387,
    1406,  1426,  1427,  1431,  1432,  1436,  1437,  1441,  1442,  1446,
    1450,  1453,  1464,  1475,  1485,  1497,  1511,  1524,  1534,  1548,
    1548,  1564,  1575,  1576,  1579,  1583,  1584,  1585,  1586,  1587,
    1592,  1593,  1600,  1610,  1623,  1633,  1634,  1638,  1639,  1649,
    1658,  1675,  1695,  1695,  1754,  1767,  1786,  1807,  1818,  1819,
    1829,  1839,  1844,  1845,  1849,  1849,  1884,  1885,  1889,  1891,
    1894,  1897,  1900,  1903,  1906,  1909,  1912,  1915,  1918,  1921,
    1927,  1976,  1980,  1995,  2003,  2040,  2044,  2057,  2092,  2096,
    2110,  2145,  2148,  2189,  2193,  2234,  2238,  2277,  2318,  2322,
    2368,  2412,  2446,  2479,  2484,  2522,  2561,  2571,  2575,  2634,
    2693,  2698,  2765,  2830,  2869,  2874,  2875,  2876,  2909,  2941,
    2945,  2981,  3015,  3017,  3050,  3081,  3085,  3086,  3087,  3088,
    3092,  3129,  3167,  3179,  3188,  3197,  3203,  3215
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", "','",
  "';'", "'<'", "'>'", "'~'", "'!'", "'?'", "':'", "'='", "RIGHT_OP",
  "LEFT_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "UNSIGNED_RIGHT", "UNSIGNED_RIGHT_ASSIGN", "integerLiteral",
  "stringLiteral", "nullLiteral", "characterLiteral", "textBlock",
  "booleanLiteral", "FloatingPointLiteral", "Identifier", "CONTINUE",
  "FOR", "NEW", "IF", "PACKAGE", "BOOLEAN", "PRIVATE", "THIS", "BREAK",
  "DOUBLE", "THROW", "BYTE", "ELSE", "PUBLIC", "RETURN", "INT", "SHORT",
  "CHAR", "FINAL", "STATIC", "VOID", "CLASS", "LONG", "FLOAT", "WHILE",
  "_", "YIELD", "eof", "INC_OP", "DEC_OP", "$accept", "Literal",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "Dims", "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "OrdinaryCompilationUnit", "TopLevelClassOrInterfaceDeclarations",
  "TopLevelClassOrInterfaceDeclaration", "ClassDeclaration", "Modifiers",
  "Modifier", "ClassBody", "ClassBodyDeclarations", "ClassBodyDeclaration",
  "FieldDeclaration", "VariableDeclaratorList", "VariableDeclarator",
  "Declarator", "MethodDeclaration", "MethodHeader", "VOID2",
  "MethodorConstrDeclarator", "SimpleName2", "VariableInitializer",
  "Dimsy", "FormalParameterList", "FormalParameter", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorBody",
  "ExplicitConstructorInvocation", "ArgumentListy", "ClassBodyy", "Block",
  "BlockStatements", "BlockStatement", "Declaration_list",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "LabeledStatement",
  "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IF_CODE", "$@1", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForHeader", "EnhancedForHeader", "ForInity", "Expressiony",
  "ForUpdatey", "ForInit", "ForUpdate", "StatementExpressionList",
  "BreakStatement", "ContinueStatement", "ReturnStatement",
  "ThrowStatement", "EXPR_CODE", "$@2", "N", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression",
  "ClassOrInterfaceTypeToInstantiate", "TypeArgumentsOrDiamondy",
  "ClassOrInterfaceTypeToInstant", "TypeArgumentsOrDiamond", "ArrayAccess",
  "MethodInvocation", "$@3", "ArgumentList", "ArrayCreationExpression",
  "DimExprs", "DimExpr", "Expression", "AssignmentExpression",
  "Assignment", "$@4", "LeftHandSide", "AssignmentOperator",
  "ConditionalExpression", "GOTO_COND", "WRITE_GOTO",
  "ConditionalOrExpression", "GOTO_OR", "ConditionalAndExpression",
  "GOTO_AND", "InclusiveOrExpression", "ExclusiveOrExpression",
  "AndExpression", "EqualityExpression", "RelationalExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression",
  "G", "S", "NEXT_QUAD", "ChangeTable", "A", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,    40,    41,   123,   125,    91,    93,    46,
      43,    45,    42,    47,    37,    38,   124,    94,    44,    59,
      60,    62,   126,    33,    63,    58,    61,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315
};
# endif

#define YYPACT_NINF (-315)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-250)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -315,    27,  -315,   368,  -315,  -315,  -315,  -315,  -315,  -315,
     -24,  -315,  -315,   -31,    52,  -315,  -315,   -24,  -315,    43,
    -315,  -315,  -315,    43,   577,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,    70,  -315,  -315,  -315,    28,  -315,  -315,
    -315,   917,  -315,  -315,  -315,    35,    30,  -315,  -315,  -315,
    -315,    69,    34,  -315,    13,  -315,    88,  -315,    28,    30,
      89,  -315,  -315,  -315,  -315,   750,    42,  -315,   108,  1141,
    -315,   121,  -315,  -315,   790,  -315,  1141,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,    15,   104,   414,
    -315,  -315,    16,  1141,  1071,   118,  1141,  1141,  -315,    42,
     739,    98,  -315,  -315,  -315,   124,  -315,  -315,   114,  -315,
    -315,  -315,  -315,   134,  -315,  -315,  -315,  -315,  -315,   907,
     907,  -315,  -315,  -315,  -315,   146,  -315,     2,  -315,   858,
       6,  -315,  -315,  1139,  -315,  -315,    66,    82,    86,  -315,
    -315,  -315,   667,  1141,  1141,  1141,  1141,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,     5,  -315,    96,  -315,
     161,   165,   172,   142,    67,    23,   169,    91,  -315,  -315,
    -315,  -315,    66,  -315,  -315,  -315,   458,  -315,   181,   867,
     184,   191,  -315,   185,  1001,   195,   194,   202,   203,  -315,
     189,   196,  -315,   199,  -315,    99,   213,  -315,  -315,   192,
    -315,  1141,    19,  -315,  -315,   867,  -315,  -315,   963,  -315,
    -315,    19,  1141,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   223,  -315,
    -315,  -315,  -315,  1141,  -315,  -315,  1141,  -315,  1141,  1141,
    1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,  1141,
    1141,  1141,  1141,  1141,  1141,  1141,   222,    30,    45,  -315,
    1141,   224,  -315,  -315,  -315,   206,   214,   221,  -315,  -315,
    1141,   226,  -315,   187,   227,  1141,  1141,  -315,  -315,  -315,
    -315,  1141,   234,   187,  -315,  -315,   907,  -315,   241,   228,
    -315,  -315,   188,  -315,  -315,  -315,  -315,  -315,   963,   963,
     251,  -315,   250,  1141,  1141,  -315,    96,   161,   165,   172,
     142,    67,    67,    23,    23,    23,    23,   169,   169,   169,
      91,    91,  -315,  -315,  -315,   252,  -315,  -315,   222,  -315,
    -315,   258,   245,  -315,  -315,  1141,   263,  1141,   256,  1088,
    -315,  -315,   194,   244,  -315,  -315,   264,   265,   269,   263,
     271,  -315,  -315,  -315,  -315,   200,   963,  -315,  -315,  1141,
    -315,  -315,  -315,   253,   222,  -315,  -315,   811,   260,  1141,
     273,  -315,   261,  -315,  -315,  -315,  -315,    43,  -315,  -315,
    -315,  -315,  -315,   963,  -315,  -315,   277,  -315,  -315,  -315,
    -315,  -315,  -315,   263,  -315,  -315,   907,   280,  -315,   907,
     237,  -315,  1141,   284,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   963,   963,  -315,  -315
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      28,     0,    26,    27,     1,    31,    37,    36,    39,    38,
       0,    29,    30,     0,    34,   253,   254,     0,    35,     0,
     254,    41,    33,     0,     0,    32,    40,    10,    19,    13,
      15,    14,    17,    38,    60,    16,    18,     0,     9,    11,
      12,     0,    42,    43,    44,     0,     0,    45,    46,   256,
      72,    53,     0,    49,    51,    57,     0,    63,     0,     0,
       0,    71,    55,    70,    59,     0,     0,    48,     0,     0,
     257,     0,    56,    58,     0,    73,     0,    82,   102,     2,
       6,     8,     5,     7,     4,     3,    24,     0,     0,     0,
     118,   155,     0,     0,     0,     0,     0,     0,   154,     0,
     247,    22,    23,    88,   101,   255,    83,    85,     0,    86,
      90,    91,   103,     0,   255,    92,    93,    94,    95,     0,
       0,   104,   105,   106,   107,   246,   152,   117,   160,   158,
     116,   153,   111,     0,   112,   113,     0,   114,   115,    53,
      50,    54,     0,     0,     0,     0,     0,    22,    52,   157,
     159,    64,   181,   182,   183,   255,   201,   255,   205,   255,
     208,   211,   213,   215,   218,   223,   227,   230,   234,   235,
     236,   239,   242,   248,   249,   245,     0,    47,   155,     0,
     255,     0,   145,     0,   131,     0,   167,     0,     0,   143,
       0,     0,   147,     0,   255,   247,   158,   240,   241,    89,
     172,     0,     0,   255,    81,     0,    87,   110,     0,   125,
     126,     0,     0,   188,   192,   193,   190,   189,   191,   194,
     195,   197,   198,   199,   196,   184,   250,   251,     0,   237,
     238,   243,   244,     0,   202,   206,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,     0,    67,
      77,   255,    75,   156,   144,   138,   140,     0,   132,   137,
       0,    65,   178,     0,   165,    77,     0,   142,   148,   146,
     149,    77,     0,     0,    25,   161,     0,    84,     0,    22,
     120,   151,    90,    97,   255,    98,    99,   100,     0,     0,
       0,   162,     0,     0,     0,   203,   204,   207,   210,   212,
     214,   216,   217,   219,   220,   222,   221,   225,   224,   226,
     228,   229,   231,   232,   233,     0,    66,    62,    65,   255,
     255,     0,    78,   175,    74,     0,     0,   133,     0,     0,
     177,   179,   167,     0,   164,   166,     0,     0,     0,     0,
       0,   170,   108,   255,   255,     0,     0,   127,   128,    77,
     171,   185,   252,     0,    20,    69,    61,     0,     0,     0,
       0,   141,     0,   134,   180,   168,   169,    79,   119,   255,
     150,   173,   149,     0,   255,   151,     0,   255,    21,    68,
      76,   176,   130,   135,    80,   163,     0,     0,   109,     0,
       0,   174,     0,     0,   136,   139,   123,   255,   121,   255,
     200,   129,     0,     0,   124,   122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,    -8,  -315,  -315,  -315,   -74,   302,   -64,  -315,
    -315,  -315,  -315,  -315,   288,    18,  -315,   -23,  -315,  -315,
    -315,   -37,   235,  -315,  -315,  -315,   283,   -15,    36,  -315,
    -267,  -315,   -61,  -315,  -315,  -315,  -315,  -315,  -262,  -315,
      -9,   -65,   100,  -315,   143,  -113,  -221,  -200,  -315,  -315,
    -315,  -182,  -167,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,  -162,    -1,  -315,  -315,  -315,  -315,  -315,  -314,  -315,
    -315,  -315,  -315,   -56,  -315,   -67,  -315,  -315,   -62,  -131,
    -315,  -315,   -14,  -315,   369,   -60,  -315,  -315,  -315,  -315,
      73,   359,    37,   427,  -315,  -315,  -315,   -45,  -315,  -315,
    -315,  -315,   102,  -315,   103,   122,   120,   123,   -44,   -86,
    -138,   -51,   -79,   -27,     9,  -315,    44,    77,   183,  -315,
     351,   350,   304,  -315,  -315
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,    99,    38,    39,    40,   326,   100,   147,   102,
       1,     2,     3,    11,   103,    13,    14,    22,    24,    42,
      43,    52,    53,    54,    44,    45,    46,    55,    56,   148,
     327,   258,   259,    62,    47,    48,    75,   179,   331,   395,
     104,   105,   106,   107,   108,   109,   291,   110,   111,   293,
     112,   113,   114,   188,   115,   116,   295,   117,   296,   118,
     297,   119,   120,   267,   372,   403,   268,   404,   269,   121,
     122,   123,   124,   348,   349,   355,   125,   126,   149,   128,
     187,   344,   274,   345,   129,   150,   281,   332,   131,   271,
     272,   333,   152,   132,   303,   133,   225,   154,   155,   363,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      16,    19,   205,    65,   176
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   101,   266,   127,   340,   130,   209,   210,   292,   180,
     101,  -157,   127,   346,   130,  -159,    37,   197,   198,   350,
      68,    71,   371,   183,    50,   186,    60,     4,   190,   234,
      15,    64,    18,    58,   182,   189,    63,   235,   134,    69,
      49,   294,    41,    72,    73,    17,   298,   134,    21,   329,
     248,   249,    66,    67,    61,   101,   101,   127,   127,   130,
     130,   365,   199,   330,   229,   230,   231,   232,   250,    86,
      86,   285,   -63,    86,   135,    49,   283,   357,   358,   405,
     301,   185,    51,   135,    57,  -157,  -157,   244,   245,  -159,
    -159,    70,   134,   134,    74,   290,   139,   386,   292,   292,
     246,   247,   200,   253,   254,   255,   201,   184,   202,   136,
     317,   318,   319,     6,   261,   101,   141,   127,   136,   130,
       7,   194,   127,   203,   130,     8,     9,   237,   135,   135,
     204,   294,   294,   206,   228,   385,   298,   298,   284,    66,
     177,   101,   137,   127,   289,   130,   127,   300,   130,   226,
     227,   137,   134,   207,   266,   211,   292,   134,   313,   314,
     315,   316,   398,   136,   136,  -248,  -248,   380,   257,  -249,
    -249,   242,   243,   352,   322,   323,   324,   239,   134,   251,
     252,   134,   240,   292,   260,   209,   210,   241,   135,   294,
     262,   414,   415,   135,   298,   263,   137,   137,   311,   312,
     320,   321,   270,   273,   264,   275,   276,   299,   277,   342,
      66,   266,   292,   292,   135,   278,   294,   135,   279,   186,
     212,   298,   101,   136,   127,   362,   130,   304,   136,   325,
     334,   335,   336,   339,   289,   289,   127,   127,   130,   130,
     337,    86,   351,   290,   353,   294,   294,   343,   138,   136,
     298,   298,   136,   354,   359,   -96,   137,   138,   360,   134,
     364,   137,   368,   369,   374,   376,    76,   384,   377,   378,
     352,   134,   134,   379,   127,   381,   130,   392,   387,   390,
     393,   401,   137,   406,   407,   137,   408,   127,   411,   130,
     388,    12,   289,   328,   127,   135,   130,   299,   299,   406,
     408,   140,   138,   138,   409,   287,   389,   135,   135,   134,
      79,    80,    81,    82,    83,    84,    85,    86,   400,   289,
      89,   127,   134,   130,    59,    91,   397,   265,   375,   134,
     136,   127,   101,   130,   127,   101,   130,   127,   306,   130,
     361,   307,   136,   136,   341,   135,    96,    97,   289,   289,
     127,   127,   130,   130,   394,   299,   134,   410,   135,   257,
     309,   308,   138,   137,   310,   135,   134,   138,    20,   134,
      23,     0,   134,     0,     0,   137,   137,     0,     0,     0,
     136,     0,   299,     0,     0,   134,   134,     5,   138,     0,
       0,   138,   135,   136,     0,     0,     0,     0,   195,   195,
     136,     0,   135,     0,     0,   135,     0,     0,   135,     0,
       0,   299,   299,   137,     0,     0,     0,     0,   208,     0,
       0,   135,   135,     0,     0,     0,   137,   136,   151,     6,
       0,     0,     0,   137,     0,   181,     7,   136,     0,     0,
     136,     8,     9,   136,    10,   195,   195,   195,   195,     0,
       0,     0,   191,   193,     0,     0,   136,   136,     0,   233,
     137,   236,   256,   238,     0,   196,   196,     0,    86,   138,
     137,     0,     0,   137,    27,     0,   137,     0,    28,     0,
      29,   138,   138,     0,    30,    31,    32,     0,     0,   137,
     137,    35,    36,     0,     0,     0,   153,     0,   280,     0,
       0,   181,     0,   153,     0,     0,     0,   286,     0,     0,
       0,     0,   196,   196,   196,   196,     0,     0,    27,   138,
     153,   153,    28,     0,    29,     0,     0,     0,    30,    31,
      32,     0,   138,     0,     0,    35,    36,     0,   195,   138,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,     0,     0,
     282,     0,     0,     0,     0,     0,   138,     0,     0,   153,
       0,   302,     0,     0,     0,     0,   138,     0,     0,   138,
       0,     0,   138,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   305,     0,     0,   138,   138,     0,   356,     0,
       0,     0,     0,     0,     0,   196,   195,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,     0,     0,     0,   153,   338,
       0,     0,     0,   366,   367,   347,     0,    27,     6,   153,
       0,    28,     0,    29,     0,     7,     0,    30,    31,    32,
       8,    33,    34,     0,    35,    36,     0,   382,   383,     0,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,     0,     0,   196,     0,     0,     0,   143,   144,     0,
       0,     0,     0,   396,     0,     0,     0,   153,   399,   145,
     146,   402,     0,     0,   370,     0,   373,   153,   338,     0,
       0,     0,   153,   153,   195,     0,     0,     0,   153,     0,
       0,   412,     0,   413,    79,    80,    81,    82,    83,    84,
      85,    86,     0,     0,    89,     0,     0,    27,   391,    91,
     153,    28,     0,    29,     0,     0,     0,    30,    31,    32,
       0,     0,   200,     0,    35,    36,   201,     0,   202,     0,
      96,    97,     0,    76,     0,    49,    77,     0,     0,     0,
       0,     0,   153,     0,   153,  -186,   153,     0,     0,    78,
       0,   196,     0,     0,  -186,  -186,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,     0,  -186,   153,     0,     0,     0,
       0,     0,     0,    76,     0,    49,   153,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    78,
      27,     6,    91,    92,    28,    93,    29,     0,     7,    94,
      30,    31,    32,     8,     9,     0,    10,    35,    36,    95,
       0,     0,     0,    96,    97,     0,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     0,
      27,     6,   178,    92,    28,    93,    29,     0,     7,    94,
      30,    31,    32,     8,     9,   212,    10,    35,    36,    95,
      76,    27,    49,    96,    97,    28,     0,    29,     0,     0,
       0,    30,    31,    32,  -187,     0,    78,     0,    35,    36,
       0,     0,     0,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,     0,  -187,     0,     0,     0,     0,     0,
      76,     0,    49,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    78,    27,     6,    91,
      92,    28,    93,    29,     0,     7,    94,    30,    31,    32,
       8,     9,     0,    10,    35,    36,    95,     0,     0,     0,
      96,    97,     0,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    76,     0,    49,    91,
      92,    57,    93,     0,     0,     0,    94,    27,     0,     0,
       0,    28,    78,    29,     0,     0,    95,    30,    31,    32,
      96,    97,    34,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     0,     0,    91,    92,     0,    93,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   288,     0,     0,     0,    96,    97,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,    89,     0,
       0,    27,     0,    91,     0,    28,     0,    29,     0,     0,
       0,    30,    31,    32,   142,     0,     0,     0,    35,    36,
       0,   143,   144,     0,    96,    97,     0,     0,     0,     0,
     192,   142,     0,   145,   146,     0,   364,     0,   143,   144,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   146,     0,     0,     0,     0,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,    89,     0,
       0,     0,     0,    91,     0,    79,    80,    81,    82,    83,
      84,    85,    86,     0,   142,    89,     0,     0,     0,     0,
      91,   143,   144,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,   145,   146,   213,     0,     0,     0,     0,
       0,    96,    97,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,     0,   224,     0,     0,    79,    80,
      81,    82,    83,    84,    85,    86,     0,     0,    89,     0,
       0,     0,     0,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,    97
};

static const yytype_int16 yycheck[] =
{
      23,    65,   184,    65,   271,    65,   119,   120,   208,    74,
      74,     9,    74,   275,    74,     9,    24,    96,    97,   281,
       7,    58,   336,    87,    33,    89,    41,     0,    92,    24,
      54,    46,    14,    41,    19,    19,    45,    32,    65,    26,
       5,   208,    24,    58,    59,    76,   208,    74,     5,     4,
      27,    28,    18,    19,    19,   119,   120,   119,   120,   119,
     120,   328,    99,    18,   143,   144,   145,   146,    45,    54,
      54,   202,     3,    54,    65,     5,    57,   298,   299,   393,
     211,    89,    54,    74,    54,    83,    84,    20,    21,    83,
      84,     3,   119,   120,     5,   208,    54,   359,   298,   299,
      33,    34,     3,    12,    13,    14,     7,     3,     9,    65,
     248,   249,   250,    61,   179,   179,     8,   179,    74,   179,
      68,     3,   184,    25,   184,    73,    74,    31,   119,   120,
       6,   298,   299,    19,   142,   356,   298,   299,   202,    18,
      19,   205,    65,   205,   208,   205,   208,   211,   208,    83,
      84,    74,   179,    19,   336,     9,   356,   184,   244,   245,
     246,   247,   383,   119,   120,    83,    84,   349,   176,    83,
      84,    29,    30,   286,   253,   254,   255,    16,   205,    10,
      11,   208,    17,   383,     3,   298,   299,    15,   179,   356,
       6,   412,   413,   184,   356,     4,   119,   120,   242,   243,
     251,   252,     7,     9,    19,     3,     3,   208,    19,   273,
      18,   393,   412,   413,   205,    19,   383,   208,    19,   283,
       7,   383,   286,   179,   286,   304,   286,     4,   184,     7,
       6,    25,    18,     7,   298,   299,   298,   299,   298,   299,
      19,    54,     8,   356,     3,   412,   413,    20,    65,   205,
     412,   413,   208,    25,     3,    67,   179,    74,     8,   286,
       8,   184,     4,    18,     8,    21,     3,    67,     4,     4,
     383,   298,   299,     4,   336,     4,   336,     4,    25,    19,
      19,     4,   205,   396,     4,   208,   399,   349,     4,   349,
     364,     3,   356,   257,   356,   286,   356,   298,   299,   412,
     413,    66,   119,   120,    67,   205,   367,   298,   299,   336,
      47,    48,    49,    50,    51,    52,    53,    54,   385,   383,
      57,   383,   349,   383,    41,    62,   382,   184,   342,   356,
     286,   393,   396,   393,   396,   399,   396,   399,   236,   399,
     303,   238,   298,   299,   271,   336,    83,    84,   412,   413,
     412,   413,   412,   413,   377,   356,   383,   402,   349,   367,
     240,   239,   179,   286,   241,   356,   393,   184,    17,   396,
      20,    -1,   399,    -1,    -1,   298,   299,    -1,    -1,    -1,
     336,    -1,   383,    -1,    -1,   412,   413,    19,   205,    -1,
      -1,   208,   383,   349,    -1,    -1,    -1,    -1,    96,    97,
     356,    -1,   393,    -1,    -1,   396,    -1,    -1,   399,    -1,
      -1,   412,   413,   336,    -1,    -1,    -1,    -1,   114,    -1,
      -1,   412,   413,    -1,    -1,    -1,   349,   383,    69,    61,
      -1,    -1,    -1,   356,    -1,    76,    68,   393,    -1,    -1,
     396,    73,    74,   399,    76,   143,   144,   145,   146,    -1,
      -1,    -1,    93,    94,    -1,    -1,   412,   413,    -1,   155,
     383,   157,     4,   159,    -1,    96,    97,    -1,    54,   286,
     393,    -1,    -1,   396,    60,    -1,   399,    -1,    64,    -1,
      66,   298,   299,    -1,    70,    71,    72,    -1,    -1,   412,
     413,    77,    78,    -1,    -1,    -1,    69,    -1,   194,    -1,
      -1,   142,    -1,    76,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,   143,   144,   145,   146,    -1,    -1,    60,   336,
      93,    94,    64,    -1,    66,    -1,    -1,    -1,    70,    71,
      72,    -1,   349,    -1,    -1,    77,    78,    -1,   236,   356,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,   142,
      -1,   212,    -1,    -1,    -1,    -1,   393,    -1,    -1,   396,
      -1,    -1,   399,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,   412,   413,    -1,   294,    -1,
      -1,    -1,    -1,    -1,    -1,   236,   304,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,    -1,    -1,    -1,   201,   270,
      -1,    -1,    -1,   329,   330,   276,    -1,    60,    61,   212,
      -1,    64,    -1,    66,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    -1,    77,    78,    -1,   353,   354,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,   304,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    -1,   379,    -1,    -1,    -1,   260,   384,    22,
      23,   387,    -1,    -1,   335,    -1,   337,   270,   339,    -1,
      -1,    -1,   275,   276,   402,    -1,    -1,    -1,   281,    -1,
      -1,   407,    -1,   409,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    -1,    60,   369,    62,
     303,    64,    -1,    66,    -1,    -1,    -1,    70,    71,    72,
      -1,    -1,     3,    -1,    77,    78,     7,    -1,     9,    -1,
      83,    84,    -1,     3,    -1,     5,     6,    -1,    -1,    -1,
      -1,    -1,   335,    -1,   337,    26,   339,    -1,    -1,    19,
      -1,   402,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,   359,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,   369,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    19,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    83,    84,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,     7,    76,    77,    78,    79,
       3,    60,     5,    83,    84,    64,    -1,    66,    -1,    -1,
      -1,    70,    71,    72,    26,    -1,    19,    -1,    77,    78,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    19,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    -1,    -1,    -1,
      83,    84,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     3,    -1,     5,    62,
      63,    54,    65,    -1,    -1,    -1,    69,    60,    -1,    -1,
      -1,    64,    19,    66,    -1,    -1,    79,    70,    71,    72,
      83,    84,    75,    -1,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    83,    84,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    64,    -1,    66,    -1,    -1,
      -1,    70,    71,    72,     3,    -1,    -1,    -1,    77,    78,
      -1,    10,    11,    -1,    83,    84,    -1,    -1,    -1,    -1,
      19,     3,    -1,    22,    23,    -1,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,     3,    57,    -1,    -1,    -1,    -1,
      62,    10,    11,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    26,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    95,    96,    97,     0,    19,    61,    68,    73,    74,
      76,    98,    99,   100,   101,    54,   205,    76,   100,   206,
     205,     5,   102,   206,   103,   102,     6,    60,    64,    66,
      70,    71,    72,    74,    75,    77,    78,    87,    88,    89,
      90,   100,   104,   105,   109,   110,   111,   119,   120,     5,
     125,    54,   106,   107,   108,   112,   113,    54,    87,   111,
     112,    19,   118,   125,   112,   208,    18,    19,     7,    26,
       3,   106,   112,   112,     5,   121,     3,     6,    19,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    62,    63,    65,    69,    79,    83,    84,    86,    87,
      92,    93,    94,    99,   125,   126,   127,   128,   129,   130,
     132,   133,   135,   136,   137,   139,   140,   142,   144,   146,
     147,   154,   155,   156,   157,   161,   162,   163,   164,   169,
     170,   173,   178,   180,   198,   199,   201,   202,   203,    54,
     107,     8,     3,    10,    11,    22,    23,    93,   114,   163,
     170,   176,   177,   178,   182,   183,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   209,    19,    62,   122,
     126,   176,    19,    93,     3,    87,    93,   165,   138,    19,
      93,   176,    19,   176,     3,    92,   169,   197,   197,   106,
       3,     7,     9,    25,     6,   207,    19,    19,   207,   130,
     130,     9,     7,    26,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    46,   181,    83,    84,    87,   197,
     197,   197,   197,   207,    24,    32,   207,    31,   207,    16,
      17,    15,    29,    30,    20,    21,    33,    34,    27,    28,
      45,    10,    11,    12,    13,    14,     4,    87,   116,   117,
       3,   126,     6,     4,    19,   129,   136,   148,   151,   153,
       7,   174,   175,     9,   167,     3,     3,    19,    19,    19,
     207,   171,   176,    57,    93,   164,   207,   127,    79,    93,
     130,   131,   132,   134,   137,   141,   143,   145,   146,   147,
      93,   164,   176,   179,     4,   176,   187,   189,   190,   191,
     192,   193,   193,   194,   194,   194,   194,   195,   195,   195,
     196,   196,   197,   197,   197,     7,    91,   115,   113,     4,
      18,   123,   172,   176,     6,    25,    18,    19,   176,     7,
     115,   175,    93,    20,   166,   168,   123,   176,   158,   159,
     123,     8,   130,     3,    25,   160,   207,   131,   131,     3,
       8,   177,   197,   184,     8,   115,   207,   207,     4,    18,
     176,   153,   149,   176,     8,   167,    21,     4,     4,     4,
     136,     4,   207,   207,    67,   131,   123,    25,    91,   117,
      19,   176,     4,    19,   102,   124,   207,   158,   131,   207,
     160,     4,   207,   150,   152,   153,   130,     4,   130,    67,
     182,     4,   207,   207,   131,   131
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    94,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   110,   110,   110,   110,
     111,   112,   112,   113,   114,   115,   115,   116,   116,   117,
     118,   118,   119,   120,   121,   121,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   130,   130,   130,   130,   131,   131,   131,   131,
     131,   132,   132,   132,   132,   132,   132,   132,   133,   134,
     135,   136,   136,   136,   136,   136,   136,   136,   138,   137,
     139,   140,   141,   142,   143,   144,   144,   145,   145,   146,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   159,
     158,   160,   161,   161,   162,   162,   162,   162,   162,   162,
     163,   163,   163,   164,   165,   166,   166,   167,   167,   168,
     169,   169,   171,   170,   170,   172,   172,   173,   174,   174,
     175,   176,   177,   177,   179,   178,   180,   180,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     182,   182,   183,   184,   185,   185,   186,   187,   187,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   192,   193,
     193,   193,   193,   193,   194,   194,   194,   194,   195,   195,
     195,   196,   196,   196,   196,   197,   197,   197,   197,   197,
     198,   199,   200,   200,   200,   200,   201,   201,   201,   201,
     202,   203,   204,   205,   206,   207,   208,   209
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     3,     1,     1,     0,     2,
       1,     1,     5,     4,     1,     2,     1,     1,     1,     1,
       3,     0,     2,     1,     1,     1,     1,     4,     3,     1,
       3,     1,     3,     1,     3,     2,     3,     2,     3,     2,
       1,     6,     5,     1,     1,     0,     1,     1,     4,     3,
       1,     1,     2,     3,     4,     3,     5,     0,     1,     0,
       1,     4,     3,     1,     3,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       3,     7,     7,     7,     7,     2,     2,     2,     2,     8,
       6,     0,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     3,     3,     2,     3,     2,     3,     2,     3,     0,
       2,     0,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     3,     6,     3,     0,     1,     0,     3,     2,
       4,     4,     0,     5,     6,     1,     3,     4,     1,     2,
       3,     1,     1,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     1,     2,     0,     3,     1,     2,     3,     1,     2,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     1,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     1,     0,     0,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 82 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("int");
        (yyval.ptr)->intVal = stoi(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1945 "parser.cpp"
    break;

  case 3:
#line 92 "parser.y++"
                           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("float");
        (yyval.ptr)->realVal = stod(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();

    }
#line 1961 "parser.cpp"
    break;

  case 4:
#line 103 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("boolean");
        if(string((yyvsp[0].str)) == "true") (yyval.ptr)->intVal = 1;
        else (yyval.ptr)->intVal = 0;
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1978 "parser.cpp"
    break;

  case 5:
#line 115 "parser.y++"
                       {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("char");
        (yyval.ptr)->intVal = char_int(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1993 "parser.cpp"
    break;

  case 6:
#line 125 "parser.y++"
                    {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("string");
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2008 "parser.cpp"
    break;

  case 7:
#line 135 "parser.y++"
                {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("textblock");
        (yyval.ptr)->tbval = (yyvsp[0].str);
        (yyval.ptr)->expType = 4;
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2022 "parser.cpp"
    break;

  case 8:
#line 144 "parser.y++"
                  {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("null");
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 2036 "parser.cpp"
    break;

  case 9:
#line 157 "parser.y++"
                  {
        type = (yyvsp[0].ptr)->type;
        (yyval.ptr) = (yyvsp[0].ptr);
	}
#line 2045 "parser.cpp"
    break;

  case 10:
#line 161 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type = (yyvsp[0].str);
        (yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2057 "parser.cpp"
    break;

  case 11:
#line 172 "parser.y++"
                   {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2065 "parser.cpp"
    break;

  case 12:
#line 175 "parser.y++"
                        {
        (yyval.ptr) = (yyvsp[0].ptr) ;
    }
#line 2073 "parser.cpp"
    break;

  case 13:
#line 181 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);

    }
#line 2087 "parser.cpp"
    break;

  case 14:
#line 190 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2100 "parser.cpp"
    break;

  case 15:
#line 198 "parser.y++"
          {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2113 "parser.cpp"
    break;

  case 16:
#line 206 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2126 "parser.cpp"
    break;

  case 17:
#line 214 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2139 "parser.cpp"
    break;

  case 18:
#line 225 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2152 "parser.cpp"
    break;

  case 19:
#line 233 "parser.y++"
             {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2165 "parser.cpp"
    break;

  case 20:
#line 244 "parser.y++"
           {
        vector<data2>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
		(yyval.ptr)->expType = 2;
        (yyval.ptr)->type = "*";

    }
#line 2181 "parser.cpp"
    break;

  case 21:
#line 255 "parser.y++"
                 {
        vector<data2>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
        if(!(yyvsp[0].ptr)->is_error){
            (yyval.ptr)->expType = 2;
            (yyval.ptr)->type = (yyvsp[0].ptr)->type + "*";
        }
        else {
            (yyval.ptr)->is_error = 1;
        }
    }
#line 2202 "parser.cpp"
    break;

  case 22:
#line 276 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2208 "parser.cpp"
    break;

  case 23:
#line 277 "parser.y++"
                  {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2214 "parser.cpp"
    break;

  case 24:
#line 280 "parser.y++"
               {
        (yyval.ptr)=makeleaf((yyvsp[0].str));

        // Semantics
		cout << "in Simplename\n";
		string temp = primaryExpression(string((yyvsp[0].str)));  
		// if type is there in the symbol table then this means the variable is already declared
		if(temp == ""){
			yyerror(("Undeclared Identifier " + string((yyvsp[0].str))).c_str());
		}
		else{
			if(temp.substr(0, 5) == "FUNC_"){
				(yyval.ptr)->expType = 3;
			}
			else
			{
				if((*curr_table)[string((yyvsp[0].str))]->init == 0){
					yyerror("Uninitialized variable used ");
				}
				if(temp.back() == '*'){
					(yyval.ptr)->expType = 2; 
				}
				else (yyval.ptr)->expType = 1;
			}

			if(temp.substr(0,5)=="FUNC_" && temp.back() == '#'){
				temp.pop_back();
				(yyval.ptr)->type = temp;
				(yyval.ptr)->tempName = string((yyvsp[0].str)); 

                // --3AC 
				(yyval.ptr)->nextlist.clear();
			}
			else{

				(yyval.ptr)->type = temp;
				(yyval.ptr)->isInit = lookup(string((yyvsp[0].str)))->init;
				(yyval.ptr)->size = getSize(temp);
				(yyval.ptr)->tempName = string((yyvsp[0].str)); 
				
				//--3AC
				(yyval.ptr)->place = qid(string((yyvsp[0].str)), lookup(string((yyvsp[0].str))));
				(yyval.ptr)->nextlist.clear();

			}
		}
    }
#line 2266 "parser.cpp"
    break;

  case 25:
#line 329 "parser.y++"
                        {
        vector<data2>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Name.id", v);

        //Semantics
		if(!(yyvsp[-2].ptr)->is_error && (yyvsp[-2].ptr)->expType!=4){
			string temp = string((yyvsp[0].ptr)->tempName);
			int ret = findTypeAttr((yyvsp[-2].ptr)->type,temp);
			if(ret == -1){
				yyerror(("Class " + (yyvsp[-2].ptr)->node_name + " not defined").c_str());
				(yyval.ptr)->is_error = 1;
			}
			else if (ret == 0){
				yyerror(("Class " + (yyvsp[-2].ptr)->type.substr(6, (yyvsp[-2].ptr)->type.length()-6) + " has no member " + string((yyvsp[0].ptr)->tempName)).c_str());
				(yyval.ptr)->is_error = 1;
			}
			else{
				(yyval.ptr)->type = StructAttrType((yyvsp[-2].ptr)->type, temp);
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + "." + temp;
				
				qid temp_var = newtemp((yyval.ptr)->type);
				sym_entry* attr_sym = retTypeAttrEntry((yyvsp[-2].ptr)->type, string((yyvsp[0].ptr)->tempName), (yyvsp[-2].ptr)->tempName);
				emit(qid("member_access", NULL), (yyvsp[-2].ptr)->place, qid(string((yyvsp[0].ptr)->tempName), attr_sym), temp_var, -1);
				temp_var.second->array_dims = attr_sym->array_dims;
				(yyval.ptr)->place = temp_var;
			}
		}
		else{
			if((yyvsp[-2].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 2308 "parser.cpp"
    break;

  case 26:
#line 370 "parser.y++"
                              {
        vector<data2> v;
        insertAttr(v, (yyvsp[0].ptr), "", 1);
        (yyval.ptr) = makenode("CompilationUnit",v);
    }
#line 2318 "parser.cpp"
    break;

  case 27:
#line 378 "parser.y++"
                                           {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2326 "parser.cpp"
    break;

  case 28:
#line 384 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2332 "parser.cpp"
    break;

  case 29:
#line 385 "parser.y++"
                                                                               {
        vector<data2> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Top_level_class_or_interface_declarations",v);
		cout << "leaving top level\n";
    }
#line 2344 "parser.cpp"
    break;

  case 30:
#line 395 "parser.y++"
                       { (yyval.ptr) = (yyvsp[0].ptr);}
#line 2350 "parser.cpp"
    break;

  case 31:
#line 396 "parser.y++"
         {
        (yyval.ptr) = makeleaf(";");
    }
#line 2358 "parser.cpp"
    break;

  case 32:
#line 404 "parser.y++"
                                    {
		vector<data2>v;
        if((yyvsp[-4].ptr) != NULL) insertAttr(v,(yyvsp[-4].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode((yyvsp[-3].str),v);

        // Semantics
		cout << "hiii\n";
		if(!currTypeLookup("class_" + string((yyvsp[-2].ptr)->tempName))){
			cout << "hi\n";
			printStructTable("class_" + string((yyvsp[-2].ptr)->tempName));
			(yyval.ptr)->type = "class_" + string((yyvsp[-2].ptr)->tempName);
		}
		else {
			yyerror(("redefinition of class " + string((yyvsp[-2].ptr)->tempName)).c_str());
		}
		type = "";
    }
#line 2382 "parser.cpp"
    break;

  case 33:
#line 423 "parser.y++"
                          {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode((yyvsp[-3].str),v);

        // Semantics
		cout << "hiii\n";
		if(!currTypeLookup("class_" + string((yyvsp[-2].ptr)->tempName))){
			cout << "hi\n";
			printStructTable("class_" + string((yyvsp[-2].ptr)->tempName));
			cout << "hii\n";
			type = string("class_" + string((yyvsp[-2].ptr)->tempName));
			(yyval.ptr)->type = type;
		}
		else {
			yyerror(("redefinition of class " + string((yyvsp[-2].ptr)->tempName)).c_str());
			(yyval.ptr)->is_error = 1;
		}
		type = "";
    }
#line 2408 "parser.cpp"
    break;

  case 34:
#line 447 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2414 "parser.cpp"
    break;

  case 35:
#line 448 "parser.y++"
                         {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("modifier",v);

        //  Semantics
		if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
        else{
            (yyval.ptr)->type = string((yyvsp[-1].ptr)->type + "_" + (yyvsp[0].ptr)->type);
        }
    }
#line 2433 "parser.cpp"
    break;

  case 36:
#line 465 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "public";
    }
#line 2442 "parser.cpp"
    break;

  case 37:
#line 469 "parser.y++"
            {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "private";
    }
#line 2451 "parser.cpp"
    break;

  case 38:
#line 473 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "static";
    }
#line 2460 "parser.cpp"
    break;

  case 39:
#line 477 "parser.y++"
          {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "final";
    }
#line 2469 "parser.cpp"
    break;

  case 40:
#line 484 "parser.y++"
                                    {
		vector<data2> v;
		cout<<"entered Class body"<<endl;
        insertAttr(v,NULL,"{",0);
        if((yyvsp[-1].ptr) != NULL) insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("classBody",v);
		cout << "leaving class body\n";
    }
#line 2483 "parser.cpp"
    break;

  case 41:
#line 496 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2489 "parser.cpp"
    break;

  case 42:
#line 497 "parser.y++"
                                                {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Class_Body_Declarations",v);

        // Semantics
		cout << "in classbodydeclarations\n";
    }
#line 2503 "parser.cpp"
    break;

  case 43:
#line 509 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2509 "parser.cpp"
    break;

  case 44:
#line 510 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2515 "parser.cpp"
    break;

  case 45:
#line 511 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2521 "parser.cpp"
    break;

  case 46:
#line 512 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2527 "parser.cpp"
    break;

  case 47:
#line 516 "parser.y++"
                                                         {
        vector<data2> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("Field_Declaration",v);

        // Semantics
		type = (yyvsp[-2].ptr)->type ;
		className = classTemp;
		type_delim = 0;

    }
#line 2546 "parser.cpp"
    break;

  case 48:
#line 530 "parser.y++"
                                               {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("Field_Declaration",v);

        // Semantics
        type = (yyvsp[-2].ptr)->type ;
		className = classTemp;
		type_delim = 0;
    }
#line 2563 "parser.cpp"
    break;

  case 49:
#line 546 "parser.y++"
                         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2571 "parser.cpp"
    break;

  case 50:
#line 549 "parser.y++"
                                                    {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Variable_Declarator_List",v);
    }
#line 2583 "parser.cpp"
    break;

  case 51:
#line 559 "parser.y++"
                 {
        (yyval.ptr) = (yyvsp[0].ptr);

		// Semantics
		if (insertStructAttr((yyvsp[0].ptr)->tempName, (yyvsp[0].ptr)->type, (yyvsp[0].ptr)->size, 0) != 1){
			yyerror(("The Attribute " + string((yyvsp[0].ptr)->tempName) + " is already declared in the same class").c_str());
		} 
		cout << "in Variable declarator\n";
    }
#line 2597 "parser.cpp"
    break;

  case 52:
#line 568 "parser.y++"
                                         {

        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr)=makenode("=",v);

        // Semantics
        if(assignExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,"=") == ""){
			cout<<(yyvsp[0].ptr)->type<<endl;
            yyerror("Incorrect type assignment");
        }
		if (insertStructAttr((yyvsp[-2].ptr)->tempName, (yyvsp[-2].ptr)->type, (yyvsp[-2].ptr)->size, 1) != 1){
			yyerror(("The Attribute " + string((yyvsp[-2].ptr)->tempName) + " is already declared in the same class").c_str());
		} 
		//3 AC
		(yyval.ptr)->type=(yyvsp[-2].ptr)->type;
		(yyvsp[-2].ptr)->place = qid((yyvsp[-2].ptr)->tempName, lookup((yyvsp[-2].ptr)->tempName));
		int num = assign_exp((yyvsp[-1].str), (yyval.ptr)->type, (yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place);
		(yyval.ptr)->place = (yyvsp[-2].ptr)->place;
		backpatch((yyvsp[0].ptr)->nextlist, num);
    }
#line 2624 "parser.cpp"
    break;

  case 53:
#line 593 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

		// Semantics
        type_delim = 1;
		(yyval.ptr)->expType = 1; // Variable
		if(type != "") (yyval.ptr)->type = type;
		else {
            yyerror("Unspecified type of the identifier\n");
        }
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		(yyval.ptr)->size = getSize(type);

		//3AC
		
    }
#line 2645 "parser.cpp"
    break;

  case 54:
#line 609 "parser.y++"
                         {
        vector<data2> v;
		insertAttr(v, (yyvsp[-2].ptr), "", 1);
		insertAttr(v, NULL, "[ ]", 0);
		(yyval.ptr) = makenode("direct_declarator", v);

		// Semantics
		if((yyvsp[-2].ptr)->expType <=2 ) {
			(yyval.ptr)->expType = 2;
			(yyval.ptr)->type = (yyvsp[-2].ptr)->type + "*";
			(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName;
			(yyval.ptr)->size = 4;	
			(yyval.ptr)->intVal = 8;

			//3AC
			(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
			array_dims.push_back(0);
		}
		else yyerror(( (yyvsp[-2].ptr)->tempName + " declared as function returning an array").c_str());
    }
#line 2670 "parser.cpp"
    break;

  case 55:
#line 632 "parser.y++"
                             {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_declaration",v);

        // Semantics
		for(auto i: gotolablelist){
			if(gotolabel.find(i.first) == gotolabel.end()){
				yyerror(("label \'" + string(i.first) + "\' used but not defined").c_str());
			}
			else backpatch(i.second, gotolabel[i.first]);
		}
		emit(qid("FUNC_"+className+ "."+funcName + " end :", NULL), qid("",NULL), qid("", NULL), qid("", NULL), -1);
		backpatch_rem();
    }
#line 2691 "parser.cpp"
    break;

  case 56:
#line 650 "parser.y++"
                                                     {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = (yyvsp[-1].ptr)->type ;
		type_delim = 0;

		//3AC
		emit(qid("push",NULL),qid("",NULL),qid("",NULL),qid("BP",NULL),-1);
		emit(qid("=",NULL),qid("SP",NULL),qid("",NULL),qid("BP",NULL),-1);
		for(auto it:par){
			sym_entry* n = lookup(it);
			if(n){
				int offset=n->offset;
				emit(qid("=",NULL),qid("[BP"+ to_string(offset) +"]",NULL),qid("",NULL),qid(it,NULL),-1);
			}
		}
		par.clear();
    }
#line 2719 "parser.cpp"
    break;

  case 57:
#line 673 "parser.y++"
                                           {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = (yyvsp[-1].ptr)->type;
		// funcName = funcTemp;
		type_delim = 0;

		//3AC
		emit(qid("push",NULL),qid("",NULL),qid("",NULL),qid("BP",NULL),-1);
		emit(qid("=",NULL),qid("SP",NULL),qid("",NULL),qid("BP",NULL),-1);
		for(auto it:par){
			sym_entry* n = lookup(it);
			if(n){
				int offset=n->offset;
				emit(qid("=",NULL),qid("[BP"+ to_string(offset) +"]",NULL),qid("",NULL),qid(it,NULL),-1);
			}
		}
		par.clear();
    }
#line 2747 "parser.cpp"
    break;

  case 58:
#line 696 "parser.y++"
                                             {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "void";
		className = classTemp;
		type_delim = 0;

		//3AC
		emit(qid("push",NULL),qid("",NULL),qid("",NULL),qid("bp",NULL),-1);
		emit(qid("=",NULL),qid("sp",NULL),qid("",NULL),qid("bp",NULL),-1);
		for(auto it:par){
			sym_entry* n = lookup(it);
			if(n){
				int offset=n->offset;
				emit(qid("=",NULL),qid("[BP"+ to_string(offset)+"]",NULL),qid("",NULL),qid(it,NULL),-1);
			}
		}
		par.clear();
    }
#line 2776 "parser.cpp"
    break;

  case 59:
#line 720 "parser.y++"
                                   {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "void";
		className = classTemp;
		type_delim = 0;

		//3AC
		emit(qid("push",NULL),qid("",NULL),qid("",NULL),qid("bp",NULL),-1);
		emit(qid("=",NULL),qid("sp",NULL),qid("",NULL),qid("bp",NULL),-1);
		for(auto it:par){
			sym_entry* n = lookup(it);
			if(n){
				int offset=n->offset;
				emit(qid("=",NULL),qid("[BP"+ to_string(offset)+ "]",NULL),qid("",NULL),qid(it,NULL),-1);
			}
		}
		par.clear();
    }
#line 2804 "parser.cpp"
    break;

  case 60:
#line 746 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2817 "parser.cpp"
    break;

  case 61:
#line 757 "parser.y++"
                                                          {
        vector<data2> v;
        insertAttr(v,(yyvsp[-5].ptr),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.ptr) = makenode("Method_declarator",v);

		// Semantics
			if((yyvsp[-5].ptr)->expType == 1) {
				(yyval.ptr)->tempName = (yyvsp[-5].ptr)->tempName;
				(yyval.ptr)->expType = 3;
				(yyval.ptr)->type = string((yyvsp[-5].ptr)->type);
				(yyval.ptr)->size = getSize((yyval.ptr)->type);

				vector<string> temp = getFuncArgs((yyvsp[-5].ptr)->tempName);
				if(temp.size() >=1 && temp[0] == "#NO_FUNC"){
					insertFuncArg((yyval.ptr)->tempName, funcArgs, (yyval.ptr)->type);
					// for(auto it:temp)cout<<it<<endl;
					funcArgs.clear();
					funcName = string((yyvsp[-5].ptr)->tempName);
					funcType = (yyvsp[-5].ptr)->type;

					//3AC
					(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
					backpatch((yyvsp[-2].ptr)->nextlist,(yyvsp[0].ind));
					{emit(pair<string,sym_entry*>("FUNC_"+className+ "." + (yyvsp[-5].ptr)->tempName +" start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);}
					
				}
				else{
					// Check if temp is correct
					if(temp == funcArgs){
						funcArgs.clear();
						funcName = string((yyvsp[-5].ptr)->tempName);
						funcType = (yyvsp[-5].ptr)->type;

						//3AC
						(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
						backpatch((yyvsp[-2].ptr)->nextlist,(yyvsp[0].ind));
						{emit(pair<string,sym_entry*>("FUNC_" +className+ "."+ (yyvsp[-5].ptr)->tempName + " start :",NULL) ,pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);}
					}
					else {
						yyerror(("Conflicting types for function " + (yyvsp[-5].ptr)->tempName).c_str());
					}
				}
			}
			else {
				if((yyvsp[-5].ptr)->expType == 2){
					yyerror( ((yyvsp[-5].ptr)->tempName + "declared as array of function").c_str());
				}
				else{
					yyerror( ((yyvsp[-5].ptr)->tempName + "declared as function of function").c_str());
				}
			}
	}
#line 2877 "parser.cpp"
    break;

  case 62:
#line 812 "parser.y++"
                                      {
		vector<data2> v;
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, NULL, "( )", 0);
        if((yyvsp[0].ptr) != NULL) insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("direct_declarator", v);

		// Semantics
			if((yyvsp[-4].ptr)->expType == 1) {
				(yyval.ptr)->tempName = (yyvsp[-4].ptr)->tempName;
				(yyval.ptr)->expType = 3;
				(yyval.ptr)->type = "FUNC_" + string((yyvsp[-4].ptr)->type);
				(yyval.ptr)->size = getSize((yyval.ptr)->type);

				vector<string> temp = getFuncArgs((yyvsp[-4].ptr)->tempName);
				if((temp.size() == 1 && temp[0] == "#NO_FUNC") || funcArgs == temp){
					insertFuncArg((yyval.ptr)->tempName, funcArgs, (yyval.ptr)->type);
					funcArgs.clear();
					funcName = string((yyvsp[-4].ptr)->tempName);
					funcType = (yyvsp[-4].ptr)->type;
				}
				else {
					yyerror(("Conflicting types for function " + (yyvsp[-4].ptr)->tempName).c_str());
				}
				//3AC
				(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
				emit(pair<string,sym_entry*>("FUNC_" + className+ "."+(yyval.ptr)->tempName +" start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
			}
			else {
				if((yyvsp[-4].ptr)->expType == 2){
					yyerror( ((yyvsp[-4].ptr)->tempName + "declared as array of function").c_str());
				}
				else{
					yyerror( ((yyvsp[-4].ptr)->tempName + "declared as function of function").c_str());
				}
			}
	}
#line 2919 "parser.cpp"
    break;

  case 63:
#line 852 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type_delim = 1;
		(yyval.ptr)->expType = 1; // Variable
		if(type != "") (yyval.ptr)->type = type;
		else {
            yyerror("Undeclared Type\n");
        }
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		(yyval.ptr)->size = getSize(type);

		//3AC
		(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
    }
#line 2940 "parser.cpp"
    break;

  case 64:
#line 871 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2946 "parser.cpp"
    break;

  case 65:
#line 875 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2952 "parser.cpp"
    break;

  case 66:
#line 876 "parser.y++"
           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2958 "parser.cpp"
    break;

  case 67:
#line 880 "parser.y++"
                      {
        (yyval.ptr) = (yyvsp[0].ptr);
		par.push_back((yyvsp[0].ptr)->tempName);
    }
#line 2967 "parser.cpp"
    break;

  case 68:
#line 884 "parser.y++"
                                                        {
        vector<data2> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter_list",v);

        // Semantics
        // 3AC
		par.push_back((yyvsp[0].ptr)->tempName);
		backpatch((yyvsp[-3].ptr)->nextlist, (yyvsp[-1].ind));
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
    }
#line 2985 "parser.cpp"
    break;

  case 69:
#line 901 "parser.y++"
                                      {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter",v);

        // Semantics
        if((yyvsp[0].ptr) != NULL){
            (yyvsp[-1].ptr)->type = string((yyvsp[-1].ptr)->type + (yyvsp[0].ptr)->type );
            (yyvsp[-1].ptr)->expType = 2;
        }
		type_delim = 0;
		type = "";
		(yyval.ptr)->tempName=(yyvsp[-1].ptr)->tempName;
		if((yyvsp[-1].ptr)->expType == 1 || (yyvsp[-1].ptr)->expType == 2) {
			paramInsert(*curr_table, (yyvsp[-1].ptr)->tempName, (yyvsp[-1].ptr)->type, (yyvsp[-1].ptr)->size, 1, NULL);
			funcArgs.push_back((yyvsp[-1].ptr)->type);
		}
		else {
			yyerror("Argument type is not variable or array");
		}
    }
#line 3013 "parser.cpp"
    break;

  case 70:
#line 928 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3019 "parser.cpp"
    break;

  case 71:
#line 929 "parser.y++"
          {
		(yyval.ptr)=makeleaf(";");
		// if(func_flag>=2){
			int bc = block_stack.top();
			block_stack.pop();
			string str = "Block" + to_string(bc);
			string name = funcName+str+".csv";
			printSymbolTable(curr_table, name);
			updSymbolTable(str,0);
		// 	func_flag--;
		// }
	}
#line 3036 "parser.cpp"
    break;

  case 72:
#line 944 "parser.y++"
                   {
        vector<data2> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("StaticInitilizer",v);

        (yyval.ptr)->is_error = (yyvsp[0].ptr)->is_error;
    }
#line 3049 "parser.cpp"
    break;

  case 73:
#line 955 "parser.y++"
                                                         {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Constructor_declaration",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 3067 "parser.cpp"
    break;

  case 74:
#line 971 "parser.y++"
                                                            {
        vector<data2> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Constructor_body",v);
    }
#line 3080 "parser.cpp"
    break;

  case 75:
#line 979 "parser.y++"
                              {
        vector<data2> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Constructor_body",v);
    }
#line 3092 "parser.cpp"
    break;

  case 76:
#line 989 "parser.y++"
                                     {
        vector<data2> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConstructorInvocation",v);


    }
#line 3108 "parser.cpp"
    break;

  case 77:
#line 1003 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3114 "parser.cpp"
    break;

  case 78:
#line 1004 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3120 "parser.cpp"
    break;

  case 79:
#line 1008 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3126 "parser.cpp"
    break;

  case 80:
#line 1009 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3132 "parser.cpp"
    break;

  case 81:
#line 1019 "parser.y++"
                                        {
        (yyval.ptr) =(yyvsp[-1].ptr);
        cout << "in Block\n";
        // if(func_flag>=2){
			int bc = block_stack.top();
			block_stack.pop();
			string str = "Block" + to_string(bc);
			string name = funcName+str+".csv";
			printSymbolTable(curr_table, name);
			updSymbolTable(str,0);
		// 	func_flag--;
		// }
    }
#line 3150 "parser.cpp"
    break;

  case 82:
#line 1032 "parser.y++"
                        {
        (yyval.ptr) =NULL;
        cout << "in Block\n";
        // if(func_flag>=2){
			int bc = block_stack.top();
			block_stack.pop();
			string str = "Block" + to_string(bc);
			string name = funcName+str+".csv";
			printSymbolTable(curr_table, name);
			updSymbolTable(str,0);
		// 	func_flag--;
		// }
    }
#line 3168 "parser.cpp"
    break;

  case 83:
#line 1048 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3174 "parser.cpp"
    break;

  case 84:
#line 1049 "parser.y++"
                                               {
		cout << "in Block statements\n";
        vector<data2>v;
        if((yyvsp[-2].ptr) != NULL) insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("BlockStatements", v);

        backpatch((yyvsp[-2].ptr)->nextlist, (yyvsp[-1].ind));
        (yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyvsp[-2].ptr)->caselist.insert((yyvsp[-2].ptr)->caselist.end(), (yyvsp[0].ptr)->caselist.begin(), (yyvsp[0].ptr)->caselist.end());
        (yyval.ptr)->caselist = (yyvsp[-2].ptr)->caselist;
		(yyvsp[-2].ptr)->continuelist.insert((yyvsp[-2].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyvsp[-2].ptr)->breaklist.insert((yyvsp[-2].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        (yyval.ptr)->continuelist = (yyvsp[-2].ptr)->continuelist;
        (yyval.ptr)->breaklist = (yyvsp[-2].ptr)->breaklist;
		cout << "in Block statements2\n";
    }
#line 3196 "parser.cpp"
    break;

  case 85:
#line 1069 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3202 "parser.cpp"
    break;

  case 86:
#line 1070 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3208 "parser.cpp"
    break;

  case 87:
#line 1074 "parser.y++"
                                   {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 3214 "parser.cpp"
    break;

  case 88:
#line 1075 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3220 "parser.cpp"
    break;

  case 89:
#line 1079 "parser.y++"
                                         {
        vector<data2>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LocalVariableDeclaration", v);

        // Semantics
		cout << "in local variable declaration\n";
		type = (yyvsp[-1].ptr)->type ;
		type_delim = 0;

		//3ac
    }
#line 3238 "parser.cpp"
    break;

  case 90:
#line 1096 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3244 "parser.cpp"
    break;

  case 91:
#line 1097 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3250 "parser.cpp"
    break;

  case 92:
#line 1098 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3256 "parser.cpp"
    break;

  case 93:
#line 1099 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3262 "parser.cpp"
    break;

  case 94:
#line 1100 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3268 "parser.cpp"
    break;

  case 95:
#line 1101 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3274 "parser.cpp"
    break;

  case 96:
#line 1105 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3280 "parser.cpp"
    break;

  case 97:
#line 1106 "parser.y++"
                              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3286 "parser.cpp"
    break;

  case 98:
#line 1107 "parser.y++"
                                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3292 "parser.cpp"
    break;

  case 99:
#line 1108 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3298 "parser.cpp"
    break;

  case 100:
#line 1109 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3304 "parser.cpp"
    break;

  case 101:
#line 1113 "parser.y++"
          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3310 "parser.cpp"
    break;

  case 102:
#line 1114 "parser.y++"
        {(yyval.ptr)=makeleaf(";");}
#line 3316 "parser.cpp"
    break;

  case 103:
#line 1115 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3322 "parser.cpp"
    break;

  case 104:
#line 1116 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3328 "parser.cpp"
    break;

  case 105:
#line 1117 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3334 "parser.cpp"
    break;

  case 106:
#line 1118 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3340 "parser.cpp"
    break;

  case 107:
#line 1119 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3346 "parser.cpp"
    break;

  case 108:
#line 1123 "parser.y++"
                                        {
        vector<data2>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatement", v);


        //semantic
        if((yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

		if(gotolabel.find((yyvsp[-3].ptr)->tempName) != gotolabel.end()){
			yyerror(string("duplicate label \'" + string((yyvsp[-3].ptr)->tempName) + "\'").c_str());
			(yyval.ptr)->is_error = 1;
		}
		else{
			gotolabel.insert({string((yyvsp[-3].ptr)->tempName), (yyvsp[-1].ind)});
		}
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyval.ptr)->caselist = (yyvsp[0].ptr)->caselist;
		(yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
		(yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;

    }
#line 3377 "parser.cpp"
    break;

  case 109:
#line 1152 "parser.y++"
                                                {
        vector<data2>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatementNoShortIf", v);

		//semantic
		if((yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

		if(gotolabel.find((yyvsp[-3].ptr)->tempName) != gotolabel.end()){
			yyerror(string("duplicate label \'" + string((yyvsp[-3].ptr)->tempName) + "\'").c_str());
			(yyval.ptr)->is_error = 1;
		}
		else{
			gotolabel.insert({string((yyvsp[-3].ptr)->tempName), (yyvsp[-1].ind)});
		}
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyval.ptr)->caselist = (yyvsp[0].ptr)->caselist;
		(yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
		(yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;

    }
#line 3407 "parser.cpp"
    break;

  case 110:
#line 1180 "parser.y++"
                            {
		(yyval.ptr) = (yyvsp[-1].ptr);
    }
#line 3415 "parser.cpp"
    break;

  case 111:
#line 1186 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3421 "parser.cpp"
    break;

  case 112:
#line 1187 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3427 "parser.cpp"
    break;

  case 113:
#line 1188 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3433 "parser.cpp"
    break;

  case 114:
#line 1189 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3439 "parser.cpp"
    break;

  case 115:
#line 1190 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3445 "parser.cpp"
    break;

  case 116:
#line 1191 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3451 "parser.cpp"
    break;

  case 117:
#line 1192 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3457 "parser.cpp"
    break;

  case 118:
#line 1196 "parser.y++"
         {if_found = 1;}
#line 3463 "parser.cpp"
    break;

  case 119:
#line 1196 "parser.y++"
                                            {
        if((yyvsp[-1].ptr)->truelist.empty() && (yyvsp[-1].ptr)->falselist.empty()) {
            int a = code.size();
			backpatch((yyvsp[-1].ptr)->nextlist, a);
            emit(qid("GOTO", NULL),qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL ),0);
            int b = code.size();
            emit(qid("GOTO", NULL),qid("", NULL), qid("", NULL), qid("", NULL ),0);
            (yyvsp[-1].ptr)->truelist.push_back(a);
            (yyvsp[-1].ptr)->falselist.push_back(b);
        }
        (yyval.ptr) = (yyvsp[-1].ptr);
		if_found = 0;
    }
#line 3481 "parser.cpp"
    break;

  case 120:
#line 1211 "parser.y++"
                                {
        vector<data2> v;
		insertAttr(v, (yyvsp[-2].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if", v);

        // Semantics
		if((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        // 3AC
        backpatch((yyvsp[-2].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[-2].ptr)->falselist.begin(), (yyvsp[-2].ptr)->falselist.end());
        (yyval.ptr)->nextlist= (yyvsp[0].ptr)->nextlist;
        (yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
        (yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;
    }
#line 3504 "parser.cpp"
    break;

  case 121:
#line 1232 "parser.y++"
                                                                    {
        vector<data2> v;
		insertAttr(v, (yyvsp[-6].ptr), "", 1);
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if-else", v);

		if((yyvsp[-6].ptr)->is_error || (yyvsp[-4].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
        backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[-3].ptr)->nextlist.begin(), (yyvsp[-3].ptr)->nextlist.end());
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[0].ptr)->nextlist.begin(), (yyvsp[0].ptr)->nextlist.end());
        (yyval.ptr)->nextlist = (yyvsp[-4].ptr)->nextlist;
		(yyvsp[-4].ptr)->breaklist.insert((yyvsp[-4].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
		(yyval.ptr)->breaklist = (yyvsp[-4].ptr)->breaklist;
		(yyvsp[-4].ptr)->continuelist.insert((yyvsp[-4].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyval.ptr)->continuelist = (yyvsp[-4].ptr)->continuelist;
    }
#line 3530 "parser.cpp"
    break;

  case 122:
#line 1256 "parser.y++"
                                                                              {
        vector<data2> v;
		insertAttr(v, (yyvsp[-6].ptr), "", 1);
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if-else", v);

		if((yyvsp[-6].ptr)->is_error || (yyvsp[-4].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
        backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[-3].ptr)->nextlist.begin(), (yyvsp[-3].ptr)->nextlist.end());
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[0].ptr)->nextlist.begin(), (yyvsp[0].ptr)->nextlist.end());
        (yyval.ptr)->nextlist = (yyvsp[-4].ptr)->nextlist;
		(yyvsp[-4].ptr)->breaklist.insert((yyvsp[-4].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
		(yyval.ptr)->breaklist = (yyvsp[-4].ptr)->breaklist;
		(yyvsp[-4].ptr)->continuelist.insert((yyvsp[-4].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyval.ptr)->continuelist = (yyvsp[-4].ptr)->continuelist;
    }
#line 3556 "parser.cpp"
    break;

  case 123:
#line 1280 "parser.y++"
                                                           {
        vector<data2> v;
		insertAttr(v, (yyvsp[-3].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("while-loop", v);

        // Semantics
		if((yyvsp[-3].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
	
        // 3AC
        backpatch((yyvsp[-3].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
        backpatch((yyvsp[0].ptr)->nextlist, (yyvsp[-4].ind));
        (yyval.ptr)->nextlist = (yyvsp[-3].ptr)->falselist;
        (yyval.ptr)->nextlist.insert((yyval.ptr)->nextlist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), (yyvsp[-4].ind));
    }
#line 3580 "parser.cpp"
    break;

  case 124:
#line 1302 "parser.y++"
                                                                     {
        vector<data2> v;
		insertAttr(v, (yyvsp[-3].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("while-loop", v);

        // Semantics
		if((yyvsp[-3].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
	
        // 3AC
        backpatch((yyvsp[-3].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
        backpatch((yyvsp[0].ptr)->nextlist, (yyvsp[-4].ind));
        (yyval.ptr)->nextlist = (yyvsp[-3].ptr)->falselist;
        (yyval.ptr)->nextlist.insert((yyval.ptr)->nextlist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), (yyvsp[-4].ind));
    }
#line 3604 "parser.cpp"
    break;

  case 125:
#line 1324 "parser.y++"
                              {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);

         //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3623 "parser.cpp"
    break;

  case 126:
#line 1338 "parser.y++"
                                 {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);

         //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3642 "parser.cpp"
    break;

  case 127:
#line 1355 "parser.y++"
                                       {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);

        //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac

    }
#line 3662 "parser.cpp"
    break;

  case 128:
#line 1370 "parser.y++"
                                          {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);

        //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error) {
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3681 "parser.cpp"
    break;

  case 129:
#line 1387 "parser.y++"
                                                          {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-7].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Basic_For_Header", v);

        //semantic 

        //3ac

    }
#line 3703 "parser.cpp"
    break;

  case 130:
#line 1406 "parser.y++"
                                                          {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Enhanced_For_Header", v);

        //semantic 

        if((yyvsp[-3].ptr)->is_error || (yyvsp[-1].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3726 "parser.cpp"
    break;

  case 131:
#line 1426 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3732 "parser.cpp"
    break;

  case 132:
#line 1427 "parser.y++"
              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3738 "parser.cpp"
    break;

  case 133:
#line 1431 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3744 "parser.cpp"
    break;

  case 134:
#line 1432 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3750 "parser.cpp"
    break;

  case 135:
#line 1436 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3756 "parser.cpp"
    break;

  case 136:
#line 1437 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3762 "parser.cpp"
    break;

  case 137:
#line 1441 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3768 "parser.cpp"
    break;

  case 138:
#line 1442 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3774 "parser.cpp"
    break;

  case 139:
#line 1446 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3780 "parser.cpp"
    break;

  case 140:
#line 1450 "parser.y++"
                        {
		(yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3788 "parser.cpp"
    break;

  case 141:
#line 1453 "parser.y++"
                                                    {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("StatementExpressionList2", v);
    }
#line 3800 "parser.cpp"
    break;

  case 142:
#line 1464 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("BreakStatement", v);

        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3816 "parser.cpp"
    break;

  case 143:
#line 1475 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[-1].str));
        
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3828 "parser.cpp"
    break;

  case 144:
#line 1485 "parser.y++"
                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);

        // Semantics
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->continuelist.push_back(a);
    }
#line 3845 "parser.cpp"
    break;

  case 145:
#line 1497 "parser.y++"
                 {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);

        // Semantics
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->continuelist.push_back(a);
    }
#line 3861 "parser.cpp"
    break;

  case 146:
#line 1511 "parser.y++"
                          {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ReturnStatement", v);

        // Semantics

		backpatch((yyvsp[-1].ptr)->nextlist,code.size());
        emit(qid("POP", NULL), qid("BP",NULL), qid("", NULL), qid("", NULL), -1);
        emit(qid("RETURN", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), qid("", NULL), -1);
    }
#line 3879 "parser.cpp"
    break;

  case 147:
#line 1524 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[-1].str));

        // Semantics
		emit(qid("POP", NULL), qid("BP",NULL), qid("", NULL), qid("", NULL), -1);
        emit(qid("RETURN", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
    }
#line 3891 "parser.cpp"
    break;

  case 148:
#line 1534 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ThrowStatement", v);

        // Semantics
        yyerror("Not implemented yet\n");        
    }
#line 3906 "parser.cpp"
    break;

  case 149:
#line 1548 "parser.y++"
      {if_found = 1;}
#line 3912 "parser.cpp"
    break;

  case 150:
#line 1548 "parser.y++"
                                          {
        if((yyvsp[0].ptr)->truelist.empty() && (yyvsp[0].ptr)->falselist.empty()) {
            int a = code.size();
			backpatch((yyvsp[0].ptr)->nextlist, a);
            emit(qid("GOTO", NULL),qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL ),0);
            int b = code.size();
            emit(qid("GOTO", NULL),qid("", NULL), qid("", NULL), qid("", NULL ),0);
            (yyvsp[0].ptr)->truelist.push_back(a);
            (yyvsp[0].ptr)->falselist.push_back(b);
        }
        (yyval.ptr) = (yyvsp[0].ptr);
		if_found = 0;
    }
#line 3930 "parser.cpp"
    break;

  case 151:
#line 1564 "parser.y++"
             {
        int a = code.size();
		(yyval.ptr) = new treeNode;
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->nextlist.push_back(a);
    }
#line 3941 "parser.cpp"
    break;

  case 152:
#line 1575 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3947 "parser.cpp"
    break;

  case 153:
#line 1576 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3953 "parser.cpp"
    break;

  case 154:
#line 1579 "parser.y++"
            {
		(yyval.ptr)=(yyvsp[0].ptr);
		(yyval.ptr)->isInit=1;
		}
#line 3962 "parser.cpp"
    break;

  case 155:
#line 1583 "parser.y++"
          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3968 "parser.cpp"
    break;

  case 156:
#line 1584 "parser.y++"
                       {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 3974 "parser.cpp"
    break;

  case 157:
#line 1585 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3980 "parser.cpp"
    break;

  case 158:
#line 1586 "parser.y++"
                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3986 "parser.cpp"
    break;

  case 159:
#line 1587 "parser.y++"
                      {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3992 "parser.cpp"
    break;

  case 160:
#line 1592 "parser.y++"
                                                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3998 "parser.cpp"
    break;

  case 161:
#line 1593 "parser.y++"
                                                        {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 4010 "parser.cpp"
    break;

  case 162:
#line 1600 "parser.y++"
                                                           {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 4022 "parser.cpp"
    break;

  case 163:
#line 1610 "parser.y++"
                                                                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, (yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, "(", 1);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnqualifiedClassInstanceCreationExpression", v);
    }
#line 4037 "parser.cpp"
    break;

  case 164:
#line 1623 "parser.y++"
                                                                       {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstantiate", v);
    }
#line 4049 "parser.cpp"
    break;

  case 165:
#line 1633 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 4055 "parser.cpp"
    break;

  case 166:
#line 1634 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4061 "parser.cpp"
    break;

  case 167:
#line 1638 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 4067 "parser.cpp"
    break;

  case 168:
#line 1639 "parser.y++"
                                                    {
        vector<data2>v;
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstant", v);
    }
#line 4079 "parser.cpp"
    break;

  case 169:
#line 1649 "parser.y++"
           {
        vector<data2>v;
        insertAttr(v, NULL, "<", 0);
        insertAttr(v, NULL, ">", 0);
		(yyval.ptr) = makenode("TypeArgumentsOrDiamond", v);
    }
#line 4090 "parser.cpp"
    break;

  case 170:
#line 1658 "parser.y++"
                             {
        vector<data2>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);

		// Semantics
		if((yyvsp[-3].ptr)->expType == 2){
			string tmp = (yyvsp[-3].ptr)->type;
			(yyval.ptr)->type = tmp.substr(0,tmp.length()-1);
			if(((yyval.ptr)->type)[tmp.length()-2]=='*') (yyval.ptr)->expType = 2;
			else (yyval.ptr)->expType = 1;
		}
		yyerror("Accessing field of a non-array construct");
    }
#line 4112 "parser.cpp"
    break;

  case 171:
#line 1675 "parser.y++"
                                   {
        vector<data2>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
		// Semantics
		if((yyvsp[-3].ptr)->expType == 2){
			string tmp = (yyvsp[-3].ptr)->type;
			(yyval.ptr)->type = tmp.substr(0,tmp.length()-1);
			if(((yyval.ptr)->type)[tmp.length()-2]=='*') (yyval.ptr)->expType = 2;
			else (yyval.ptr)->expType = 1;
		}
		yyerror("Accessing field of a non-array construct");
    }
#line 4133 "parser.cpp"
    break;

  case 172:
#line 1695 "parser.y++"
              { sym_entry* n = lookup((yyvsp[-1].ptr)->tempName);
				if(n){
					int size=n->size;
					emit(qid("-int",NULL),qid("SP",NULL),qid(to_string(size),NULL),qid("SP",NULL),-1);
				}
				currArgs.push_back(vector<string>()); }
#line 4144 "parser.cpp"
    break;

  case 173:
#line 1700 "parser.y++"
                                                                                          {
        vector<data2>v;
        insertAttr(v, (yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
		//semantics
		string temp = postfixExpression((yyvsp[-4].ptr)->type,3);
		if(temp.empty()){
			temp = getFuncType((yyvsp[-4].ptr)->tempName);
		}
		if(!temp.empty()){	
			(yyval.ptr)->type = temp;
			if((yyvsp[-4].ptr)->expType ==3){
				vector<string> funcArgs = getFuncArgs((yyvsp[-4].ptr)->tempName);
				vector<string> tempArgs =currArgs.back();
				for(int i=0;i<funcArgs.size();i++){
					if(funcArgs[i]=="...")break;
					if(tempArgs.size()==i){
						yyerror(("Too few Arguments to Function " + (yyvsp[-4].ptr)->tempName).c_str());
						return 0;
					}
					string msg = assignExp(funcArgs[i],tempArgs[i],"=");
					if(msg =="warning"){
						cout<<"Incompatible conversion of " +  tempArgs[i] + " to parameter of type " + funcArgs[i]<<endl;
					}
					else if(msg.empty()){
						yyerror(("Incompatible Argument to the function " + (yyvsp[-4].ptr)->tempName).c_str());
						(yyval.ptr)->is_error = 1;
						return 0;
					}
					if(i==funcArgs.size()-1 && i<tempArgs.size()-1){
						yyerror(("Too many Arguments to Function " + (yyvsp[-4].ptr)->tempName).c_str());
						(yyval.ptr)->is_error = 1;
						return 0;
					}
				}	
				//--3AC
				qid q = newtemp((yyval.ptr)->type);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("CALL", NULL), qid((yyvsp[-4].ptr)->tempName,NULL), qid(to_string(currArgs.back().size()), NULL), q, -1);
				currArgs.pop_back();
				if(func_usage_map.find((yyvsp[-4].ptr)->tempName) != func_usage_map.end()){
					func_usage_map[(yyvsp[-4].ptr)->tempName] = 1;
				}
			}
		}
		else{
			yyerror("Invalid function call");
			(yyval.ptr)->is_error=1;
		}
    }
#line 4203 "parser.cpp"
    break;

  case 174:
#line 1754 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v, (yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4218 "parser.cpp"
    break;

  case 175:
#line 1767 "parser.y++"
                 {
        (yyval.ptr)=(yyvsp[0].ptr);

        if(!(yyvsp[0].ptr)->is_error){
			//Semantic
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			currArgs.back().push_back((yyvsp[0].ptr)->type);
			(yyval.ptr)->type = "void";

			//--3AC
			(yyval.ptr)->nextlist.clear();
			int _idx = -1;
			if((yyval.ptr)->type == "char*" && (yyval.ptr)->place.second == NULL) _idx = -4;
			emit(qid("param", NULL), (yyval.ptr)->place, qid("", NULL), qid("", NULL), _idx);
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4242 "parser.cpp"
    break;

  case 176:
#line 1786 "parser.y++"
                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArgumentList", v);

        //semantic
		if((yyvsp[-2].ptr)->isInit && (yyvsp[0].ptr)->isInit) (yyval.ptr)->isInit=1;
		currArgs.back().push_back((yyvsp[0].ptr)->type);
		(yyval.ptr)->type = "void";

		//3AC
			(yyval.ptr)->nextlist.clear();
			int _idx = -1;
			backpatch((yyvsp[0].ptr)->nextlist, code.size());
			if((yyvsp[0].ptr)->type == "char*" && (yyvsp[0].ptr)->place.second == NULL) _idx = -4;
			emit(qid("param", NULL), (yyvsp[0].ptr)->place, qid("", NULL), qid("", NULL), _idx);
    }
#line 4266 "parser.cpp"
    break;

  case 177:
#line 1807 "parser.y++"
                                      {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 4279 "parser.cpp"
    break;

  case 178:
#line 1818 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4285 "parser.cpp"
    break;

  case 179:
#line 1819 "parser.y++"
                     {
        vector<data2>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("DimExprs", v);
    }
#line 4296 "parser.cpp"
    break;

  case 180:
#line 1829 "parser.y++"
                        {
        vector<data2>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("DimExpr", v);
    }
#line 4308 "parser.cpp"
    break;

  case 181:
#line 1839 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4314 "parser.cpp"
    break;

  case 182:
#line 1844 "parser.y++"
                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4320 "parser.cpp"
    break;

  case 183:
#line 1845 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4326 "parser.cpp"
    break;

  case 184:
#line 1849 "parser.y++"
                                     {if_found = 0;}
#line 4332 "parser.cpp"
    break;

  case 185:
#line 1849 "parser.y++"
                                                                          {
        vector<data2>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode((yyvsp[-2].ptr)->tempName , v);

        //Semantics
		cout << "in Assignment\n";
		string temp = assignExp((yyvsp[-3].ptr)->type,(yyvsp[0].ptr)->type,string((yyvsp[-2].ptr)->tempName));

		if((yyvsp[-3].ptr)->expType!=4){
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-3].ptr)->type;
				if((yyvsp[-3].ptr)->expType == 3 && (yyvsp[0].ptr)->isInit){
					updInit((yyvsp[-3].ptr)->tempName);
				}
				
				// 3ac 
				int num = assign_exp((yyvsp[-2].ptr)->tempName, (yyval.ptr)->type, (yyvsp[-3].ptr)->type, (yyvsp[0].ptr)->type, (yyvsp[-3].ptr)->place, (yyvsp[0].ptr)->place);
				(yyval.ptr)->place = (yyvsp[-3].ptr)->place;
				backpatch((yyvsp[0].ptr)->nextlist, num);
			}
			else{
				yyerror(("Incompatible types when assigning " + (yyvsp[0].ptr)->type + " type to " + (yyvsp[-3].ptr)->type).c_str());
			}
		}
		else{
			if((yyvsp[-3].ptr)->expType==4){
				yyerror("Left operand in assignment operation cannot be a constant expression");
			}
		}
    }
#line 4369 "parser.cpp"
    break;

  case 186:
#line 1884 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4375 "parser.cpp"
    break;

  case 187:
#line 1885 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4381 "parser.cpp"
    break;

  case 188:
#line 1889 "parser.y++"
        {(yyval.ptr) = makeleaf("=");
    (yyval.ptr)->tempName = "=";}
#line 4388 "parser.cpp"
    break;

  case 189:
#line 1891 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4396 "parser.cpp"
    break;

  case 190:
#line 1894 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4404 "parser.cpp"
    break;

  case 191:
#line 1897 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4412 "parser.cpp"
    break;

  case 192:
#line 1900 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4420 "parser.cpp"
    break;

  case 193:
#line 1903 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4428 "parser.cpp"
    break;

  case 194:
#line 1906 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4436 "parser.cpp"
    break;

  case 195:
#line 1909 "parser.y++"
                 {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4444 "parser.cpp"
    break;

  case 196:
#line 1912 "parser.y++"
                          {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4452 "parser.cpp"
    break;

  case 197:
#line 1915 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4460 "parser.cpp"
    break;

  case 198:
#line 1918 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4468 "parser.cpp"
    break;

  case 199:
#line 1921 "parser.y++"
              {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4476 "parser.cpp"
    break;

  case 200:
#line 1927 "parser.y++"
                                                                                    {
        vector<data2>v;
        insertAttr(v,(yyvsp[-6].ptr), "", 1);
        insertAttr(v,(yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ConditionalExpression2", v);

        // Semantics
		if_found = previous_if_found;
		if((yyvsp[-6].ptr)->isInit == 0) {
			yyerror("Condition is not initialized");
		}
		if((yyvsp[-6].ptr)->intVal) {
			if((yyvsp[-4].ptr)->isInit == 0){
				yyerror("Expression is not initialized");
			}
			(yyval.ptr)->type = (yyvsp[-4].ptr)->type;
			(yyval.ptr)->intVal = (yyvsp[-4].ptr)->intVal;
		}
		else {
			if((yyvsp[0].ptr)->isInit == 0){
				yyerror("Expression is not initialized");
			}
			(yyval.ptr)->type = (yyvsp[0].ptr)->type;
			(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;
		}
		(yyval.ptr)->isInit=1;

		// 3AC
		qid temp1 = newtemp((yyval.ptr)->type);

		backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
		backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		backpatch((yyvsp[-4].ptr)->nextlist, (yyvsp[-3].ind)-1);
		backpatch((yyvsp[-4].ptr)->truelist, (yyvsp[-3].ind)-1);
		backpatch((yyvsp[-4].ptr)->falselist, (yyvsp[-3].ind)-1);

		code[(yyvsp[-3].ind)-1].arg1 = (yyvsp[-4].ptr)->place;
		code[(yyvsp[-3].ind)-1].res = temp1;

		backpatch((yyvsp[0].ptr)->nextlist, code.size());
		backpatch((yyvsp[0].ptr)->falselist, code.size());
		backpatch((yyvsp[0].ptr)->truelist, code.size());

		emit(qid("=", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp1, -1);
		(yyval.ptr)->nextlist.push_back((yyvsp[-3].ind));
		(yyval.ptr)->place = temp1;
    }
#line 4530 "parser.cpp"
    break;

  case 201:
#line 1976 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4536 "parser.cpp"
    break;

  case 202:
#line 1980 "parser.y++"
                                      {
		previous_if_found = if_found;
		if_found = 0;
		(yyval.ptr) = (yyvsp[-1].ptr);
		if((yyvsp[-1].ptr)->truelist.empty()){
			backpatch((yyvsp[-1].ptr)->nextlist, code.size());
			emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
			(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
			emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
			(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
		}
	}
#line 4553 "parser.cpp"
    break;

  case 203:
#line 1995 "parser.y++"
                 {
		emit(qid("=", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
		emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
		(yyval.ind) = code.size()-1;
	}
#line 4563 "parser.cpp"
    break;

  case 204:
#line 2003 "parser.y++"
                                                        {
		vector<data2> attr;
		insertAttr(attr, (yyvsp[-2].ptr), "", 1);
		insertAttr(attr, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("||",attr);

		// Semantics

		if((yyvsp[-2].ptr)->type != "boolean" || (yyvsp[0].ptr)->type != "boolean" ) {
			yyerror("Incorrect types used in conditional OR expression");
		}
		(yyval.ptr)->type = "boolean";
		if((yyvsp[-2].ptr)->isInit == 0 || (yyvsp[0].ptr)->isInit == 0 ) {
			yyerror("Uninitialized expressions used in the conditional OR expression");
		}
		(yyval.ptr)->isInit = (((yyvsp[-2].ptr)->isInit) & ((yyvsp[0].ptr)->isInit));   
		(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal || (yyvsp[0].ptr)->intVal;

		// 3AC
			if((yyvsp[0].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL), 0);
				(yyvsp[0].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[0].ptr)->falselist.push_back(code.size()-1);
			}
			else {
				qid tmp = newtemp((yyval.ptr)->type);
				emit(qid("||", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, tmp, -1);
				(yyval.ptr)->place = tmp;
			}
			backpatch((yyvsp[-2].ptr)->falselist, (yyvsp[-1].ind));
			(yyval.ptr)->truelist = (yyvsp[-2].ptr)->truelist;
			(yyval.ptr)->truelist.insert((yyval.ptr)->truelist.end(), (yyvsp[0].ptr)->truelist.begin(), (yyvsp[0].ptr)->truelist.end());
			(yyval.ptr)->falselist = (yyvsp[0].ptr)->falselist;

	}
#line 4605 "parser.cpp"
    break;

  case 205:
#line 2040 "parser.y++"
                              { (yyval.ptr) = (yyvsp[0].ptr) ; }
#line 4611 "parser.cpp"
    break;

  case 206:
#line 2044 "parser.y++"
                                        {
		(yyval.ptr) = (yyvsp[-1].ptr);
		if((yyvsp[-1].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
	}
#line 4626 "parser.cpp"
    break;

  case 207:
#line 2057 "parser.y++"
                                              {
		vector<data2> attr;
		insertAttr(attr, (yyvsp[-2].ptr), "", 1);
		insertAttr(attr, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("&&",attr);

		// Semantics
			if((yyvsp[-2].ptr)->type != "boolean" || (yyvsp[0].ptr)->type != "boolean" ) {
				yyerror("Incorrect types used in conditional AND expression");
			}
			(yyval.ptr)->type = "boolean";
			if((yyvsp[-2].ptr)->isInit == 0 || (yyvsp[0].ptr)->isInit == 0 ) {
				yyerror("Uninitialized expressions used in the conditional AND expression");
			}
			(yyval.ptr)->isInit = (((yyvsp[-2].ptr)->isInit) & ((yyvsp[0].ptr)->isInit));   
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal || (yyvsp[0].ptr)->intVal;

			// 3AC
			if((yyvsp[0].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL), 0);
				(yyvsp[0].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[0].ptr)->falselist.push_back(code.size()-1);
			}
			else {
				qid tmp = newtemp((yyval.ptr)->type);
				emit(qid("&&", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, tmp, -1);
				(yyval.ptr)->place = tmp;
			}
			backpatch((yyvsp[-2].ptr)->truelist, (yyvsp[-1].ind));
			(yyval.ptr)->truelist = (yyvsp[0].ptr)->truelist;
			(yyval.ptr)->falselist = (yyvsp[-2].ptr)->falselist;
			(yyval.ptr)->falselist.insert((yyval.ptr)->falselist.end(), (yyvsp[0].ptr)->falselist.begin(), (yyvsp[0].ptr)->falselist.end());
	}
#line 4666 "parser.cpp"
    break;

  case 208:
#line 2092 "parser.y++"
                           { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4672 "parser.cpp"
    break;

  case 209:
#line 2096 "parser.y++"
                                          {
		(yyval.ptr) = (yyvsp[-1].ptr);
		
		if((yyvsp[-1].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
	}
#line 4688 "parser.cpp"
    break;

  case 210:
#line 2110 "parser.y++"
                                                     {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "|", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("InclusiveOrExpression", v);

        //Semantics
		
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		else {
			yyerror("Unitialized operands with OR operator");
		}
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!temp.empty()){
			(yyval.ptr)->type = "boolean";	
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal | (yyvsp[0].ptr)->intVal;

			// 3AC
			if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
				(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
				(yyval.ptr)->expType = 4;
			}
			else{
				qid temp1 = newtemp((yyval.ptr)->type);
				emit(qid("|", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
				(yyval.ptr)->place = temp1;
			}
			(yyval.ptr)->nextlist.clear();
		}
		else{
			yyerror(("Invalid operands of types \'" + string((yyvsp[-2].ptr)->type) + "\' and \'" + string((yyvsp[0].ptr)->type) + "\' to boolean").c_str());
		}
    }
#line 4728 "parser.cpp"
    break;

  case 211:
#line 2145 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4734 "parser.cpp"
    break;

  case 212:
#line 2148 "parser.y++"
                                             {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "^", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ExclusiveOrExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal ^ (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("^", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary ^").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4780 "parser.cpp"
    break;

  case 213:
#line 2189 "parser.y++"
                   {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4786 "parser.cpp"
    break;

  case 214:
#line 2193 "parser.y++"
                                          {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "&", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AndExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";
				
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal & (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("&", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary &").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4832 "parser.cpp"
    break;

  case 215:
#line 2234 "parser.y++"
                        {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4838 "parser.cpp"
    break;

  case 216:
#line 2238 "parser.y++"
                                                   {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = "int";

				if((yyvsp[-2].ptr)->intVal == (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("==", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary ==").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4882 "parser.cpp"
    break;

  case 217:
#line 2277 "parser.y++"
                                                   {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = "int";

				if((yyvsp[-2].ptr)->intVal != (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("!=", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary !=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

        
    }
#line 4928 "parser.cpp"
    break;

  case 218:
#line 2318 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4934 "parser.cpp"
    break;

  case 219:
#line 2322 "parser.y++"
                                               {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);


        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}

				if((yyvsp[-2].ptr)->intVal < (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("<", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4985 "parser.cpp"
    break;

  case 220:
#line 2368 "parser.y++"
                                               {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //semantic

		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}

				if((yyvsp[-2].ptr)->intVal > (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid(">", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5034 "parser.cpp"
    break;

  case 221:
#line 2412 "parser.y++"
                                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}
				if((yyvsp[-2].ptr)->intVal >= (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				(yyval.ptr)->nextlist.clear();
				 
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5073 "parser.cpp"
    break;

  case 222:
#line 2446 "parser.y++"
                                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}
				if((yyvsp[-2].ptr)->intVal <= (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5111 "parser.cpp"
    break;

  case 223:
#line 2479 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5117 "parser.cpp"
    break;

  case 224:
#line 2484 "parser.y++"
                                                {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

		//Semantic
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp = shiftExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type;
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal << (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " << " + (yyvsp[0].ptr)->tempName;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("<<", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <<").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5160 "parser.cpp"
    break;

  case 225:
#line 2522 "parser.y++"
                                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = shiftExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type;
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal >> (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " >> " + (yyvsp[0].ptr)->tempName;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid(">>", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >>").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5204 "parser.cpp"
    break;

  case 226:
#line 2561 "parser.y++"
                                                       {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        yyerror("Not implemented yet!\n");

    }
#line 5219 "parser.cpp"
    break;

  case 227:
#line 2571 "parser.y++"
                        {(yyval.ptr)= (yyvsp[0].ptr);}
#line 5225 "parser.cpp"
    break;

  case 228:
#line 2575 "parser.y++"
                                                      {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "+", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);
        
        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		
		string temp = addExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
		
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "int")	(yyval.ptr)->type = "int";
				else if(temp == "real")	(yyval.ptr)->type = "float";
				else (yyval.ptr)->type =  temp;

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal + (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->realVal = (yyvsp[-2].ptr)->realVal + (yyvsp[0].ptr)->realVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " + " + (yyvsp[0].ptr)->tempName;

				// 3AC

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					int cond1 = (isInt((yyvsp[-2].ptr)->type) && isFloat((yyvsp[0].ptr)->type));
					int cond2 = (isInt((yyvsp[0].ptr)->type) && isFloat((yyvsp[-2].ptr)->type));

					if(cond1){
						qid temp2 = newtemp((yyvsp[0].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("+"+temp, NULL), temp2, (yyvsp[0].ptr)->place, temp1, -1);
					}
					else if(cond2){
						qid temp2 = newtemp((yyvsp[-2].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("+"+temp, NULL), (yyvsp[-2].ptr)->place, temp2, temp1, -1);
					}
					else{
						emit(qid("+"+temp, NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					}
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for + operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5289 "parser.cpp"
    break;

  case 229:
#line 2634 "parser.y++"
                                                      {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "-", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;

		string temp = addExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "int")(yyval.ptr)->type = "int";
				else if(temp == "real")(yyval.ptr)->type = "float";
				else (yyval.ptr)->type = temp;

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal - (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->realVal = (yyvsp[-2].ptr)->realVal - (yyvsp[0].ptr)->realVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " - " + (yyvsp[0].ptr)->tempName;

				// 3AC

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					int cond1 = (isInt((yyvsp[-2].ptr)->type) && isFloat((yyvsp[0].ptr)->type));
					int cond2 = (isInt((yyvsp[0].ptr)->type) && isFloat((yyvsp[-2].ptr)->type));

					if(cond1){
						qid temp2 = newtemp((yyvsp[0].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("-"+temp, NULL), temp2, (yyvsp[0].ptr)->place, temp1, -1);
					}
					else if(cond2){
						qid temp2 = newtemp((yyvsp[-2].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("-"+temp, NULL), (yyvsp[-2].ptr)->place, temp2, temp1, -1);
					}
					else{
						emit(qid("-"+temp, NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					}
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for - operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
	}
#line 5353 "parser.cpp"
    break;

  case 230:
#line 2693 "parser.y++"
                              {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5359 "parser.cpp"
    break;

  case 231:
#line 2698 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "*", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){

			//Semantic
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal * (yyvsp[0].ptr)->intVal; 

			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp = mulExp((yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, '*');

			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					if(temp == "int"){
						(yyval.ptr)->type = "int" ;

						//--3AC
						qid q = newtemp("int");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						emit(qid("*int", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
					}
					else if(temp == "float"){
						(yyval.ptr)->type = "float";

						//--3AC

						qid q = newtemp("float");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();

						if(isInt((yyvsp[-2].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("*real", NULL), q1, (yyvsp[0].ptr)->place, q, -1);
						}
						else if(isInt((yyvsp[0].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q1, -1);
							emit(qid("*real", NULL), (yyvsp[-2].ptr)->place, q1, q, -1);
						}
						else{
							emit(qid("*real", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
						}
					}
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for * operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5431 "parser.cpp"
    break;

  case 232:
#line 2765 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "/", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			//Semantic
			if((yyvsp[0].ptr)->intVal!=0)(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal / (yyvsp[0].ptr)->intVal;
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp =mulExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'/');
			if(!temp.empty()){
				(yyval.ptr)->type = temp;

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					if(temp == "int"){
						(yyval.ptr)->type = "int" ;

						//--3AC
						qid q = newtemp("int");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						emit(qid("/int", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
					}
					else if(temp == "float"){
						(yyval.ptr)->type = "float";

						//--3AC
						qid q = newtemp("float");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						if(isInt((yyvsp[-2].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("/real", NULL), q1, (yyvsp[0].ptr)->place, q, -1);
						}
						else if(isInt((yyvsp[0].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("/real", NULL), (yyvsp[-2].ptr)->place, q1, q, -1);
						}
						else{
							emit(qid("/real", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
						}
					}
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for / operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5501 "parser.cpp"
    break;

  case 233:
#line 2830 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "%", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			//Semantic
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			if((yyvsp[0].ptr)->intVal!=0)(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal % (yyvsp[0].ptr)->intVal;
			string temp =mulExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'%');
			if(temp == "int"){
				(yyval.ptr)->type = "int" ;

				//--3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid q = newtemp("int");
					(yyval.ptr)->place = q;
					emit(qid("%", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
				}
				(yyval.ptr)->nextlist.clear();

			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for % operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}


    }
#line 5545 "parser.cpp"
    break;

  case 234:
#line 2869 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5551 "parser.cpp"
    break;

  case 235:
#line 2874 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5557 "parser.cpp"
    break;

  case 236:
#line 2875 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5563 "parser.cpp"
    break;

  case 237:
#line 2876 "parser.y++"
                         {
        // $1=makeleaf("+");
        vector<data2>v;
        insertAttr(v, NULL, "+", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        
        //Semantic
        // remember this line
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("+",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("unary+", lookup("+")),(yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5601 "parser.cpp"
    break;

  case 238:
#line 2909 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, NULL, "-", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        

        //Semantic
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("-",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("unary-", lookup("-")),(yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5638 "parser.cpp"
    break;

  case 239:
#line 2941 "parser.y++"
                                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5644 "parser.cpp"
    break;

  case 240:
#line 2945 "parser.y++"
                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreIncrementExpression", v);

        //Semantic
		if(!(yyvsp[0].ptr)->is_error && (yyvsp[0].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = postfixExpression((yyvsp[0].ptr)->type,6);
			
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal +1;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("++P", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Increment not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[0].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5682 "parser.cpp"
    break;

  case 241:
#line 2981 "parser.y++"
                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreDecrementExpression", v);

        //Semantic
		if(!(yyvsp[0].ptr)->is_error && (yyvsp[0].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = postfixExpression((yyvsp[0].ptr)->type,7);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal -1;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("--P", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Decrement not defined for this type");
			}
		}
		else{
			if((yyvsp[0].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5718 "parser.cpp"
    break;

  case 242:
#line 3015 "parser.y++"
                       {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5724 "parser.cpp"
    break;

  case 243:
#line 3017 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, NULL, "~", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);
        

        //semantic
        (yyval.ptr)->place = qid("~", lookup("~"));

        if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("~",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = ~((yyvsp[0].ptr)->intVal);

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("~", lookup("~")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5762 "parser.cpp"
    break;

  case 244:
#line 3050 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, NULL, "!", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);

        //semantic

        if(! ((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("!",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = !((yyvsp[0].ptr)->intVal);

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("~", lookup("~")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5798 "parser.cpp"
    break;

  case 245:
#line 3081 "parser.y++"
                    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5804 "parser.cpp"
    break;

  case 246:
#line 3085 "parser.y++"
             {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5810 "parser.cpp"
    break;

  case 247:
#line 3086 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5816 "parser.cpp"
    break;

  case 248:
#line 3087 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5822 "parser.cpp"
    break;

  case 249:
#line 3088 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5828 "parser.cpp"
    break;

  case 250:
#line 3092 "parser.y++"
                              {
        vector<data2>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostIncrementExpression", v);

        //Semantics
		(yyval.ptr)->isInit = (yyvsp[-1].ptr)->isInit;
		if(!(yyvsp[-1].ptr)->is_error && (yyvsp[-1].ptr)->expType!=4){
			string temp = postfixExpression((yyvsp[-1].ptr)->type,6);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[-1].ptr)->intVal + 1;

				//--3AC

				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("++S", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Increment not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-1].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}

			(yyval.ptr)->is_error = 1;
		}
    }
#line 5867 "parser.cpp"
    break;

  case 251:
#line 3129 "parser.y++"
                              {
        vector<data2>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostDecrementExpression", v);

        //Semantics
		if(!(yyvsp[-1].ptr)->is_error && (yyvsp[-1].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[-1].ptr)->isInit;
			string temp = postfixExpression((yyvsp[-1].ptr)->type,7);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[-1].ptr)->intVal - 1;

				//--3AC

				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("--S", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), q, -1);

			}
			else{
				yyerror("Decrement not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-1].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5907 "parser.cpp"
    break;

  case 252:
#line 3167 "parser.y++"
                                             { // 1
        vector<data2>v;
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("CastExpression", v);
    }
#line 5920 "parser.cpp"
    break;

  case 253:
#line 3179 "parser.y++"
                        {
		(yyval.ptr) = makeleaf((yyvsp[0].str));
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		className = (yyvsp[0].str);
		classTemp = className ; 
	}
#line 5931 "parser.cpp"
    break;

  case 254:
#line 3188 "parser.y++"
             {
		createStructTable();
		if(type != "") {
			yyerror(("cannot combine with previous " + type + " declaration specifier").c_str());
		}
	}
#line 5942 "parser.cpp"
    break;

  case 255:
#line 3197 "parser.y++"
                 {
		(yyval.ind) = code.size();
	}
#line 5950 "parser.cpp"
    break;

  case 256:
#line 3203 "parser.y++"
                 {
		(yyval.ptr)=NULL;
		// string str = "Block" +to_string(block_count);
		string str = funcName;
		block_stack.push(block_count);
		block_count++;
		// func_flag++;
		makeSymbolTable(str, type,0);
	}
#line 5964 "parser.cpp"
    break;

  case 257:
#line 3215 "parser.y++"
                        {
		(yyval.ptr)=NULL;
		type ="";
		// func_flag = 0;
		funcArgs.clear();
		createParamList();
		gotolablelist.clear();
		gotolabel.clear();
	}
#line 5978 "parser.cpp"
    break;


#line 5982 "parser.cpp"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 3226 "parser.y++"

    
int main(int argc, char* argv[]){

    dotfile=fopen(argv[1],"w");
    code_file.open("final.txt");

    if(dotfile == NULL){
		cout<<"cannot open the dot file AST.dot"<<"\nCompilation terminated\n";
		return -1;
	}
	

    symTable_init();
	beginAST();
    yyparse();
/* 
    for(int i=2; i<argc; i++){
        if(!strcmp(argv[i], "-dump-sym-table")) dump_sym_table = 1;
		else if(!strcmp(argv[i], "-dump-tac")) dump_tac = 1;
		else if(!strcmp(argv[i], "-dump-all")) dump_tac = dump_sym_table = 1;
    } */

    setGlobal();
	print3AC();
	genCode();
	endAST();
	if(dump_sym_table) printSymbolTable(&globalst, "Global_Symbol_Table.csv");
    return 0;
}

void yyerror(char const* s){
    cout << "Error: " << s << " in Line no: " << line << endl;
    exit(-1);
}

// set type as int and read integer value correctly depending on the base
void set_int_type(int t){
	yylval.num = new constants;
	yylval.num->str = strdup(yytext);
	yylval.num->type = string("int");
	switch(t){
		// 3-> hexadecimal, 2-> octal, 1-> decimal, 0-> char
		case 0 : {
			sscanf(yytext, "%", &(yylval.num->intVal));
			yylval.num->intVal = char_int(yylval.num->str);
			yylval.num->type = "char";
			break;
		}
		case 1 : {
			sscanf(yytext, "%lld", &(yylval.num->intVal));
			break;
		}
		case 2 : {
			sscanf(yytext, "%llo", &(yylval.num->intVal));
			break;
		}
		case 3 : {
			sscanf(yytext, "%llx", &(yylval.num->intVal));
			break;
		}
	}
}

// convert character to an integer value
int char_int(string str){
    if(str[1] == '\\'){
        string s = str.substr(1,2);
        if(s == "\\0") return 0;
        if(s == "\\n") return 10;
        if(s == "\\t") return 9;
    } 
    int val = (int)str[1];
    return (val);
}

// set type as float and read the real value
void set_real_type(){
	yylval.num = new constants ;
	yylval.num->str = strdup(yytext);
	yylval.num->type = string("float");
	sscanf(yytext, "%lf", &(yylval.num->realVal));
} 
