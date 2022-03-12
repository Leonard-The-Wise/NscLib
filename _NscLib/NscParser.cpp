
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
#line 60 "NscParser.ypp"

  class CNscContext;

/* Line 311 of lalr1.cc  */
#line 67 "NscParser.ypp"

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
#line 106 "NscParser.cpp"


#include "NscParser.hpp"

/* User implementation prologue.  */


/* Line 317 of lalr1.cc  */
#line 115 "NscParser.cpp"

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
#line 184 "NscParser.cpp"
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
#line 151 "NscParser.ypp"
    {
			(yyval) = NscBuildIdentifier ((yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 3:

/* Line 678 of lalr1.cc  */
#line 155 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 4:

/* Line 678 of lalr1.cc  */
#line 159 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 5:

/* Line 678 of lalr1.cc  */
#line 163 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 6:

/* Line 678 of lalr1.cc  */
#line 167 "NscParser.ypp"
    {
			(yyval) = NscBuildObjectConstant (0);
		}
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 171 "NscParser.ypp"
    {
			(yyval) = NscBuildObjectConstant (1);
		}
    break;

  case 8:

/* Line 678 of lalr1.cc  */
#line 175 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(3) - (2)]); }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 178 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant (NULL, NULL, NULL);
		}
    break;

  case 10:

/* Line 678 of lalr1.cc  */
#line 182 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant ((yysemantic_stack_[(3) - (2)]), NULL, NULL);
		}
    break;

  case 11:

/* Line 678 of lalr1.cc  */
#line 186 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant ((yysemantic_stack_[(5) - (2)]), (yysemantic_stack_[(5) - (4)]), NULL);
		}
    break;

  case 12:

/* Line 678 of lalr1.cc  */
#line 190 "NscParser.ypp"
    {
			(yyval) = NscBuildVectorConstant ((yysemantic_stack_[(7) - (2)]), (yysemantic_stack_[(7) - (4)]), (yysemantic_stack_[(7) - (6)]));
		}
    break;

  case 13:

/* Line 678 of lalr1.cc  */
#line 197 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 201 "NscParser.ypp"
    {
			(yyval) = NscBuildCall ((yysemantic_stack_[(4) - (1)]), (yysemantic_stack_[(4) - (3)]));
		}
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 205 "NscParser.ypp"
    {
			(yyval) = NscBuildCall ((yysemantic_stack_[(3) - (1)]), NULL);
		}
    break;

  case 16:

/* Line 678 of lalr1.cc  */
#line 209 "NscParser.ypp"
    {
			(yyval) = NscBuildElementAccess ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 17:

/* Line 678 of lalr1.cc  */
#line 213 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (1)]), 1, 0);
		}
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 217 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (1)]), 0, 0);
		}
    break;

  case 19:

/* Line 678 of lalr1.cc  */
#line 224 "NscParser.ypp"
    {
			(yyval) = NscBuildArgExpList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 20:

/* Line 678 of lalr1.cc  */
#line 228 "NscParser.ypp"
    {
			(yyval) = NscBuildArgExpList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 21:

/* Line 678 of lalr1.cc  */
#line 235 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 22:

/* Line 678 of lalr1.cc  */
#line 239 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (2)]), 1, 1);
		}
    break;

  case 23:

/* Line 678 of lalr1.cc  */
#line 243 "NscParser.ypp"
    {
			(yyval) = NscBuildPlusMinus ((yysemantic_stack_[(2) - (2)]), 0, 1);
		}
    break;

  case 24:

/* Line 678 of lalr1.cc  */
#line 247 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('+', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 251 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('-', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 255 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('~', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 259 "NscParser.ypp"
    {
			(yyval) = NscBuildUnaryOp ('!', (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 266 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 29:

/* Line 678 of lalr1.cc  */
#line 270 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('*', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 30:

/* Line 678 of lalr1.cc  */
#line 274 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('/', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 31:

/* Line 678 of lalr1.cc  */
#line 278 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('%', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 32:

/* Line 678 of lalr1.cc  */
#line 285 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 289 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('+', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 293 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('-', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 300 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 36:

/* Line 678 of lalr1.cc  */
#line 304 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SL, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 37:

/* Line 678 of lalr1.cc  */
#line 308 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SR, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 38:

/* Line 678 of lalr1.cc  */
#line 312 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::USR, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 39:

/* Line 678 of lalr1.cc  */
#line 319 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 40:

/* Line 678 of lalr1.cc  */
#line 323 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('<', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 41:

/* Line 678 of lalr1.cc  */
#line 327 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('>', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 42:

/* Line 678 of lalr1.cc  */
#line 331 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::LTEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 43:

/* Line 678 of lalr1.cc  */
#line 335 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::GTEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 44:

/* Line 678 of lalr1.cc  */
#line 342 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 45:

/* Line 678 of lalr1.cc  */
#line 346 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::EQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 46:

/* Line 678 of lalr1.cc  */
#line 350 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::NOTEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 47:

/* Line 678 of lalr1.cc  */
#line 357 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 48:

/* Line 678 of lalr1.cc  */
#line 361 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('&', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 49:

/* Line 678 of lalr1.cc  */
#line 368 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 50:

/* Line 678 of lalr1.cc  */
#line 372 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('^', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 51:

/* Line 678 of lalr1.cc  */
#line 379 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 52:

/* Line 678 of lalr1.cc  */
#line 383 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('|', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 53:

/* Line 678 of lalr1.cc  */
#line 390 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 54:

/* Line 678 of lalr1.cc  */
#line 394 "NscParser.ypp"
    {
			(yyval) = NscBuildLogicalOp (token::ANDAND, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 55:

/* Line 678 of lalr1.cc  */
#line 401 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 56:

/* Line 678 of lalr1.cc  */
#line 405 "NscParser.ypp"
    {
			(yyval) = NscBuildLogicalOp (token::OROR, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 57:

/* Line 678 of lalr1.cc  */
#line 412 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 58:

/* Line 678 of lalr1.cc  */
#line 416 "NscParser.ypp"
    {
			(yyval) = NscBuildConditional ((yysemantic_stack_[(5) - (1)]), (yysemantic_stack_[(5) - (3)]), (yysemantic_stack_[(5) - (5)]));
		}
    break;

  case 59:

/* Line 678 of lalr1.cc  */
#line 423 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 60:

/* Line 678 of lalr1.cc  */
#line 427 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp ('=', (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 61:

/* Line 678 of lalr1.cc  */
#line 431 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::MULEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 62:

/* Line 678 of lalr1.cc  */
#line 435 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::DIVEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 63:

/* Line 678 of lalr1.cc  */
#line 439 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::MODEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 64:

/* Line 678 of lalr1.cc  */
#line 443 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::ADDEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 65:

/* Line 678 of lalr1.cc  */
#line 447 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SUBEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 66:

/* Line 678 of lalr1.cc  */
#line 451 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SLEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 67:

/* Line 678 of lalr1.cc  */
#line 455 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::SREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 68:

/* Line 678 of lalr1.cc  */
#line 459 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::USREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 69:

/* Line 678 of lalr1.cc  */
#line 463 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::ANDEQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 70:

/* Line 678 of lalr1.cc  */
#line 467 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::XOREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 71:

/* Line 678 of lalr1.cc  */
#line 471 "NscParser.ypp"
    {
			(yyval) = NscBuildBinaryOp (token::OREQ, (yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 72:

/* Line 678 of lalr1.cc  */
#line 478 "NscParser.ypp"
    {
			(yyval) = NscBuildExpression (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 73:

/* Line 678 of lalr1.cc  */
#line 485 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 74:

/* Line 678 of lalr1.cc  */
#line 497 "NscParser.ypp"
    { NscBuildSaveLine (1); }
    break;

  case 75:

/* Line 678 of lalr1.cc  */
#line 498 "NscParser.ypp"
    {
			(yyval) = NscBuildMakeConstType ((yysemantic_stack_[(3) - (3)]));
			NscBuildCopyLine (0, 1);
		}
    break;

  case 76:

/* Line 678 of lalr1.cc  */
#line 503 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
			NscBuildSaveLine (0);
		}
    break;

  case 77:

/* Line 678 of lalr1.cc  */
#line 511 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::VOID_TYPE, NULL);
		}
    break;

  case 78:

/* Line 678 of lalr1.cc  */
#line 515 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::INT_TYPE, NULL);
		}
    break;

  case 79:

/* Line 678 of lalr1.cc  */
#line 519 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::FLOAT_TYPE, NULL);
		}
    break;

  case 80:

/* Line 678 of lalr1.cc  */
#line 523 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::OBJECT_TYPE, NULL);
		}
    break;

  case 81:

/* Line 678 of lalr1.cc  */
#line 527 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::STRING_TYPE, NULL);
		}
    break;

  case 82:

/* Line 678 of lalr1.cc  */
#line 531 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::ACTION_TYPE, NULL);
		}
    break;

  case 83:

/* Line 678 of lalr1.cc  */
#line 535 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::VECTOR_TYPE, NULL);
		}
    break;

  case 84:

/* Line 678 of lalr1.cc  */
#line 539 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::STRUCT_TYPE, (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 85:

/* Line 678 of lalr1.cc  */
#line 543 "NscParser.ypp"
    {
			(yyval) = NscBuildType (token::ENGINE_TYPE, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 86:

/* Line 678 of lalr1.cc  */
#line 550 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
		}
    break;

  case 87:

/* Line 678 of lalr1.cc  */
#line 563 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 88:

/* Line 678 of lalr1.cc  */
#line 567 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, NULL, NULL));
		}
    break;

  case 89:

/* Line 678 of lalr1.cc  */
#line 575 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 90:

/* Line 678 of lalr1.cc  */
#line 579 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
			(yyval) = NscBuildMarkLine (0, NscBuildBlankStatement ());
		}
    break;

  case 91:

/* Line 678 of lalr1.cc  */
#line 587 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 92:

/* Line 678 of lalr1.cc  */
#line 591 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 93:

/* Line 678 of lalr1.cc  */
#line 595 "NscParser.ypp"
    {
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL));
		}
    break;

  case 94:

/* Line 678 of lalr1.cc  */
#line 599 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 95:

/* Line 678 of lalr1.cc  */
#line 603 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 96:

/* Line 678 of lalr1.cc  */
#line 607 "NscParser.ypp"
    {
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL));
		}
    break;

  case 97:

/* Line 678 of lalr1.cc  */
#line 611 "NscParser.ypp"
    {
			(yyval) = NscBuildMarkLine (0, NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL));
		}
    break;

  case 98:

/* Line 678 of lalr1.cc  */
#line 624 "NscParser.ypp"
    {
			(yyval) = (yysemantic_stack_[(1) - (1)]);
		}
    break;

  case 99:

/* Line 678 of lalr1.cc  */
#line 630 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 100:

/* Line 678 of lalr1.cc  */
#line 631 "NscParser.ypp"
    {
			(yyval) = NscBuildCase (token::CASE, (yysemantic_stack_[(4) - (3)]));
		}
    break;

  case 101:

/* Line 678 of lalr1.cc  */
#line 634 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 102:

/* Line 678 of lalr1.cc  */
#line 635 "NscParser.ypp"
    {
			(yyval) = NscBuildCase (token::DEFAULT, NULL);
		}
    break;

  case 103:

/* Line 678 of lalr1.cc  */
#line 648 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, NULL, (yysemantic_stack_[(2) - (1)]));
		}
    break;

  case 104:

/* Line 678 of lalr1.cc  */
#line 652 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(3) - (2)]), (yysemantic_stack_[(3) - (1)]));
		}
    break;

  case 105:

/* Line 678 of lalr1.cc  */
#line 659 "NscParser.ypp"
    {
			(yyval) = NscBuildStatementFence ();
		}
    break;

  case 106:

/* Line 678 of lalr1.cc  */
#line 666 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 107:

/* Line 678 of lalr1.cc  */
#line 670 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 108:

/* Line 678 of lalr1.cc  */
#line 682 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 109:

/* Line 678 of lalr1.cc  */
#line 683 "NscParser.ypp"
    {
			(yyval) = NscBuildStatement (NULL, (yysemantic_stack_[(3) - (2)]), NULL);
		}
    break;

  case 110:

/* Line 678 of lalr1.cc  */
#line 687 "NscParser.ypp"
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

  case 111:

/* Line 678 of lalr1.cc  */
#line 711 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (IF, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 112:

/* Line 678 of lalr1.cc  */
#line 715 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (IF, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 113:

/* Line 678 of lalr1.cc  */
#line 719 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (SWITCH, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 114:

/* Line 678 of lalr1.cc  */
#line 726 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
			(yyval) = NscBuild5Block (IF, (yysemantic_stack_[(3) - (1)]), 1, NULL, NULL, NULL, (yysemantic_stack_[(3) - (2)]), NULL);
		}
    break;

  case 115:

/* Line 678 of lalr1.cc  */
#line 733 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 116:

/* Line 678 of lalr1.cc  */
#line 734 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (IF, NULL, 1, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 117:

/* Line 678 of lalr1.cc  */
#line 740 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 118:

/* Line 678 of lalr1.cc  */
#line 741 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (SWITCH, NULL, 1, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 119:

/* Line 678 of lalr1.cc  */
#line 754 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (WHILE, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 120:

/* Line 678 of lalr1.cc  */
#line 757 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 121:

/* Line 678 of lalr1.cc  */
#line 758 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (DO, (yysemantic_stack_[(8) - (1)]), 0, NULL, (yysemantic_stack_[(8) - (6)]), NULL, (yysemantic_stack_[(8) - (2)]), NULL);
		}
    break;

  case 122:

/* Line 678 of lalr1.cc  */
#line 762 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, (yysemantic_stack_[(2) - (1)]), 0, NULL, NULL, NULL, (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 123:

/* Line 678 of lalr1.cc  */
#line 769 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, NULL, NULL, NULL, NULL);
		}
    break;

  case 124:

/* Line 678 of lalr1.cc  */
#line 773 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(5) - (2)]), NULL, NULL, NULL, NULL);
		}
    break;

  case 125:

/* Line 678 of lalr1.cc  */
#line 777 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, (yysemantic_stack_[(5) - (3)]), NULL, NULL, NULL);
		}
    break;

  case 126:

/* Line 678 of lalr1.cc  */
#line 781 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(6) - (2)]), (yysemantic_stack_[(6) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 127:

/* Line 678 of lalr1.cc  */
#line 785 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL);
		}
    break;

  case 128:

/* Line 678 of lalr1.cc  */
#line 789 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(6) - (2)]), NULL, (yysemantic_stack_[(6) - (5)]), NULL, NULL);
		}
    break;

  case 129:

/* Line 678 of lalr1.cc  */
#line 793 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, NULL, (yysemantic_stack_[(6) - (3)]), (yysemantic_stack_[(6) - (5)]), NULL, NULL);
		}
    break;

  case 130:

/* Line 678 of lalr1.cc  */
#line 797 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (FOR, NULL, 1, (yysemantic_stack_[(7) - (2)]), (yysemantic_stack_[(7) - (4)]), (yysemantic_stack_[(7) - (6)]), NULL, NULL);
		}
    break;

  case 131:

/* Line 678 of lalr1.cc  */
#line 804 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
		}
    break;

  case 132:

/* Line 678 of lalr1.cc  */
#line 810 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 133:

/* Line 678 of lalr1.cc  */
#line 811 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (WHILE, NULL, 1, NULL, (yysemantic_stack_[(5) - (4)]), NULL, NULL, NULL);
		}
    break;

  case 134:

/* Line 678 of lalr1.cc  */
#line 818 "NscParser.ypp"
    {
			(yyval) = NscBuild5Block (DO, NULL, 1, NULL, NULL, NULL, NULL, NULL);
		}
    break;

  case 135:

/* Line 678 of lalr1.cc  */
#line 830 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 136:

/* Line 678 of lalr1.cc  */
#line 831 "NscParser.ypp"
    {
			(yyval) = NscBuildBreakContinue (CONTINUE);
		}
    break;

  case 137:

/* Line 678 of lalr1.cc  */
#line 834 "NscParser.ypp"
    { NscBuildSaveLine (0); }
    break;

  case 138:

/* Line 678 of lalr1.cc  */
#line 835 "NscParser.ypp"
    {
			(yyval) = NscBuildBreakContinue (BREAK);
		}
    break;

  case 139:

/* Line 678 of lalr1.cc  */
#line 839 "NscParser.ypp"
    {
			(yyval) = NscBuildReturn (NULL);
		}
    break;

  case 140:

/* Line 678 of lalr1.cc  */
#line 843 "NscParser.ypp"
    {
			(yyval) = NscBuildReturn ((yysemantic_stack_[(3) - (2)]));
		}
    break;

  case 141:

/* Line 678 of lalr1.cc  */
#line 850 "NscParser.ypp"
    {
			NscBuildSaveLine (0);
		}
    break;

  case 142:

/* Line 678 of lalr1.cc  */
#line 863 "NscParser.ypp"
    {
			(yyval) = NscBuildDeclaration ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (2)]));
		}
    break;

  case 143:

/* Line 678 of lalr1.cc  */
#line 870 "NscParser.ypp"
    {
			(yyval) = NscBuildDeclarationList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 144:

/* Line 678 of lalr1.cc  */
#line 874 "NscParser.ypp"
    {
			(yyval) = NscBuildDeclarationList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 145:

/* Line 678 of lalr1.cc  */
#line 881 "NscParser.ypp"
    {
			(yyval) = NscBuildEndDeclaration ((yysemantic_stack_[(1) - (1)]), NULL);
		}
    break;

  case 146:

/* Line 678 of lalr1.cc  */
#line 885 "NscParser.ypp"
    {
			(yyval) = NscBuildEndDeclaration ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 147:

/* Line 678 of lalr1.cc  */
#line 892 "NscParser.ypp"
    {
			(yyval) = NscBuildBeginDeclaration ((yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 148:

/* Line 678 of lalr1.cc  */
#line 905 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionDef ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 149:

/* Line 678 of lalr1.cc  */
#line 912 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionPrototype ((yysemantic_stack_[(2) - (1)]));
		}
    break;

  case 150:

/* Line 678 of lalr1.cc  */
#line 919 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionDeclarator ((yysemantic_stack_[(5) - (1)]), (yysemantic_stack_[(5) - (2)]), (yysemantic_stack_[(5) - (4)]));
		}
    break;

  case 151:

/* Line 678 of lalr1.cc  */
#line 923 "NscParser.ypp"
    {
			(yyval) = NscBuildFunctionDeclarator ((yysemantic_stack_[(4) - (1)]), (yysemantic_stack_[(4) - (2)]), NULL);
		}
    break;

  case 154:

/* Line 678 of lalr1.cc  */
#line 935 "NscParser.ypp"
    {
			(yyval) = NscBuildParameterList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 155:

/* Line 678 of lalr1.cc  */
#line 939 "NscParser.ypp"
    {
			(yyval) = NscBuildParameterList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 156:

/* Line 678 of lalr1.cc  */
#line 946 "NscParser.ypp"
    {
			(yyval) = NscBuildParameter ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]), NULL);
		}
    break;

  case 157:

/* Line 678 of lalr1.cc  */
#line 950 "NscParser.ypp"
    {
			(yyval) = NscBuildParameter ((yysemantic_stack_[(4) - (1)]), (yysemantic_stack_[(4) - (2)]), (yysemantic_stack_[(4) - (4)]));
		}
    break;

  case 158:

/* Line 678 of lalr1.cc  */
#line 963 "NscParser.ypp"
    {
			(yyval) = NscBuildStruct ((yysemantic_stack_[(6) - (2)]), (yysemantic_stack_[(6) - (4)]));
		}
    break;

  case 159:

/* Line 678 of lalr1.cc  */
#line 970 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclarationList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 160:

/* Line 678 of lalr1.cc  */
#line 974 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclarationList ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 161:

/* Line 678 of lalr1.cc  */
#line 981 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclaration ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (2)]));
		}
    break;

  case 162:

/* Line 678 of lalr1.cc  */
#line 988 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclaratorList (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 163:

/* Line 678 of lalr1.cc  */
#line 992 "NscParser.ypp"
    {
			(yyval) = NscBuildStructDeclaratorList ((yysemantic_stack_[(3) - (1)]), (yysemantic_stack_[(3) - (3)]));
		}
    break;

  case 165:

/* Line 678 of lalr1.cc  */
#line 1006 "NscParser.ypp"
    {
			(yyval) = NscBuildTranslation (NULL, (yysemantic_stack_[(1) - (1)]));
		}
    break;

  case 166:

/* Line 678 of lalr1.cc  */
#line 1010 "NscParser.ypp"
    {
			(yyval) = NscBuildTranslation ((yysemantic_stack_[(2) - (1)]), (yysemantic_stack_[(2) - (2)]));
		}
    break;

  case 167:

/* Line 678 of lalr1.cc  */
#line 1014 "NscParser.ypp"
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
#line 1947 "NscParser.cpp"
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
  const signed char parser::yypact_ninf_ = -114;
  const short int
  parser::yypact_[] =
  {
       639,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,    10,  -114,    24,  -114,  -114,  -114,   -20,  -114,
     648,  -114,   178,   -21,   -28,  -114,     2,     1,  -114,  -114,
    -114,   200,  -114,  -114,  -114,   127,   680,   142,  -114,   605,
     705,  -114,  -114,  -114,  -114,  -114,  -114,   101,   102,  -114,
    -114,   103,  -114,  -114,   142,  -114,  -114,  -114,  -114,  -114,
     261,  -114,   605,  -114,   322,   322,   383,  -114,   383,   104,
     383,   383,  -114,   442,  -114,  -114,  -114,   158,   113,   111,
    -114,  -114,  -114,   117,  -114,  -114,  -114,   605,   605,  -114,
    -114,   605,    -1,   605,   605,   605,   605,  -114,   -22,    30,
      42,   -40,    96,    -3,    38,   106,   107,   105,   151,    -9,
    -114,  -114,   184,   671,  -114,   108,   605,   115,   118,  -114,
    -114,   143,  -114,  -114,  -114,  -114,   121,  -114,  -114,  -114,
     152,  -114,  -114,   459,   123,  -114,   148,  -114,   129,   144,
    -114,   705,    19,  -114,  -114,   166,    45,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,   217,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,   605,   605,   605,
     605,   605,   605,   605,   605,   605,   605,  -114,    -5,   149,
    -114,  -114,  -114,  -114,   150,  -114,  -114,   605,   605,   605,
    -114,  -114,   132,   153,   501,  -114,  -114,   605,  -114,  -114,
     -27,  -114,  -114,  -114,   218,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,    42,    42,   -40,   -40,   -40,    96,    96,    96,    96,
      -3,    -3,    38,   106,   107,   105,   151,   154,   242,  -114,
    -114,  -114,   202,   203,   204,  -114,   210,   518,   560,   180,
     216,  -114,  -114,   605,    59,   605,  -114,  -114,  -114,  -114,
    -114,  -114,   219,  -114,   223,   577,   605,  -114,  -114,   264,
    -114,  -114,  -114,  -114,   224,   225,   215,  -114,   198,  -114,
    -114
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,   167,    79,    78,    80,    81,    77,    86,    83,    85,
      82,    74,     0,    76,     0,   170,   168,   169,     0,   171,
       0,   165,     0,   147,     0,   143,   145,    84,   149,   105,
     148,     0,     1,   166,    75,     0,     0,     0,   142,     0,
       0,   110,   137,    99,   135,   101,   134,     0,     0,   141,
     117,     0,    88,   103,     0,   106,    87,    91,    98,    92,
       0,    93,     0,    94,     0,     0,     0,    95,     0,     0,
       0,     0,    96,     0,    97,    84,   151,     0,     0,   152,
     154,   147,   144,     2,     3,     4,     5,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,    13,    21,    28,
      32,    35,    39,    44,    47,    49,    51,    53,    55,    57,
      59,   146,     0,     0,   159,     0,     0,     0,     0,   131,
     115,     0,   132,   104,   107,    72,     0,    90,   112,    89,
     111,   113,   122,     0,     0,   119,     0,   139,     0,   156,
     150,   153,     0,    22,    23,     0,     0,     9,    24,    25,
      26,    27,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   162,     0,     0,
     160,   138,    28,    73,     0,   136,   102,     0,     0,     0,
     109,   114,     0,     0,     0,   120,   140,     0,   155,    15,
       0,    19,     8,    10,     0,    16,    64,    65,    61,    62,
      63,    70,    69,    71,    66,    67,    68,    60,    29,    30,
      31,    33,    34,    36,    37,    38,    42,    43,    40,    41,
      45,    46,    48,    50,    52,    54,    56,     0,     0,   161,
     158,   100,     0,     0,     0,   123,     0,     0,     0,     0,
       0,   157,    14,     0,     0,     0,   163,   116,   118,   133,
     127,   125,     0,   124,     0,     0,     0,    20,    11,     0,
      58,   129,   128,   126,     0,     0,     0,   130,     0,    12,
     121
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  parser::yypgoto_[] =
  {
      -114,  -114,  -114,  -114,   -86,  -101,   -25,  -111,   -46,    98,
      99,    97,   100,   131,  -114,  -113,   -39,   -58,  -114,    16,
    -114,   260,    12,   112,   220,    86,  -114,  -114,  -114,  -114,
     265,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,    14,  -114,   249,  -114,  -114,  -114,  -114,  -114,
    -114,   146,  -114,  -114,   193,  -114,  -114,   294
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  parser::yydefgoto_[] =
  {
        -1,    97,    98,   210,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   125,   126,   194,    54,
      22,    13,    35,    55,   128,    56,    57,    58,   116,   118,
      59,    31,    60,    61,    62,    63,    64,    65,   197,    66,
     121,    67,   260,    68,    69,    70,   199,    71,    72,   117,
     115,    73,    74,    24,    25,    26,    16,    17,    18,    78,
      79,    80,    19,   113,   114,   188,    20,    21
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const short int parser::yytable_ninf_ = -165;
  const short int
  parser::yytable_[] =
  {
       111,   143,   144,   193,   146,   152,   153,   148,   149,   150,
     151,   134,    14,    23,    15,   138,    12,   185,   170,   171,
     175,   176,    83,    84,    85,    86,   262,    27,    37,   263,
     192,    36,    14,   145,    15,   154,    12,   155,   156,   157,
     158,   159,   160,   161,   162,    38,    87,    88,   163,   164,
     165,   248,    77,    28,   147,    29,   112,    89,    90,   179,
     180,   186,   177,   178,   236,   237,   238,   239,   249,   231,
     232,    91,   209,    92,    39,   203,    40,    93,    94,    95,
      96,   228,   229,   230,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     213,   214,   166,   211,   167,   168,   169,    83,    84,    85,
      86,   172,   173,   174,   278,   279,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   247,   112,
      75,    87,    88,   240,   241,    83,    84,    85,    86,   252,
     253,   254,    89,    90,   256,    81,   259,   233,   234,   235,
     129,   129,   280,   119,   120,   122,    91,    77,    92,    87,
      88,   139,    93,    94,    95,    96,   140,   141,   261,   142,
      89,    90,   124,   181,   183,   182,   184,   133,   131,   192,
     132,   191,   135,   136,    91,   255,    92,   187,   195,   196,
      93,    94,    95,    96,   200,   198,   204,   201,   205,   272,
     274,    41,   206,  -108,  -108,  -108,  -108,     2,     3,     4,
       5,     6,     7,     8,     9,    10,   207,   284,   285,   212,
     215,   251,   250,   264,   277,   265,   257,  -108,  -108,     2,
       3,     4,     5,     6,     7,     8,     9,    10,  -108,  -108,
      42,    43,    44,    45,    46,   266,    47,    48,    49,    50,
      51,    11,  -108,   275,  -108,   267,   268,   269,  -108,  -108,
    -108,  -108,    41,   270,  -108,  -108,  -108,  -108,   276,   286,
     289,   290,   281,    52,    53,    29,   282,   287,   288,   242,
     244,   243,    34,    30,   245,   130,    82,   208,  -108,  -108,
       2,     3,     4,     5,     6,     7,     8,     9,    10,  -108,
    -108,    42,    43,    44,    45,    46,   190,    47,    48,    49,
      50,    51,    11,  -108,    33,  -108,   246,     0,     0,  -108,
    -108,  -108,  -108,    41,     0,  -108,  -108,  -108,  -108,     0,
       0,     0,     0,     0,    52,   123,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -108,
    -108,     2,     3,     4,     5,     6,     7,     8,     9,    10,
    -108,  -108,    42,    43,    44,    45,    46,     0,    47,    48,
      49,    50,    51,    11,  -108,     0,  -108,     0,     0,     0,
    -108,  -108,  -108,  -108,    41,     0,  -108,  -108,  -108,  -108,
       0,     0,     0,     0,     0,   127,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -108,  -108,     2,     3,     4,     5,     6,     7,     8,     9,
      10,  -108,  -108,    42,    43,    44,    45,    46,     0,    47,
      48,    49,    50,    51,    11,  -108,     0,  -108,     0,     0,
       0,  -108,  -108,  -108,  -108,    83,    84,    85,    86,     0,
       0,     0,     0,     0,     0,     0,    52,     0,    29,     0,
       0,     0,    83,    84,    85,    86,     0,     0,     0,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,     0,     0,     0,     0,    87,    88,     0,     0,
       0,     0,     0,     0,    91,     0,    92,    89,    90,     0,
      93,    94,    95,    96,    83,    84,    85,    86,     0,     0,
       0,    91,     0,    92,     0,   137,     0,    93,    94,    95,
      96,    83,    84,    85,    86,     0,     0,     0,    87,    88,
       0,     0,   202,     0,     0,     0,     0,     0,     0,    89,
      90,     0,     0,     0,     0,    87,    88,     0,     0,     0,
       0,     0,     0,    91,     0,    92,    89,    90,     0,    93,
      94,    95,    96,    83,    84,    85,    86,     0,     0,     0,
      91,   271,    92,     0,   258,     0,    93,    94,    95,    96,
      83,    84,    85,    86,     0,     0,     0,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    90,
       0,     0,     0,     0,    87,    88,     0,     0,    83,    84,
      85,    86,    91,   273,    92,    89,    90,     0,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,    91,
     283,    92,    87,    88,     0,    93,    94,    95,    96,  -164,
       1,     0,     0,    89,    90,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,    91,     0,    92,
       0,     0,     0,    93,    94,    95,    96,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,    76,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11
  };

  /* YYCHECK.  */
  const short int
  parser::yycheck_[] =
  {
        39,    87,    88,   116,     5,    27,    28,    93,    94,    95,
      96,    69,     0,     3,     0,    73,     0,    26,    58,    59,
      23,    24,     3,     4,     5,     6,    53,     3,    56,    56,
     116,    52,    20,    91,    20,    57,    20,     7,     8,     9,
      10,    11,    12,    13,    14,    73,    27,    28,    18,    19,
      20,    56,    36,    73,    55,    75,    40,    38,    39,    21,
      22,    70,    65,    66,   175,   176,   177,   178,    73,   170,
     171,    52,    53,    54,    72,   133,    75,    58,    59,    60,
      61,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      55,    56,    72,   142,    62,    63,    64,     3,     4,     5,
       6,    15,    16,    17,    55,    56,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   186,   113,
       3,    27,    28,   179,   180,     3,     4,     5,     6,   197,
     198,   199,    38,    39,   202,     3,   204,   172,   173,   174,
      64,    65,   265,    52,    52,    52,    52,   141,    54,    27,
      28,     3,    58,    59,    60,    61,    53,    56,   207,    52,
      38,    39,    60,    67,    69,    68,    25,    73,    66,   265,
      68,    73,    70,    71,    52,    53,    54,     3,    73,    71,
      58,    59,    60,    61,    73,    52,    73,    45,    50,   257,
     258,     1,    73,     3,     4,     5,     6,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    72,   275,   276,    53,
       3,    71,    73,     5,   263,    71,    73,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     3,    46,    47,    48,    49,
      50,    51,    52,    73,    54,    53,    53,    53,    58,    59,
      60,    61,     1,    53,     3,     4,     5,     6,    52,     5,
      55,    73,    53,    73,    74,    75,    53,    53,    53,   181,
     183,   182,    22,    18,   184,    65,    37,   141,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   113,    46,    47,    48,
      49,    50,    51,    52,    20,    54,   185,    -1,    -1,    58,
      59,    60,    61,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    -1,    -1,
      -1,    58,    59,    60,    61,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    54,    38,    39,    -1,
      58,    59,    60,    61,     3,     4,     5,     6,    -1,    -1,
      -1,    52,    -1,    54,    -1,    73,    -1,    58,    59,    60,
      61,     3,     4,     5,     6,    -1,    -1,    -1,    27,    28,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    38,    39,    -1,    58,
      59,    60,    61,     3,     4,     5,     6,    -1,    -1,    -1,
      52,    53,    54,    -1,    73,    -1,    58,    59,    60,    61,
       3,     4,     5,     6,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,     3,     4,
       5,     6,    52,    53,    54,    38,    39,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    27,    28,    -1,    58,    59,    60,    61,     0,
       1,    -1,    -1,    38,    39,    -1,    -1,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    53,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    51,    95,    97,    98,   128,   132,   133,   134,   138,
     142,   143,    96,     3,   129,   130,   131,     3,    73,    75,
     106,   107,     0,   143,    97,    98,    52,    56,    73,    72,
      75,     1,    40,    41,    42,    43,    44,    46,    47,    48,
      49,    50,    73,    74,    95,    99,   101,   102,   103,   106,
     108,   109,   110,   111,   112,   113,   115,   117,   119,   120,
     121,   123,   124,   127,   128,     3,    53,    95,   135,   136,
     137,     3,   130,     3,     4,     5,     6,    27,    28,    38,
      39,    52,    54,    58,    59,    60,    61,    77,    78,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    95,   139,   140,   126,   104,   125,   105,    52,
      52,   116,    52,    74,    99,    92,    93,    73,   100,   101,
     100,    99,    99,    73,    93,    99,    99,    73,    93,     3,
      53,    56,    52,    80,    80,    93,     5,    55,    80,    80,
      80,    80,    27,    28,    57,     7,     8,     9,    10,    11,
      12,    13,    14,    18,    19,    20,    72,    62,    63,    64,
      58,    59,    15,    16,    17,    23,    24,    65,    66,    21,
      22,    67,    68,    69,    25,    26,    70,     3,   141,    74,
     140,    73,    80,    91,    94,    73,    71,   114,    52,   122,
      73,    45,    73,    93,    73,    50,    73,    72,   137,    53,
      79,    92,    53,    55,    56,     3,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    80,    80,
      80,    81,    81,    82,    82,    82,    83,    83,    83,    83,
      84,    84,    85,    86,    87,    88,    89,    93,    56,    73,
      73,    71,    93,    93,    93,    53,    93,    73,    73,    93,
     118,    92,    53,    56,     5,    71,     3,    53,    53,    53,
      53,    53,    93,    53,    93,    73,    52,    92,    55,    56,
      91,    53,    53,    53,    93,    93,     5,    53,    53,    55,
      73
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
     305,   306,    40,    41,    91,    93,    44,    46,    43,    45,
     126,    33,    42,    47,    37,    60,    62,    38,    94,   124,
      63,    58,    61,    59,   125,   123
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    81,    81,
      81,    81,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    94,    96,    95,    95,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   102,   104,
     103,   105,   103,   106,   106,   107,   108,   108,   110,   109,
     109,   111,   111,   111,   112,   114,   113,   116,   115,   117,
     118,   117,   117,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   122,   121,   123,   125,   124,   126,   124,   124,
     124,   127,   128,   129,   129,   130,   130,   131,   132,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   139,
     139,   140,   141,   141,   142,   142,   142,   142,   143,   143,
     143,   143
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     5,     7,     1,     4,     3,     3,     2,     2,     1,
       3,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     3,     2,     3,     1,     1,     2,     0,     3,
       1,     2,     2,     2,     3,     0,     5,     0,     5,     2,
       0,     8,     2,     4,     5,     5,     6,     5,     6,     6,
       7,     2,     0,     5,     1,     0,     3,     0,     3,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       5,     4,     1,     2,     1,     3,     2,     4,     6,     1,
       2,     3,     1,     3,     0,     1,     2,     1,     1,     1,
       1,     1
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
  "NWCONST", "'('", "')'", "'['", "']'", "','", "'.'", "'+'", "'-'", "'~'",
  "'!'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'",
  "':'", "'='", "';'", "'}'", "'{'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
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
       142,     0,    -1,     3,    -1,     4,    -1,     5,    -1,     6,
      -1,    38,    -1,    39,    -1,    52,    93,    53,    -1,    54,
      55,    -1,    54,     5,    55,    -1,    54,     5,    56,     5,
      55,    -1,    54,     5,    56,     5,    56,     5,    55,    -1,
      77,    -1,     3,    52,    79,    53,    -1,     3,    52,    53,
      -1,    78,    57,     3,    -1,    78,    27,    -1,    78,    28,
      -1,    92,    -1,    79,    56,    92,    -1,    78,    -1,    27,
      80,    -1,    28,    80,    -1,    58,    80,    -1,    59,    80,
      -1,    60,    80,    -1,    61,    80,    -1,    80,    -1,    81,
      62,    80,    -1,    81,    63,    80,    -1,    81,    64,    80,
      -1,    81,    -1,    82,    58,    81,    -1,    82,    59,    81,
      -1,    82,    -1,    83,    15,    82,    -1,    83,    16,    82,
      -1,    83,    17,    82,    -1,    83,    -1,    84,    65,    83,
      -1,    84,    66,    83,    -1,    84,    23,    83,    -1,    84,
      24,    83,    -1,    84,    -1,    85,    21,    84,    -1,    85,
      22,    84,    -1,    85,    -1,    86,    67,    85,    -1,    86,
      -1,    87,    68,    86,    -1,    87,    -1,    88,    69,    87,
      -1,    88,    -1,    89,    25,    88,    -1,    89,    -1,    90,
      26,    89,    -1,    90,    -1,    90,    70,    93,    71,    91,
      -1,    91,    -1,    80,    72,    92,    -1,    80,     9,    92,
      -1,    80,    10,    92,    -1,    80,    11,    92,    -1,    80,
       7,    92,    -1,    80,     8,    92,    -1,    80,    18,    92,
      -1,    80,    19,    92,    -1,    80,    20,    92,    -1,    80,
      13,    92,    -1,    80,    12,    92,    -1,    80,    14,    92,
      -1,    92,    -1,    91,    -1,    -1,    51,    96,    97,    -1,
      97,    -1,    33,    -1,    30,    -1,    29,    -1,    31,    -1,
      32,    -1,    37,    -1,    35,    -1,    98,     3,    -1,    36,
      -1,    34,    -1,   101,    -1,    73,    -1,   101,    -1,    73,
      -1,   102,    -1,   106,    -1,   109,    -1,   111,    -1,   117,
      -1,   124,    -1,   128,    -1,   103,    -1,    -1,    41,   104,
      94,    71,    -1,    -1,    43,   105,    71,    -1,   107,    74,
      -1,   107,   108,    74,    -1,    75,    -1,    99,    -1,   108,
      99,    -1,    -1,   110,    93,    73,    -1,     1,    -1,   113,
     100,    -1,   112,   100,    -1,   115,    99,    -1,   113,   100,
      45,    -1,    -1,    47,    52,   114,    93,    53,    -1,    -1,
      49,   116,    52,    93,    53,    -1,   121,    99,    -1,    -1,
     123,    99,    50,   118,    52,    93,    53,    73,    -1,   119,
      99,    -1,   120,    73,    73,    53,    -1,   120,    93,    73,
      73,    53,    -1,   120,    73,    93,    73,    53,    -1,   120,
      93,    73,    93,    73,    53,    -1,   120,    73,    73,    93,
      53,    -1,   120,    93,    73,    73,    93,    53,    -1,   120,
      73,    93,    73,    93,    53,    -1,   120,    93,    73,    93,
      73,    93,    53,    -1,    46,    52,    -1,    -1,    50,    52,
     122,    93,    53,    -1,    44,    -1,    -1,    42,   125,    73,
      -1,    -1,    40,   126,    73,    -1,   127,    73,    -1,   127,
      93,    73,    -1,    48,    -1,    95,   129,    73,    -1,   130,
      -1,   129,    56,   130,    -1,   131,    -1,   131,    72,    92,
      -1,     3,    -1,   134,   106,    -1,   134,    73,    -1,    95,
       3,    52,   135,    53,    -1,    95,     3,    52,    53,    -1,
     136,    -1,   136,    56,    -1,   137,    -1,   136,    56,   137,
      -1,    95,     3,    -1,    95,     3,    72,    92,    -1,    98,
       3,    75,   139,    74,    73,    -1,   140,    -1,   139,   140,
      -1,    95,   141,    73,    -1,     3,    -1,   141,    56,     3,
      -1,    -1,   143,    -1,   142,   143,    -1,     1,    -1,   132,
      -1,   133,    -1,   128,    -1,   138,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      22,    26,    32,    40,    42,    47,    51,    55,    58,    61,
      63,    67,    69,    72,    75,    78,    81,    84,    87,    89,
      93,    97,   101,   103,   107,   111,   113,   117,   121,   125,
     127,   131,   135,   139,   143,   145,   149,   153,   155,   159,
     161,   165,   167,   171,   173,   177,   179,   183,   185,   191,
     193,   197,   201,   205,   209,   213,   217,   221,   225,   229,
     233,   237,   241,   243,   245,   246,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   269,   271,   273,   275,   277,
     279,   281,   283,   285,   287,   289,   291,   293,   295,   297,
     298,   303,   304,   308,   311,   315,   317,   319,   322,   323,
     327,   329,   332,   335,   338,   342,   343,   349,   350,   356,
     359,   360,   369,   372,   377,   383,   389,   396,   402,   409,
     416,   424,   427,   428,   434,   436,   437,   441,   442,   446,
     449,   453,   455,   459,   461,   465,   467,   471,   473,   476,
     479,   485,   490,   492,   495,   497,   501,   504,   509,   516,
     518,   521,   525,   527,   531,   532,   534,   537,   539,   541,
     543,   545
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  parser::yyrline_[] =
  {
         0,   150,   150,   154,   158,   162,   166,   170,   174,   177,
     181,   185,   189,   196,   200,   204,   208,   212,   216,   223,
     227,   234,   238,   242,   246,   250,   254,   258,   265,   269,
     273,   277,   284,   288,   292,   299,   303,   307,   311,   318,
     322,   326,   330,   334,   341,   345,   349,   356,   360,   367,
     371,   378,   382,   389,   393,   400,   404,   411,   415,   422,
     426,   430,   434,   438,   442,   446,   450,   454,   458,   462,
     466,   470,   477,   484,   497,   497,   502,   510,   514,   518,
     522,   526,   530,   534,   538,   542,   549,   562,   566,   574,
     578,   586,   590,   594,   598,   602,   606,   610,   623,   630,
     630,   634,   634,   647,   651,   658,   665,   669,   682,   682,
     686,   710,   714,   718,   725,   733,   733,   740,   740,   753,
     757,   757,   761,   768,   772,   776,   780,   784,   788,   792,
     796,   803,   810,   810,   817,   830,   830,   834,   834,   838,
     842,   849,   862,   869,   873,   880,   884,   891,   904,   911,
     918,   922,   929,   930,   934,   938,   945,   949,   962,   969,
     973,   980,   987,   991,  1003,  1005,  1009,  1013,  1030,  1031,
    1032,  1033
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
       2,     2,     2,    61,     2,     2,     2,    64,    67,     2,
      52,    53,    62,    58,    56,    59,    57,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    73,
      65,    72,    66,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    69,    74,    60,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 756;
  const int parser::yynnts_ = 68;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 32;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 76;

  const unsigned int parser::yyuser_token_number_max_ = 306;
  const parser::token_number_type parser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} // yy

/* Line 1054 of lalr1.cc  */
#line 2767 "NscParser.cpp"


/* Line 1056 of lalr1.cc  */
#line 1036 "NscParser.ypp"


