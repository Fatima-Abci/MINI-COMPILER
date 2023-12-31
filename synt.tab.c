
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
#line 1 "synt.y"

int nb_ligne=1;     
extern yytext;
char type_temp[20];
char var_temp[20];
char const_temp[20];
char opr_temp[20];
int tab_temp;


/* Line 189 of yacc.c  */
#line 84 "synt.tab.c"

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
     mc_docprogram = 258,
     mc_inf = 259,
     mc_pexcl = 260,
     mc_sup = 261,
     mc_div = 262,
     idf = 263,
     mc_sub = 264,
     mc_variable = 265,
     mc_as = 266,
     pvg = 267,
     mc_int = 268,
     mc_flt = 269,
     mc_bol = 270,
     mc_chr = 271,
     mc_str = 272,
     mc_barre = 273,
     mc_arr = 274,
     mc_dpts = 275,
     mc_const = 276,
     mc_egal = 277,
     mc_body = 278,
     mc_aff = 279,
     vrg = 280,
     mc_plus = 281,
     mc_moins = 282,
     mc_mult = 283,
     mc_input = 284,
     mc_output = 285,
     mc_if = 286,
     mc_then = 287,
     mc_else = 288,
     mc_and = 289,
     mc_or = 290,
     mc_not = 291,
     sup = 292,
     inf = 293,
     supe = 294,
     infe = 295,
     egal = 296,
     dif = 297,
     par_ov = 298,
     par_fr = 299,
     mc_do = 300,
     mc_while = 301,
     mc_for = 302,
     mc_until = 303,
     cst_entier = 304,
     cst_reel = 305,
     cst_bol = 306,
     cst_car = 307,
     cst_chaine = 308,
     cr_ov = 309,
     cr_fr = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 10 "synt.y"

       char* str;



