
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 Free Software
   Foundation, Inc.
   
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


/* First part of user declarations.  */

/* Line 311 of lalr1.cc  */
#line 33 "NscParser.ypp"

  class CNscContext;

/* Line 311 of lalr1.cc  */
#line 40 "NscParser.ypp"

#include "Precomp.h"
#include "Nsc.h"


#pragma warning (disable : 4065 4102 4127 4244 4267)

#ifndef __cplusplus
#error "Parser yacc output must be compiled as C++"
#endif

class CNscPStackEntry;
#define YYSTYPE CNscPStackEntry *

int yylex (YYSTYPE* yylval, CNscContext& context);
int yylex (YYSTYPE* yylval);

YYSTYPE NscBuildIdentifier (YYSTYPE p);
YYSTYPE NscBuildObjectConstant (int nOID);
YYSTYPE NscBuildVectorConstant (YYSTYPE px, YYSTYPE py, YYSTYPE pz);
YYSTYPE NscBuildJsonConstant (const char* raw);
YYSTYPE NscBuildLocationConstant (int nValue);
YYSTYPE NscBuildCall (YYSTYPE pfn, YYSTYPE parglist);
YYSTYPE NscBuildArgExpList (YYSTYPE parglist, YYSTYPE parg);
YYSTYPE NscBuildElementAccess (YYSTYPE pStruct, YYSTYPE pElement);
YYSTYPE NscBuildPlusMinus (YYSTYPE pValue, int fPlus, int fPre);
YYSTYPE NscBuildUnaryOp (int nToken, YYSTYPE pValue);
YYSTYPE NscBuildBinaryOp (int nToken, YYSTYPE plhs, YYSTYPE prhs);
YYSTYPE NscBuildLogicalOp (int nToken, YYSTYPE plhs, YYSTYPE prhs);
YYSTYPE NscBuildConditional (YYSTYPE pSelect, YYSTYPE p1, YYSTYPE p2);
YYSTYPE NscBuildExpression (YYSTYPE pExpression, YYSTYPE pAssignment);
YYSTYPE NscBuildStatement (YYSTYPE pList, YYSTYPE pStatement, YYSTYPE pFence);
YYSTYPE NscBuildStatementFence ();
YYSTYPE NscBuildDeclarationList (YYSTYPE pList, YYSTYPE pDeclaration);
YYSTYPE NscBuildDeclaration (YYSTYPE pType, YYSTYPE pList);
YYSTYPE NscBuildStructDeclaratorList (YYSTYPE pList, YYSTYPE pDeclarator);
YYSTYPE NscBuildStructDeclaration (YYSTYPE pType, YYSTYPE pList);
YYSTYPE NscBuildStructDeclarationList (YYSTYPE pList, YYSTYPE pDeclaration);
YYSTYPE NscBuildStruct (YYSTYPE pId, YYSTYPE pList);
YYSTYPE NscBuildFunctionDef (YYSTYPE pPrototype, YYSTYPE pStatement);
YYSTYPE NscBuildFunctionPrototype (YYSTYPE pPrototype);
YYSTYPE NscBuildFunctionDeclarator (YYSTYPE pType, YYSTYPE pId, YYSTYPE pList);
YYSTYPE NscBuildParameterList (YYSTYPE pList, YYSTYPE pParameter);
YYSTYPE NscBuildParameter (YYSTYPE pType, YYSTYPE pId, YYSTYPE pInit);
YYSTYPE NscBuildTranslation (YYSTYPE pList, YYSTYPE pTranslation);
YYSTYPE NscBuildType (int nType, YYSTYPE pId);
YYSTYPE NscBuild5Block (int nType, YYSTYPE pPrev, int nAddFence, YYSTYPE pInit,
	YYSTYPE pCond, YYSTYPE pInc, YYSTYPE pTrue, YYSTYPE pFalse);
YYSTYPE NscBuildBreakContinue (int nToken);
YYSTYPE NscBuildReturn (YYSTYPE pReturn);
YYSTYPE NscBuildCase (int nToken, YYSTYPE pCase);
YYSTYPE NscBuildBeginDeclaration (YYSTYPE pId);
YYSTYPE NscBuildEndDeclaration (YYSTYPE pId, YYSTYPE pInit);
YYSTYPE NscBuildMakeConstType (YYSTYPE pType);
YYSTYPE NscBuildBlankStatement ();
YYSTYPE NscBuildMarkLine (int nIndex, YYSTYPE pStatement);
void NscBuildSaveLine (int nIndex);
void NscBuildCopyLine (int nDest, int nSource);
bool NscBuildSyntaxError (int nToken, YYSTYPE yylval);


/* Line 311 of lalr1.cc  */
#line 108 "NscParser.cpp"


#include "NscParser.hpp"

/* User implementation prologue.  */


/* Line 317 of lalr1.cc  */
#line 117 "NscParser.cpp"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


/* Line 380 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

namespace yy {

/* Line 380 of lalr1.cc  */
#line 186 "NscParser.cpp"
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  parser::parser (CNscContext& context_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      context (context_yyarg)
  {
  }

  parser::~parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  int
  parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, context);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 2:

