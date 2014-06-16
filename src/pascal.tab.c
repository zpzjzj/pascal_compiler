/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison/pascal.y" /* yacc.c:339  */

#define YYPARSER /* distinguishes Yacc output from other code files */

#include <cstdio>
#include <string>
#include <cstring>
#include "node/ModuleNode.hpp"
#include "node/DeclNode.hpp"
#include "node/ExpNode.hpp"
#include "node/StmtNode.hpp"

/* stores syntax tree for later return */
static TreeNode * savedTree = nullptr;

extern int lineno;
extern int yylex(void);
extern int yyerror(char *message);
extern char* yytext;

#line 86 "pascal.tab.c" /* yacc.c:339  */

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
   by #include "pascal.tab.h".  */
#ifndef YY_YY_PASCAL_TAB_H_INCLUDED
# define YY_YY_PASCAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    REAL = 260,
    CHAR = 261,
    P_TRUE = 262,
    P_FALSE = 263,
    STRING = 264,
    PROGRAM = 265,
    DOT = 266,
    SEMI = 267,
    COMMA = 268,
    EQUAL = 269,
    CONST = 270,
    ARRAY = 271,
    TYPE = 272,
    LB = 273,
    RB = 274,
    OF = 275,
    RECORD = 276,
    END = 277,
    COLON = 278,
    LP = 279,
    RP = 280,
    DOTDOT = 281,
    MINUS = 282,
    VAR = 283,
    FUNCTION = 284,
    NOT = 285,
    GE = 286,
    GT = 287,
    LE = 288,
    LT = 289,
    PLUS = 290,
    MUL = 291,
    DIV = 292,
    AND = 293,
    MOD = 294,
    UNEQUAL = 295,
    OR = 296,
    ASSIGN = 297,
    P_BEGIN = 298,
    IF = 299,
    ELSE = 300,
    THEN = 301,
    REPEAT = 302,
    UNTIL = 303,
    WHILE = 304,
    DO = 305,
    FOR = 306,
    GOTO = 307,
    CASE = 308,
    TO = 309,
    DOWNTO = 310,
    READ = 311,
    TYPEINTEGER = 312,
    TYPEREAL = 313,
    TYPECHAR = 314,
    TYPESTRING = 315,
    TYPEBOOL = 316,
    PROCEDURE = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "bison/pascal.y" /* yacc.c:355  */

    TreeNode* tree_node;
    Id_Node*  id_node;
    Program_Node* program_node; 
    Program_head_Node* program_head_node;
    Routine_Node* routine_node;
    Routine_head_Node* routine_head_node;

    Const_part_Node* const_part_node;
    Const_expr_list_Node* const_expr_list_node;
    Const_value_Node* const_value_node;
    int     constInt;
    double  constDouble;
    char    constChar;
    bool    constBool;
    Type_part_Node*         type_part_node;
    Type_decl_list_Node*    type_decl_list_node;
    Type_definition_Node*   type_definition_node;
    Type_decl_Node*         type_decl_node;
    Array_type_decl_Node*   array_type_decl_node;
    Record_type_decl_Node*  record_type_decl_node;
    Field_decl_list_Node*   field_decl_list_node;
    Field_decl_Node*        field_decl_node;
    Simple_type_decl_Node*  simple_type_decl_node;
    Name_list_Node*         name_list_node;
    Var_part_Node*          var_part_node;
    Var_decl_list_Node*     var_decl_list_node;
    Var_decl_Node*          var_decl_node;
    Routine_part_Node*      routine_part_node;
    Function_decl_Node*     function_decl_node;
    Procedure_decl_Node*    procedure_decl_node;
    Parameters_Node*        parameters_node;
    Para_decl_list_Node*    para_decl_list_node;
    Para_type_list_Node*    para_type_list_node;
    Var_para_list_Node*     var_para_list_node;
    Val_para_list_Node*     val_para_list_node;
    Routine_body_Node*      routine_body_node;
    Compound_stmt_Node*     compound_stmt_node;
    Stmt_list_Node*         stmt_list_node;
    Stmt_Node*              stmt_node;
    Non_label_stmt_Node*    non_label_stmt_node;
    Assign_stmt_Node*       assign_stmt_node;
    Proc_stmt_Node*         proc_stmt_node;
    If_stmt_Node*           if_stmt_node;
    Else_clause_Node*       else_clause_node;
    Repeat_stmt_Node*       repeat_stmt_node;
    While_stmt_Node*        while_stmt_node;
    For_stmt_Node*          for_stmt_node;
    Direction_Node*         direction_node;
    Case_stmt_Node*         case_stmt_node;
    Case_expr_list_Node*    case_expr_list_node;
    Case_expr_Node*         case_expr_node;
    Goto_stmt_Node*         goto_stmt_node;
    Expression_list_Node*   expression_list_node;
    Expression_Node*        expression_node;
    Expr_Node*              expr_node;
    Factor_Node*            factor_node;
    Args_list_Node*         args_list_node;