/* Line 214 of yacc.c  */
#line 181 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "synt.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   274

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    14,    18,    23,    26,    27,    29,
      31,    33,    35,    43,    47,    49,    53,    59,    62,    64,
      72,    77,    81,    84,    86,    94,    95,    97,    99,   101,
     103,   105,   109,   112,   114,   122,   127,   133,   135,   137,
     139,   141,   143,   149,   153,   157,   160,   161,   163,   165,
     167,   169,   171,   180,   192,   196,   198,   200,   202,   210,
     220,   227,   233,   234,   239,   245,   254,   263,   268,   270,
     272,   282,   289,   301,   305,   307,   309,   316,   321,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   359
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,    59,    81,   107,    -1,     4,     5,
       3,     8,     6,    -1,    60,    61,    80,    -1,     4,     9,
      10,     6,    -1,    61,    62,    -1,    -1,    63,    -1,    65,
      -1,    70,    -1,    74,    -1,     4,    64,    11,    79,     7,
       6,    12,    -1,     8,    18,    64,    -1,     8,    -1,    66,
      67,    69,    -1,     4,    19,    11,    79,     6,    -1,    67,
      68,    -1,    68,    -1,     4,     8,    20,    49,     7,     6,
      12,    -1,     4,     7,    19,     6,    -1,    77,    71,    78,
      -1,    71,    72,    -1,    72,    -1,     4,     8,    22,    73,
       7,     6,    12,    -1,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    77,    75,    78,    -1,    75,
      76,    -1,    76,    -1,     4,     8,    11,    79,     7,     6,
      12,    -1,     4,     9,    21,     6,    -1,     4,     7,     9,
      21,     6,    -1,    13,    -1,    14,    -1,    15,    -1,    16,
      -1,    17,    -1,     4,     7,     9,    10,     6,    -1,    82,
      83,   106,    -1,     4,    23,     6,    -1,    83,    84,    -1,
      -1,    85,    -1,    88,    -1,    89,    -1,    91,    -1,    96,
      -1,     4,    24,    20,     8,    25,    86,     7,     6,    -1,
       4,    24,    20,     8,    54,    49,    55,    25,    86,     7,
       6,    -1,    86,   103,    87,    -1,    87,    -1,     8,    -1,
      73,    -1,     4,    29,    20,     8,    53,     7,     6,    -1,
       4,    30,    20,    53,    26,     8,    90,     7,     6,    -1,
       4,    30,    20,    53,     7,     6,    -1,    26,    53,    26,
       8,    90,    -1,    -1,    92,    93,    94,    95,    -1,     4,
      31,    20,   102,     6,    -1,     4,    32,     6,    83,     4,
       7,    32,     6,    -1,     4,    33,     6,    83,     4,     7,
      33,     6,    -1,     4,     7,    31,     6,    -1,    97,    -1,
      99,    -1,     4,    45,     6,    83,    98,     4,     7,    45,
       6,    -1,     4,    46,    20,   102,     7,     6,    -1,     4,
      47,   100,    48,   101,     6,    83,     4,     7,    47,     6,
      -1,     8,    22,    49,    -1,     8,    -1,    49,    -1,   104,
      43,   102,    25,   102,    44,    -1,    36,    43,   102,    44,
      -1,   105,    43,    86,    25,    86,    44,    -1,    51,    -1,
      26,    -1,    27,    -1,    28,    -1,     7,    -1,    34,    -1,
      35,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,     4,     7,    23,     6,    -1,     4,
       7,     3,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    26,    29,    31,    33,    34,    36,    37,
      38,    39,    42,    54,    55,    59,    61,    63,    64,    66,
      83,    86,    88,    89,    91,    96,    96,    97,    98,    99,
     100,   102,   104,   105,   107,   118,   120,   122,   123,   124,
     125,   126,   128,   131,   133,   135,   136,   138,   139,   140,
     141,   142,   145,   164,   179,   184,   186,   191,   194,   213,
     230,   232,   249,   252,   254,   256,   258,   260,   263,   264,
     267,   269,   272,   274,   280,   285,   287,   288,   289,   290,
     292,   293,   294,   295,   297,   298,   300,   301,   302,   303,
     304,   305,   307,   310
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_docprogram", "mc_inf", "mc_pexcl",
  "mc_sup", "mc_div", "idf", "mc_sub", "mc_variable", "mc_as", "pvg",
  "mc_int", "mc_flt", "mc_bol", "mc_chr", "mc_str", "mc_barre", "mc_arr",
  "mc_dpts", "mc_const", "mc_egal", "mc_body", "mc_aff", "vrg", "mc_plus",
  "mc_moins", "mc_mult", "mc_input", "mc_output", "mc_if", "mc_then",
  "mc_else", "mc_and", "mc_or", "mc_not", "sup", "inf", "supe", "infe",
  "egal", "dif", "par_ov", "par_fr", "mc_do", "mc_while", "mc_for",
  "mc_until", "cst_entier", "cst_reel", "cst_bol", "cst_car", "cst_chaine",
  "cr_ov", "cr_fr", "$accept", "S", "DEBUT_PRG", "PART_DEC", "DEB_DEC",
  "LISTE_DEC", "DEC", "DEC_VAR", "LIST_IDF", "DEC_ARR", "DEB_DEC_ARR",
  "LISTE_ARR", "ARR", "FIN_DEC_ARR", "DEC_CONST_VAL", "LISTE_CONST_VAL",
  "CONST_VAL", "VALEUR", "DEC_CONST_TYPE", "LISTE_CONST_TYPE",
  "CONST_TYPE", "DEB_DEC_CONST", "FIN_DEC_CONST", "TYPE", "FIN_DEC",
  "PART_INST", "DEB_INST", "LISTE_INST", "INSTRUCTION", "AFFECTATION",
  "EXPRESSION", "OPRAND", "LECTURE", "ECRITURE", "OUT", "CONDITION",
  "DEB_COND", "BLOC_THEN", "BLOC_ELSE", "FIN_COND", "BOUCLE", "BOUCLE_DO",
  "BLOC_WHILE", "BOUCLE_FOR", "INITIALISATION", "BORNE_SUP",
  "EXPRESSION_COND", "OPR_ARITHMETIQUE", "OPR_LOGIQUE", "OPR_COMPARAISON",
  "FIN_INST", "FIN_PRG", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    60,    61,    61,    62,    62,
      62,    62,    63,    64,    64,    65,    66,    67,    67,    68,
      69,    70,    71,    71,    72,    73,    73,    73,    73,    73,
      73,    74,    75,    75,    76,    77,    78,    79,    79,    79,
      79,    79,    80,    81,    82,    83,    83,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89,
      89,    90,    90,    91,    92,    93,    94,    95,    96,    96,
      97,    98,    99,   100,   101,   101,   102,   102,   102,   102,
     103,   103,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   106,   107
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     3,     4,     2,     0,     1,     1,
       1,     1,     7,     3,     1,     3,     5,     2,     1,     7,
       4,     3,     2,     1,     7,     0,     1,     1,     1,     1,
       1,     3,     2,     1,     7,     4,     5,     1,     1,     1,
       1,     1,     5,     3,     3,     2,     0,     1,     1,     1,
       1,     1,     8,    11,     3,     1,     1,     1,     7,     9,
       6,     5,     0,     4,     5,     8,     8,     4,     1,     1,
       9,     6,    11,     3,     1,     1,     6,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     7,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     2,
       0,     0,     6,     8,     9,     0,    10,    11,     0,     4,
       3,     5,    44,     0,     0,    45,    47,    48,    49,    50,
       0,    51,    68,    69,    43,     0,    14,     0,     0,     0,
       0,     0,    18,     0,     0,    23,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    15,     0,     0,    22,
      21,     0,    32,    31,    93,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,    13,    35,    37,
      38,    39,    40,    41,     0,     0,     0,     0,     0,    25,
       0,     0,     0,    92,     0,     0,     0,    84,    85,     0,
      86,    87,    88,    89,    90,    91,    79,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    63,    42,    16,     0,
       0,     0,     0,    26,    27,    28,    29,    30,     0,     0,
      25,     0,     0,     0,     0,     0,    64,     0,    25,     0,
       0,    73,    74,    75,     0,     0,    46,     0,     0,     0,
      20,     0,     0,     0,    56,    57,     0,    55,     0,     0,
      60,    62,     0,     0,     0,     0,     0,    46,     0,     0,
       0,    12,     0,     0,     0,    36,    83,    80,    81,    82,
      25,     0,    58,     0,     0,    77,     0,    83,    25,     0,
       0,     0,     0,     0,    67,    19,    34,    24,    52,    54,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    76,    78,     0,    70,     0,    65,     0,
      83,    62,    71,     0,    66,    53,    61,    72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    14,    22,    23,    49,    24,
      25,    51,    52,    76,    26,    54,    55,   175,    27,    56,
      57,    28,    80,   104,    29,    12,    13,    20,    35,    36,
     176,   177,    37,    38,   204,    39,    40,    67,    95,   136,
      41,    42,   160,    43,    92,   164,   127,   200,   128,   129,
      44,    19
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
       2,    18,    57,    54,    61,  -158,    60,    66,  -158,    63,
      64,    50,    77,  -158,    79,    74,    89,    90,    91,  -158,
      95,    59,  -158,  -158,  -158,    97,  -158,  -158,   100,  -158,
    -158,  -158,  -158,   108,     5,  -158,  -158,  -158,  -158,  -158,
     126,  -158,  -158,  -158,  -158,   103,   113,   111,   123,   124,
     128,   133,  -158,   130,   135,  -158,   136,  -158,   137,   118,
     122,   125,   127,   129,   138,   140,   114,   146,   141,   144,
     147,    93,    93,   134,     6,  -158,  -158,    -4,    14,  -158,
    -158,    20,  -158,  -158,  -158,   149,   148,   150,   104,    82,
    -158,   139,   112,   153,   131,   158,   157,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,   159,   160,   117,   151,    93,    76,
     162,   152,   161,  -158,   -16,   115,     4,  -158,  -158,   132,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,   163,   142,   143,
     169,   145,     0,  -158,   170,   171,  -158,  -158,  -158,   173,
     174,   176,   177,  -158,  -158,  -158,  -158,  -158,   180,   156,
      -5,   154,   181,   183,   172,    82,  -158,    82,    -5,   -14,
     179,  -158,  -158,  -158,   184,   187,  -158,   164,   185,   186,
    -158,   190,   192,   193,  -158,  -158,    13,  -158,   155,   194,
    -158,   167,   165,   182,    65,   188,   195,  -158,    30,   197,
     198,  -158,   199,   200,   201,  -158,   208,  -158,  -158,  -158,
      -5,   191,  -158,   166,   210,  -158,    82,  -158,    -5,    82,
     175,   202,   189,    55,  -158,  -158,  -158,  -158,  -158,  -158,
      -5,   196,   209,   203,    -2,   211,   217,    58,   218,   204,
      87,   219,  -158,  -158,  -158,   220,  -158,   178,  -158,   222,
     223,   167,  -158,   224,  -158,  -158,  -158,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,   205,  -158,
    -158,  -158,   206,  -158,  -158,  -158,   207,    96,  -158,  -158,
     212,  -158,   213,   -53,  -158,  -158,  -158,   -90,  -158,  -158,
    -157,    31,  -158,  -158,    -9,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -153,  -158,  -158,  -158,
    -158,  -158
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     130,   184,   182,   174,   183,   207,     1,   108,   162,   150,
      60,   153,    59,   107,    73,    61,    62,    63,   109,   105,
     196,   110,   111,     4,   197,   198,   199,   110,   112,    60,
     154,    64,   185,    65,    61,    62,    63,   212,   151,   197,
     198,   199,   234,   165,   143,   144,   145,   146,   147,   163,
      64,   224,    65,   223,    60,   142,   225,     5,     6,    61,
      62,    63,   229,   230,     9,   237,    45,    46,    47,    10,
      11,    15,   207,    17,    16,    64,   189,    65,    48,    60,
      30,    18,    60,    21,    61,    62,    63,    61,    62,    63,
     208,   197,   198,   199,   240,    31,    32,   211,    33,    34,
      64,    50,    65,    64,    53,    65,    99,   100,   101,   102,
     103,    58,    68,   197,   198,   199,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   143,   144,   145,   146,   147,
      66,    69,    70,   126,    71,    72,    73,    74,    77,    78,
      81,    85,    86,    84,    90,    87,    93,    88,    91,    89,
      94,    96,    46,    98,   106,   113,   114,   116,   115,   133,
     132,   131,   135,   137,   134,   138,   140,   139,   152,   156,
     141,   149,   108,   159,   109,   155,   166,   173,   167,   168,
     181,   169,   170,   186,   171,   157,   158,   172,   179,   180,
     187,   188,   192,   203,   161,   190,   193,   191,   194,   195,
     202,   213,   210,   178,   214,   148,   227,   206,   209,   205,
     201,   215,   216,   217,   218,   232,   220,   222,   235,   221,
     226,   228,   231,   236,   238,   243,   242,   241,   244,   245,
     247,   219,   246,     0,     0,     0,     0,   239,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,    82,    83,
       0,     0,     0,     0,    97
};