/* Line 678 of lalr1.cc  */
#line 130 "NscParser.ypp"
    {
			(yyval) = NscBuildIdentifier ((yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 134 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 138 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 142 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 146 "NscParser.ypp"
    {
			(yyval) = NscBuildObjectConstant (0);
		}
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 150 "NscParser.ypp"
    {
			(yyval) = NscBuildObjectConstant (1);
		}
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 154 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(3) - (2)]); }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 157 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant (NULL, NULL, NULL);
		}
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 161 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant ((yysemantic_stack_[(3) - (2)]), NULL, NULL);
		}
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 165 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant ((yysemantic_stack_[(5) - (2)]), (yysemantic_stack_[(5) - (4)]), NULL);
		}
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 169 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant ((yysemantic_stack_[(7) - (2)]), (yysemantic_stack_[(7) - (4)]), (yysemantic_stack_[(7) - (6)]));
		}
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 173 "NscParser.ypp"
    {
			(yyval) = NscBuildLocationConstant (LOCATION_PRESET_INVALID);
		}
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 177 "NscParser.ypp"
    {
			(yyval) = NscBuildJsonConstant ("null");
		}
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 181 "NscParser.ypp"
    {
			(yyval) = NscBuildJsonConstant ("false");
		}
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 185 "NscParser.ypp"
    {
			(yyval) = NscBuildJsonConstant ("true");
		}
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 189 "NscParser.ypp"
    {
			(yyval) = NscBuildJsonConstant ("{}");
		}
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 193 "NscParser.ypp"
    {
			(yyval) = NscBuildJsonConstant ("[]");
		}
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 197 "NscParser.ypp"
    {
			(yyval) = NscBuildJsonConstant ("\"\"");
		}
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 204 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 208 "NscParser.ypp"
    {
			(yyval) = NscBuildCall ((yysemantic_stack_[(4) - (1)]), (yysemantic_stack_[(4) - (3)]));
		}
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 212 "NscParser.ypp"
    {
			(yyval) = NscBuildCall ((yysemantic_stack_[(3) - (1)]), NULL);
		}
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 216 "NscParser.ypp"
    {
			(yyval) = NscBuildElementAccess ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 220 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (1)]), 1, 0);
		}
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 224 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (1)]), 0, 0);
		}
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 231 "NscParser.ypp"
    {
			(yyval) = NscBuildArgExpList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 235 "NscParser.ypp"
    {
			(yyval) = NscBuildArgExpList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 242 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 246 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (2)]), 1, 1);
		}
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 250 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (2)]), 0, 1);
		}
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 254 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('+', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 258 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('-', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 262 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('~', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 266 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('!', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 273 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 277 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('*', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 281 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('/', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 285 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('%', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 292 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 296 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('+', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 300 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('-', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 307 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 311 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SL, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 315 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SR, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 319 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::USR, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 326 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 47:

/* Line 678 of lalr1.cc  */
#line 330 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('<', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 48:

/* Line 678 of lalr1.cc  */
#line 334 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('>', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 49:

/* Line 678 of lalr1.cc  */
#line 338 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::LTEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 50:

/* Line 678 of lalr1.cc  */
#line 342 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::GTEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 51:

/* Line 678 of lalr1.cc  */
#line 349 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 52:

/* Line 678 of lalr1.cc  */
#line 353 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::EQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 53:

/* Line 678 of lalr1.cc  */
#line 357 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::NOTEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 54:

/* Line 678 of lalr1.cc  */
#line 364 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 55:

/* Line 678 of lalr1.cc  */
#line 368 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('&', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 56:

/* Line 678 of lalr1.cc  */
#line 375 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 57:

/* Line 678 of lalr1.cc  */
#line 379 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('^', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 58:

/* Line 678 of lalr1.cc  */
#line 386 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 59:

/* Line 678 of lalr1.cc  */
#line 390 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('|', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 60:

/* Line 678 of lalr1.cc  */
#line 397 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 61:

/* Line 678 of lalr1.cc  */
#line 401 "NscParser.ypp"
    {
			(yyval) = NscBuildLogicalOp (token::ANDAND, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 62:

/* Line 678 of lalr1.cc  */
#line 408 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 63:

/* Line 678 of lalr1.cc  */
#line 412 "NscParser.ypp"
    {
			(yyval) = NscBuildLogicalOp (token::OROR, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 64:

/* Line 678 of lalr1.cc  */
#line 419 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 65:

/* Line 678 of lalr1.cc  */
#line 423 "NscParser.ypp"
    {
			(yyval) = NscBuildConditional ((yysemantic_stack_[(5) - (1)]), (yysemantic_stack_[(5) - (3)]), (yysemantic_stack_[(5) - (5)]));
		}
    break;

  case 66:

/* Line 678 of lalr1.cc  */
#line 430 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 67:

/* Line 678 of lalr1.cc  */
#line 434 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('=', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 68:

/* Line 678 of lalr1.cc  */
#line 438 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::MULEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 69:

/* Line 678 of lalr1.cc  */
#line 442 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::DIVEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 70:

/* Line 678 of lalr1.cc  */
#line 446 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::MODEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 71:

/* Line 678 of lalr1.cc  */
#line 450 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::ADDEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 72:

/* Line 678 of lalr1.cc  */
#line 454 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SUBEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 73:

/* Line 678 of lalr1.cc  */
#line 458 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SLEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 74:

/* Line 678 of lalr1.cc  */
#line 462 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 75:

/* Line 678 of lalr1.cc  */
#line 466 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::USREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 76:

/* Line 678 of lalr1.cc  */
#line 470 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::ANDEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 77:

/* Line 678 of lalr1.cc  */
#line 474 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::XOREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 78:

/* Line 678 of lalr1.cc  */
#line 478 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::OREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 79:

/* Line 678 of lalr1.cc  */
#line 485 "NscParser.ypp"
    {
			(yyval) = NscBuildExpression (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 80:

/* Line 678 of lalr1.cc  */
#line 492 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 81:

/* Line 678 of lalr1.cc  */
#line 504 "NscParser.ypp"
    { NscBuildSaveLine (1); }
    break;

  case 82:

/* Line 678 of lalr1.cc  */
#line 505 "NscParser.ypp"
    {
			(yyval) = NscBuildMakeConstType ((yysemantic_stack_[(3) - (3)]));
			NscBuildCopyLine (0, 1);
		}
    break;

  case 83:

/* Line 678 of lalr1.cc  */
#line 510 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
			NscBuildSaveLine (0);
		}
    break;

  case 84:

/* Line 678 of lalr1.cc  */
#line 518 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::VOID_TYPE, NULL);
		}
    break;

  case 85:

/* Line 678 of lalr1.cc  */
#line 522 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::INT_TYPE, NULL);
		}
    break;

  case 86:

/* Line 678 of lalr1.cc  */
#line 526 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::FLOAT_TYPE, NULL);
		}
    break;

  case 87:

/* Line 678 of lalr1.cc  */
#line 530 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::OBJECT_TYPE, NULL);
		}
    break;

  case 88:

/* Line 678 of lalr1.cc  */
#line 534 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::STRING_TYPE, NULL);
		}
    break;

  case 89:

/* Line 678 of lalr1.cc  */
#line 538 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::ACTION_TYPE, NULL);
		}
    break;

  case 90:

/* Line 678 of lalr1.cc  */
#line 542 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::VECTOR_TYPE, NULL);
		}
    break;

  case 91:

/* Line 678 of lalr1.cc  */
#line 546 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::STRUCT_TYPE, (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 92:

/* Line 678 of lalr1.cc  */
#line 550 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::ENGINE_TYPE, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 93:

/* Line 678 of lalr1.cc  */
#line 557 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
		}
    break;

  case 94:

/* Line 678 of lalr1.cc  */
#line 570 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 95:

/* Line 678 of lalr1.cc  */
#line 574 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, NULL, NULL));
		}
    break;

  case 96:

/* Line 678 of lalr1.cc  */
#line 582 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 97:

/* Line 678 of lalr1.cc  */
#line 586 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
			(yyval) = NscBuildMarkLine (0, NscBuildBlankStatement ());
		}
    break;

  case 98:

/* Line 678 of lalr1.cc  */
#line 594 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 99:

/* Line 678 of lalr1.cc  */
#line 598 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 100:

/* Line 678 of lalr1.cc  */
#line 602 "NscParser.ypp"
    {
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL));
		}
    break;

  case 101:

/* Line 678 of lalr1.cc  */
#line 606 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 102:

/* Line 678 of lalr1.cc  */
#line 610 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 103:

/* Line 678 of lalr1.cc  */
#line 614 "NscParser.ypp"
    {
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL));
		}
    break;

  case 104:

/* Line 678 of lalr1.cc  */
#line 618 "NscParser.ypp"
    {
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL));
		}
    break;

  case 105:

/* Line 678 of lalr1.cc  */
#line 631 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 106:

/* Line 678 of lalr1.cc  */
#line 637 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 107:

/* Line 678 of lalr1.cc  */
#line 638 "NscParser.ypp"
    {
			(yyval) = NscBuildCase (token::CASE, (yysemantic_stack_[(4) - (3)]));
		}
    break;

  case 108:

/* Line 678 of lalr1.cc  */
#line 641 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 109:

/* Line 678 of lalr1.cc  */
#line 642 "NscParser.ypp"
    {
			(yyval) = NscBuildCase (token::DEFAULT, NULL);
		}
    break;

  case 110:

/* Line 678 of lalr1.cc  */
#line 655 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, NULL, (yysemantic_stack_[(2) - (1)]));
		}
    break;

  case 111:

/* Line 678 of lalr1.cc  */
#line 659 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(3) - (2)]), (yysemantic_stack_[(3) - (1)]));
		}
    break;

  case 112:

/* Line 678 of lalr1.cc  */
#line 666 "NscParser.ypp"
    {
			(yyval) = NscBuildStatementFence ();
		}
    break;

  case 113:

/* Line 678 of lalr1.cc  */
#line 673 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 114:

/* Line 678 of lalr1.cc  */
#line 677 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 115:

/* Line 678 of lalr1.cc  */
#line 689 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 116:

/* Line 678 of lalr1.cc  */
#line 690 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(3) - (2)]), NULL);
		}
    break;

  case 117:

/* Line 678 of lalr1.cc  */
#line 694 "NscParser.ypp"
    {
			(yyval) = NULL;
			if (NscBuildSyntaxError (YYCHAR_NAME, YYLVAL))
				YYABORT;
			while (YYCHAR_NAME != EOF && YYCHAR_NAME != ';' && YYCHAR_NAME != '{' && YYCHAR_NAME != '}')
			{
				if (YYLVAL != NULL)
					YYLVAL;
				YYLA_EMPTY;
				YYLA_CHARNAME_LEX;
			}
			if (YYCHAR_NAME == ';')
				YYLA_EMPTY;
		}
    break;

  case 118:

/* Line 678 of lalr1.cc  */
#line 718 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (IF, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 119:

/* Line 678 of lalr1.cc  */
#line 722 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (IF, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 120:

/* Line 678 of lalr1.cc  */
#line 726 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (SWITCH, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 121:

/* Line 678 of lalr1.cc  */
#line 733 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
			(yyval) = NscBuild5Block (IF, (yysemantic_stack_[(3) - (1)]), 1, NULL, NULL, NULL, (yysemantic_stack_[(3) - (2)]), NULL);
		}
    break;

  case 122:

/* Line 678 of lalr1.cc  */
#line 740 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 123:

/* Line 678 of lalr1.cc  */
#line 741 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (IF, NULL, 1, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 124:

/* Line 678 of lalr1.cc  */
#line 747 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 125:

/* Line 678 of lalr1.cc  */
#line 748 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (SWITCH, NULL, 1, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 126:

/* Line 678 of lalr1.cc  */
#line 761 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (WHILE, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 127:

/* Line 678 of lalr1.cc  */
#line 764 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 128:

/* Line 678 of lalr1.cc  */
#line 765 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (DO, (yysemantic_stack_[(8) - (1)]), 0, NULL, (yysemantic_stack_[(8) - (6)]), NULL, (yysemantic_stack_[(8) - (2)]), NULL);
		}
    break;

  case 129:

/* Line 678 of lalr1.cc  */
#line 769 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 130:

/* Line 678 of lalr1.cc  */
#line 776 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, NULL, NULL, NULL, NULL);
		}
    break;

  case 131:

/* Line 678 of lalr1.cc  */
#line 780 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(5) - (2)]), NULL, NULL, NULL, NULL);
		}
    break;

  case 132:

/* Line 678 of lalr1.cc  */
#line 784 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, (yysemantic_stack_[(5) - (3)]), NULL, NULL, NULL);
		}
    break;

  case 133:

/* Line 678 of lalr1.cc  */
#line 788 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(6) - (2)]), (yysemantic_stack_[(6) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 134:

/* Line 678 of lalr1.cc  */
#line 792 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL);
		}
    break;

  case 135:

/* Line 678 of lalr1.cc  */
#line 796 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(6) - (2)]), NULL, (yysemantic_stack_[(6) - (5)]), NULL, NULL);
		}
    break;

  case 136:

/* Line 678 of lalr1.cc  */
#line 800 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, (yysemantic_stack_[(6) - (3)]), (yysemantic_stack_[(6) - (5)]), NULL, NULL);
		}
    break;

  case 137:

/* Line 678 of lalr1.cc  */
#line 804 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(7) - (2)]), (yysemantic_stack_[(7) - (4)]), (yysemantic_stack_[(7) - (6)]), NULL, NULL);
		}
    break;

  case 138:

/* Line 678 of lalr1.cc  */
#line 811 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
		}
    break;

  case 139:

/* Line 678 of lalr1.cc  */
#line 817 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 140:

/* Line 678 of lalr1.cc  */
#line 818 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (WHILE, NULL, 1, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 141:

/* Line 678 of lalr1.cc  */
#line 825 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (DO, NULL, 1, NULL, NULL, NULL, NULL, NULL);
		}
    break;

  case 142:

/* Line 678 of lalr1.cc  */
#line 837 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 143:

/* Line 678 of lalr1.cc  */
#line 838 "NscParser.ypp"
    {
			(yyval) = NscBuildBreakContinue (CONTINUE);
		}
    break;

  case 144:

/* Line 678 of lalr1.cc  */
#line 841 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 145:

/* Line 678 of lalr1.cc  */
#line 842 "NscParser.ypp"
    {
			(yyval) = NscBuildBreakContinue (BREAK);
		}
    break;

  case 146:

/* Line 678 of lalr1.cc  */
#line 846 "NscParser.ypp"
    {
			(yyval) = NscBuildReturn (NULL);
		}
    break;

  case 147:

/* Line 678 of lalr1.cc  */
#line 850 "NscParser.ypp"
    {
			(yyval) = NscBuildReturn ((yysemantic_stack_[(3) - (2)]));
		}
    break;

  case 148:

/* Line 678 of lalr1.cc  */
#line 857 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
		}
    break;

  case 149:

/* Line 678 of lalr1.cc  */
#line 870 "NscParser.ypp"
    {
			(yyval) = NscBuildDeclaration ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (2)]));
		}
    break;

  case 150:

/* Line 678 of lalr1.cc  */
#line 877 "NscParser.ypp"
    {
			(yyval) = NscBuildDeclarationList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 151:

/* Line 678 of lalr1.cc  */
#line 881 "NscParser.ypp"
    {
			(yyval) = NscBuildDeclarationList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 152:

/* Line 678 of lalr1.cc  */
#line 888 "NscParser.ypp"
    {
			(yyval) = NscBuildEndDeclaration ((yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 153:

/* Line 678 of lalr1.cc  */
#line 892 "NscParser.ypp"
    {
			(yyval) = NscBuildEndDeclaration ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 154:

/* Line 678 of lalr1.cc  */
#line 899 "NscParser.ypp"
    {
			(yyval) = NscBuildBeginDeclaration ((yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 155:

/* Line 678 of lalr1.cc  */
#line 912 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionDef ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 156:

/* Line 678 of lalr1.cc  */
#line 919 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionPrototype ((yysemantic_stack_[(2) - (1)]));
		}
    break;

  case 157:

/* Line 678 of lalr1.cc  */
#line 926 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionDeclarator ((yysemantic_stack_[(5) - (1)]), (yysemantic_stack_[(5) - (2)]), (yysemantic_stack_[(5) - (4)]));
		}
    break;

  case 158:

/* Line 678 of lalr1.cc  */
#line 930 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionDeclarator ((yysemantic_stack_[(4) - (1)]), (yysemantic_stack_[(4) - (2)]), NULL);
		}
    break;

  case 161:

/* Line 678 of lalr1.cc  */
#line 942 "NscParser.ypp"
    {
			(yyval) = NscBuildParameterList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 162:

/* Line 678 of lalr1.cc  */
#line 946 "NscParser.ypp"
    {
			(yyval) = NscBuildParameterList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 163:

/* Line 678 of lalr1.cc  */
#line 953 "NscParser.ypp"
    {
			(yyval) = NscBuildParameter ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 164:

/* Line 678 of lalr1.cc  */
#line 957 "NscParser.ypp"
    {
			(yyval) = NscBuildParameter ((yysemantic_stack_[(4) - (1)]), (yysemantic_stack_[(4) - (2)]), (yysemantic_stack_[(4) - (4)]));
		}
    break;

  case 165:

/* Line 678 of lalr1.cc  */
#line 970 "NscParser.ypp"
    {
			(yyval) = NscBuildStruct ((yysemantic_stack_[(6) - (2)]), (yysemantic_stack_[(6) - (4)]));
		}
    break;

  case 166:

/* Line 678 of lalr1.cc  */
#line 977 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclarationList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 167:

/* Line 678 of lalr1.cc  */
#line 981 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclarationList ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 168:

/* Line 678 of lalr1.cc  */
#line 988 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclaration ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (2)]));
		}
    break;

  case 169:

/* Line 678 of lalr1.cc  */
#line 995 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclaratorList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 170:

/* Line 678 of lalr1.cc  */
#line 999 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclaratorList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 172:

/* Line 678 of lalr1.cc  */
#line 1013 "NscParser.ypp"
    {
			(yyval) = NscBuildTranslation (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 173:

/* Line 678 of lalr1.cc  */
#line 1017 "NscParser.ypp"
    {
			(yyval) = NscBuildTranslation ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 174:

/* Line 678 of lalr1.cc  */
#line 1021 "NscParser.ypp"
    {
			(yyval) = NULL;
			if (NscBuildSyntaxError (YYCHAR_NAME, YYLVAL))
				YYABORT;
			while (YYCHAR_NAME != EOF && YYCHAR_NAME != ';' && YYCHAR_NAME != '{' && YYCHAR_NAME != '}')
			{
				if (YYLVAL != NULL)
					YYLVAL;
				YYLA_EMPTY;
				YYLA_CHARNAME_LEX;
			}
			YYLA_EMPTY;
		}
    break;



/* Line 678 of lalr1.cc  */
#line 2012 "NscParser.cpp"
	default:
          break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
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
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (int yystate)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char parser::yypact_ninf_ = -123;
  const short int
  parser::yypact_[] =
  {
        37,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,    78,  -123,    86,  -123,  -123,  -123,   -60,  -123,
     857,  -123,   261,   -49,   -55,  -123,    39,    34,  -123,  -123,
    -123,   207,  -123,  -123,  -123,   146,   125,   149,  -123,   817,
     466,  -123,  -123,  -123,  -123,  -123,  -123,   104,   105,  -123,
    -123,   111,  -123,  -123,   149,  -123,  -123,  -123,  -123,  -123,
     275,  -123,   817,  -123,   343,   343,   411,  -123,   411,   477,
     411,   411,  -123,   520,  -123,  -123,  -123,   168,   112,   110,
    -123,  -123,  -123,   115,  -123,  -123,  -123,   817,   817,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   817,    -3,
     817,   817,   817,   817,  -123,    -4,    35,    14,   -14,    96,
     -10,    43,   103,   106,   102,   154,   -21,  -123,  -123,   177,
      -1,  -123,   107,   817,   113,   108,  -123,  -123,   123,  -123,
    -123,  -123,  -123,   114,  -123,  -123,  -123,   138,  -123,  -123,
     563,   116,  -123,   134,  -123,   117,   119,  -123,   466,   162,
    -123,  -123,   131,    24,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,   189,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,  -123,    -5,   122,  -123,  -123,  -123,
    -123,   121,  -123,  -123,   817,   817,   817,  -123,  -123,   649,
     124,   606,  -123,  -123,   817,  -123,  -123,   -51,  -123,  -123,
    -123,   190,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,    14,    14,
     -14,   -14,   -14,    96,    96,    96,    96,   -10,   -10,    43,
     103,   106,   102,   154,   127,   200,  -123,  -123,  -123,   166,
     172,   173,  -123,   192,   691,   733,   129,   208,  -123,  -123,
     817,    59,   817,  -123,  -123,  -123,  -123,  -123,  -123,   209,
    -123,   210,   775,   817,  -123,  -123,   266,  -123,  -123,  -123,
    -123,   217,   222,   221,  -123,   204,  -123,  -123
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,   174,    86,    85,    87,    88,    84,    93,    90,    92,
      89,    81,     0,    83,     0,   177,   175,   176,     0,   178,
       0,   172,     0,   154,     0,   150,   152,    91,   156,   112,
     155,     0,     1,   173,    82,     0,     0,     0,   149,     0,
       0,   117,   144,   106,   142,   108,   141,     0,     0,   148,
     124,     0,    95,   110,     0,   113,    94,    98,   105,    99,
       0,   100,     0,   101,     0,     0,     0,   102,     0,     0,
       0,     0,   103,     0,   104,    91,   158,     0,     0,   159,
     161,   154,   151,     2,     3,     4,     5,     0,     0,     6,
       7,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,    20,    28,    35,    39,    42,    46,
      51,    54,    56,    58,    60,    62,    64,    66,   153,     0,
       0,   166,     0,     0,     0,     0,   138,   122,     0,   139,
     111,   114,    79,     0,    97,   119,    96,   118,   120,   129,
       0,     0,   126,     0,   146,     0,   163,   157,   160,     0,
      29,    30,     0,     0,     9,    31,    32,    33,    34,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,     0,     0,   167,   145,    35,
      80,     0,   143,   109,     0,     0,     0,   116,   121,     0,
       0,     0,   127,   147,     0,   162,    22,     0,    26,     8,
      10,     0,    23,    71,    72,    68,    69,    70,    77,    76,
      78,    73,    74,    75,    67,    36,    37,    38,    40,    41,
      43,    44,    45,    49,    50,    47,    48,    52,    53,    55,
      57,    59,    61,    63,     0,     0,   168,   165,   107,     0,
       0,     0,   130,     0,     0,     0,     0,     0,   164,    21,
       0,     0,     0,   170,   123,   125,   140,   134,   132,     0,
     131,     0,     0,     0,    27,    11,     0,    65,   136,   135,
     133,     0,     0,     0,   137,     0,    12,   128
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  parser::yypgoto_[] =
  {
      -123,  -123,  -123,  -123,   -84,   -38,   -43,  -106,   -44,    97,
     148,   109,    95,   128,  -123,  -122,   -39,   -58,  -123,    21,
    -123,   278,     6,    49,   236,    80,  -123,  -123,  -123,  -123,
     317,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,     7,  -123,   301,  -123,  -123,  -123,  -123,  -123,
    -123,   191,  -123,  -123,   225,  -123,  -123,   330
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  parser::yydefgoto_[] =
  {
        -1,   104,   105,   217,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   132,   133,   201,    54,
      22,    13,    35,    55,   135,    56,    57,    58,   123,   125,
      59,    31,    60,    61,    62,    63,    64,    65,   204,    66,
     128,    67,   267,    68,    69,    70,   206,    71,    72,   124,
     122,    73,    74,    24,    25,    26,    16,    17,    18,    78,
      79,    80,    19,   120,   121,   195,    20,    21
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const short int parser::yytable_ninf_ = -172;
  const short int
  parser::yytable_[] =
  {
       118,   200,   153,   150,   151,   192,    14,    15,    37,   269,
      36,   141,   270,   182,   183,   145,   155,   156,   157,   158,
      28,    12,    29,   159,   160,    38,    14,    15,     2,     3,
       4,     5,     6,     7,     8,     9,    10,  -171,     1,   199,
     152,    12,   162,   163,   164,   165,   166,   167,   168,   169,
      11,   177,   178,   170,   171,   172,   193,    77,   255,   154,
     161,   119,   184,   185,   186,   187,     2,     3,     4,     5,
       6,     7,     8,     9,    10,   256,   243,   244,   245,   246,
     196,    23,   210,   174,   175,   176,   220,   221,    11,    27,
     235,   236,   237,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   131,
     218,   179,   180,   181,   173,   138,    40,   139,    39,   142,
     143,   285,   286,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   254,   240,   241,   242,   238,
     239,   119,   247,   248,   136,   136,   259,   260,   261,    75,
     287,   263,    81,   266,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   126,   127,    83,    84,    85,    86,    77,
     129,   146,   147,   148,   149,   268,    11,   188,   190,   191,
     194,   189,   205,   208,   212,    76,   203,   198,   199,    87,
      88,   219,   222,   202,   207,   271,   211,   213,   214,   258,
      89,    90,   257,   273,   264,   272,   279,   281,    41,   282,
    -115,  -115,  -115,  -115,    91,    92,    93,    94,    95,    96,
      97,    98,   216,    99,   291,   292,   274,   100,   101,   102,
     103,   284,   275,   276,  -115,  -115,     2,     3,     4,     5,
       6,     7,     8,     9,    10,  -115,  -115,    42,    43,    44,
      45,    46,   277,    47,    48,    49,    50,    51,    11,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,   283,  -115,   288,
     289,   293,  -115,  -115,  -115,  -115,    41,   294,  -115,  -115,
    -115,  -115,   295,   296,   297,   249,   252,    52,    53,    29,
       2,     3,     4,     5,     6,     7,     8,     9,    10,   251,
      34,   137,  -115,  -115,     2,     3,     4,     5,     6,     7,
       8,     9,    10,  -115,  -115,    42,    43,    44,    45,    46,
     253,    47,    48,    49,    50,    51,    11,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,    30,  -115,   250,    82,   215,
    -115,  -115,  -115,  -115,    41,   197,  -115,  -115,  -115,  -115,
      33,     0,     0,     0,     0,    52,   130,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -115,  -115,     2,     3,     4,     5,     6,     7,     8,     9,
      10,  -115,  -115,    42,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    11,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,     0,  -115,     0,     0,     0,  -115,  -115,
    -115,  -115,    41,     0,  -115,  -115,  -115,  -115,     0,     0,
       0,     0,     0,   134,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -115,  -115,
       2,     3,     4,     5,     6,     7,     8,     9,    10,  -115,
    -115,    42,    43,    44,    45,    46,     0,    47,    48,    49,
      50,    51,    11,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,     0,  -115,     0,     0,     0,  -115,  -115,  -115,  -115,
      83,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    29,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    11,     0,     0,
       0,     0,     0,    83,    84,    85,    86,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,     0,    99,     0,
       0,     0,   100,   101,   102,   103,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,   140,    89,    90,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
       0,     0,    91,    92,    93,    94,    95,    96,    97,    98,
       0,    99,     0,     0,     0,   100,   101,   102,   103,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
     144,    89,    90,     0,     0,     0,     0,     0,     0,    83,
      84,    85,    86,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,     0,    99,     0,     0,     0,   100,   101,
     102,   103,     0,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,   209,    89,    90,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    91,    92,
      93,    94,    95,    96,    97,    98,     0,    99,     0,     0,
       0,   100,   101,   102,   103,     0,    87,    88,     0,     0,
       0,     0,     0,     0,     0,     0,   265,    89,    90,     0,
       0,     0,     0,     0,    83,    84,    85,    86,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,   262,
      99,     0,     0,     0,   100,   101,   102,   103,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      90,     0,     0,     0,     0,     0,    83,    84,    85,    86,
       0,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,   278,    99,     0,     0,     0,   100,   101,   102,   103,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,     0,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,   280,    99,     0,     0,     0,   100,   101,
     102,   103,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,    90,     0,     0,     0,     0,     0,
      83,    84,    85,    86,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,   290,    99,     0,     0,     0,
     100,   101,   102,   103,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,     0,    99,     0,
       0,     0,   100,   101,   102,   103,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11
  };

  /* YYCHECK.  */
  const short int
  parser::yycheck_[] =
  {
        39,   123,     5,    87,    88,    26,     0,     0,    63,    60,
      59,    69,    63,    23,    24,    73,   100,   101,   102,   103,
      80,     0,    82,    27,    28,    80,    20,    20,    29,    30,
      31,    32,    33,    34,    35,    36,    37,     0,     1,   123,
      98,    20,     7,     8,     9,    10,    11,    12,    13,    14,
      51,    65,    66,    18,    19,    20,    77,    36,    63,    62,
      64,    40,    72,    73,    21,    22,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    80,   182,   183,   184,   185,
      81,     3,   140,    69,    70,    71,    62,    63,    51,     3,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    60,
     149,    15,    16,    17,    79,    66,    82,    68,    79,    70,
      71,    62,    63,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   193,   179,   180,   181,   177,
     178,   120,   186,   187,    64,    65,   204,   205,   206,     3,
     272,   209,     3,   211,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    59,    59,     3,     4,     5,     6,   148,
      59,     3,    60,    63,    59,   214,    51,    74,    76,    25,
       3,    75,    59,    45,    50,    60,    78,    80,   272,    27,
      28,    60,     3,    80,    80,     5,    80,    80,    79,    78,
      38,    39,    80,     3,    80,    78,   264,   265,     1,    80,
       3,     4,     5,     6,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,   282,   283,    60,    65,    66,    67,
      68,   270,    60,    60,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    60,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    59,    61,    60,
      60,     5,    65,    66,    67,    68,     1,    60,     3,     4,
       5,     6,    60,    62,    80,   188,   191,    80,    81,    82,
      29,    30,    31,    32,    33,    34,    35,    36,    37,   190,
      22,    65,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     192,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    18,    61,   189,    37,   148,
      65,    66,    67,    68,     1,   120,     3,     4,     5,     6,
      20,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,
      67,    68,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    82,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    51,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    66,    67,    68,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    38,    39,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    65,    66,
      67,    68,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,     0,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      -1,    -1,    65,    66,    67,    68,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    51,   102,   104,   105,   135,   139,   140,   141,   145,
     149,   150,   103,     3,   136,   137,   138,     3,    80,    82,
     113,   114,     0,   150,   104,   105,    59,    63,    80,    79,
      82,     1,    40,    41,    42,    43,    44,    46,    47,    48,
      49,    50,    80,    81,   102,   106,   108,   109,   110,   113,
     115,   116,   117,   118,   119,   120,   122,   124,   126,   127,
     128,   130,   131,   134,   135,     3,    60,   102,   142,   143,
     144,     3,   137,     3,     4,     5,     6,    27,    28,    38,
      39,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      65,    66,    67,    68,    84,    85,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   102,
     146,   147,   133,   111,   132,   112,    59,    59,   123,    59,
      81,   106,    99,   100,    80,   107,   108,   107,   106,   106,
      80,   100,   106,   106,    80,   100,     3,    60,    63,    59,
      87,    87,   100,     5,    62,    87,    87,    87,    87,    27,
      28,    64,     7,     8,     9,    10,    11,    12,    13,    14,
      18,    19,    20,    79,    69,    70,    71,    65,    66,    15,
      16,    17,    23,    24,    72,    73,    21,    22,    74,    75,
      76,    25,    26,    77,     3,   148,    81,   147,    80,    87,
      98,   101,    80,    78,   121,    59,   129,    80,    45,    80,
     100,    80,    50,    80,    79,   144,    60,    86,    99,    60,
      62,    63,     3,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    87,    87,    87,    88,    88,
      89,    89,    89,    90,    90,    90,    90,    91,    91,    92,
      93,    94,    95,    96,   100,    63,    80,    80,    78,   100,
     100,   100,    60,   100,    80,    80,   100,   125,    99,    60,
      63,     5,    78,     3,    60,    60,    60,    60,    60,   100,
      60,   100,    80,    59,    99,    62,    63,    98,    60,    60,
      60,   100,   100,     5,    60,    60,    62,    80
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    40,
      41,    91,    93,    44,    46,    43,    45,   126,    33,    42,
      47,    37,    60,    62,    38,    94,   124,    63,    58,    61,
      59,   125,   123
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    85,    85,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     101,   103,   102,   102,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   109,   111,   110,   112,   110,
     113,   113,   114,   115,   115,   117,   116,   116,   118,   118,
     118,   119,   121,   120,   123,   122,   124,   125,   124,   124,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   129,
     128,   130,   132,   131,   133,   131,   131,   131,   134,   135,
     136,   136,   137,   137,   138,   139,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   146,   146,   147,   148,
     148,   149,   149,   149,   149,   150,   150,   150,   150
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     5,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     2,     2,     1,     3,     1,     2,
       2,     2,     2,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     3,
       2,     3,     1,     1,     2,     0,     3,     1,     2,     2,
       2,     3,     0,     5,     0,     5,     2,     0,     8,     2,
       4,     5,     5,     6,     5,     6,     6,     7,     2,     0,
       5,     1,     0,     3,     0,     3,     2,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     5,     4,     1,
       2,     1,     3,     2,     4,     6,     1,     2,     3,     1,
       3,     0,     1,     2,     1,     1,     1,     1,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONST",
  "FLOAT_CONST", "STRING_CONST", "ADDEQ", "SUBEQ", "MULEQ", "DIVEQ",
  "MODEQ", "XOREQ", "ANDEQ", "OREQ", "SL", "SR", "USR", "SLEQ", "SREQ",
  "USREQ", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR", "PLUSPLUS",
  "MINUSMINUS", "FLOAT_TYPE", "INT_TYPE", "OBJECT_TYPE", "STRING_TYPE",
  "VOID_TYPE", "STRUCT_TYPE", "VECTOR_TYPE", "ENGINE_TYPE", "ACTION_TYPE",
  "OBJECT_SELF_CONST", "OBJECT_INVALID_CONST", "BREAK", "CASE", "CONTINUE",
  "DEFAULT", "DO", "ELSE", "FOR", "IF", "RETURN", "SWITCH", "WHILE",
  "NWCONST", "LOCATION_INVALID_CONST", "JSON_NULL_CONST",
  "JSON_FALSE_CONST", "JSON_TRUE_CONST", "JSON_OBJECT_CONST",
  "JSON_ARRAY_CONST", "JSON_STRING_CONST", "'('", "')'", "'['", "']'",
  "','", "'.'", "'+'", "'-'", "'~'", "'!'", "'*'", "'/'", "'%'", "'<'",
  "'>'", "'&'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'}'", "'{'",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", "qualified_type_specifier", "$@1",
  "type_specifier", "struct_type_start", "statement",
  "statement_blank_error", "non_blank_statement", "labeled_statement",
  "case_statement", "$@2", "$@3", "compound_statement",
  "compound_statement_start", "statement_list", "expression_statement",
  "$@4", "selection_statement", "if_else_start", "if_start", "$@5",
  "switch_start", "$@6", "iteration_statement", "$@7", "for_start",
  "for_start_start", "while_start", "$@8", "do_start", "jump_statement",
  "$@9", "$@10", "return_start", "declaration", "init_declarator_list",
  "init_declarator", "init_declarator_identifier", "function_definition",
  "function_prototype", "function_declarator",
  "function_parameter_type_list", "function_parameter_list",
  "function_parameter_declaration", "struct_definition",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "translation_unit", "external_declaration", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
       149,     0,    -1,     3,    -1,     4,    -1,     5,    -1,     6,
      -1,    38,    -1,    39,    -1,    59,   100,    60,    -1,    61,
      62,    -1,    61,     5,    62,    -1,    61,     5,    63,     5,
      62,    -1,    61,     5,    63,     5,    63,     5,    62,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    84,    -1,     3,    59,    86,    60,
      -1,     3,    59,    60,    -1,    85,    64,     3,    -1,    85,
      27,    -1,    85,    28,    -1,    99,    -1,    86,    63,    99,
      -1,    85,    -1,    27,    87,    -1,    28,    87,    -1,    65,
      87,    -1,    66,    87,    -1,    67,    87,    -1,    68,    87,
      -1,    87,    -1,    88,    69,    87,    -1,    88,    70,    87,
      -1,    88,    71,    87,    -1,    88,    -1,    89,    65,    88,
      -1,    89,    66,    88,    -1,    89,    -1,    90,    15,    89,
      -1,    90,    16,    89,    -1,    90,    17,    89,    -1,    90,
      -1,    91,    72,    90,    -1,    91,    73,    90,    -1,    91,
      23,    90,    -1,    91,    24,    90,    -1,    91,    -1,    92,
      21,    91,    -1,    92,    22,    91,    -1,    92,    -1,    93,
      74,    92,    -1,    93,    -1,    94,    75,    93,    -1,    94,
      -1,    95,    76,    94,    -1,    95,    -1,    96,    25,    95,
      -1,    96,    -1,    97,    26,    96,    -1,    97,    -1,    97,
      77,   100,    78,    98,    -1,    98,    -1,    87,    79,    99,
      -1,    87,     9,    99,    -1,    87,    10,    99,    -1,    87,
      11,    99,    -1,    87,     7,    99,    -1,    87,     8,    99,
      -1,    87,    18,    99,    -1,    87,    19,    99,    -1,    87,
      20,    99,    -1,    87,    13,    99,    -1,    87,    12,    99,
      -1,    87,    14,    99,    -1,    99,    -1,    98,    -1,    -1,
      51,   103,   104,    -1,   104,    -1,    33,    -1,    30,    -1,
      29,    -1,    31,    -1,    32,    -1,    37,    -1,    35,    -1,
     105,     3,    -1,    36,    -1,    34,    -1,   108,    -1,    80,
      -1,   108,    -1,    80,    -1,   109,    -1,   113,    -1,   116,
      -1,   118,    -1,   124,    -1,   131,    -1,   135,    -1,   110,
      -1,    -1,    41,   111,   101,    78,    -1,    -1,    43,   112,
      78,    -1,   114,    81,    -1,   114,   115,    81,    -1,    82,
      -1,   106,    -1,   115,   106,    -1,    -1,   117,   100,    80,
      -1,     1,    -1,   120,   107,    -1,   119,   107,    -1,   122,
     106,    -1,   120,   107,    45,    -1,    -1,    47,    59,   121,
     100,    60,    -1,    -1,    49,   123,    59,   100,    60,    -1,
     128,   106,    -1,    -1,   130,   106,    50,   125,    59,   100,
      60,    80,    -1,   126,   106,    -1,   127,    80,    80,    60,
      -1,   127,   100,    80,    80,    60,    -1,   127,    80,   100,
      80,    60,    -1,   127,   100,    80,   100,    80,    60,    -1,
     127,    80,    80,   100,    60,    -1,   127,   100,    80,    80,
     100,    60,    -1,   127,    80,   100,    80,   100,    60,    -1,
     127,   100,    80,   100,    80,   100,    60,    -1,    46,    59,
      -1,    -1,    50,    59,   129,   100,    60,    -1,    44,    -1,
      -1,    42,   132,    80,    -1,    -1,    40,   133,    80,    -1,
     134,    80,    -1,   134,   100,    80,    -1,    48,    -1,   102,
     136,    80,    -1,   137,    -1,   136,    63,   137,    -1,   138,
      -1,   138,    79,    99,    -1,     3,    -1,   141,   113,    -1,
     141,    80,    -1,   102,     3,    59,   142,    60,    -1,   102,
       3,    59,    60,    -1,   143,    -1,   143,    63,    -1,   144,
      -1,   143,    63,   144,    -1,   102,     3,    -1,   102,     3,
      79,    99,    -1,   105,     3,    82,   146,    81,    80,    -1,
     147,    -1,   146,   147,    -1,   102,   148,    80,    -1,     3,
      -1,   148,    63,     3,    -1,    -1,   150,    -1,   149,   150,
      -1,     1,    -1,   139,    -1,   140,    -1,   135,    -1,   145,
      -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      22,    26,    32,    40,    42,    44,    46,    48,    50,    52,
      54,    56,    61,    65,    69,    72,    75,    77,    81,    83,
      86,    89,    92,    95,    98,   101,   103,   107,   111,   115,
     117,   121,   125,   127,   131,   135,   139,   141,   145,   149,
     153,   157,   159,   163,   167,   169,   173,   175,   179,   181,
     185,   187,   191,   193,   197,   199,   205,   207,   211,   215,
     219,   223,   227,   231,   235,   239,   243,   247,   251,   255,
     257,   259,   260,   264,   266,   268,   270,   272,   274,   276,
     278,   280,   283,   285,   287,   289,   291,   293,   295,   297,
     299,   301,   303,   305,   307,   309,   311,   312,   317,   318,
     322,   325,   329,   331,   333,   336,   337,   341,   343,   346,
     349,   352,   356,   357,   363,   364,   370,   373,   374,   383,
     386,   391,   397,   403,   410,   416,   423,   430,   438,   441,
     442,   448,   450,   451,   455,   456,   460,   463,   467,   469,
     473,   475,   479,   481,   485,   487,   490,   493,   499,   504,
     506,   509,   511,   515,   518,   523,   530,   532,   535,   539,
     541,   545,   546,   548,   551,   553,   555,   557,   559
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  parser::yyrline_[] =
  {
         0,   129,   129,   133,   137,   141,   145,   149,   153,   156,
     160,   164,   168,   172,   176,   180,   184,   188,   192,   196,
     203,   207,   211,   215,   219,   223,   230,   234,   241,   245,
     249,   253,   257,   261,   265,   272,   276,   280,   284,   291,
     295,   299,   306,   310,   314,   318,   325,   329,   333,   337,
     341,   348,   352,   356,   363,   367,   374,   378,   385,   389,
     396,   400,   407,   411,   418,   422,   429,   433,   437,   441,
     445,   449,   453,   457,   461,   465,   469,   473,   477,   484,
     491,   504,   504,   509,   517,   521,   525,   529,   533,   537,
     541,   545,   549,   556,   569,   573,   581,   585,   593,   597,
     601,   605,   609,   613,   617,   630,   637,   637,   641,   641,
     654,   658,   665,   672,   676,   689,   689,   693,   717,   721,
     725,   732,   740,   740,   747,   747,   760,   764,   764,   768,
     775,   779,   783,   787,   791,   795,   799,   803,   810,   817,
     817,   824,   837,   837,   841,   841,   845,   849,   856,   869,
     876,   880,   887,   891,   898,   911,   918,   925,   929,   936,
     937,   941,   945,   952,   956,   969,   976,   980,   987,   994,
     998,  1010,  1012,  1016,  1020,  1037,  1038,  1039,  1040
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    71,    74,     2,
      59,    60,    69,    65,    63,    66,    64,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    80,
      72,    79,    73,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    76,    81,    67,     2,     2,     2,
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
      55,    56,    57,    58
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 908;
  const int parser::yynnts_ = 68;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 32;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 83;

  const unsigned int parser::yyuser_token_number_max_ = 313;
  const parser::token_number_type parser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} // yy

/* Line 1054 of lalr1.cc  */
#line 2869 "NscParser.cpp"


/* Line 1056 of lalr1.cc  */
#line 1043 "NscParser.ypp"