#line 250 "pascal.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PASCAL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "pascal.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   151,   151,   155,   161,   165,   168,   172,   177,   180,
     183,   187,   192,   199,   203,   207,   212,   215,   220,   224,
     226,   230,   235,   240,   241,   242,   244,   249,   254,   258,
     263,   268,   272,   276,   280,   284,   288,   292,   296,   300,
     305,   309,   314,   317,   322,   325,   328,   331,   333,   338,
     342,   346,   350,   354,   356,   361,   366,   370,   372,   375,
     377,   381,   386,   391,   396,   401,   406,   409,   411,   414,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   429,
     433,   437,   442,   446,   450,   454,   459,   463,   467,   472,
     477,   482,   486,   491,   496,   499,   503,   507,   512,   526,
     530,   534,   538,   542,   546,   550,   555,   559,   563,   567,
     571,   575,   579,   583,   587,   592,   596,   600,   604,   608,
     612,   616,   621,   625
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "REAL", "CHAR",
  "P_TRUE", "P_FALSE", "STRING", "PROGRAM", "DOT", "SEMI", "COMMA",
  "EQUAL", "CONST", "ARRAY", "TYPE", "LB", "RB", "OF", "RECORD", "END",
  "COLON", "LP", "RP", "DOTDOT", "MINUS", "VAR", "FUNCTION", "NOT", "GE",
  "GT", "LE", "LT", "PLUS", "MUL", "DIV", "AND", "MOD", "UNEQUAL", "OR",
  "ASSIGN", "P_BEGIN", "IF", "ELSE", "THEN", "REPEAT", "UNTIL", "WHILE",
  "DO", "FOR", "GOTO", "CASE", "TO", "DOWNTO", "READ", "TYPEINTEGER",
  "TYPEREAL", "TYPECHAR", "TYPESTRING", "TYPEBOOL", "PROCEDURE", "$accept",
  "id", "program", "program_head", "routine", "routine_head", "const_part",
  "const_expr_list", "const_value", "type_part", "type_decl_list",
  "type_definition", "type_decl", "array_type_decl", "record_type_decl",
  "field_decl_list", "field_decl", "simple_type_decl", "name_list",
  "var_part", "var_decl_list", "var_decl", "routine_part", "function_decl",
  "procedure_decl", "parameters", "para_decl_list", "para_type_list",
  "var_para_list", "val_para_list", "routine_body", "compound_stmt",
  "stmt_list", "stmt", "non_label_stmt", "assign_stmt", "proc_stmt",
  "if_stmt", "else_clause", "repeat_stmt", "while_stmt", "for_stmt",
  "direction", "case_stmt", "case_expr_list", "case_expr", "goto_stmt",
  "expression", "expr", "term", "factor", "args_list", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -187

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-187)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    31,    58,    63,  -187,    68,  -187,    31,    71,    43,
      70,  -187,    79,    31,  -187,  -187,  -187,  -187,    31,    67,
     426,    83,   108,    85,    31,  -187,    31,   -15,  -187,  -187,
    -187,  -187,  -187,  -187,    92,   426,    87,  -187,   326,  -187,
     326,    31,   123,   326,   107,     4,  -187,   120,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,   205,  -187,  -187,
      18,    31,  -187,    31,    31,   -15,  -187,  -187,  -187,   125,
     265,   326,   326,   326,    59,  -187,   155,     2,    77,  -187,
     230,    21,    93,  -187,   327,   326,    31,   326,   319,   326,
    -187,   121,    31,    31,   426,  -187,  -187,  -187,  -187,  -187,
     112,   115,   130,  -187,  -187,  -187,    31,   205,  -187,   119,
     119,  -187,  -187,  -187,  -187,   337,  -187,  -187,    31,   326,
     326,   326,   326,   326,   326,   326,   241,   326,   326,   326,
     326,   326,   326,   326,   326,   241,   326,   414,   122,   111,
     359,  -187,   305,    11,   305,   243,    23,  -187,    19,    14,
     128,    31,   426,  -187,  -187,   137,  -187,   133,   151,  -187,
    -187,   369,     2,     2,     2,     2,     2,     2,   126,    77,
      77,    77,  -187,  -187,  -187,  -187,   305,  -187,    69,   142,
     143,   407,  -187,  -187,   326,   139,   326,  -187,   149,  -187,
    -187,   205,  -187,   249,  -187,  -187,  -187,    47,   243,    61,
    -187,   241,  -187,  -187,  -187,   326,   241,   241,  -187,  -187,
     305,   326,   305,   150,   170,   426,  -187,    16,  -187,   171,
     173,  -187,   144,   179,   180,   305,   205,  -187,  -187,    31,
     185,  -187,   176,   181,    61,  -187,   241,  -187,  -187,  -187,
     185,   243,   243,   190,  -187,  -187,  -187,  -187
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     2,     0,     1,     0,     0,     0,
      19,     4,     0,     8,     3,    67,     5,    64,     0,    45,
       0,     0,     0,     0,    18,    21,     0,    53,    12,    13,
      14,    16,    17,    15,     0,     0,     0,    65,     0,    67,
       0,     0,     0,     0,     0,     0,    72,     0,    69,    70,
      71,    73,    74,    75,    76,    77,    78,     0,    20,    43,
       0,    44,    47,     0,     0,     7,    51,    52,    11,     0,
       0,     0,     0,     0,   115,   116,     0,   105,   109,   114,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,    31,    32,    33,    34,    35,
      36,     0,     0,    24,    25,    23,     0,     0,    46,    57,
      57,    49,    50,    10,    68,     0,   119,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,   123,     0,    79,     0,     0,    29,     0,     0,
       0,     0,     0,    22,    42,     0,    59,     0,     0,   117,
     121,     0,   103,    99,   100,   101,   102,   104,    87,   107,
     106,   108,   110,   111,   113,   112,    88,    89,     0,     0,
       0,     0,    95,    84,     0,     0,     0,    83,     0,    27,
      28,     0,    37,     0,    41,    38,    48,     0,     0,     9,
     120,     0,    85,    91,    92,     0,     0,     0,    93,    94,
      81,     0,   122,     0,     0,     0,    39,     0,    56,     0,
       0,    86,     0,     0,     0,    80,     0,    30,    40,     0,
      63,    58,     0,     0,     9,    55,     0,    97,    96,    26,
      62,     0,     0,     0,    90,    60,    61,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,    -1,  -187,  -187,  -186,  -187,  -187,  -187,   -19,  -187,
    -187,   169,   -97,  -187,  -187,  -187,    57,  -134,   -89,  -187,
    -187,   154,  -187,   152,   153,   109,  -187,  -187,  -187,  -187,
    -187,   211,   188,  -117,   160,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,    50,  -187,   -38,   316,    -7,
     -65,  -187
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    74,     2,     3,     8,     9,    10,    13,    75,    19,
      24,    25,   102,   103,   104,   146,   147,   105,    60,    27,
      61,    62,    65,    66,    67,   157,   197,   231,   232,   233,
      16,    46,    22,    47,    48,    49,    50,    51,   202,    52,
      53,    54,   205,    55,   181,   182,    56,    76,    77,    78,
      79,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    34,    81,   148,   149,    84,    12,   116,   117,   168,
     155,   188,    21,   220,    63,    86,    69,    23,   177,     4,
     138,    45,    87,    23,   186,    59,     4,   106,    88,   127,
       1,   106,   106,   115,     4,   120,   187,   128,   101,   192,
      82,   107,   191,   129,   229,   189,    89,    64,   243,   140,
     142,   144,   121,   122,   123,   124,   100,   148,     6,   217,
      59,   125,   109,   110,   219,   172,   173,   174,   175,    45,
     118,   135,   218,    -6,    -6,   150,     7,   119,     7,    45,
      11,   161,    14,   120,   221,   139,    15,    18,   101,   223,
     224,    59,    59,    20,   214,    26,   176,    35,   178,    57,
     121,   122,   123,   124,    68,   154,   100,   245,   246,   125,
      70,     4,    36,   130,   131,   132,   133,   160,   180,   244,
     169,   170,   171,   203,   204,    45,   101,    83,   230,   239,
      37,    85,    90,   195,    45,   136,   179,   113,   151,   145,
     240,   152,   153,   156,   100,    59,   210,   183,   212,   196,
     194,    15,    38,   184,   193,    39,   198,    40,   120,    41,
      42,    43,   180,   199,    44,   206,   207,   222,   213,   120,
     226,   201,   101,   225,   216,   121,   122,   123,   124,   101,
     179,   211,   227,   234,   125,   235,   121,   122,   123,   124,
     100,   237,   238,    58,   236,   125,   228,   100,   106,   241,
      45,   126,   247,   190,   242,    45,    45,   101,     4,    28,
      29,    30,    31,    32,    33,   108,    59,   111,   112,   158,
      17,    91,   101,   101,     0,   100,    92,    80,    59,    93,
     114,   209,    94,     4,    36,    45,     0,     0,     0,     0,
     100,   100,     0,     0,     4,    36,     4,    28,    29,    30,
      31,    32,    33,    28,    29,    30,    31,    32,    33,     0,
       0,     0,    95,    96,    97,    98,    99,    93,     4,     0,
      94,     0,     0,    15,    38,     0,   215,    39,   134,    40,
       0,    41,    42,    43,    15,    38,    44,     0,    39,     0,
      40,     0,    41,    42,    43,     0,     0,    44,     0,     0,
      95,    96,    97,    98,    99,     0,     0,     0,    15,    38,
       0,     0,    39,     0,    40,     0,    41,    42,    43,   120,
       0,    44,     4,    28,    29,    30,    31,    32,    33,     4,
      28,    29,    30,    31,    32,    33,   121,   122,   123,   124,
       0,   120,     0,    71,   141,   125,    72,   137,     0,    73,
      71,   120,     0,    72,     0,     0,    73,     0,   121,   122,
     123,   124,   159,     0,     0,     0,     0,   125,   121,   122,
     123,   124,     0,   120,     0,     0,     0,   125,   185,     0,
       0,     0,     0,   120,     0,     0,     0,     0,   200,     0,
     121,   122,   123,   124,     0,     0,     0,     0,     0,   125,
     121,   122,   123,   124,     0,     0,     0,     0,     0,   125,
       4,    28,    29,    30,    31,    32,    33,     4,    28,    29,
      30,    31,    32,    33,     0,     0,     0,     0,     0,   208,
      28,    29,    30,    31,    32,    33,   162,   163,   164,   165,
     166,   167
};