static const yytype_int16 yycheck[] =
{
      90,   158,   155,     8,   157,     7,     4,    11,     8,    25,
      24,     7,     7,     7,     8,    29,    30,    31,    22,    72,
       7,     7,     8,     5,    26,    27,    28,     7,     8,    24,
      26,    45,    46,    47,    29,    30,    31,     7,    54,    26,
      27,    28,    44,   133,    49,    50,    51,    52,    53,    49,
      45,   208,    47,   206,    24,   108,   209,     0,     4,    29,
      30,    31,     7,   220,     3,     7,     7,     8,     9,     9,
       4,     8,     7,    23,    10,    45,   166,    47,    19,    24,
       6,     4,    24,     4,    29,    30,    31,    29,    30,    31,
      25,    26,    27,    28,     7,     6,     6,   187,     7,     4,
      45,     4,    47,    45,     4,    47,    13,    14,    15,    16,
      17,     3,     9,    26,    27,    28,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    49,    50,    51,    52,    53,
       4,    18,    21,    51,    11,    11,     8,     4,     8,     4,
       4,    23,    20,     6,     6,    20,    32,    20,     8,    20,
       4,    10,     8,     6,    20,     6,     8,    53,     8,     6,
      48,    22,     4,     6,    33,     6,    49,     7,    53,     6,
      19,     9,    11,     4,    22,    43,     6,    21,     7,     6,
       8,     7,     6,     4,     7,    43,    43,     7,     7,     6,
       6,     4,     6,    26,    49,    31,     6,    12,     6,     6,
       6,     4,     7,    49,     6,   109,     4,    25,    20,    44,
      55,    12,    12,    12,     6,     6,    25,     7,     7,    53,
      45,    32,    26,     6,     6,    47,     6,     8,     6,     6,
       6,   200,   241,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    56,    56,
      -1,    -1,    -1,    -1,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    57,    58,     5,     0,     4,    59,    60,     3,
       9,     4,    81,    82,    61,     8,    10,    23,     4,   107,
      83,     4,    62,    63,    65,    66,    70,    74,    77,    80,
       6,     6,     6,     7,     4,    84,    85,    88,    89,    91,
      92,    96,    97,    99,   106,     7,     8,     9,    19,    64,
       4,    67,    68,     4,    71,    72,    75,    76,     3,     7,
      24,    29,    30,    31,    45,    47,     4,    93,     9,    18,
      21,    11,    11,     8,     4,    68,    69,     8,     4,    72,
      78,     4,    76,    78,     6,    23,    20,    20,    20,    20,
       6,     8,   100,    32,     4,    94,    10,    64,     6,    13,
      14,    15,    16,    17,    79,    79,    20,     7,    11,    22,
       7,     8,     8,     6,     8,     8,    53,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    51,   102,   104,   105,
      83,    22,    48,     6,    33,     4,    95,     6,     6,     7,
      49,    19,    79,    49,    50,    51,    52,    53,    73,     9,
      25,    54,    53,     7,    26,    43,     6,    43,    43,     4,
      98,    49,     8,    49,   101,    83,     6,     7,     6,     7,
       6,     7,     7,    21,     8,    73,    86,    87,    49,     7,
       6,     8,   102,   102,    86,    46,     4,     6,     4,    83,
      31,    12,     6,     6,     6,     6,     7,    26,    27,    28,
     103,    55,     6,    26,    90,    44,    25,     7,    25,    20,
       7,    83,     7,     4,     6,    12,    12,    12,     6,    87,
      25,    53,     7,   102,    86,   102,    45,     4,    32,     7,
      86,    26,     6,    44,    44,     7,     6,     7,     6,    33,
       7,     8,     6,    47,     6,     6,    90,     6
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
        case 2:

/* Line 1455 of yacc.c  */
#line 22 "synt.y"
    {printf("programme syntaxiquement correcte!");
                   YYACCEPT;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 42 "synt.y"
    {
                                                        if(declaration(var_temp) == 0)
                                                        {
                                                               insererTYPE(var_temp,type_temp);
                                                        }
                                                        else
                                                        {
                                                               printf("ERREUR SEMANTIQUE : double declaration, entite < %s >, ligne < %d >\n",var_temp, nb_ligne);
                                                        }
                                                        
                                                     ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 54 "synt.y"
    {strcpy(var_temp, (yyvsp[(1) - (3)].str));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 55 "synt.y"
    { strcpy(var_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 66 "synt.y"
    {  
                                                        if(declaration((yyvsp[(2) - (7)].str)) == 0)
                                                        {
                                                               insererTYPE((yyvsp[(2) - (7)].str),type_temp);
                                                               tab_temp = atoi((yyvsp[(4) - (7)].str));
                                                               sauvTailleTab((yyvsp[(2) - (7)].str),tab_temp);
                                                               if((yyvsp[(4) - (7)].str) == 0)
                                                               {
                                                                 printf("ERREUR SEMANTIQUE : taille tableau < %s > est == 0, ligne < %d >\n",(yyvsp[(2) - (7)].str),nb_ligne);
                                                               }
                                                        }
                                                        else
                                                        {
                                                               printf("ERREUR SEMANTIQUE : double declaration, entite < %s >, ligne < %d >\n",(yyvsp[(2) - (7)].str), nb_ligne);
                                                        }
                                                 ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 91 "synt.y"
    {
                                                        insererConstanteVal((yyvsp[(2) - (7)].str), const_temp);
                                                        ConstanteTrue((yyvsp[(2) - (7)].str));
                                                       ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 96 "synt.y"
    {strcpy(const_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 97 "synt.y"
    {strcpy(const_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 98 "synt.y"
    { strcpy(const_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 99 "synt.y"
    { strcpy(const_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 100 "synt.y"
    {strcpy(const_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 107 "synt.y"
    {    ConstanteTrue((yyvsp[(2) - (7)].str));
                                                        if(declaration((yyvsp[(2) - (7)].str)) == 0)
                                                        {
                                                               insererTYPE((yyvsp[(2) - (7)].str),type_temp);
                                                        }
                                                        else
                                                        {
                                                               printf("ERREUR SEMANTIQUE : double declaration, entite < %s >, ligne < %d >\n",(yyvsp[(2) - (7)].str), nb_ligne);
                                                        }
                                                   ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 122 "synt.y"
    {strcpy(type_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 123 "synt.y"
    {strcpy(type_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 124 "synt.y"
    {strcpy(type_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 125 "synt.y"
    {strcpy(type_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 126 "synt.y"
    {strcpy(type_temp, (yyvsp[(1) - (1)].str));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 145 "synt.y"
    {  if(declaration((yyvsp[(4) - (8)].str)) != 0)
                                                                      {
                                                                      if(isConstante((yyvsp[(4) - (8)].str))==1)  
                                                                      {
                                                                             if(ConstanteVal((yyvsp[(4) - (8)].str))==1)  
                                                                             {
                                                                                 insererConstanteVal((yyvsp[(4) - (8)].str), const_temp);
                                                                             }    
                                                                             else
                                                                             {
                                                                                printf("ERREUR SEMANTIQUE: constante possede deja une valeur, entite < %s >, ligne < %d >\n", (yyvsp[(4) - (8)].str), nb_ligne);
                                                                             }
                                                                      }
                                                                      
                                                                      }
                                                                      else{
                                                                             printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(4) - (8)].str), nb_ligne);
                                                                      }
                                                                   ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 164 "synt.y"
    { if(declaration((yyvsp[(4) - (11)].str)) == 0)
                                                                                            {
                                                                                                  printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(4) - (11)].str), nb_ligne);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                  tab_temp = atoi((yyvsp[(6) - (11)].str));      
                                                                                                  if(tab_temp >=  tailleMaxTab((yyvsp[(4) - (11)].str)))
                                                                                                  {
                                                                                                      printf("ERREUR SEMANTIQUE: depassement de la taille du tableau, entite < %s >,ligne < %d >\n",(yyvsp[(4) - (11)].str), nb_ligne);
                                                                                                  }
                                                                                            }
                                                                                             
                                                                                           ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 179 "synt.y"
    {if((strcmp(opr_temp, "/")==0) && (strcmp(const_temp, "0")==0) || (strcmp(const_temp, "0.0")==0) || (strcmp(const_temp, "(+0.0)")==0 ) || (strcmp(const_temp, "(-0.0)")==0 ))
                                                        {
                                                              printf("ERREUR SEMANTIQUE: division par zero, ligne < %d >\n", nb_ligne); 
                                                        }
                                                   ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 186 "synt.y"
    {if(declaration((yyvsp[(1) - (1)].str)) == 0)
              {
              printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(1) - (1)].str), nb_ligne);
              }
            ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 194 "synt.y"
    {if(declaration((yyvsp[(4) - (7)].str)) == 0)
                                                               {
                                                                      printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(4) - (7)].str), nb_ligne);
                                                               }
                                                               else
                                                               {
                                                                      if(SigneFormatageInOut((yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].str)) == -1)
                                                                      {
                                                                             printf("ERREUR SEMANTIQUE: non compatibilite entre le type de l'idf et le signe de formatage , entite < %s > , ligne < %d >\n", (yyvsp[(4) - (7)].str), nb_ligne);
                                                                      }
                                                                      else
                                                                      {
                                                                             printf("ERREUR SEMANTIQUE: signe de formatage manquant , entite < %s > , ligne < %d >\n", (yyvsp[(4) - (7)].str), nb_ligne);
                                                                      }

                                                               }
                                                               ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 213 "synt.y"
    { if(declaration((yyvsp[(6) - (9)].str)) == 0)
                                                                            {
                                                                               printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(6) - (9)].str), nb_ligne);
                                                                            }
                                                                            else
                                                                            {
                                                                               if(SigneFormatageInOut((yyvsp[(6) - (9)].str), (yyvsp[(4) - (9)].str)) == -1)
                                                                               {
                                                                                    printf("ERREUR SEMANTIQUE: non compatibilite entre le type de l'idf et le signe de formatage , entite < %s > , ligne < %d >\n", (yyvsp[(6) - (9)].str), nb_ligne);
                                                                               }
                                                                               else
                                                                               {
                                                                                    printf("ERREUR SEMANTIQUE: signe de formatage manquant , entite < %s > , ligne < %d >\n", (yyvsp[(6) - (9)].str), nb_ligne);
                                                                               }
                                                                            }

                                                                             ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 232 "synt.y"
    { if(declaration((yyvsp[(4) - (5)].str)) == 0)
                                          {
                                                 printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(4) - (5)].str), nb_ligne);
                                          }
                                          else
                                          {
                                          if(SigneFormatageInOut((yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str)) == -1)
                                          {
                                          printf("ERREUR SEMANTIQUE: non compatibilite entre le type de l'idf et le signe de formatage , entite < %s > , ligne < %d >\n", (yyvsp[(4) - (5)].str), nb_ligne);
                                          }
                                          else
                                          {
                                          printf("ERREUR SEMANTIQUE: signe de formatage manquant , entite < %s > , ligne < %d >\n", (yyvsp[(4) - (5)].str), nb_ligne);
                                          }
                                          }

                                          ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 274 "synt.y"
    {if(declaration((yyvsp[(1) - (3)].str)) == 0)
                                          {
                                          printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(1) - (3)].str), nb_ligne);
                                          }
                                      ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 280 "synt.y"
    {if(declaration((yyvsp[(1) - (1)].str)) == 0)
                     {
                     printf("ERREUR SEMANTIQUE: non declaration, entite < %s >, ligne < %d >\n", (yyvsp[(1) - (1)].str), nb_ligne);
                     }
              ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 295 "synt.y"
    {strcpy(opr_temp, (yyvsp[(1) - (1)].str));;}
    break;



/* Line 1455 of yacc.c  */
#line 1928 "synt.tab.c"
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



/* Line 1675 of yacc.c  */
#line 312 "synt.y"

main()
{
       yyparse();
       afficher();
}
yywrap() {}
yyerror(char*msg)
{
   printf("erreur syntaxique a la ligne %d sur l'entite %s\n",nb_ligne,yytext);
}