static const yytype_int16 yycheck[] =
{
       1,    20,    40,    92,    93,    43,     7,    72,    73,   126,
     107,   145,    13,   199,    29,    11,    35,    18,   135,     3,
      85,    22,    18,    24,    13,    26,     3,    13,    24,    27,
      10,    13,    13,    71,     3,    14,    25,    35,    57,    25,
      41,    23,    23,    41,    28,    22,    42,    62,   234,    87,
      88,    89,    31,    32,    33,    34,    57,   146,     0,    12,
      61,    40,    63,    64,   198,   130,   131,   132,   133,    70,
      11,    50,    25,    12,    11,    94,    15,    18,    15,    80,
      12,   119,    11,    14,   201,    86,    43,    17,   107,   206,
     207,    92,    93,    14,   191,    28,   134,    14,   136,    14,
      31,    32,    33,    34,    12,   106,   107,   241,   242,    40,
      23,     3,     4,    36,    37,    38,    39,   118,   137,   236,
     127,   128,   129,    54,    55,   126,   145,     4,   217,   226,
      22,    24,    12,   152,   135,    42,   137,    12,    26,    18,
     229,    26,    12,    24,   145,   146,   184,    25,   186,    12,
     151,    43,    44,    42,    26,    47,    23,    49,    14,    51,
      52,    53,   181,    12,    56,    23,    23,   205,    19,    14,
      20,    45,   191,   211,   193,    31,    32,    33,    34,   198,
     181,    42,    12,    12,    40,    12,    31,    32,    33,    34,
     191,    12,    12,    24,    50,    40,   215,   198,    13,    23,
     201,    46,    12,   146,    23,   206,   207,   226,     3,     4,
       5,     6,     7,     8,     9,    61,   217,    65,    65,   110,
       9,    16,   241,   242,    -1,   226,    21,    39,   229,    24,
      70,   181,    27,     3,     4,   236,    -1,    -1,    -1,    -1,
     241,   242,    -1,    -1,     3,     4,     3,     4,     5,     6,
       7,     8,     9,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    24,     3,    -1,
      27,    -1,    -1,    43,    44,    -1,    27,    47,    48,    49,
      -1,    51,    52,    53,    43,    44,    56,    -1,    47,    -1,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    49,    -1,    51,    52,    53,    14,
      -1,    56,     3,     4,     5,     6,     7,     8,     9,     3,
       4,     5,     6,     7,     8,     9,    31,    32,    33,    34,
      -1,    14,    -1,    24,    25,    40,    27,    20,    -1,    30,
      24,    14,    -1,    27,    -1,    -1,    30,    -1,    31,    32,
      33,    34,    25,    -1,    -1,    -1,    -1,    40,    31,    32,
      33,    34,    -1,    14,    -1,    -1,    -1,    40,    19,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    19,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    22,
       4,     5,     6,     7,     8,     9,   120,   121,   122,   123,
     124,   125
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    65,    66,     3,    64,     0,    15,    67,    68,
      69,    12,    64,    70,    11,    43,    93,    94,    17,    72,
      14,    64,    95,    64,    73,    74,    28,    82,     4,     5,
       6,     7,     8,     9,    71,    14,     4,    22,    44,    47,
      49,    51,    52,    53,    56,    64,    94,    96,    97,    98,
      99,   100,   102,   103,   104,   106,   109,    14,    74,    64,
      81,    83,    84,    29,    62,    85,    86,    87,    12,    71,
      23,    24,    27,    30,    64,    71,   110,   111,   112,   113,
      95,   110,    64,     4,   110,    24,    11,    18,    24,    42,
      12,    16,    21,    24,    27,    57,    58,    59,    60,    61,
      64,    71,    75,    76,    77,    80,    13,    23,    84,    64,
      64,    86,    87,    12,    97,   110,   113,   113,    11,    18,
      14,    31,    32,    33,    34,    40,    46,    27,    35,    41,
      36,    37,    38,    39,    48,    50,    42,    20,   113,    64,
     110,    25,   110,   114,   110,    18,    78,    79,    81,    81,
      71,    26,    26,    12,    64,    75,    24,    88,    88,    25,
      64,   110,   111,   111,   111,   111,   111,   111,    96,   112,
     112,   112,   113,   113,   113,   113,   110,    96,   110,    64,
      71,   107,   108,    25,    42,    19,    13,    25,    80,    22,
      79,    23,    25,    26,    64,    71,    12,    89,    23,    12,
      19,    45,   101,    54,    55,   105,    23,    23,    22,   108,
     110,    42,   110,    19,    75,    27,    71,    12,    25,    80,
      67,    96,   110,    96,    96,   110,    20,    12,    71,    28,
      81,    90,    91,    92,    12,    12,    50,    12,    12,    75,
      81,    23,    23,    67,    96,    80,    80,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    74,    75,    75,    75,    76,    77,    78,    78,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    85,    85,    85,    86,    87,    88,    88,    89,    89,
      90,    90,    91,    92,    93,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   101,   101,   102,   103,
     104,   105,   105,   106,   107,   107,   108,   108,   109,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   111,   111,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     2,     0,     4,     2,     0,
       5,     4,     1,     1,     1,     1,     1,     1,     2,     0,
       2,     1,     4,     1,     1,     1,     6,     3,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       5,     3,     3,     1,     2,     0,     2,     1,     4,     2,
       2,     1,     1,     0,     8,     6,     3,     0,     3,     0,
       3,     3,     2,     1,     1,     3,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       6,     5,     3,     4,     4,     5,     2,     0,     4,     4,
       8,     1,     1,     5,     2,     1,     4,     4,     2,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     1,     3,     2,     2,
       4,     3,     3,     1
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
#line 151 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.id_node) = new Id_Node(yytext);
}
#line 1567 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 155 "bison/pascal.y" /* yacc.c:1646  */
    {
              (yyval.program_node) = new Program_Node((yyvsp[-2].program_head_node), (yyvsp[-1].routine_node));
              (yyval.program_node)->setLineno(lineno);
              savedTree = (yyval.program_node);
          }
#line 1577 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 161 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.program_head_node) = new Program_head_Node((yyvsp[-1].id_node));
                }
#line 1585 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 165 "bison/pascal.y" /* yacc.c:1646  */
    { 
              (yyval.routine_node) = new Routine_Node((yyvsp[-1].routine_head_node), (yyvsp[0].routine_body_node));
              (yyval.routine_node)->setLineno(lineno);
          }
#line 1594 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 168 "bison/pascal.y" /* yacc.c:1646  */
    {//empty
              (yyval.routine_node) = nullptr;
          }
#line 1602 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 172 "bison/pascal.y" /* yacc.c:1646  */
    {
                   (yyval.routine_head_node) = new Routine_head_Node((yyvsp[-3].const_part_node), (yyvsp[-2].type_part_node), (yyvsp[-1].var_part_node), (yyvsp[0].routine_part_node));
                   (yyval.routine_head_node)->setLineno(lineno);
               }
#line 1611 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 177 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.const_part_node) = new Const_part_Node((yyvsp[0].const_expr_list_node));
             }
#line 1619 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 180 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.const_part_node) = nullptr;}
#line 1625 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 183 "bison/pascal.y" /* yacc.c:1646  */
    {
                      (yyval.const_expr_list_node) = new Const_expr_list_Node((yyvsp[-4].const_expr_list_node), (yyvsp[-3].id_node), (yyvsp[-1].const_value_node));
                      (yyval.const_expr_list_node)->setLineno(lineno);
                  }
#line 1634 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 187 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.const_expr_list_node) = new Const_expr_list_Node((yyvsp[-3].id_node), (yyvsp[-1].const_value_node));
    (yyval.const_expr_list_node)->setLineno(lineno);
}
#line 1643 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 192 "bison/pascal.y" /* yacc.c:1646  */
    {
                  /* const_value can be ConstInt_Node or else
                     but all is Const_value_Node
                   */
                  (yyval.const_value_node) = new ConstInt_Node((yyvsp[0].constInt));
                  (yyval.const_value_node)->setLineno(lineno);
              }
#line 1655 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 199 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.const_value_node) = new ConstDouble_Node((yyvsp[0].constDouble));
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1664 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 203 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.const_value_node) = new ConstChar_Node((yyvsp[0].constChar));
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1673 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 207 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.const_value_node) = new ConstStr_Node(std::string(yytext[1], strlen(yytext) - 2));
    //strip ""
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1683 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 212 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.const_value_node) = new ConstBool_Node((yyvsp[0].constBool));
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1692 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 215 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.const_value_node) = new ConstBool_Node((yyvsp[0].constBool));
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1701 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 220 "bison/pascal.y" /* yacc.c:1646  */
    {
               (yyval.type_part_node) = new Type_part_Node((yyvsp[0].type_decl_list_node));
               (yyval.type_part_node)->setLineno(lineno);
           }
#line 1710 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 224 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_part_node) = nullptr;}
#line 1716 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 226 "bison/pascal.y" /* yacc.c:1646  */
    {
                      (yyval.type_decl_list_node) = new Type_decl_list_Node((yyvsp[-1].type_decl_list_node), (yyvsp[0].type_definition_node));
                      (yyval.type_decl_list_node)->setLineno(lineno);
                  }
#line 1725 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 230 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.type_decl_list_node) = new Type_decl_list_Node((yyvsp[0].type_definition_node));
    (yyval.type_decl_list_node)->setLineno(lineno);
}
#line 1734 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 235 "bison/pascal.y" /* yacc.c:1646  */
    { 
                      (yyval.type_definition_node) = new Type_definition_Node((yyvsp[-3].id_node), (yyvsp[-1].type_decl_node));
                      (yyval.type_definition_node)->setLineno(lineno);  
                  }
#line 1743 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 240 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_decl_node) = (yyvsp[0].simple_type_decl_node);}
#line 1749 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 241 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_decl_node) = (yyvsp[0].array_type_decl_node);}
#line 1755 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 242 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_decl_node) = (yyvsp[0].record_type_decl_node);}
#line 1761 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 244 "bison/pascal.y" /* yacc.c:1646  */
    { 
                      (yyval.array_type_decl_node) = new Array_type_decl_Node((yyvsp[-3].simple_type_decl_node), (yyvsp[0].type_decl_node));
                      (yyval.array_type_decl_node)->setLineno(lineno);
                  }
#line 1770 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 249 "bison/pascal.y" /* yacc.c:1646  */
    {
                       (yyval.record_type_decl_node) = new Record_type_decl_Node((yyvsp[-1].field_decl_list_node));
                       (yyval.record_type_decl_node)->setLineno(lineno);
                   }
#line 1779 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 254 "bison/pascal.y" /* yacc.c:1646  */
    {
                      (yyval.field_decl_list_node) = new Field_decl_list_Node((yyvsp[-1].field_decl_list_node), (yyvsp[0].field_decl_node));
                      (yyval.field_decl_list_node)->setLineno(lineno);
                  }
#line 1788 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 258 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.field_decl_list_node) = new Field_decl_list_Node((yyvsp[0].field_decl_node));
    (yyval.field_decl_list_node)->setLineno(lineno);
}
#line 1797 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 263 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.field_decl_node) = new Field_decl_Node((yyvsp[-3].name_list_node), (yyvsp[-1].type_decl_node));
                 (yyval.field_decl_node)->setLineno(lineno);
             }
#line 1806 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 268 "bison/pascal.y" /* yacc.c:1646  */
    {
                       (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::INT);
                       (yyval.simple_type_decl_node)->setLineno(lineno);
                   }
#line 1815 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 272 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::REAL);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1824 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 276 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::CHAR);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1833 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 280 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::STRING);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1842 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 284 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::BOOL);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1851 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 288 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Alias_type_decl_Node((yyvsp[0].id_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1860 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 292 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Enum_type_decl_Node((yyvsp[-1].name_list_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1869 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 296 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(false, (yyvsp[-2].const_value_node), false, (yyvsp[0].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1878 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 301 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(true, (yyvsp[-2].const_value_node), false, (yyvsp[0].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1887 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 306 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(true, (yyvsp[-3].const_value_node), true, (yyvsp[0].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1896 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 309 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_id_type_decl_Node((yyvsp[-2].id_node), (yyvsp[0].id_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1905 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 314 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval.name_list_node) = new Name_list_Node((yyvsp[-2].name_list_node), (yyvsp[0].id_node));
                (yyval.name_list_node)->setLineno(lineno);
            }
#line 1914 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 317 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.name_list_node) = new Name_list_Node((yyvsp[0].id_node));
                (yyval.name_list_node)->setLineno(lineno);
            }
#line 1923 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 322 "bison/pascal.y" /* yacc.c:1646  */
    {
               (yyval.var_part_node) = new Var_part_Node((yyvsp[0].var_decl_list_node));
               (yyval.var_part_node)->setLineno(lineno);
           }
#line 1932 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 325 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval.var_part_node) = nullptr;
           }
#line 1939 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.var_decl_list_node) = new Var_decl_list_Node((yyvsp[-1].var_decl_list_node), (yyvsp[0].var_decl_node));
                }
#line 1947 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval.var_decl_list_node) = new Var_decl_list_Node((yyvsp[0].var_decl_node));}
#line 1953 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 333 "bison/pascal.y" /* yacc.c:1646  */
    {
               (yyval.var_decl_node) = new Var_decl_Node((yyvsp[-3].name_list_node), (yyvsp[-1].type_decl_node));
               (yyval.var_decl_node)->setLineno(lineno);
           }
#line 1962 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 338 "bison/pascal.y" /* yacc.c:1646  */
    {
                   (yyval.routine_part_node) = new Routine_part_Node((yyvsp[-1].routine_part_node), (Function_decl_Node*)(yyvsp[0].function_decl_node));
                   (yyval.routine_part_node)->setLineno(lineno);
               }
#line 1971 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 342 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.routine_part_node) = new Routine_part_Node((yyvsp[-1].routine_part_node), (Procedure_decl_Node*)(yyvsp[0].procedure_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
#line 1980 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 346 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.routine_part_node) = new Routine_part_Node((Function_decl_Node*)(yyvsp[0].function_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
#line 1989 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 350 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.routine_part_node) = new Routine_part_Node((Procedure_decl_Node*)(yyvsp[0].procedure_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
#line 1998 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 354 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.routine_part_node) = nullptr;}
#line 2004 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 356 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.function_decl_node) = new Function_decl_Node((yyvsp[-6].id_node), (yyvsp[-5].parameters_node), (yyvsp[-3].simple_type_decl_node), (yyvsp[-1].routine_node));
                    (yyval.function_decl_node)->setLineno(lineno);
                }
#line 2013 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 361 "bison/pascal.y" /* yacc.c:1646  */
    { 
                    (yyval.procedure_decl_node) = new Procedure_decl_Node((yyvsp[-4].id_node), (yyvsp[-3].parameters_node), (yyvsp[-1].routine_node));
                    (yyval.procedure_decl_node)->setLineno(lineno);
                }
#line 2022 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 366 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.parameters_node) = new Parameters_Node((yyvsp[-1].para_decl_list_node));
                 (yyval.parameters_node) -> setLineno(lineno);
             }
#line 2031 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 370 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.parameters_node) = nullptr;}
#line 2037 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 372 "bison/pascal.y" /* yacc.c:1646  */
    {
                     (yyval.para_decl_list_node) = new Para_decl_list_Node((yyvsp[-2].para_decl_list_node), (yyvsp[0].para_type_list_node));
                     (yyval.para_decl_list_node) -> setLineno(lineno);
                 }
#line 2046 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 375 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.para_decl_list_node) = nullptr;}
#line 2052 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 377 "bison/pascal.y" /* yacc.c:1646  */
    { 
                     (yyval.para_type_list_node) = new Para_type_list_Node((Var_para_list_Node *)(yyvsp[-2].var_para_list_node), (yyvsp[0].simple_type_decl_node));
                     (yyval.para_type_list_node)->setLineno(lineno);
                 }
#line 2061 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 381 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.para_type_list_node) = new Para_type_list_Node((Val_para_list_Node *)(yyvsp[-2].val_para_list_node), (yyvsp[0].simple_type_decl_node));
    (yyval.para_type_list_node)->setLineno(lineno);
}
#line 2070 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 386 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.var_para_list_node) = new Var_para_list_Node((yyvsp[0].name_list_node));
                    (yyval.var_para_list_node)->setLineno(lineno);
                }
#line 2079 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 391 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.val_para_list_node) = new Val_para_list_Node((yyvsp[0].name_list_node));
                    (yyval.val_para_list_node)->setLineno(lineno);
                }
#line 2088 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 396 "bison/pascal.y" /* yacc.c:1646  */
    {
                   (yyval.routine_body_node) = new Routine_body_Node((yyvsp[0].compound_stmt_node));
                   (yyval.routine_body_node)->setLineno(lineno);
               }
#line 2097 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 401 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.compound_stmt_node) = new Compound_stmt_Node((yyvsp[-1].stmt_list_node));
                    (yyval.compound_stmt_node)->setLineno(lineno);
                }
#line 2106 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 406 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.stmt_list_node) = new Stmt_list_Node((yyvsp[-2].stmt_list_node), (yyvsp[-1].stmt_node));
                (yyval.stmt_list_node)->setLineno(lineno);  
            }
#line 2115 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 409 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.stmt_list_node) = nullptr;}
#line 2121 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 411 "bison/pascal.y" /* yacc.c:1646  */
    { 
           (yyval.stmt_node) = new Stmt_Node((yyvsp[-2].constInt), (yyvsp[0].non_label_stmt_node));
           (yyval.stmt_node)->setLineno(lineno); 
       }
#line 2130 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 414 "bison/pascal.y" /* yacc.c:1646  */
    {
           (yyval.stmt_node) = new Stmt_Node((yyvsp[0].non_label_stmt_node));
           (yyval.stmt_node)->setLineno(lineno);
       }
#line 2139 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 419 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].assign_stmt_node);}
#line 2145 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 420 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].proc_stmt_node);}
#line 2151 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 421 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].compound_stmt_node);}
#line 2157 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 422 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].if_stmt_node);}
#line 2163 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 423 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].repeat_stmt_node);}
#line 2169 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 424 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].while_stmt_node);}
#line 2175 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 425 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].for_stmt_node);}
#line 2181 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 426 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].case_stmt_node);}
#line 2187 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 427 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].goto_stmt_node);}
#line 2193 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 429 "bison/pascal.y" /* yacc.c:1646  */
    { 
                  (yyval.assign_stmt_node) = new Assign_id_stmt_Node((yyvsp[-2].id_node), (yyvsp[0].expression_node));
                  (yyval.assign_stmt_node)->setLineno(lineno);
              }
#line 2202 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 433 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.assign_stmt_node) = new Assign_arr_stmt_Node((yyvsp[-5].id_node), (yyvsp[-3].expression_node), (yyvsp[0].expression_node));
    (yyval.assign_stmt_node)->setLineno(lineno);
}
#line 2211 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 437 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.assign_stmt_node) = new Assign_record_stmt_Node((yyvsp[-4].id_node), (yyvsp[-2].id_node), (yyvsp[0].expression_node));
    (yyval.assign_stmt_node)->setLineno(lineno);
}
#line 2220 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 442 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval.proc_stmt_node) = new Proc_stmt_Node((yyvsp[-2].id_node));
                (yyval.proc_stmt_node)->setLineno(lineno);
            }
#line 2229 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 446 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.proc_stmt_node) = new Proc_stmt_Node((yyvsp[-3].id_node), (yyvsp[-1].args_list_node));
    (yyval.proc_stmt_node)->setLineno(lineno);
}
#line 2238 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 450 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.proc_stmt_node) = new Read_stmt_Node((yyvsp[-1].factor_node));
}
#line 2246 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 454 "bison/pascal.y" /* yacc.c:1646  */
    { 
              (yyval.if_stmt_node) = new If_stmt_Node((yyvsp[-3].expression_node), (yyvsp[-1].stmt_node), (yyvsp[0].else_clause_node));
              (yyval.if_stmt_node)->setLineno(lineno);
          }
#line 2255 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 459 "bison/pascal.y" /* yacc.c:1646  */
    {
                  (yyval.else_clause_node) = new Else_clause_Node((yyvsp[0].stmt_node));
                  (yyval.else_clause_node)->setLineno(lineno);
              }
#line 2264 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 463 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.else_clause_node) = nullptr;
}
#line 2272 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 467 "bison/pascal.y" /* yacc.c:1646  */
    { 
                  (yyval.repeat_stmt_node) = new Repeat_stmt_Node((yyvsp[-2].stmt_list_node), (yyvsp[0].expression_node));
                  (yyval.repeat_stmt_node)->setLineno(lineno);
              }
#line 2281 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 472 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.while_stmt_node) = new While_stmt_Node((yyvsp[-2].expression_node), (yyvsp[0].stmt_node));
                 (yyval.while_stmt_node)->setLineno(lineno);
             }
#line 2290 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 477 "bison/pascal.y" /* yacc.c:1646  */
    { 
               (yyval.for_stmt_node) = new For_stmt_Node((yyvsp[-6].id_node), (yyvsp[-4].expression_node), (yyvsp[-3].direction_node), (yyvsp[-2].expression_node), (yyvsp[0].stmt_node));
               (yyval.for_stmt_node)->setLineno(lineno);
           }
#line 2299 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 482 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval.direction_node) = new Direction_Node(true);
                (yyval.direction_node)->setLineno(lineno);
            }
#line 2308 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 486 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.direction_node) = new Direction_Node(false);
    (yyval.direction_node)->setLineno(lineno);
}
#line 2317 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 491 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.case_stmt_node) = new Case_stmt_Node((yyvsp[-3].expression_node), (yyvsp[-1].case_expr_list_node));
                (yyval.case_stmt_node)->setLineno(lineno);
            }
#line 2326 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 496 "bison/pascal.y" /* yacc.c:1646  */
    { 
                     (yyval.case_expr_list_node) = new Case_expr_list_Node((yyvsp[-1].case_expr_list_node), (yyvsp[0].case_expr_node));
                 }
#line 2334 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 499 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.case_expr_list_node) = new Case_expr_list_Node((yyvsp[0].case_expr_node));
}
#line 2342 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 503 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.case_expr_node) = new Case_const_val_expr_Node((yyvsp[-3].const_value_node), (yyvsp[-1].stmt_node));
                (yyval.case_expr_node)->setLineno(lineno);
            }
#line 2351 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 507 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.case_expr_node) = new Case_id_expr_Node((yyvsp[-3].id_node), (yyvsp[-1].stmt_node));
    (yyval.case_expr_node)->setLineno(lineno);
}
#line 2360 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 512 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.goto_stmt_node) = new Goto_stmt_Node((yyvsp[0].constInt));
                (yyval.goto_stmt_node)->setLineno(lineno);
            }
#line 2369 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 526 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::GE, (yyvsp[0].expr_node));
                 (yyval.expression_node)->setLineno(lineno);
             }
#line 2378 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 530 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::GT, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2387 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 534 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::LE, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2396 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 538 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::LT, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2405 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 542 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::EQ, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2414 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 546 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::NEQ, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2423 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 550 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expression_node) = new Expression_Node((yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2432 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 555 "bison/pascal.y" /* yacc.c:1646  */
    {
           (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::ADD, (yyvsp[0].expr_node));
           (yyval.expr_node)->setLineno(lineno);
       }
#line 2441 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 559 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::SUB, (yyvsp[0].expr_node));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2450 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 563 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::OR, (yyvsp[0].expr_node));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2459 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 567 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
}
#line 2467 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 571 "bison/pascal.y" /* yacc.c:1646  */
    {
           (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::MUL, new Expr_Node((yyvsp[0].factor_node)));
           (yyval.expr_node)->setLineno(lineno);
       }
#line 2476 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 575 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::DIV, new Expr_Node((yyvsp[0].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2485 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 579 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::MOD, new Expr_Node((yyvsp[0].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2494 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 583 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::AND, new Expr_Node((yyvsp[0].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2503 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 587 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[0].factor_node));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2512 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 592 "bison/pascal.y" /* yacc.c:1646  */
    {
              (yyval.factor_node) = new Factor_id_Node((yyvsp[0].id_node));
              (yyval.factor_node)->setLineno(lineno);
          }
#line 2521 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 596 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = (yyvsp[0].const_value_node);
    //const_val is factor
}
#line 2530 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 600 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = (yyvsp[-1].expression_node);
    //expression is factor
}
#line 2539 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 604 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_unary_Node(Factor_unary_Node::NOT, (yyvsp[0].factor_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2548 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 608 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_unary_Node(Factor_unary_Node::MINUS, (yyvsp[0].factor_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2557 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 612 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_arr_Node((yyvsp[-3].id_node), (yyvsp[-1].expression_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2566 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 616 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_record_Node((yyvsp[-2].id_node), (yyvsp[0].id_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2575 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 621 "bison/pascal.y" /* yacc.c:1646  */
    {
                  (yyval.args_list_node) = new Args_list_Node((yyvsp[-2].args_list_node), (yyvsp[0].expression_node));
                  (yyval.args_list_node)->setLineno(lineno);
              }
#line 2584 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 625 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.args_list_node) = new Args_list_Node((yyvsp[0].expression_node));
    (yyval.args_list_node)->setLineno(lineno);
}
#line 2593 "pascal.tab.c" /* yacc.c:1646  */
    break;


#line 2597 "pascal.tab.c" /* yacc.c:1646  */
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
#line 630 "bison/pascal.y" /* yacc.c:1906  */


int yyerror(char * message){
    puts("yyerror in pascal.y called");
    printf("Syntax error at line %d: %s\n",lineno,message);
    return 0;
}

TreeNode * do_parse(void){
    yyparse();
    return savedTree;
}
