#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 624
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__layout_semicolon = 1,
  sym__layout_open_brace = 2,
  sym__layout_close_brace = 3,
  sym_int = 4,
  sym_literal = 5,
  sym_set_n = 6,
  sym_begin_import_dir = 7,
  anon_sym_SEMI = 8,
  sym_name = 9,
  sym_name_at = 10,
  sym_qualified_name = 11,
  anon_sym__ = 12,
  anon_sym_DOT = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LBRACE_LBRACE = 17,
  anon_sym_RBRACE_RBRACE = 18,
  sym_comment = 19,
  anon_sym_LBRACE_DASH_POUND = 20,
  anon_sym_POUND_DASH_RBRACE = 21,
  anon_sym_BUILTIN = 22,
  anon_sym_CATCHALL = 23,
  anon_sym_COMPILE = 24,
  anon_sym_FOREIGN = 25,
  anon_sym_NO_POSITIVITY_CHECK = 26,
  anon_sym_NO_TERMINATION_CHECK = 27,
  anon_sym_TERMINATING = 28,
  anon_sym_NON_TERMINATING = 29,
  anon_sym_POLARITY = 30,
  anon_sym_STATIC = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_EQ = 33,
  anon_sym_PIPE = 34,
  anon_sym_QMARK = 35,
  anon_sym_Prop = 36,
  anon_sym_Set = 37,
  anon_sym_quote = 38,
  anon_sym_quoteTerm = 39,
  anon_sym_unquote = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_LPAREN_PIPE = 43,
  anon_sym_PIPE_RPAREN = 44,
  anon_sym_DOT_DOT_DOT = 45,
  sym_catchall_pragma = 46,
  anon_sym_COLON = 47,
  anon_sym_public = 48,
  anon_sym_using = 49,
  anon_sym_hiding = 50,
  anon_sym_renaming = 51,
  anon_sym_module = 52,
  anon_sym_to = 53,
  anon_sym_rewrite = 54,
  anon_sym_with = 55,
  anon_sym_where = 56,
  sym_source_file = 57,
  sym_semi = 58,
  sym_vopen = 59,
  sym_vclose = 60,
  sym_anonymous_name = 61,
  sym_expr = 62,
  sym__expr1 = 63,
  sym__application = 64,
  sym__expr2 = 65,
  sym__atomic_exprs1 = 66,
  sym_atomic_expr = 67,
  sym__atomic_expr_curly = 68,
  sym__atomic_expr_no_curly = 69,
  sym_tele_arrow = 70,
  sym_typed_bindings = 71,
  sym_lhs = 72,
  sym_rewrite_equations = 73,
  sym_with_expressions = 74,
  sym_where_clause = 75,
  sym__declaration = 76,
  sym_function_clause = 77,
  sym_rhs = 78,
  sym_declarations = 79,
  sym__declarations0 = 80,
  sym__declarations1 = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym__expr1_repeat1 = 83,
  aux_sym__application_repeat1 = 84,
  aux_sym_tele_arrow_repeat1 = 85,
  aux_sym__declarations1_repeat1 = 86,
};

static const char *ts_symbol_names[] = {
  [sym__layout_semicolon] = "_layout_semicolon",
  [sym__layout_open_brace] = "_layout_open_brace",
  [sym__layout_close_brace] = "_layout_close_brace",
  [ts_builtin_sym_end] = "END",
  [sym_int] = "int",
  [sym_literal] = "literal",
  [sym_set_n] = "set_n",
  [sym_begin_import_dir] = "begin_import_dir",
  [anon_sym_SEMI] = ";",
  [sym_name] = "name",
  [sym_name_at] = "name_at",
  [sym_qualified_name] = "qualified_name",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_comment] = "comment",
  [anon_sym_LBRACE_DASH_POUND] = "{-#",
  [anon_sym_POUND_DASH_RBRACE] = "#-}",
  [anon_sym_BUILTIN] = "BUILTIN",
  [anon_sym_CATCHALL] = "CATCHALL",
  [anon_sym_COMPILE] = "COMPILE",
  [anon_sym_FOREIGN] = "FOREIGN",
  [anon_sym_NO_POSITIVITY_CHECK] = "NO_POSITIVITY_CHECK",
  [anon_sym_NO_TERMINATION_CHECK] = "NO_TERMINATION_CHECK",
  [anon_sym_TERMINATING] = "TERMINATING",
  [anon_sym_NON_TERMINATING] = "NON_TERMINATING",
  [anon_sym_POLARITY] = "POLARITY",
  [anon_sym_STATIC] = "STATIC",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "?",
  [anon_sym_Prop] = "Prop",
  [anon_sym_Set] = "Set",
  [anon_sym_quote] = "quote",
  [anon_sym_quoteTerm] = "quoteTerm",
  [anon_sym_unquote] = "unquote",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN_PIPE] = "(|",
  [anon_sym_PIPE_RPAREN] = "|)",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_catchall_pragma] = "catchall_pragma",
  [anon_sym_COLON] = ":",
  [anon_sym_public] = "public",
  [anon_sym_using] = "using",
  [anon_sym_hiding] = "hiding",
  [anon_sym_renaming] = "renaming",
  [anon_sym_module] = "module",
  [anon_sym_to] = "to",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_with] = "with",
  [anon_sym_where] = "where",
  [sym_source_file] = "source_file",
  [sym_semi] = "semi",
  [sym_vopen] = "vopen",
  [sym_vclose] = "vclose",
  [sym_anonymous_name] = "anonymous_name",
  [sym_expr] = "expr",
  [sym__expr1] = "_expr1",
  [sym__application] = "_application",
  [sym__expr2] = "_expr2",
  [sym__atomic_exprs1] = "_atomic_exprs1",
  [sym_atomic_expr] = "atomic_expr",
  [sym__atomic_expr_curly] = "_atomic_expr_curly",
  [sym__atomic_expr_no_curly] = "_atomic_expr_no_curly",
  [sym_tele_arrow] = "tele_arrow",
  [sym_typed_bindings] = "typed_bindings",
  [sym_lhs] = "lhs",
  [sym_rewrite_equations] = "rewrite_equations",
  [sym_with_expressions] = "with_expressions",
  [sym_where_clause] = "where_clause",
  [sym__declaration] = "_declaration",
  [sym_function_clause] = "function_clause",
  [sym_rhs] = "rhs",
  [sym_declarations] = "declarations",
  [sym__declarations0] = "_declarations0",
  [sym__declarations1] = "_declarations1",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__expr1_repeat1] = "_expr1_repeat1",
  [aux_sym__application_repeat1] = "_application_repeat1",
  [aux_sym_tele_arrow_repeat1] = "tele_arrow_repeat1",
  [aux_sym__declarations1_repeat1] = "_declarations1_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__layout_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_open_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__layout_close_brace] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_set_n] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_import_dir] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_at] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_DASH_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BUILTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CATCHALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOREIGN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO_POSITIVITY_CHECK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO_TERMINATION_CHECK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TERMINATING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NON_TERMINATING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POLARITY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STATIC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quoteTerm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_catchall_pragma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renaming] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_vopen] = {
    .visible = true,
    .named = true,
  },
  [sym_vclose] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr1] = {
    .visible = false,
    .named = true,
  },
  [sym__application] = {
    .visible = false,
    .named = true,
  },
  [sym__expr2] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_exprs1] = {
    .visible = false,
    .named = true,
  },
  [sym_atomic_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__atomic_expr_curly] = {
    .visible = false,
    .named = true,
  },
  [sym__atomic_expr_no_curly] = {
    .visible = false,
    .named = true,
  },
  [sym_tele_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_bindings] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite_equations] = {
    .visible = true,
    .named = true,
  },
  [sym_with_expressions] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_rhs] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym__declarations0] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tele_arrow_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations1_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '?')
        ADVANCE(17);
      if (lookahead == 'B')
        ADVANCE(18);
      if (lookahead == 'C')
        ADVANCE(25);
      if (lookahead == 'F')
        ADVANCE(63);
      if (lookahead == 'N')
        ADVANCE(70);
      if (lookahead == 'P')
        ADVANCE(119);
      if (lookahead == 'S')
        ADVANCE(130);
      if (lookahead == 'T')
        ADVANCE(138);
      if (lookahead == '\\')
        SKIP(149);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'b')
        ADVANCE(151);
      if (lookahead == 'h')
        ADVANCE(178);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'p')
        ADVANCE(208);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == 'u')
        ADVANCE(254);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(273);
      if (lookahead == '|')
        ADVANCE(287);
      if (lookahead == '}')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '-')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '}')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND_DASH_RBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '|')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN_PIPE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 18:
      if (lookahead == 'U')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'I')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'L')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'T')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'I')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'N')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BUILTIN);
      END_STATE();
    case 25:
      if (lookahead == 'A')
        ADVANCE(26);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'C')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'H')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'A')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'L')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'L')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_CATCHALL);
      END_STATE();
    case 33:
      if (lookahead == 'M')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'P')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'I')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'L')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'E')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMPILE);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'c')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'h')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'a')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'P')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'r')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'a')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'g')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'm')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'a')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ':')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == ' ')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'n')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'd')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'f')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'i')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'n')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'd')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_catchall_pragma);
      END_STATE();
    case 63:
      if (lookahead == 'O')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'R')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'E')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'I')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'G')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'N')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_FOREIGN);
      END_STATE();
    case 70:
      if (lookahead == 'O')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'N')
        ADVANCE(72);
      if (lookahead == '_')
        ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == '_')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'T')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'E')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'R')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'M')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'I')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'N')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'A')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'T')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'I')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'N')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'G')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_NON_TERMINATING);
      END_STATE();
    case 85:
      if (lookahead == 'P')
        ADVANCE(86);
      if (lookahead == 'T')
        ADVANCE(102);
      END_STATE();
    case 86:
      if (lookahead == 'O')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'S')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'I')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'T')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'I')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'V')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'I')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'T')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'Y')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '_')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'C')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'H')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'E')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'C')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'K')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_NO_POSITIVITY_CHECK);
      END_STATE();
    case 102:
      if (lookahead == 'E')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'R')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'M')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'I')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'N')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'A')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'T')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'I')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'O')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'N')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '_')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'C')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'H')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'E')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'C')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'K')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_NO_TERMINATION_CHECK);
      END_STATE();
    case 119:
      if (lookahead == 'O')
        ADVANCE(120);
      if (lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 120:
      if (lookahead == 'L')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'A')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'R')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'I')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'T')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'Y')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POLARITY);
      END_STATE();
    case 127:
      if (lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'p')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Prop);
      END_STATE();
    case 130:
      if (lookahead == 'T')
        ADVANCE(131);
      if (lookahead == 'e')
        ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 'A')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'T')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'I')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'C')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STATIC);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 138:
      if (lookahead == 'E')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'R')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'M')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'I')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'N')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'A')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'T')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'I')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'N')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'G')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_TERMINATING);
      END_STATE();
    case 149:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'g')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'n')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == '_')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'm')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'p')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'o')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'r')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == '_')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'd')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'i')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'r')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == ':')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == ' ')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'd')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'e')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'f')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'n')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'd')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_begin_import_dir);
      END_STATE();
    case 178:
      if (lookahead == 'i')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'd')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'n')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'g')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'r')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'l')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == ':')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == ' ')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'u')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'd')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'f')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'i')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'n')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'd')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_literal);
      END_STATE();
    case 202:
      if (lookahead == 'o')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'd')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'u')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'l')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'e')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 208:
      if (lookahead == 'u')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'b')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'l')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'i')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'c')
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 214:
      if (lookahead == 'u')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'o')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 't')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == 'T')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'r')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'm')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      END_STATE();
    case 223:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'w')
        ADVANCE(231);
      END_STATE();
    case 225:
      if (lookahead == 'a')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'm')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'i')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'n')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'g')
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_renaming);
      END_STATE();
    case 231:
      if (lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'i')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 't')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == '_')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == ':')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == ' ')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'u')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'n')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'd')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'f')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'i')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'n')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'd')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_set_n);
      END_STATE();
    case 252:
      if (lookahead == 'o')
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(255);
      if (lookahead == 's')
        ADVANCE(261);
      END_STATE();
    case 255:
      if (lookahead == 'q')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'u')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'o')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_unquote);
      END_STATE();
    case 261:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'n')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'g')
        ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 265:
      if (lookahead == 'h')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(270);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'r')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 270:
      if (lookahead == 't')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'h')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(286);
      END_STATE();
    case 274:
      if (lookahead == '#')
        ADVANCE(275);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH_POUND);
      END_STATE();
    case 276:
      if (lookahead == '\n')
        ADVANCE(277);
      if (lookahead == '\r')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 277:
      if (lookahead == '-')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 278:
      if (lookahead == '}')
        ADVANCE(279);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '\n')
        ADVANCE(280);
      if (lookahead == '\r')
        ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 281:
      if (lookahead == '\n')
        ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '\n')
        ADVANCE(277);
      if (lookahead == '\r')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead == '}')
        ADVANCE(283);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 283:
      if (lookahead == '\n')
        ADVANCE(284);
      if (lookahead == '\r')
        ADVANCE(285);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-')
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 285:
      if (lookahead == '\n')
        ADVANCE(284);
      if (lookahead == '\r')
        ADVANCE(276);
      if (lookahead == '-')
        ADVANCE(282);
      if (lookahead != 0)
        ADVANCE(276);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_PIPE_RPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(316);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(292);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '@')
        ADVANCE(297);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name_at);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(9);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '@')
        ADVANCE(297);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(299);
      END_STATE();
    case 300:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name_at);
      END_STATE();
    case 303:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == '.')
        ADVANCE(13);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'o')
        ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'p')
        ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(316);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(301);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(304);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'i')
        ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'a')
        ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'l')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == ':')
        ADVANCE(327);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == ' ')
        ADVANCE(192);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'u')
        ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'o')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'T')
        ADVANCE(333);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'm')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(304);
      END_STATE();
    case 341:
      if (lookahead == ':')
        ADVANCE(342);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(304);
      END_STATE();
    case 342:
      if (lookahead == ' ')
        ADVANCE(242);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(304);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'q')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'u')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'o')
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(286);
      END_STATE();
    case 351:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(276);
      END_STATE();
    case 352:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(355);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 'r')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(352);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(355);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 'r')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'o')
        ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'd')
        ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'u')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'l')
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'w')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'i')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(371);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'r')
        ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'e')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 't')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 379:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(380);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '}')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(379);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(382);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(380);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(301);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 384:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(385);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(382);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(385);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 387:
      if (lookahead == '}')
        ADVANCE(290);
      END_STATE();
    case 388:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(389);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(390);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == 'w')
        ADVANCE(393);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(287);
      if (lookahead == '}')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        SKIP(388);
      END_STATE();
    case 393:
      if (lookahead == 'h')
        ADVANCE(266);
      END_STATE();
    case 394:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(395);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 'r')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(394);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(395);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 'r')
        ADVANCE(363);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 397:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(398);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(397);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(398);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'h')
        ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 401:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(402);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(401);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(402);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 404:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '}')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(404);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '>')
        ADVANCE(406);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 409:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(410);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(410);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 412:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(413);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(412);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(413);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 415:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(417);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(415);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(9);
      END_STATE();
    case 417:
      if (lookahead == 'n')
        SKIP(415);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(351);
      END_STATE();
    case 419:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(420);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(419);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(420);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')')
        ADVANCE(288);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 423:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(424);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(423);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(424);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(427);
      if (lookahead == '\\')
        ADVANCE(432);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(426);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(428);
      if (lookahead == '_')
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(428);
      END_STATE();
    case 430:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_')
        ADVANCE(430);
      if (lookahead == 'n')
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(427);
      if (lookahead == '\\')
        ADVANCE(432);
      if (lookahead == '_')
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(431);
      END_STATE();
    case 435:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == '\\')
        SKIP(436);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(435);
      END_STATE();
    case 436:
      if (lookahead == 'n')
        SKIP(435);
      END_STATE();
    case 437:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 440:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(441);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '}')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(441);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 443:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(444);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(443);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(444);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 446:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(447);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '}')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(446);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(447);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 449:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(450);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '}')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(449);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(305);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(450);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 452:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(453);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(452);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(453);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '|')
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 455:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(456);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(455);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(456);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 458:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(459);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(459);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 461:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(461);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(405);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 464:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(464);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(465);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 467:
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(468);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(467);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == ':')
        ADVANCE(353);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(468);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 470:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(306);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(471);
      if (lookahead == '_')
        ADVANCE(150);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '{')
        ADVANCE(350);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(470);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(300);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == '_')
        ADVANCE(303);
      if (lookahead == 'n')
        ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(305);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(293);
      if (lookahead == '.')
        ADVANCE(318);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '?')
        ADVANCE(308);
      if (lookahead == '@')
        ADVANCE(302);
      if (lookahead == 'P')
        ADVANCE(309);
      if (lookahead == 'S')
        ADVANCE(313);
      if (lookahead == '\\')
        ADVANCE(471);
      if (lookahead == '_')
        ADVANCE(319);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'q')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(343);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '|')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(305);
      END_STATE();
    case 473:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(474);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'r')
        ADVANCE(475);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(473);
      END_STATE();
    case 474:
      if (lookahead == 'n')
        SKIP(473);
      END_STATE();
    case 475:
      if (lookahead == 'e')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead == 'w')
        ADVANCE(231);
      END_STATE();
    case 477:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(478);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(393);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(477);
      END_STATE();
    case 478:
      if (lookahead == 'n')
        SKIP(477);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(479);
      END_STATE();
    case 480:
      if (lookahead == 'n')
        SKIP(479);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(482);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(265);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(481);
      END_STATE();
    case 482:
      if (lookahead == 'n')
        SKIP(481);
      END_STATE();
    case 483:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(484);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(393);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(483);
      END_STATE();
    case 484:
      if (lookahead == 'n')
        SKIP(483);
      END_STATE();
    case 485:
      if (lookahead == '-')
        ADVANCE(416);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == 'm')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(393);
      if (lookahead == '{')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(485);
      END_STATE();
    case 486:
      if (lookahead == 'n')
        SKIP(485);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 292},
  [2] = {.lex_state = 352},
  [3] = {.lex_state = 292},
  [4] = {.lex_state = 379},
  [5] = {.lex_state = 384},
  [6] = {.lex_state = 379},
  [7] = {.lex_state = 379},
  [8] = {.lex_state = 388},
  [9] = {.lex_state = 394},
  [10] = {.lex_state = 394},
  [11] = {.lex_state = 394},
  [12] = {.lex_state = 388},
  [13] = {.lex_state = 352},
  [14] = {.lex_state = 352},
  [15] = {.lex_state = 397},
  [16] = {.lex_state = 292},
  [17] = {.lex_state = 292},
  [18] = {.lex_state = 292},
  [19] = {.lex_state = 292},
  [20] = {.lex_state = 401},
  [21] = {.lex_state = 352},
  [22] = {.lex_state = 404, .external_lex_state = 2},
  [23] = {.lex_state = 292},
  [24] = {.lex_state = 292},
  [25] = {.lex_state = 388},
  [26] = {.lex_state = 379},
  [27] = {.lex_state = 352},
  [28] = {.lex_state = 384},
  [29] = {.lex_state = 379},
  [30] = {.lex_state = 379},
  [31] = {.lex_state = 388},
  [32] = {.lex_state = 388},
  [33] = {.lex_state = 388},
  [34] = {.lex_state = 388},
  [35] = {.lex_state = 388, .external_lex_state = 2},
  [36] = {.lex_state = 404, .external_lex_state = 2},
  [37] = {.lex_state = 404, .external_lex_state = 2},
  [38] = {.lex_state = 379},
  [39] = {.lex_state = 388, .external_lex_state = 2},
  [40] = {.lex_state = 292},
  [41] = {.lex_state = 409, .external_lex_state = 2},
  [42] = {.lex_state = 388, .external_lex_state = 2},
  [43] = {.lex_state = 412, .external_lex_state = 2},
  [44] = {.lex_state = 292},
  [45] = {.lex_state = 292},
  [46] = {.lex_state = 379},
  [47] = {.lex_state = 384},
  [48] = {.lex_state = 379},
  [49] = {.lex_state = 379},
  [50] = {.lex_state = 415},
  [51] = {.lex_state = 415},
  [52] = {.lex_state = 415},
  [53] = {.lex_state = 415},
  [54] = {.lex_state = 388, .external_lex_state = 2},
  [55] = {.lex_state = 412, .external_lex_state = 2},
  [56] = {.lex_state = 412, .external_lex_state = 2},
  [57] = {.lex_state = 379},
  [58] = {.lex_state = 292},
  [59] = {.lex_state = 409, .external_lex_state = 2},
  [60] = {.lex_state = 292},
  [61] = {.lex_state = 292},
  [62] = {.lex_state = 388},
  [63] = {.lex_state = 388},
  [64] = {.lex_state = 388, .external_lex_state = 2},
  [65] = {.lex_state = 379},
  [66] = {.lex_state = 292},
  [67] = {.lex_state = 409, .external_lex_state = 2},
  [68] = {.lex_state = 419, .external_lex_state = 2},
  [69] = {.lex_state = 292},
  [70] = {.lex_state = 292},
  [71] = {.lex_state = 379},
  [72] = {.lex_state = 384},
  [73] = {.lex_state = 379},
  [74] = {.lex_state = 379},
  [75] = {.lex_state = 388},
  [76] = {.lex_state = 388},
  [77] = {.lex_state = 388, .external_lex_state = 2},
  [78] = {.lex_state = 419, .external_lex_state = 2},
  [79] = {.lex_state = 419, .external_lex_state = 2},
  [80] = {.lex_state = 379},
  [81] = {.lex_state = 292},
  [82] = {.lex_state = 409, .external_lex_state = 2},
  [83] = {.lex_state = 292},
  [84] = {.lex_state = 292},
  [85] = {.lex_state = 423},
  [86] = {.lex_state = 397},
  [87] = {.lex_state = 292},
  [88] = {.lex_state = 379},
  [89] = {.lex_state = 426},
  [90] = {.lex_state = 435, .external_lex_state = 3},
  [91] = {.lex_state = 292},
  [92] = {.lex_state = 437},
  [93] = {.lex_state = 292},
  [94] = {.lex_state = 394},
  [95] = {.lex_state = 292},
  [96] = {.lex_state = 394},
  [97] = {.lex_state = 401},
  [98] = {.lex_state = 379},
  [99] = {.lex_state = 384},
  [100] = {.lex_state = 379},
  [101] = {.lex_state = 404, .external_lex_state = 2},
  [102] = {.lex_state = 379},
  [103] = {.lex_state = 384},
  [104] = {.lex_state = 379},
  [105] = {.lex_state = 292},
  [106] = {.lex_state = 292},
  [107] = {.lex_state = 292},
  [108] = {.lex_state = 440, .external_lex_state = 2},
  [109] = {.lex_state = 292},
  [110] = {.lex_state = 292},
  [111] = {.lex_state = 379},
  [112] = {.lex_state = 404, .external_lex_state = 2},
  [113] = {.lex_state = 384},
  [114] = {.lex_state = 379},
  [115] = {.lex_state = 379},
  [116] = {.lex_state = 388},
  [117] = {.lex_state = 388},
  [118] = {.lex_state = 440, .external_lex_state = 2},
  [119] = {.lex_state = 440, .external_lex_state = 2},
  [120] = {.lex_state = 409, .external_lex_state = 2},
  [121] = {.lex_state = 443, .external_lex_state = 2},
  [122] = {.lex_state = 292},
  [123] = {.lex_state = 292},
  [124] = {.lex_state = 379},
  [125] = {.lex_state = 384},
  [126] = {.lex_state = 379},
  [127] = {.lex_state = 379},
  [128] = {.lex_state = 415},
  [129] = {.lex_state = 415},
  [130] = {.lex_state = 443, .external_lex_state = 2},
  [131] = {.lex_state = 443, .external_lex_state = 2},
  [132] = {.lex_state = 409, .external_lex_state = 2},
  [133] = {.lex_state = 292},
  [134] = {.lex_state = 292},
  [135] = {.lex_state = 388},
  [136] = {.lex_state = 388},
  [137] = {.lex_state = 409, .external_lex_state = 2},
  [138] = {.lex_state = 388},
  [139] = {.lex_state = 352},
  [140] = {.lex_state = 379},
  [141] = {.lex_state = 388},
  [142] = {.lex_state = 446},
  [143] = {.lex_state = 292},
  [144] = {.lex_state = 379},
  [145] = {.lex_state = 384},
  [146] = {.lex_state = 379},
  [147] = {.lex_state = 379},
  [148] = {.lex_state = 388},
  [149] = {.lex_state = 446},
  [150] = {.lex_state = 446},
  [151] = {.lex_state = 401},
  [152] = {.lex_state = 388},
  [153] = {.lex_state = 409, .external_lex_state = 2},
  [154] = {.lex_state = 292},
  [155] = {.lex_state = 292},
  [156] = {.lex_state = 379},
  [157] = {.lex_state = 292},
  [158] = {.lex_state = 388, .external_lex_state = 2},
  [159] = {.lex_state = 379},
  [160] = {.lex_state = 384},
  [161] = {.lex_state = 379},
  [162] = {.lex_state = 412, .external_lex_state = 2},
  [163] = {.lex_state = 379},
  [164] = {.lex_state = 384},
  [165] = {.lex_state = 379},
  [166] = {.lex_state = 412, .external_lex_state = 2},
  [167] = {.lex_state = 388},
  [168] = {.lex_state = 415},
  [169] = {.lex_state = 388},
  [170] = {.lex_state = 388},
  [171] = {.lex_state = 352},
  [172] = {.lex_state = 379},
  [173] = {.lex_state = 415},
  [174] = {.lex_state = 449},
  [175] = {.lex_state = 292},
  [176] = {.lex_state = 379},
  [177] = {.lex_state = 384},
  [178] = {.lex_state = 379},
  [179] = {.lex_state = 379},
  [180] = {.lex_state = 415},
  [181] = {.lex_state = 449},
  [182] = {.lex_state = 449},
  [183] = {.lex_state = 401},
  [184] = {.lex_state = 415},
  [185] = {.lex_state = 379},
  [186] = {.lex_state = 292},
  [187] = {.lex_state = 401},
  [188] = {.lex_state = 379},
  [189] = {.lex_state = 384},
  [190] = {.lex_state = 379},
  [191] = {.lex_state = 419, .external_lex_state = 2},
  [192] = {.lex_state = 379},
  [193] = {.lex_state = 384},
  [194] = {.lex_state = 379},
  [195] = {.lex_state = 419, .external_lex_state = 2},
  [196] = {.lex_state = 388},
  [197] = {.lex_state = 415},
  [198] = {.lex_state = 388},
  [199] = {.lex_state = 388},
  [200] = {.lex_state = 379},
  [201] = {.lex_state = 452},
  [202] = {.lex_state = 292},
  [203] = {.lex_state = 379},
  [204] = {.lex_state = 384},
  [205] = {.lex_state = 379},
  [206] = {.lex_state = 379},
  [207] = {.lex_state = 452},
  [208] = {.lex_state = 452},
  [209] = {.lex_state = 401},
  [210] = {.lex_state = 455},
  [211] = {.lex_state = 292},
  [212] = {.lex_state = 379},
  [213] = {.lex_state = 384},
  [214] = {.lex_state = 379},
  [215] = {.lex_state = 379},
  [216] = {.lex_state = 423},
  [217] = {.lex_state = 423},
  [218] = {.lex_state = 423},
  [219] = {.lex_state = 455},
  [220] = {.lex_state = 455},
  [221] = {.lex_state = 292},
  [222] = {.lex_state = 401},
  [223] = {.lex_state = 458},
  [224] = {.lex_state = 292},
  [225] = {.lex_state = 379},
  [226] = {.lex_state = 384},
  [227] = {.lex_state = 379},
  [228] = {.lex_state = 379},
  [229] = {.lex_state = 397},
  [230] = {.lex_state = 397},
  [231] = {.lex_state = 397},
  [232] = {.lex_state = 458},
  [233] = {.lex_state = 458},
  [234] = {.lex_state = 292},
  [235] = {.lex_state = 401},
  [236] = {.lex_state = 397},
  [237] = {.lex_state = 461, .external_lex_state = 2},
  [238] = {.lex_state = 292},
  [239] = {.lex_state = 292},
  [240] = {.lex_state = 379},
  [241] = {.lex_state = 384},
  [242] = {.lex_state = 379},
  [243] = {.lex_state = 379},
  [244] = {.lex_state = 437},
  [245] = {.lex_state = 464},
  [246] = {.lex_state = 464},
  [247] = {.lex_state = 464},
  [248] = {.lex_state = 388, .external_lex_state = 2},
  [249] = {.lex_state = 461, .external_lex_state = 2},
  [250] = {.lex_state = 461, .external_lex_state = 2},
  [251] = {.lex_state = 379},
  [252] = {.lex_state = 292},
  [253] = {.lex_state = 409, .external_lex_state = 2},
  [254] = {.lex_state = 388},
  [255] = {.lex_state = 388},
  [256] = {.lex_state = 292, .external_lex_state = 4},
  [257] = {.lex_state = 292, .external_lex_state = 4},
  [258] = {.lex_state = 292},
  [259] = {.lex_state = 292},
  [260] = {.lex_state = 292},
  [261] = {.lex_state = 401},
  [262] = {.lex_state = 292},
  [263] = {.lex_state = 379},
  [264] = {.lex_state = 384},
  [265] = {.lex_state = 379},
  [266] = {.lex_state = 379},
  [267] = {.lex_state = 401},
  [268] = {.lex_state = 401},
  [269] = {.lex_state = 401},
  [270] = {.lex_state = 388},
  [271] = {.lex_state = 415},
  [272] = {.lex_state = 388},
  [273] = {.lex_state = 467},
  [274] = {.lex_state = 292},
  [275] = {.lex_state = 379},
  [276] = {.lex_state = 384},
  [277] = {.lex_state = 379},
  [278] = {.lex_state = 379},
  [279] = {.lex_state = 388},
  [280] = {.lex_state = 467},
  [281] = {.lex_state = 467},
  [282] = {.lex_state = 292},
  [283] = {.lex_state = 388},
  [284] = {.lex_state = 388},
  [285] = {.lex_state = 379},
  [286] = {.lex_state = 384},
  [287] = {.lex_state = 379},
  [288] = {.lex_state = 440, .external_lex_state = 2},
  [289] = {.lex_state = 379},
  [290] = {.lex_state = 384},
  [291] = {.lex_state = 379},
  [292] = {.lex_state = 440, .external_lex_state = 2},
  [293] = {.lex_state = 388},
  [294] = {.lex_state = 415},
  [295] = {.lex_state = 388},
  [296] = {.lex_state = 388},
  [297] = {.lex_state = 404, .external_lex_state = 2},
  [298] = {.lex_state = 379},
  [299] = {.lex_state = 379},
  [300] = {.lex_state = 384},
  [301] = {.lex_state = 379},
  [302] = {.lex_state = 443, .external_lex_state = 2},
  [303] = {.lex_state = 379},
  [304] = {.lex_state = 384},
  [305] = {.lex_state = 379},
  [306] = {.lex_state = 443, .external_lex_state = 2},
  [307] = {.lex_state = 388},
  [308] = {.lex_state = 415},
  [309] = {.lex_state = 388},
  [310] = {.lex_state = 388},
  [311] = {.lex_state = 404, .external_lex_state = 2},
  [312] = {.lex_state = 379},
  [313] = {.lex_state = 379},
  [314] = {.lex_state = 388},
  [315] = {.lex_state = 446},
  [316] = {.lex_state = 446},
  [317] = {.lex_state = 388},
  [318] = {.lex_state = 415},
  [319] = {.lex_state = 388},
  [320] = {.lex_state = 388},
  [321] = {.lex_state = 409, .external_lex_state = 2},
  [322] = {.lex_state = 292},
  [323] = {.lex_state = 379},
  [324] = {.lex_state = 384},
  [325] = {.lex_state = 379},
  [326] = {.lex_state = 379},
  [327] = {.lex_state = 409, .external_lex_state = 2},
  [328] = {.lex_state = 409, .external_lex_state = 2},
  [329] = {.lex_state = 388},
  [330] = {.lex_state = 388},
  [331] = {.lex_state = 388},
  [332] = {.lex_state = 412, .external_lex_state = 2},
  [333] = {.lex_state = 412, .external_lex_state = 2},
  [334] = {.lex_state = 415},
  [335] = {.lex_state = 449},
  [336] = {.lex_state = 449},
  [337] = {.lex_state = 388},
  [338] = {.lex_state = 415},
  [339] = {.lex_state = 388},
  [340] = {.lex_state = 388},
  [341] = {.lex_state = 419, .external_lex_state = 2},
  [342] = {.lex_state = 419, .external_lex_state = 2},
  [343] = {.lex_state = 452},
  [344] = {.lex_state = 452},
  [345] = {.lex_state = 388},
  [346] = {.lex_state = 415},
  [347] = {.lex_state = 388},
  [348] = {.lex_state = 388},
  [349] = {.lex_state = 455},
  [350] = {.lex_state = 455},
  [351] = {.lex_state = 388},
  [352] = {.lex_state = 415},
  [353] = {.lex_state = 388},
  [354] = {.lex_state = 388},
  [355] = {.lex_state = 423},
  [356] = {.lex_state = 423},
  [357] = {.lex_state = 458},
  [358] = {.lex_state = 458},
  [359] = {.lex_state = 388},
  [360] = {.lex_state = 415},
  [361] = {.lex_state = 388},
  [362] = {.lex_state = 388},
  [363] = {.lex_state = 397},
  [364] = {.lex_state = 397},
  [365] = {.lex_state = 379},
  [366] = {.lex_state = 384},
  [367] = {.lex_state = 379},
  [368] = {.lex_state = 461, .external_lex_state = 2},
  [369] = {.lex_state = 379},
  [370] = {.lex_state = 384},
  [371] = {.lex_state = 379},
  [372] = {.lex_state = 461, .external_lex_state = 2},
  [373] = {.lex_state = 388},
  [374] = {.lex_state = 415},
  [375] = {.lex_state = 388},
  [376] = {.lex_state = 388},
  [377] = {.lex_state = 379},
  [378] = {.lex_state = 437},
  [379] = {.lex_state = 470},
  [380] = {.lex_state = 292},
  [381] = {.lex_state = 379},
  [382] = {.lex_state = 384},
  [383] = {.lex_state = 379},
  [384] = {.lex_state = 379},
  [385] = {.lex_state = 464},
  [386] = {.lex_state = 470},
  [387] = {.lex_state = 470},
  [388] = {.lex_state = 401},
  [389] = {.lex_state = 464},
  [390] = {.lex_state = 435, .external_lex_state = 3},
  [391] = {.lex_state = 292},
  [392] = {.lex_state = 352, .external_lex_state = 5},
  [393] = {.lex_state = 292},
  [394] = {.lex_state = 379},
  [395] = {.lex_state = 384},
  [396] = {.lex_state = 379},
  [397] = {.lex_state = 379},
  [398] = {.lex_state = 292},
  [399] = {.lex_state = 473, .external_lex_state = 5},
  [400] = {.lex_state = 473, .external_lex_state = 5},
  [401] = {.lex_state = 473, .external_lex_state = 5},
  [402] = {.lex_state = 352, .external_lex_state = 5},
  [403] = {.lex_state = 352, .external_lex_state = 5},
  [404] = {.lex_state = 477, .external_lex_state = 5},
  [405] = {.lex_state = 479, .external_lex_state = 5},
  [406] = {.lex_state = 479, .external_lex_state = 5},
  [407] = {.lex_state = 435, .external_lex_state = 4},
  [408] = {.lex_state = 292},
  [409] = {.lex_state = 401},
  [410] = {.lex_state = 401},
  [411] = {.lex_state = 401},
  [412] = {.lex_state = 388},
  [413] = {.lex_state = 415},
  [414] = {.lex_state = 388},
  [415] = {.lex_state = 388},
  [416] = {.lex_state = 379},
  [417] = {.lex_state = 379},
  [418] = {.lex_state = 379},
  [419] = {.lex_state = 467},
  [420] = {.lex_state = 467},
  [421] = {.lex_state = 388},
  [422] = {.lex_state = 415},
  [423] = {.lex_state = 388},
  [424] = {.lex_state = 388},
  [425] = {.lex_state = 292},
  [426] = {.lex_state = 440, .external_lex_state = 2},
  [427] = {.lex_state = 440, .external_lex_state = 2},
  [428] = {.lex_state = 388},
  [429] = {.lex_state = 443, .external_lex_state = 2},
  [430] = {.lex_state = 443, .external_lex_state = 2},
  [431] = {.lex_state = 415},
  [432] = {.lex_state = 388},
  [433] = {.lex_state = 446},
  [434] = {.lex_state = 446},
  [435] = {.lex_state = 409, .external_lex_state = 2},
  [436] = {.lex_state = 409, .external_lex_state = 2},
  [437] = {.lex_state = 388},
  [438] = {.lex_state = 415},
  [439] = {.lex_state = 388},
  [440] = {.lex_state = 388},
  [441] = {.lex_state = 449},
  [442] = {.lex_state = 449},
  [443] = {.lex_state = 452},
  [444] = {.lex_state = 452},
  [445] = {.lex_state = 455},
  [446] = {.lex_state = 455},
  [447] = {.lex_state = 458},
  [448] = {.lex_state = 458},
  [449] = {.lex_state = 461, .external_lex_state = 2},
  [450] = {.lex_state = 461, .external_lex_state = 2},
  [451] = {.lex_state = 437},
  [452] = {.lex_state = 470},
  [453] = {.lex_state = 470},
  [454] = {.lex_state = 388},
  [455] = {.lex_state = 415},
  [456] = {.lex_state = 388},
  [457] = {.lex_state = 388},
  [458] = {.lex_state = 292},
  [459] = {.lex_state = 352, .external_lex_state = 5},
  [460] = {.lex_state = 352, .external_lex_state = 5},
  [461] = {.lex_state = 388},
  [462] = {.lex_state = 415},
  [463] = {.lex_state = 388},
  [464] = {.lex_state = 388},
  [465] = {.lex_state = 292},
  [466] = {.lex_state = 292},
  [467] = {.lex_state = 481, .external_lex_state = 5},
  [468] = {.lex_state = 477, .external_lex_state = 5},
  [469] = {.lex_state = 379},
  [470] = {.lex_state = 426},
  [471] = {.lex_state = 435, .external_lex_state = 3},
  [472] = {.lex_state = 479, .external_lex_state = 5},
  [473] = {.lex_state = 483, .external_lex_state = 5},
  [474] = {.lex_state = 292},
  [475] = {.lex_state = 292},
  [476] = {.lex_state = 479, .external_lex_state = 5},
  [477] = {.lex_state = 292},
  [478] = {.lex_state = 473, .external_lex_state = 5},
  [479] = {.lex_state = 473, .external_lex_state = 5},
  [480] = {.lex_state = 401},
  [481] = {.lex_state = 401},
  [482] = {.lex_state = 388},
  [483] = {.lex_state = 415},
  [484] = {.lex_state = 388},
  [485] = {.lex_state = 467},
  [486] = {.lex_state = 467},
  [487] = {.lex_state = 292},
  [488] = {.lex_state = 292},
  [489] = {.lex_state = 379},
  [490] = {.lex_state = 384},
  [491] = {.lex_state = 379},
  [492] = {.lex_state = 379},
  [493] = {.lex_state = 292},
  [494] = {.lex_state = 292},
  [495] = {.lex_state = 388, .external_lex_state = 2},
  [496] = {.lex_state = 409, .external_lex_state = 2},
  [497] = {.lex_state = 409, .external_lex_state = 2},
  [498] = {.lex_state = 470},
  [499] = {.lex_state = 470},
  [500] = {.lex_state = 352, .external_lex_state = 5},
  [501] = {.lex_state = 352, .external_lex_state = 5},
  [502] = {.lex_state = 455, .external_lex_state = 5},
  [503] = {.lex_state = 292},
  [504] = {.lex_state = 379},
  [505] = {.lex_state = 384},
  [506] = {.lex_state = 379},
  [507] = {.lex_state = 379},
  [508] = {.lex_state = 481, .external_lex_state = 5},
  [509] = {.lex_state = 481, .external_lex_state = 5},
  [510] = {.lex_state = 481, .external_lex_state = 5},
  [511] = {.lex_state = 455, .external_lex_state = 5},
  [512] = {.lex_state = 455, .external_lex_state = 5},
  [513] = {.lex_state = 292},
  [514] = {.lex_state = 401},
  [515] = {.lex_state = 458, .external_lex_state = 5},
  [516] = {.lex_state = 292},
  [517] = {.lex_state = 379},
  [518] = {.lex_state = 384},
  [519] = {.lex_state = 379},
  [520] = {.lex_state = 379},
  [521] = {.lex_state = 477, .external_lex_state = 5},
  [522] = {.lex_state = 477, .external_lex_state = 5},
  [523] = {.lex_state = 477, .external_lex_state = 5},
  [524] = {.lex_state = 458, .external_lex_state = 5},
  [525] = {.lex_state = 458, .external_lex_state = 5},
  [526] = {.lex_state = 292},
  [527] = {.lex_state = 401},
  [528] = {.lex_state = 477, .external_lex_state = 5},
  [529] = {.lex_state = 461, .external_lex_state = 6},
  [530] = {.lex_state = 292},
  [531] = {.lex_state = 292},
  [532] = {.lex_state = 379},
  [533] = {.lex_state = 384},
  [534] = {.lex_state = 379},
  [535] = {.lex_state = 379},
  [536] = {.lex_state = 483, .external_lex_state = 5},
  [537] = {.lex_state = 485, .external_lex_state = 5},
  [538] = {.lex_state = 485, .external_lex_state = 5},
  [539] = {.lex_state = 485, .external_lex_state = 5},
  [540] = {.lex_state = 388, .external_lex_state = 2},
  [541] = {.lex_state = 461, .external_lex_state = 6},
  [542] = {.lex_state = 461, .external_lex_state = 6},
  [543] = {.lex_state = 379},
  [544] = {.lex_state = 292},
  [545] = {.lex_state = 409, .external_lex_state = 2},
  [546] = {.lex_state = 388},
  [547] = {.lex_state = 292, .external_lex_state = 4},
  [548] = {.lex_state = 479, .external_lex_state = 5},
  [549] = {.lex_state = 479, .external_lex_state = 5},
  [550] = {.lex_state = 479, .external_lex_state = 5},
  [551] = {.lex_state = 479, .external_lex_state = 5},
  [552] = {.lex_state = 479, .external_lex_state = 5},
  [553] = {.lex_state = 388, .external_lex_state = 2},
  [554] = {.lex_state = 292},
  [555] = {.lex_state = 292},
  [556] = {.lex_state = 388},
  [557] = {.lex_state = 415},
  [558] = {.lex_state = 388},
  [559] = {.lex_state = 388},
  [560] = {.lex_state = 455, .external_lex_state = 5},
  [561] = {.lex_state = 455, .external_lex_state = 5},
  [562] = {.lex_state = 388},
  [563] = {.lex_state = 415},
  [564] = {.lex_state = 388},
  [565] = {.lex_state = 388},
  [566] = {.lex_state = 481, .external_lex_state = 5},
  [567] = {.lex_state = 481, .external_lex_state = 5},
  [568] = {.lex_state = 458, .external_lex_state = 5},
  [569] = {.lex_state = 458, .external_lex_state = 5},
  [570] = {.lex_state = 388},
  [571] = {.lex_state = 415},
  [572] = {.lex_state = 388},
  [573] = {.lex_state = 388},
  [574] = {.lex_state = 477, .external_lex_state = 5},
  [575] = {.lex_state = 477, .external_lex_state = 5},
  [576] = {.lex_state = 379},
  [577] = {.lex_state = 384},
  [578] = {.lex_state = 379},
  [579] = {.lex_state = 461, .external_lex_state = 6},
  [580] = {.lex_state = 379},
  [581] = {.lex_state = 384},
  [582] = {.lex_state = 379},
  [583] = {.lex_state = 461, .external_lex_state = 6},
  [584] = {.lex_state = 388},
  [585] = {.lex_state = 415},
  [586] = {.lex_state = 388},
  [587] = {.lex_state = 388},
  [588] = {.lex_state = 379},
  [589] = {.lex_state = 483, .external_lex_state = 5},
  [590] = {.lex_state = 470, .external_lex_state = 5},
  [591] = {.lex_state = 292},
  [592] = {.lex_state = 379},
  [593] = {.lex_state = 384},
  [594] = {.lex_state = 379},
  [595] = {.lex_state = 379},
  [596] = {.lex_state = 485, .external_lex_state = 5},
  [597] = {.lex_state = 470, .external_lex_state = 5},
  [598] = {.lex_state = 470, .external_lex_state = 5},
  [599] = {.lex_state = 401},
  [600] = {.lex_state = 485, .external_lex_state = 5},
  [601] = {.lex_state = 435, .external_lex_state = 3},
  [602] = {.lex_state = 479, .external_lex_state = 5},
  [603] = {.lex_state = 479, .external_lex_state = 5},
  [604] = {.lex_state = 435, .external_lex_state = 4},
  [605] = {.lex_state = 292},
  [606] = {.lex_state = 292},
  [607] = {.lex_state = 455, .external_lex_state = 5},
  [608] = {.lex_state = 455, .external_lex_state = 5},
  [609] = {.lex_state = 458, .external_lex_state = 5},
  [610] = {.lex_state = 458, .external_lex_state = 5},
  [611] = {.lex_state = 461, .external_lex_state = 6},
  [612] = {.lex_state = 461, .external_lex_state = 6},
  [613] = {.lex_state = 483, .external_lex_state = 5},
  [614] = {.lex_state = 470, .external_lex_state = 5},
  [615] = {.lex_state = 470, .external_lex_state = 5},
  [616] = {.lex_state = 388},
  [617] = {.lex_state = 415},
  [618] = {.lex_state = 388},
  [619] = {.lex_state = 388},
  [620] = {.lex_state = 479, .external_lex_state = 5},
  [621] = {.lex_state = 479, .external_lex_state = 5},
  [622] = {.lex_state = 470, .external_lex_state = 5},
  [623] = {.lex_state = 470, .external_lex_state = 5},
};

enum {
  ts_external_token__layout_semicolon,
  ts_external_token__layout_open_brace,
  ts_external_token__layout_close_brace,
  ts_external_token_DASH_GT,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__layout_semicolon] = sym__layout_semicolon,
  [ts_external_token__layout_open_brace] = sym__layout_open_brace,
  [ts_external_token__layout_close_brace] = sym__layout_close_brace,
  [ts_external_token_DASH_GT] = anon_sym_DASH_GT,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_open_brace] = true,
    [ts_external_token__layout_close_brace] = true,
    [ts_external_token_DASH_GT] = true,
  },
  [2] = {
    [ts_external_token_DASH_GT] = true,
  },
  [3] = {
    [ts_external_token__layout_open_brace] = true,
  },
  [4] = {
    [ts_external_token__layout_close_brace] = true,
  },
  [5] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_close_brace] = true,
  },
  [6] = {
    [ts_external_token__layout_semicolon] = true,
    [ts_external_token__layout_close_brace] = true,
    [ts_external_token_DASH_GT] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__layout_semicolon] = ACTIONS(1),
    [sym__layout_open_brace] = ACTIONS(1),
    [sym__layout_close_brace] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_int] = ACTIONS(3),
    [sym_literal] = ACTIONS(1),
    [sym_set_n] = ACTIONS(1),
    [sym_begin_import_dir] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE_DASH_POUND] = ACTIONS(1),
    [anon_sym_POUND_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_BUILTIN] = ACTIONS(1),
    [anon_sym_CATCHALL] = ACTIONS(1),
    [anon_sym_COMPILE] = ACTIONS(1),
    [anon_sym_FOREIGN] = ACTIONS(1),
    [anon_sym_NO_POSITIVITY_CHECK] = ACTIONS(1),
    [anon_sym_NO_TERMINATION_CHECK] = ACTIONS(1),
    [anon_sym_TERMINATING] = ACTIONS(1),
    [anon_sym_NON_TERMINATING] = ACTIONS(1),
    [anon_sym_POLARITY] = ACTIONS(1),
    [anon_sym_STATIC] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_Prop] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(3),
    [anon_sym_quoteTerm] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_catchall_pragma] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_renaming] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(8),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(11),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(13),
    [sym__atomic_expr_curly] = STATE(14),
    [sym__atomic_expr_no_curly] = STATE(14),
    [sym_lhs] = STATE(15),
    [sym__declaration] = STATE(16),
    [sym_function_clause] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(8),
    [sym_literal] = ACTIONS(10),
    [sym_set_n] = ACTIONS(10),
    [sym_name_at] = ACTIONS(12),
    [sym_qualified_name] = ACTIONS(10),
    [anon_sym__] = ACTIONS(10),
    [anon_sym_DOT] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_Prop] = ACTIONS(10),
    [anon_sym_Set] = ACTIONS(10),
    [anon_sym_quote] = ACTIONS(10),
    [anon_sym_quoteTerm] = ACTIONS(10),
    [anon_sym_unquote] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LPAREN_PIPE] = ACTIONS(22),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(10),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_rewrite] = ACTIONS(24),
    [anon_sym_with] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [3] = {
    [sym_atomic_expr] = STATE(21),
    [sym__atomic_expr_curly] = STATE(14),
    [sym__atomic_expr_no_curly] = STATE(14),
    [sym_literal] = ACTIONS(10),
    [sym_set_n] = ACTIONS(10),
    [sym_name_at] = ACTIONS(12),
    [sym_qualified_name] = ACTIONS(10),
    [anon_sym__] = ACTIONS(10),
    [anon_sym_DOT] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_Prop] = ACTIONS(10),
    [anon_sym_Set] = ACTIONS(10),
    [anon_sym_quote] = ACTIONS(10),
    [anon_sym_quoteTerm] = ACTIONS(10),
    [anon_sym_unquote] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LPAREN_PIPE] = ACTIONS(22),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(10),
  },
  [4] = {
    [sym_expr] = STATE(31),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [5] = {
    [sym_expr] = STATE(50),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(54),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [6] = {
    [sym_expr] = STATE(62),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [7] = {
    [sym_expr] = STATE(75),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(80),
  },
  [9] = {
    [sym_rewrite_equations] = STATE(85),
    [sym_with_expressions] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_literal] = ACTIONS(82),
    [sym_set_n] = ACTIONS(82),
    [sym_name_at] = ACTIONS(82),
    [sym_qualified_name] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(82),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_Prop] = ACTIONS(82),
    [anon_sym_Set] = ACTIONS(82),
    [anon_sym_quote] = ACTIONS(82),
    [anon_sym_quoteTerm] = ACTIONS(82),
    [anon_sym_unquote] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_LPAREN_PIPE] = ACTIONS(82),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_module] = ACTIONS(82),
    [anon_sym_rewrite] = ACTIONS(84),
    [anon_sym_with] = ACTIONS(86),
    [anon_sym_where] = ACTIONS(82),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_literal] = ACTIONS(88),
    [sym_set_n] = ACTIONS(88),
    [sym_name_at] = ACTIONS(88),
    [sym_qualified_name] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_Prop] = ACTIONS(88),
    [anon_sym_Set] = ACTIONS(88),
    [anon_sym_quote] = ACTIONS(88),
    [anon_sym_quoteTerm] = ACTIONS(88),
    [anon_sym_unquote] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LPAREN_PIPE] = ACTIONS(88),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_rewrite] = ACTIONS(88),
    [anon_sym_with] = ACTIONS(88),
    [anon_sym_where] = ACTIONS(88),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_literal] = ACTIONS(90),
    [sym_set_n] = ACTIONS(90),
    [sym_name_at] = ACTIONS(90),
    [sym_qualified_name] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_Prop] = ACTIONS(90),
    [anon_sym_Set] = ACTIONS(90),
    [anon_sym_quote] = ACTIONS(90),
    [anon_sym_quoteTerm] = ACTIONS(90),
    [anon_sym_unquote] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_module] = ACTIONS(90),
    [anon_sym_rewrite] = ACTIONS(90),
    [anon_sym_with] = ACTIONS(90),
    [anon_sym_where] = ACTIONS(90),
  },
  [12] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_rewrite] = ACTIONS(94),
    [anon_sym_with] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_rewrite] = ACTIONS(98),
    [anon_sym_with] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [15] = {
    [sym_where_clause] = STATE(91),
    [sym_rhs] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_literal] = ACTIONS(100),
    [sym_set_n] = ACTIONS(100),
    [sym_name_at] = ACTIONS(100),
    [sym_qualified_name] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(100),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_Prop] = ACTIONS(100),
    [anon_sym_Set] = ACTIONS(100),
    [anon_sym_quote] = ACTIONS(100),
    [anon_sym_quoteTerm] = ACTIONS(100),
    [anon_sym_unquote] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_LPAREN_PIPE] = ACTIONS(100),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(106),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_literal] = ACTIONS(108),
    [sym_set_n] = ACTIONS(108),
    [sym_name_at] = ACTIONS(108),
    [sym_qualified_name] = ACTIONS(108),
    [anon_sym__] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(108),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_Prop] = ACTIONS(108),
    [anon_sym_Set] = ACTIONS(108),
    [anon_sym_quote] = ACTIONS(108),
    [anon_sym_quoteTerm] = ACTIONS(108),
    [anon_sym_unquote] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_LPAREN_PIPE] = ACTIONS(108),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(108),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_literal] = ACTIONS(110),
    [sym_set_n] = ACTIONS(110),
    [sym_name_at] = ACTIONS(110),
    [sym_qualified_name] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(110),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_Prop] = ACTIONS(110),
    [anon_sym_Set] = ACTIONS(110),
    [anon_sym_quote] = ACTIONS(110),
    [anon_sym_quoteTerm] = ACTIONS(110),
    [anon_sym_unquote] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_LPAREN_PIPE] = ACTIONS(110),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(110),
  },
  [18] = {
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(11),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(13),
    [sym__atomic_expr_curly] = STATE(14),
    [sym__atomic_expr_no_curly] = STATE(14),
    [sym_lhs] = STATE(15),
    [sym__declaration] = STATE(16),
    [sym_function_clause] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(93),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_literal] = ACTIONS(10),
    [sym_set_n] = ACTIONS(10),
    [sym_name_at] = ACTIONS(12),
    [sym_qualified_name] = ACTIONS(10),
    [anon_sym__] = ACTIONS(10),
    [anon_sym_DOT] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_Prop] = ACTIONS(10),
    [anon_sym_Set] = ACTIONS(10),
    [anon_sym_quote] = ACTIONS(10),
    [anon_sym_quoteTerm] = ACTIONS(10),
    [anon_sym_unquote] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LPAREN_PIPE] = ACTIONS(22),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(10),
  },
  [19] = {
    [sym__application] = STATE(94),
    [sym__expr2] = STATE(11),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(13),
    [sym__atomic_expr_curly] = STATE(14),
    [sym__atomic_expr_no_curly] = STATE(14),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(20),
    [sym_literal] = ACTIONS(10),
    [sym_set_n] = ACTIONS(10),
    [sym_name_at] = ACTIONS(12),
    [sym_qualified_name] = ACTIONS(10),
    [anon_sym__] = ACTIONS(10),
    [anon_sym_DOT] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_Prop] = ACTIONS(10),
    [anon_sym_Set] = ACTIONS(10),
    [anon_sym_quote] = ACTIONS(10),
    [anon_sym_quoteTerm] = ACTIONS(10),
    [anon_sym_unquote] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LPAREN_PIPE] = ACTIONS(22),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(10),
  },
  [20] = {
    [sym__expr2] = STATE(96),
    [sym_atomic_expr] = STATE(13),
    [sym__atomic_expr_curly] = STATE(14),
    [sym__atomic_expr_no_curly] = STATE(14),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(10),
    [sym_set_n] = ACTIONS(10),
    [sym_name_at] = ACTIONS(12),
    [sym_qualified_name] = ACTIONS(10),
    [anon_sym__] = ACTIONS(10),
    [anon_sym_DOT] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(10),
    [anon_sym_Prop] = ACTIONS(10),
    [anon_sym_Set] = ACTIONS(10),
    [anon_sym_quote] = ACTIONS(10),
    [anon_sym_quoteTerm] = ACTIONS(10),
    [anon_sym_unquote] = ACTIONS(10),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_LPAREN_PIPE] = ACTIONS(22),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(10),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_rewrite] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [22] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [23] = {
    [sym_atomic_expr] = STATE(101),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(120),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [24] = {
    [sym_atomic_expr] = STATE(101),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(126),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [25] = {
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(132),
    [sym_comment] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(134),
  },
  [26] = {
    [sym_expr] = STATE(116),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_rewrite] = ACTIONS(152),
    [anon_sym_with] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [28] = {
    [sym_expr] = STATE(128),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [29] = {
    [sym_expr] = STATE(135),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [30] = {
    [sym_expr] = STATE(138),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(174),
    [sym_comment] = ACTIONS(80),
  },
  [32] = {
    [anon_sym_RBRACE] = ACTIONS(176),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(178),
  },
  [33] = {
    [anon_sym_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PIPE_RPAREN] = ACTIONS(180),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(182),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_PIPE_RPAREN] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
  },
  [35] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [36] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [37] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [38] = {
    [sym_expr] = STATE(141),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(184),
    [anon_sym_DOT_DOT] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
  },
  [40] = {
    [sym__application] = STATE(148),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(149),
    [sym__atomic_expr_curly] = STATE(150),
    [sym__atomic_expr_no_curly] = STATE(150),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(151),
    [sym_literal] = ACTIONS(188),
    [sym_set_n] = ACTIONS(188),
    [sym_name_at] = ACTIONS(190),
    [sym_qualified_name] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_Prop] = ACTIONS(188),
    [anon_sym_Set] = ACTIONS(188),
    [anon_sym_quote] = ACTIONS(188),
    [anon_sym_quoteTerm] = ACTIONS(188),
    [anon_sym_unquote] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_PIPE] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [41] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(120),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [42] = {
    [sym_typed_bindings] = STATE(39),
    [aux_sym_tele_arrow_repeat1] = STATE(158),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_DOT_DOT] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(206),
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
  },
  [43] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [44] = {
    [sym_atomic_expr] = STATE(162),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(214),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [45] = {
    [sym_atomic_expr] = STATE(162),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(220),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [46] = {
    [sym_expr] = STATE(167),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [47] = {
    [sym_expr] = STATE(168),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(226),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [48] = {
    [sym_expr] = STATE(169),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [49] = {
    [sym_expr] = STATE(170),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [50] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(228),
    [sym_comment] = ACTIONS(80),
  },
  [51] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(176),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(230),
  },
  [52] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
  },
  [53] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(182),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
  },
  [54] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [55] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [56] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [57] = {
    [sym_expr] = STATE(173),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [58] = {
    [sym__application] = STATE(180),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(181),
    [sym__atomic_expr_curly] = STATE(182),
    [sym__atomic_expr_no_curly] = STATE(182),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(183),
    [sym_literal] = ACTIONS(232),
    [sym_set_n] = ACTIONS(232),
    [sym_name_at] = ACTIONS(234),
    [sym_qualified_name] = ACTIONS(232),
    [anon_sym__] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(238),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(232),
    [anon_sym_Prop] = ACTIONS(232),
    [anon_sym_Set] = ACTIONS(232),
    [anon_sym_quote] = ACTIONS(232),
    [anon_sym_quoteTerm] = ACTIONS(232),
    [anon_sym_unquote] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LPAREN_PIPE] = ACTIONS(242),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(232),
  },
  [59] = {
    [sym__expr2] = STATE(184),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(214),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [60] = {
    [sym_atomic_expr] = STATE(101),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(120),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [61] = {
    [sym_atomic_expr] = STATE(101),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(126),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [62] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(228),
  },
  [63] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(176),
  },
  [64] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [65] = {
    [sym_expr] = STATE(141),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [66] = {
    [sym__application] = STATE(148),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(149),
    [sym__atomic_expr_curly] = STATE(150),
    [sym__atomic_expr_no_curly] = STATE(150),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(187),
    [sym_literal] = ACTIONS(188),
    [sym_set_n] = ACTIONS(188),
    [sym_name_at] = ACTIONS(246),
    [sym_qualified_name] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_Prop] = ACTIONS(188),
    [anon_sym_Set] = ACTIONS(188),
    [anon_sym_quote] = ACTIONS(188),
    [anon_sym_quoteTerm] = ACTIONS(188),
    [anon_sym_unquote] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_PIPE] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [67] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(120),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [68] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_PIPE_RPAREN] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [69] = {
    [sym_atomic_expr] = STATE(191),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(250),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [70] = {
    [sym_atomic_expr] = STATE(191),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [71] = {
    [sym_expr] = STATE(196),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [72] = {
    [sym_expr] = STATE(197),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(262),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [73] = {
    [sym_expr] = STATE(198),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [74] = {
    [sym_expr] = STATE(199),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [75] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(228),
  },
  [76] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_PIPE_RPAREN] = ACTIONS(176),
  },
  [77] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [78] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_PIPE_RPAREN] = ACTIONS(94),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [79] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_PIPE_RPAREN] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [80] = {
    [sym_expr] = STATE(141),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [81] = {
    [sym__application] = STATE(148),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(207),
    [sym__atomic_expr_curly] = STATE(208),
    [sym__atomic_expr_no_curly] = STATE(208),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(209),
    [sym_literal] = ACTIONS(266),
    [sym_set_n] = ACTIONS(266),
    [sym_name_at] = ACTIONS(268),
    [sym_qualified_name] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(272),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_Prop] = ACTIONS(266),
    [anon_sym_Set] = ACTIONS(266),
    [anon_sym_quote] = ACTIONS(266),
    [anon_sym_quoteTerm] = ACTIONS(266),
    [anon_sym_unquote] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_LPAREN_PIPE] = ACTIONS(276),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(266),
  },
  [82] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(250),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [83] = {
    [sym__expr1] = STATE(216),
    [sym__application] = STATE(217),
    [sym__expr2] = STATE(218),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(219),
    [sym__atomic_expr_curly] = STATE(220),
    [sym__atomic_expr_no_curly] = STATE(220),
    [aux_sym__expr1_repeat1] = STATE(221),
    [aux_sym__application_repeat1] = STATE(222),
    [sym_literal] = ACTIONS(278),
    [sym_set_n] = ACTIONS(278),
    [sym_name_at] = ACTIONS(280),
    [sym_qualified_name] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(284),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_Prop] = ACTIONS(278),
    [anon_sym_Set] = ACTIONS(278),
    [anon_sym_quote] = ACTIONS(278),
    [anon_sym_quoteTerm] = ACTIONS(278),
    [anon_sym_unquote] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_LPAREN_PIPE] = ACTIONS(288),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(278),
  },
  [84] = {
    [sym__expr1] = STATE(229),
    [sym__application] = STATE(230),
    [sym__expr2] = STATE(231),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(232),
    [sym__atomic_expr_curly] = STATE(233),
    [sym__atomic_expr_no_curly] = STATE(233),
    [aux_sym__expr1_repeat1] = STATE(234),
    [aux_sym__application_repeat1] = STATE(235),
    [sym_literal] = ACTIONS(290),
    [sym_set_n] = ACTIONS(290),
    [sym_name_at] = ACTIONS(292),
    [sym_qualified_name] = ACTIONS(290),
    [anon_sym__] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_Prop] = ACTIONS(290),
    [anon_sym_Set] = ACTIONS(290),
    [anon_sym_quote] = ACTIONS(290),
    [anon_sym_quoteTerm] = ACTIONS(290),
    [anon_sym_unquote] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LPAREN_PIPE] = ACTIONS(300),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(290),
  },
  [85] = {
    [sym_with_expressions] = STATE(236),
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_literal] = ACTIONS(302),
    [sym_set_n] = ACTIONS(302),
    [sym_name_at] = ACTIONS(302),
    [sym_qualified_name] = ACTIONS(302),
    [anon_sym__] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_QMARK] = ACTIONS(302),
    [anon_sym_Prop] = ACTIONS(302),
    [anon_sym_Set] = ACTIONS(302),
    [anon_sym_quote] = ACTIONS(302),
    [anon_sym_quoteTerm] = ACTIONS(302),
    [anon_sym_unquote] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LPAREN_PIPE] = ACTIONS(302),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_with] = ACTIONS(86),
    [anon_sym_where] = ACTIONS(302),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym_literal] = ACTIONS(302),
    [sym_set_n] = ACTIONS(302),
    [sym_name_at] = ACTIONS(302),
    [sym_qualified_name] = ACTIONS(302),
    [anon_sym__] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(302),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(302),
    [anon_sym_QMARK] = ACTIONS(302),
    [anon_sym_Prop] = ACTIONS(302),
    [anon_sym_Set] = ACTIONS(302),
    [anon_sym_quote] = ACTIONS(302),
    [anon_sym_quoteTerm] = ACTIONS(302),
    [anon_sym_unquote] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_LPAREN_PIPE] = ACTIONS(302),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(302),
    [anon_sym_COLON] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_where] = ACTIONS(302),
  },
  [87] = {
    [sym_literal] = ACTIONS(304),
    [sym_set_n] = ACTIONS(304),
    [sym_name_at] = ACTIONS(304),
    [sym_qualified_name] = ACTIONS(304),
    [anon_sym__] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(304),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(304),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(304),
    [anon_sym_Prop] = ACTIONS(304),
    [anon_sym_Set] = ACTIONS(304),
    [anon_sym_quote] = ACTIONS(304),
    [anon_sym_quoteTerm] = ACTIONS(304),
    [anon_sym_unquote] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_LPAREN_PIPE] = ACTIONS(304),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(304),
  },
  [88] = {
    [sym_expr] = STATE(244),
    [sym__expr1] = STATE(245),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(247),
    [sym__atomic_exprs1] = STATE(248),
    [sym_atomic_expr] = STATE(249),
    [sym__atomic_expr_curly] = STATE(250),
    [sym__atomic_expr_no_curly] = STATE(250),
    [sym_tele_arrow] = STATE(251),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(306),
    [sym_set_n] = ACTIONS(306),
    [sym_name_at] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(306),
  },
  [89] = {
    [sym_anonymous_name] = STATE(254),
    [sym_name] = ACTIONS(320),
    [anon_sym__] = ACTIONS(322),
    [sym_comment] = ACTIONS(18),
  },
  [90] = {
    [sym_vopen] = STATE(257),
    [sym_declarations] = STATE(258),
    [sym__declarations0] = STATE(259),
    [sym__layout_open_brace] = ACTIONS(324),
    [sym_comment] = ACTIONS(80),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_literal] = ACTIONS(326),
    [sym_set_n] = ACTIONS(326),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(326),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_Prop] = ACTIONS(326),
    [anon_sym_Set] = ACTIONS(326),
    [anon_sym_quote] = ACTIONS(326),
    [anon_sym_quoteTerm] = ACTIONS(326),
    [anon_sym_unquote] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_LPAREN_PIPE] = ACTIONS(326),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(326),
  },
  [92] = {
    [sym_where_clause] = STATE(260),
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_literal] = ACTIONS(326),
    [sym_set_n] = ACTIONS(326),
    [sym_name_at] = ACTIONS(326),
    [sym_qualified_name] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(326),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_Prop] = ACTIONS(326),
    [anon_sym_Set] = ACTIONS(326),
    [anon_sym_quote] = ACTIONS(326),
    [anon_sym_quoteTerm] = ACTIONS(326),
    [anon_sym_unquote] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_LPAREN_PIPE] = ACTIONS(326),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(326),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(106),
  },
  [93] = {
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(11),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(13),
    [sym__atomic_expr_curly] = STATE(14),
    [sym__atomic_expr_no_curly] = STATE(14),
    [sym_lhs] = STATE(15),
    [sym__declaration] = STATE(16),
    [sym_function_clause] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(93),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(328),
    [sym_literal] = ACTIONS(330),
    [sym_set_n] = ACTIONS(330),
    [sym_name_at] = ACTIONS(333),
    [sym_qualified_name] = ACTIONS(330),
    [anon_sym__] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(339),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(330),
    [anon_sym_Prop] = ACTIONS(330),
    [anon_sym_Set] = ACTIONS(330),
    [anon_sym_quote] = ACTIONS(330),
    [anon_sym_quoteTerm] = ACTIONS(330),
    [anon_sym_unquote] = ACTIONS(330),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_LPAREN_PIPE] = ACTIONS(345),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(330),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_literal] = ACTIONS(348),
    [sym_set_n] = ACTIONS(348),
    [sym_name_at] = ACTIONS(348),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(348),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_LPAREN_PIPE] = ACTIONS(348),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_rewrite] = ACTIONS(348),
    [anon_sym_with] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
  },
  [95] = {
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(267),
    [sym__atomic_expr_curly] = STATE(268),
    [sym__atomic_expr_no_curly] = STATE(268),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(269),
    [sym_literal] = ACTIONS(350),
    [sym_set_n] = ACTIONS(350),
    [sym_name_at] = ACTIONS(353),
    [sym_qualified_name] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_Prop] = ACTIONS(350),
    [anon_sym_Set] = ACTIONS(350),
    [anon_sym_quote] = ACTIONS(350),
    [anon_sym_quoteTerm] = ACTIONS(350),
    [anon_sym_unquote] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(362),
    [anon_sym_LPAREN_PIPE] = ACTIONS(365),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(350),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_literal] = ACTIONS(368),
    [sym_set_n] = ACTIONS(368),
    [sym_name_at] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_Prop] = ACTIONS(368),
    [anon_sym_Set] = ACTIONS(368),
    [anon_sym_quote] = ACTIONS(368),
    [anon_sym_quoteTerm] = ACTIONS(368),
    [anon_sym_unquote] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_LPAREN_PIPE] = ACTIONS(368),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_rewrite] = ACTIONS(368),
    [anon_sym_with] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
  },
  [97] = {
    [sym_atomic_expr] = STATE(267),
    [sym__atomic_expr_curly] = STATE(268),
    [sym__atomic_expr_no_curly] = STATE(268),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(370),
    [sym_set_n] = ACTIONS(370),
    [sym_name_at] = ACTIONS(373),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(379),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_LPAREN_PIPE] = ACTIONS(387),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(370),
  },
  [98] = {
    [sym_expr] = STATE(116),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [99] = {
    [sym_expr] = STATE(128),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [100] = {
    [sym_expr] = STATE(135),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [101] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [102] = {
    [sym_expr] = STATE(116),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [103] = {
    [sym_expr] = STATE(128),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [104] = {
    [sym_expr] = STATE(135),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [105] = {
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(34),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(282),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [106] = {
    [sym__application] = STATE(283),
    [sym__expr2] = STATE(34),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(282),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [107] = {
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(34),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(282),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [108] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
  },
  [109] = {
    [sym_atomic_expr] = STATE(288),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(402),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [110] = {
    [sym_atomic_expr] = STATE(288),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(412),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [111] = {
    [sym_expr] = STATE(293),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [112] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [113] = {
    [sym_expr] = STATE(294),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [114] = {
    [sym_expr] = STATE(295),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [115] = {
    [sym_expr] = STATE(296),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(418),
    [sym_comment] = ACTIONS(80),
  },
  [117] = {
    [anon_sym_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(420),
  },
  [118] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
  },
  [119] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
  },
  [120] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(402),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [121] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
  },
  [122] = {
    [sym_atomic_expr] = STATE(302),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(424),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(426),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [123] = {
    [sym_atomic_expr] = STATE(302),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(430),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(432),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [124] = {
    [sym_expr] = STATE(307),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [125] = {
    [sym_expr] = STATE(308),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(436),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [126] = {
    [sym_expr] = STATE(309),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [127] = {
    [sym_expr] = STATE(310),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [128] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(438),
    [sym_comment] = ACTIONS(80),
  },
  [129] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(440),
  },
  [130] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
  },
  [131] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
  },
  [132] = {
    [sym__expr2] = STATE(184),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(424),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(426),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [133] = {
    [sym_atomic_expr] = STATE(288),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(402),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [134] = {
    [sym_atomic_expr] = STATE(288),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(410),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(412),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [135] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(438),
  },
  [136] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(442),
  },
  [137] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(402),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [138] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(438),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_rewrite] = ACTIONS(444),
    [anon_sym_with] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [140] = {
    [sym_expr] = STATE(314),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [141] = {
    [anon_sym_RBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_PIPE_RPAREN] = ACTIONS(446),
  },
  [142] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [143] = {
    [sym_atomic_expr] = STATE(315),
    [sym__atomic_expr_curly] = STATE(150),
    [sym__atomic_expr_no_curly] = STATE(150),
    [sym_literal] = ACTIONS(188),
    [sym_set_n] = ACTIONS(188),
    [sym_name_at] = ACTIONS(190),
    [sym_qualified_name] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_Prop] = ACTIONS(188),
    [anon_sym_Set] = ACTIONS(188),
    [anon_sym_quote] = ACTIONS(188),
    [anon_sym_quoteTerm] = ACTIONS(188),
    [anon_sym_unquote] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_PIPE] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [144] = {
    [sym_expr] = STATE(317),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(448),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [145] = {
    [sym_expr] = STATE(318),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [146] = {
    [sym_expr] = STATE(319),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [147] = {
    [sym_expr] = STATE(320),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [148] = {
    [anon_sym_RBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PIPE_RPAREN] = ACTIONS(452),
  },
  [149] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [150] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [151] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(149),
    [sym__atomic_expr_curly] = STATE(150),
    [sym__atomic_expr_no_curly] = STATE(150),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(188),
    [sym_set_n] = ACTIONS(188),
    [sym_name_at] = ACTIONS(190),
    [sym_qualified_name] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_Prop] = ACTIONS(188),
    [anon_sym_Set] = ACTIONS(188),
    [anon_sym_quote] = ACTIONS(188),
    [anon_sym_quoteTerm] = ACTIONS(188),
    [anon_sym_unquote] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_PIPE] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_PIPE_RPAREN] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
  },
  [153] = {
    [sym_atomic_expr] = STATE(327),
    [sym__atomic_expr_curly] = STATE(328),
    [sym__atomic_expr_no_curly] = STATE(328),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(456),
    [sym_set_n] = ACTIONS(456),
    [sym_name_at] = ACTIONS(459),
    [sym_qualified_name] = ACTIONS(456),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(462),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(465),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(456),
    [anon_sym_Prop] = ACTIONS(456),
    [anon_sym_Set] = ACTIONS(456),
    [anon_sym_quote] = ACTIONS(456),
    [anon_sym_quoteTerm] = ACTIONS(456),
    [anon_sym_unquote] = ACTIONS(456),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_LPAREN_PIPE] = ACTIONS(471),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(456),
  },
  [154] = {
    [sym__application] = STATE(329),
    [sym__expr2] = STATE(34),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(282),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [155] = {
    [sym__application] = STATE(330),
    [sym__expr2] = STATE(34),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(282),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [156] = {
    [sym_literal] = ACTIONS(474),
    [sym_set_n] = ACTIONS(474),
    [sym_name_at] = ACTIONS(474),
    [sym_qualified_name] = ACTIONS(474),
    [anon_sym__] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(474),
    [anon_sym_DOT_DOT] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(474),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(474),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(474),
    [anon_sym_Prop] = ACTIONS(474),
    [anon_sym_Set] = ACTIONS(474),
    [anon_sym_quote] = ACTIONS(474),
    [anon_sym_quoteTerm] = ACTIONS(474),
    [anon_sym_unquote] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_LPAREN_PIPE] = ACTIONS(474),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(474),
  },
  [157] = {
    [sym__application] = STATE(331),
    [sym__expr2] = STATE(34),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(282),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [158] = {
    [sym_typed_bindings] = STATE(39),
    [aux_sym_tele_arrow_repeat1] = STATE(158),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_DOT_DOT] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(485),
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(490),
  },
  [159] = {
    [sym_expr] = STATE(167),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [160] = {
    [sym_expr] = STATE(168),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(226),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [161] = {
    [sym_expr] = STATE(169),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [162] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [163] = {
    [sym_expr] = STATE(167),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [164] = {
    [sym_expr] = STATE(168),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(226),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [165] = {
    [sym_expr] = STATE(169),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [166] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [167] = {
    [anon_sym_RBRACE] = ACTIONS(493),
    [sym_comment] = ACTIONS(80),
  },
  [168] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(495),
    [sym_comment] = ACTIONS(80),
  },
  [169] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(495),
  },
  [170] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(495),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_rewrite] = ACTIONS(497),
    [anon_sym_with] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [172] = {
    [sym_expr] = STATE(334),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [173] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(446),
    [sym_comment] = ACTIONS(80),
  },
  [174] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [175] = {
    [sym_atomic_expr] = STATE(335),
    [sym__atomic_expr_curly] = STATE(182),
    [sym__atomic_expr_no_curly] = STATE(182),
    [sym_literal] = ACTIONS(232),
    [sym_set_n] = ACTIONS(232),
    [sym_name_at] = ACTIONS(234),
    [sym_qualified_name] = ACTIONS(232),
    [anon_sym__] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(238),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(232),
    [anon_sym_Prop] = ACTIONS(232),
    [anon_sym_Set] = ACTIONS(232),
    [anon_sym_quote] = ACTIONS(232),
    [anon_sym_quoteTerm] = ACTIONS(232),
    [anon_sym_unquote] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LPAREN_PIPE] = ACTIONS(242),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(232),
  },
  [176] = {
    [sym_expr] = STATE(337),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [177] = {
    [sym_expr] = STATE(338),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(501),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [178] = {
    [sym_expr] = STATE(339),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [179] = {
    [sym_expr] = STATE(340),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [180] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(452),
  },
  [181] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [182] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [183] = {
    [sym__expr2] = STATE(184),
    [sym_atomic_expr] = STATE(181),
    [sym__atomic_expr_curly] = STATE(182),
    [sym__atomic_expr_no_curly] = STATE(182),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(232),
    [sym_set_n] = ACTIONS(232),
    [sym_name_at] = ACTIONS(234),
    [sym_qualified_name] = ACTIONS(232),
    [anon_sym__] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(238),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(232),
    [anon_sym_Prop] = ACTIONS(232),
    [anon_sym_Set] = ACTIONS(232),
    [anon_sym_quote] = ACTIONS(232),
    [anon_sym_quoteTerm] = ACTIONS(232),
    [anon_sym_unquote] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_LPAREN_PIPE] = ACTIONS(242),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(232),
  },
  [184] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(454),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
  },
  [185] = {
    [sym_expr] = STATE(314),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [186] = {
    [sym_atomic_expr] = STATE(315),
    [sym__atomic_expr_curly] = STATE(150),
    [sym__atomic_expr_no_curly] = STATE(150),
    [sym_literal] = ACTIONS(188),
    [sym_set_n] = ACTIONS(188),
    [sym_name_at] = ACTIONS(246),
    [sym_qualified_name] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_Prop] = ACTIONS(188),
    [anon_sym_Set] = ACTIONS(188),
    [anon_sym_quote] = ACTIONS(188),
    [anon_sym_quoteTerm] = ACTIONS(188),
    [anon_sym_unquote] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_PIPE] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [187] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(149),
    [sym__atomic_expr_curly] = STATE(150),
    [sym__atomic_expr_no_curly] = STATE(150),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(188),
    [sym_set_n] = ACTIONS(188),
    [sym_name_at] = ACTIONS(246),
    [sym_qualified_name] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_Prop] = ACTIONS(188),
    [anon_sym_Set] = ACTIONS(188),
    [anon_sym_quote] = ACTIONS(188),
    [anon_sym_quoteTerm] = ACTIONS(188),
    [anon_sym_unquote] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LPAREN_PIPE] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
  },
  [188] = {
    [sym_expr] = STATE(196),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [189] = {
    [sym_expr] = STATE(197),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(262),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [190] = {
    [sym_expr] = STATE(198),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [191] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_PIPE_RPAREN] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [192] = {
    [sym_expr] = STATE(196),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [193] = {
    [sym_expr] = STATE(197),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(262),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [194] = {
    [sym_expr] = STATE(198),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [195] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_PIPE_RPAREN] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(503),
    [sym_comment] = ACTIONS(80),
  },
  [197] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(505),
    [sym_comment] = ACTIONS(80),
  },
  [198] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(505),
  },
  [199] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(505),
  },
  [200] = {
    [sym_expr] = STATE(314),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [201] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_PIPE_RPAREN] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [202] = {
    [sym_atomic_expr] = STATE(343),
    [sym__atomic_expr_curly] = STATE(208),
    [sym__atomic_expr_no_curly] = STATE(208),
    [sym_literal] = ACTIONS(266),
    [sym_set_n] = ACTIONS(266),
    [sym_name_at] = ACTIONS(268),
    [sym_qualified_name] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(272),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_Prop] = ACTIONS(266),
    [anon_sym_Set] = ACTIONS(266),
    [anon_sym_quote] = ACTIONS(266),
    [anon_sym_quoteTerm] = ACTIONS(266),
    [anon_sym_unquote] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_LPAREN_PIPE] = ACTIONS(276),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(266),
  },
  [203] = {
    [sym_expr] = STATE(345),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [204] = {
    [sym_expr] = STATE(346),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(509),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [205] = {
    [sym_expr] = STATE(347),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [206] = {
    [sym_expr] = STATE(348),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [207] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_PIPE_RPAREN] = ACTIONS(94),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [208] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_PIPE_RPAREN] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [209] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(207),
    [sym__atomic_expr_curly] = STATE(208),
    [sym__atomic_expr_no_curly] = STATE(208),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(266),
    [sym_set_n] = ACTIONS(266),
    [sym_name_at] = ACTIONS(268),
    [sym_qualified_name] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(272),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_Prop] = ACTIONS(266),
    [anon_sym_Set] = ACTIONS(266),
    [anon_sym_quote] = ACTIONS(266),
    [anon_sym_quoteTerm] = ACTIONS(266),
    [anon_sym_unquote] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_LPAREN_PIPE] = ACTIONS(276),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(266),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_with] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [211] = {
    [sym_atomic_expr] = STATE(349),
    [sym__atomic_expr_curly] = STATE(220),
    [sym__atomic_expr_no_curly] = STATE(220),
    [sym_literal] = ACTIONS(278),
    [sym_set_n] = ACTIONS(278),
    [sym_name_at] = ACTIONS(280),
    [sym_qualified_name] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(284),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_Prop] = ACTIONS(278),
    [anon_sym_Set] = ACTIONS(278),
    [anon_sym_quote] = ACTIONS(278),
    [anon_sym_quoteTerm] = ACTIONS(278),
    [anon_sym_unquote] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_LPAREN_PIPE] = ACTIONS(288),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(278),
  },
  [212] = {
    [sym_expr] = STATE(351),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [213] = {
    [sym_expr] = STATE(352),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [214] = {
    [sym_expr] = STATE(353),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [215] = {
    [sym_expr] = STATE(354),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_literal] = ACTIONS(515),
    [sym_set_n] = ACTIONS(515),
    [sym_name_at] = ACTIONS(515),
    [sym_qualified_name] = ACTIONS(515),
    [anon_sym__] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(515),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(515),
    [anon_sym_QMARK] = ACTIONS(515),
    [anon_sym_Prop] = ACTIONS(515),
    [anon_sym_Set] = ACTIONS(515),
    [anon_sym_quote] = ACTIONS(515),
    [anon_sym_quoteTerm] = ACTIONS(515),
    [anon_sym_unquote] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_LPAREN_PIPE] = ACTIONS(515),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(515),
    [anon_sym_module] = ACTIONS(515),
    [anon_sym_with] = ACTIONS(515),
    [anon_sym_where] = ACTIONS(515),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_literal] = ACTIONS(88),
    [sym_set_n] = ACTIONS(88),
    [sym_name_at] = ACTIONS(88),
    [sym_qualified_name] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_Prop] = ACTIONS(88),
    [anon_sym_Set] = ACTIONS(88),
    [anon_sym_quote] = ACTIONS(88),
    [anon_sym_quoteTerm] = ACTIONS(88),
    [anon_sym_unquote] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LPAREN_PIPE] = ACTIONS(88),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_with] = ACTIONS(88),
    [anon_sym_where] = ACTIONS(88),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_literal] = ACTIONS(90),
    [sym_set_n] = ACTIONS(90),
    [sym_name_at] = ACTIONS(90),
    [sym_qualified_name] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_Prop] = ACTIONS(90),
    [anon_sym_Set] = ACTIONS(90),
    [anon_sym_quote] = ACTIONS(90),
    [anon_sym_quoteTerm] = ACTIONS(90),
    [anon_sym_unquote] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_module] = ACTIONS(90),
    [anon_sym_with] = ACTIONS(90),
    [anon_sym_where] = ACTIONS(90),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_with] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [220] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_with] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [221] = {
    [sym__application] = STATE(355),
    [sym__expr2] = STATE(218),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(219),
    [sym__atomic_expr_curly] = STATE(220),
    [sym__atomic_expr_no_curly] = STATE(220),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(222),
    [sym_literal] = ACTIONS(278),
    [sym_set_n] = ACTIONS(278),
    [sym_name_at] = ACTIONS(280),
    [sym_qualified_name] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(284),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_Prop] = ACTIONS(278),
    [anon_sym_Set] = ACTIONS(278),
    [anon_sym_quote] = ACTIONS(278),
    [anon_sym_quoteTerm] = ACTIONS(278),
    [anon_sym_unquote] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_LPAREN_PIPE] = ACTIONS(288),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(278),
  },
  [222] = {
    [sym__expr2] = STATE(356),
    [sym_atomic_expr] = STATE(219),
    [sym__atomic_expr_curly] = STATE(220),
    [sym__atomic_expr_no_curly] = STATE(220),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(278),
    [sym_set_n] = ACTIONS(278),
    [sym_name_at] = ACTIONS(280),
    [sym_qualified_name] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(284),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_Prop] = ACTIONS(278),
    [anon_sym_Set] = ACTIONS(278),
    [anon_sym_quote] = ACTIONS(278),
    [anon_sym_quoteTerm] = ACTIONS(278),
    [anon_sym_unquote] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_LPAREN_PIPE] = ACTIONS(288),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(278),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [224] = {
    [sym_atomic_expr] = STATE(357),
    [sym__atomic_expr_curly] = STATE(233),
    [sym__atomic_expr_no_curly] = STATE(233),
    [sym_literal] = ACTIONS(290),
    [sym_set_n] = ACTIONS(290),
    [sym_name_at] = ACTIONS(292),
    [sym_qualified_name] = ACTIONS(290),
    [anon_sym__] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_Prop] = ACTIONS(290),
    [anon_sym_Set] = ACTIONS(290),
    [anon_sym_quote] = ACTIONS(290),
    [anon_sym_quoteTerm] = ACTIONS(290),
    [anon_sym_unquote] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LPAREN_PIPE] = ACTIONS(300),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(290),
  },
  [225] = {
    [sym_expr] = STATE(359),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [226] = {
    [sym_expr] = STATE(360),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [227] = {
    [sym_expr] = STATE(361),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [228] = {
    [sym_expr] = STATE(362),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [sym_literal] = ACTIONS(521),
    [sym_set_n] = ACTIONS(521),
    [sym_name_at] = ACTIONS(521),
    [sym_qualified_name] = ACTIONS(521),
    [anon_sym__] = ACTIONS(521),
    [anon_sym_DOT] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(521),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(521),
    [anon_sym_QMARK] = ACTIONS(521),
    [anon_sym_Prop] = ACTIONS(521),
    [anon_sym_Set] = ACTIONS(521),
    [anon_sym_quote] = ACTIONS(521),
    [anon_sym_quoteTerm] = ACTIONS(521),
    [anon_sym_unquote] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_LPAREN_PIPE] = ACTIONS(521),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_module] = ACTIONS(521),
    [anon_sym_where] = ACTIONS(521),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_literal] = ACTIONS(88),
    [sym_set_n] = ACTIONS(88),
    [sym_name_at] = ACTIONS(88),
    [sym_qualified_name] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_Prop] = ACTIONS(88),
    [anon_sym_Set] = ACTIONS(88),
    [anon_sym_quote] = ACTIONS(88),
    [anon_sym_quoteTerm] = ACTIONS(88),
    [anon_sym_unquote] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LPAREN_PIPE] = ACTIONS(88),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_where] = ACTIONS(88),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_literal] = ACTIONS(90),
    [sym_set_n] = ACTIONS(90),
    [sym_name_at] = ACTIONS(90),
    [sym_qualified_name] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_Prop] = ACTIONS(90),
    [anon_sym_Set] = ACTIONS(90),
    [anon_sym_quote] = ACTIONS(90),
    [anon_sym_quoteTerm] = ACTIONS(90),
    [anon_sym_unquote] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_module] = ACTIONS(90),
    [anon_sym_where] = ACTIONS(90),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [234] = {
    [sym__application] = STATE(363),
    [sym__expr2] = STATE(231),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(232),
    [sym__atomic_expr_curly] = STATE(233),
    [sym__atomic_expr_no_curly] = STATE(233),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(235),
    [sym_literal] = ACTIONS(290),
    [sym_set_n] = ACTIONS(290),
    [sym_name_at] = ACTIONS(292),
    [sym_qualified_name] = ACTIONS(290),
    [anon_sym__] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_Prop] = ACTIONS(290),
    [anon_sym_Set] = ACTIONS(290),
    [anon_sym_quote] = ACTIONS(290),
    [anon_sym_quoteTerm] = ACTIONS(290),
    [anon_sym_unquote] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LPAREN_PIPE] = ACTIONS(300),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(290),
  },
  [235] = {
    [sym__expr2] = STATE(364),
    [sym_atomic_expr] = STATE(232),
    [sym__atomic_expr_curly] = STATE(233),
    [sym__atomic_expr_no_curly] = STATE(233),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(290),
    [sym_set_n] = ACTIONS(290),
    [sym_name_at] = ACTIONS(292),
    [sym_qualified_name] = ACTIONS(290),
    [anon_sym__] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(290),
    [anon_sym_Prop] = ACTIONS(290),
    [anon_sym_Set] = ACTIONS(290),
    [anon_sym_quote] = ACTIONS(290),
    [anon_sym_quoteTerm] = ACTIONS(290),
    [anon_sym_unquote] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_LPAREN_PIPE] = ACTIONS(300),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(290),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [sym_literal] = ACTIONS(523),
    [sym_set_n] = ACTIONS(523),
    [sym_name_at] = ACTIONS(523),
    [sym_qualified_name] = ACTIONS(523),
    [anon_sym__] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(523),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_QMARK] = ACTIONS(523),
    [anon_sym_Prop] = ACTIONS(523),
    [anon_sym_Set] = ACTIONS(523),
    [anon_sym_quote] = ACTIONS(523),
    [anon_sym_quoteTerm] = ACTIONS(523),
    [anon_sym_unquote] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_LPAREN_PIPE] = ACTIONS(523),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(523),
    [anon_sym_module] = ACTIONS(523),
    [anon_sym_where] = ACTIONS(523),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [238] = {
    [sym_atomic_expr] = STATE(368),
    [sym__atomic_expr_curly] = STATE(250),
    [sym__atomic_expr_no_curly] = STATE(250),
    [sym_literal] = ACTIONS(306),
    [sym_set_n] = ACTIONS(306),
    [sym_name_at] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(527),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(306),
  },
  [239] = {
    [sym_atomic_expr] = STATE(368),
    [sym__atomic_expr_curly] = STATE(250),
    [sym__atomic_expr_no_curly] = STATE(250),
    [sym_literal] = ACTIONS(306),
    [sym_set_n] = ACTIONS(306),
    [sym_name_at] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(533),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(306),
  },
  [240] = {
    [sym_expr] = STATE(373),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [241] = {
    [sym_expr] = STATE(374),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [242] = {
    [sym_expr] = STATE(375),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [243] = {
    [sym_expr] = STATE(376),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_literal] = ACTIONS(541),
    [sym_set_n] = ACTIONS(541),
    [sym_name_at] = ACTIONS(541),
    [sym_qualified_name] = ACTIONS(541),
    [anon_sym__] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(541),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(541),
    [anon_sym_Prop] = ACTIONS(541),
    [anon_sym_Set] = ACTIONS(541),
    [anon_sym_quote] = ACTIONS(541),
    [anon_sym_quoteTerm] = ACTIONS(541),
    [anon_sym_unquote] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_LPAREN_PIPE] = ACTIONS(541),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(541),
    [anon_sym_module] = ACTIONS(541),
    [anon_sym_where] = ACTIONS(541),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [sym_literal] = ACTIONS(543),
    [sym_set_n] = ACTIONS(543),
    [sym_name_at] = ACTIONS(543),
    [sym_qualified_name] = ACTIONS(543),
    [anon_sym__] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(545),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_Prop] = ACTIONS(543),
    [anon_sym_Set] = ACTIONS(543),
    [anon_sym_quote] = ACTIONS(543),
    [anon_sym_quoteTerm] = ACTIONS(543),
    [anon_sym_unquote] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_LPAREN_PIPE] = ACTIONS(543),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(543),
    [anon_sym_module] = ACTIONS(543),
    [anon_sym_where] = ACTIONS(543),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_literal] = ACTIONS(88),
    [sym_set_n] = ACTIONS(88),
    [sym_name_at] = ACTIONS(88),
    [sym_qualified_name] = ACTIONS(88),
    [anon_sym__] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_Prop] = ACTIONS(88),
    [anon_sym_Set] = ACTIONS(88),
    [anon_sym_quote] = ACTIONS(88),
    [anon_sym_quoteTerm] = ACTIONS(88),
    [anon_sym_unquote] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LPAREN_PIPE] = ACTIONS(88),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(88),
    [anon_sym_module] = ACTIONS(88),
    [anon_sym_where] = ACTIONS(88),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_literal] = ACTIONS(90),
    [sym_set_n] = ACTIONS(90),
    [sym_name_at] = ACTIONS(90),
    [sym_qualified_name] = ACTIONS(90),
    [anon_sym__] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(90),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_Prop] = ACTIONS(90),
    [anon_sym_Set] = ACTIONS(90),
    [anon_sym_quote] = ACTIONS(90),
    [anon_sym_quoteTerm] = ACTIONS(90),
    [anon_sym_unquote] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LPAREN_PIPE] = ACTIONS(90),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(90),
    [anon_sym_module] = ACTIONS(90),
    [anon_sym_where] = ACTIONS(90),
  },
  [248] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [251] = {
    [sym_expr] = STATE(378),
    [sym__expr1] = STATE(245),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(247),
    [sym__atomic_exprs1] = STATE(248),
    [sym_atomic_expr] = STATE(249),
    [sym__atomic_expr_curly] = STATE(250),
    [sym__atomic_expr_no_curly] = STATE(250),
    [sym_tele_arrow] = STATE(251),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(306),
    [sym_set_n] = ACTIONS(306),
    [sym_name_at] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(306),
  },
  [252] = {
    [sym__application] = STATE(385),
    [sym__expr2] = STATE(247),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(386),
    [sym__atomic_expr_curly] = STATE(387),
    [sym__atomic_expr_no_curly] = STATE(387),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(388),
    [sym_literal] = ACTIONS(549),
    [sym_set_n] = ACTIONS(549),
    [sym_name_at] = ACTIONS(551),
    [sym_qualified_name] = ACTIONS(549),
    [anon_sym__] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(549),
    [anon_sym_Prop] = ACTIONS(549),
    [anon_sym_Set] = ACTIONS(549),
    [anon_sym_quote] = ACTIONS(549),
    [anon_sym_quoteTerm] = ACTIONS(549),
    [anon_sym_unquote] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LPAREN_PIPE] = ACTIONS(559),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(549),
  },
  [253] = {
    [sym__expr2] = STATE(389),
    [sym_atomic_expr] = STATE(249),
    [sym__atomic_expr_curly] = STATE(250),
    [sym__atomic_expr_no_curly] = STATE(250),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(306),
    [sym_set_n] = ACTIONS(306),
    [sym_name_at] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(527),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(306),
  },
  [254] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_where] = ACTIONS(561),
  },
  [255] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_where] = ACTIONS(563),
  },
  [256] = {
    [sym__layout_close_brace] = ACTIONS(565),
    [sym_literal] = ACTIONS(567),
    [sym_set_n] = ACTIONS(567),
    [sym_name_at] = ACTIONS(567),
    [sym_qualified_name] = ACTIONS(567),
    [anon_sym__] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(567),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(567),
    [anon_sym_Prop] = ACTIONS(567),
    [anon_sym_Set] = ACTIONS(567),
    [anon_sym_quote] = ACTIONS(567),
    [anon_sym_quoteTerm] = ACTIONS(567),
    [anon_sym_unquote] = ACTIONS(567),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_LPAREN_PIPE] = ACTIONS(567),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(567),
  },
  [257] = {
    [sym_vclose] = STATE(398),
    [sym__expr1] = STATE(399),
    [sym__application] = STATE(400),
    [sym__expr2] = STATE(401),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(402),
    [sym__atomic_expr_curly] = STATE(403),
    [sym__atomic_expr_no_curly] = STATE(403),
    [sym_lhs] = STATE(404),
    [sym__declaration] = STATE(405),
    [sym_function_clause] = STATE(406),
    [sym__declarations1] = STATE(407),
    [aux_sym__expr1_repeat1] = STATE(408),
    [aux_sym__application_repeat1] = STATE(409),
    [sym__layout_close_brace] = ACTIONS(569),
    [sym_literal] = ACTIONS(571),
    [sym_set_n] = ACTIONS(571),
    [sym_name_at] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_Prop] = ACTIONS(571),
    [anon_sym_Set] = ACTIONS(571),
    [anon_sym_quote] = ACTIONS(571),
    [anon_sym_quoteTerm] = ACTIONS(571),
    [anon_sym_unquote] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LPAREN_PIPE] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(571),
  },
  [258] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [sym_literal] = ACTIONS(583),
    [sym_set_n] = ACTIONS(583),
    [sym_name_at] = ACTIONS(583),
    [sym_qualified_name] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(583),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_Prop] = ACTIONS(583),
    [anon_sym_Set] = ACTIONS(583),
    [anon_sym_quote] = ACTIONS(583),
    [anon_sym_quoteTerm] = ACTIONS(583),
    [anon_sym_unquote] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_LPAREN_PIPE] = ACTIONS(583),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
  },
  [259] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [sym_literal] = ACTIONS(585),
    [sym_set_n] = ACTIONS(585),
    [sym_name_at] = ACTIONS(585),
    [sym_qualified_name] = ACTIONS(585),
    [anon_sym__] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(585),
    [anon_sym_Prop] = ACTIONS(585),
    [anon_sym_Set] = ACTIONS(585),
    [anon_sym_quote] = ACTIONS(585),
    [anon_sym_quoteTerm] = ACTIONS(585),
    [anon_sym_unquote] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_LPAREN_PIPE] = ACTIONS(585),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(585),
  },
  [260] = {
    [ts_builtin_sym_end] = ACTIONS(587),
    [sym_literal] = ACTIONS(587),
    [sym_set_n] = ACTIONS(587),
    [sym_name_at] = ACTIONS(587),
    [sym_qualified_name] = ACTIONS(587),
    [anon_sym__] = ACTIONS(587),
    [anon_sym_DOT] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(587),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(587),
    [anon_sym_Prop] = ACTIONS(587),
    [anon_sym_Set] = ACTIONS(587),
    [anon_sym_quote] = ACTIONS(587),
    [anon_sym_quoteTerm] = ACTIONS(587),
    [anon_sym_unquote] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_LPAREN_PIPE] = ACTIONS(587),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(587),
  },
  [261] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [262] = {
    [sym_atomic_expr] = STATE(410),
    [sym__atomic_expr_curly] = STATE(268),
    [sym__atomic_expr_no_curly] = STATE(268),
    [sym_literal] = ACTIONS(589),
    [sym_set_n] = ACTIONS(589),
    [sym_name_at] = ACTIONS(591),
    [sym_qualified_name] = ACTIONS(589),
    [anon_sym__] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(589),
    [anon_sym_Prop] = ACTIONS(589),
    [anon_sym_Set] = ACTIONS(589),
    [anon_sym_quote] = ACTIONS(589),
    [anon_sym_quoteTerm] = ACTIONS(589),
    [anon_sym_unquote] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_LPAREN_PIPE] = ACTIONS(599),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(589),
  },
  [263] = {
    [sym_expr] = STATE(412),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [264] = {
    [sym_expr] = STATE(413),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(603),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [265] = {
    [sym_expr] = STATE(414),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [266] = {
    [sym_expr] = STATE(415),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [267] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [268] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [269] = {
    [sym_atomic_expr] = STATE(267),
    [sym__atomic_expr_curly] = STATE(268),
    [sym__atomic_expr_no_curly] = STATE(268),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(589),
    [sym_set_n] = ACTIONS(589),
    [sym_name_at] = ACTIONS(591),
    [sym_qualified_name] = ACTIONS(589),
    [anon_sym__] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(593),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(589),
    [anon_sym_Prop] = ACTIONS(589),
    [anon_sym_Set] = ACTIONS(589),
    [anon_sym_quote] = ACTIONS(589),
    [anon_sym_quoteTerm] = ACTIONS(589),
    [anon_sym_unquote] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_LPAREN_PIPE] = ACTIONS(599),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(589),
  },
  [270] = {
    [anon_sym_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(605),
  },
  [271] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(607),
  },
  [272] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(609),
  },
  [273] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
  },
  [274] = {
    [sym_atomic_expr] = STATE(419),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [275] = {
    [sym_expr] = STATE(421),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [276] = {
    [sym_expr] = STATE(422),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(613),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [277] = {
    [sym_expr] = STATE(423),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [278] = {
    [sym_expr] = STATE(424),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [279] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(605),
  },
  [280] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
  },
  [281] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
  },
  [282] = {
    [sym__expr2] = STATE(152),
    [sym_atomic_expr] = STATE(280),
    [sym__atomic_expr_curly] = STATE(281),
    [sym__atomic_expr_no_curly] = STATE(281),
    [aux_sym__application_repeat1] = STATE(425),
    [sym_literal] = ACTIONS(390),
    [sym_set_n] = ACTIONS(390),
    [sym_name_at] = ACTIONS(392),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_LPAREN_PIPE] = ACTIONS(400),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(390),
  },
  [283] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(607),
  },
  [284] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(609),
  },
  [285] = {
    [sym_expr] = STATE(293),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [286] = {
    [sym_expr] = STATE(294),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [287] = {
    [sym_expr] = STATE(295),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [288] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
  },
  [289] = {
    [sym_expr] = STATE(293),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [290] = {
    [sym_expr] = STATE(294),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [291] = {
    [sym_expr] = STATE(295),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [292] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
  },
  [293] = {
    [anon_sym_RBRACE] = ACTIONS(615),
    [sym_comment] = ACTIONS(80),
  },
  [294] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(617),
    [sym_comment] = ACTIONS(80),
  },
  [295] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(617),
  },
  [296] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(617),
  },
  [297] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [298] = {
    [sym_expr] = STATE(428),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [299] = {
    [sym_expr] = STATE(307),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [300] = {
    [sym_expr] = STATE(308),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(436),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [301] = {
    [sym_expr] = STATE(309),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [302] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
  },
  [303] = {
    [sym_expr] = STATE(307),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [304] = {
    [sym_expr] = STATE(308),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(436),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [305] = {
    [sym_expr] = STATE(309),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [306] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym_comment] = ACTIONS(80),
  },
  [308] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(621),
    [sym_comment] = ACTIONS(80),
  },
  [309] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(621),
  },
  [310] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(621),
  },
  [311] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [312] = {
    [sym_expr] = STATE(431),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [313] = {
    [sym_expr] = STATE(432),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(623),
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_PIPE_RPAREN] = ACTIONS(623),
  },
  [315] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [316] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(625),
    [sym_comment] = ACTIONS(80),
  },
  [318] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(80),
  },
  [319] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(627),
  },
  [320] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(627),
  },
  [321] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [322] = {
    [sym_atomic_expr] = STATE(435),
    [sym__atomic_expr_curly] = STATE(328),
    [sym__atomic_expr_no_curly] = STATE(328),
    [sym_literal] = ACTIONS(629),
    [sym_set_n] = ACTIONS(629),
    [sym_name_at] = ACTIONS(631),
    [sym_qualified_name] = ACTIONS(629),
    [anon_sym__] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(631),
    [anon_sym_LBRACE] = ACTIONS(633),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(629),
    [anon_sym_Prop] = ACTIONS(629),
    [anon_sym_Set] = ACTIONS(629),
    [anon_sym_quote] = ACTIONS(629),
    [anon_sym_quoteTerm] = ACTIONS(629),
    [anon_sym_unquote] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LPAREN_PIPE] = ACTIONS(639),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(629),
  },
  [323] = {
    [sym_expr] = STATE(437),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(641),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [324] = {
    [sym_expr] = STATE(438),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(643),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [325] = {
    [sym_expr] = STATE(439),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [326] = {
    [sym_expr] = STATE(440),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [327] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [328] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [329] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(420),
  },
  [330] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(440),
  },
  [331] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(442),
  },
  [332] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [333] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [334] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(623),
    [sym_comment] = ACTIONS(80),
  },
  [335] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [336] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(645),
    [sym_comment] = ACTIONS(80),
  },
  [338] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(80),
  },
  [339] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(647),
  },
  [340] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(647),
  },
  [341] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_PIPE_RPAREN] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [342] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_PIPE_RPAREN] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [343] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_PIPE_RPAREN] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [344] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_PIPE_RPAREN] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [345] = {
    [anon_sym_RBRACE] = ACTIONS(649),
    [sym_comment] = ACTIONS(80),
  },
  [346] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(651),
    [sym_comment] = ACTIONS(80),
  },
  [347] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(651),
  },
  [348] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(651),
  },
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_with] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [351] = {
    [anon_sym_RBRACE] = ACTIONS(653),
    [sym_comment] = ACTIONS(80),
  },
  [352] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(655),
    [sym_comment] = ACTIONS(80),
  },
  [353] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(655),
  },
  [354] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(655),
  },
  [355] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_literal] = ACTIONS(348),
    [sym_set_n] = ACTIONS(348),
    [sym_name_at] = ACTIONS(348),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(348),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_LPAREN_PIPE] = ACTIONS(348),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_with] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_literal] = ACTIONS(368),
    [sym_set_n] = ACTIONS(368),
    [sym_name_at] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_Prop] = ACTIONS(368),
    [anon_sym_Set] = ACTIONS(368),
    [anon_sym_quote] = ACTIONS(368),
    [anon_sym_quoteTerm] = ACTIONS(368),
    [anon_sym_unquote] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_LPAREN_PIPE] = ACTIONS(368),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_with] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
  },
  [357] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [358] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(657),
    [sym_comment] = ACTIONS(80),
  },
  [360] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(659),
    [sym_comment] = ACTIONS(80),
  },
  [361] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(659),
  },
  [362] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(659),
  },
  [363] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_literal] = ACTIONS(348),
    [sym_set_n] = ACTIONS(348),
    [sym_name_at] = ACTIONS(348),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(348),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_LPAREN_PIPE] = ACTIONS(348),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
  },
  [364] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_literal] = ACTIONS(368),
    [sym_set_n] = ACTIONS(368),
    [sym_name_at] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_Prop] = ACTIONS(368),
    [anon_sym_Set] = ACTIONS(368),
    [anon_sym_quote] = ACTIONS(368),
    [anon_sym_quoteTerm] = ACTIONS(368),
    [anon_sym_unquote] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_LPAREN_PIPE] = ACTIONS(368),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
  },
  [365] = {
    [sym_expr] = STATE(373),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [366] = {
    [sym_expr] = STATE(374),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [367] = {
    [sym_expr] = STATE(375),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [368] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [369] = {
    [sym_expr] = STATE(373),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [370] = {
    [sym_expr] = STATE(374),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [371] = {
    [sym_expr] = STATE(375),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [372] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(661),
    [sym_comment] = ACTIONS(80),
  },
  [374] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(663),
    [sym_comment] = ACTIONS(80),
  },
  [375] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(663),
  },
  [376] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(663),
  },
  [377] = {
    [sym_expr] = STATE(451),
    [sym__expr1] = STATE(245),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(247),
    [sym__atomic_exprs1] = STATE(248),
    [sym_atomic_expr] = STATE(249),
    [sym__atomic_expr_curly] = STATE(250),
    [sym__atomic_expr_no_curly] = STATE(250),
    [sym_tele_arrow] = STATE(251),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(306),
    [sym_set_n] = ACTIONS(306),
    [sym_name_at] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_Prop] = ACTIONS(306),
    [anon_sym_Set] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_quoteTerm] = ACTIONS(306),
    [anon_sym_unquote] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_LPAREN_PIPE] = ACTIONS(318),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(306),
  },
  [378] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [sym_literal] = ACTIONS(665),
    [sym_set_n] = ACTIONS(665),
    [sym_name_at] = ACTIONS(665),
    [sym_qualified_name] = ACTIONS(665),
    [anon_sym__] = ACTIONS(665),
    [anon_sym_DOT] = ACTIONS(665),
    [anon_sym_LBRACE] = ACTIONS(665),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(665),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(665),
    [anon_sym_Prop] = ACTIONS(665),
    [anon_sym_Set] = ACTIONS(665),
    [anon_sym_quote] = ACTIONS(665),
    [anon_sym_quoteTerm] = ACTIONS(665),
    [anon_sym_unquote] = ACTIONS(665),
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_LPAREN_PIPE] = ACTIONS(665),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(665),
    [anon_sym_module] = ACTIONS(665),
    [anon_sym_where] = ACTIONS(665),
  },
  [379] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [380] = {
    [sym_atomic_expr] = STATE(452),
    [sym__atomic_expr_curly] = STATE(387),
    [sym__atomic_expr_no_curly] = STATE(387),
    [sym_literal] = ACTIONS(549),
    [sym_set_n] = ACTIONS(549),
    [sym_name_at] = ACTIONS(551),
    [sym_qualified_name] = ACTIONS(549),
    [anon_sym__] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(549),
    [anon_sym_Prop] = ACTIONS(549),
    [anon_sym_Set] = ACTIONS(549),
    [anon_sym_quote] = ACTIONS(549),
    [anon_sym_quoteTerm] = ACTIONS(549),
    [anon_sym_unquote] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LPAREN_PIPE] = ACTIONS(559),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(549),
  },
  [381] = {
    [sym_expr] = STATE(454),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(667),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [382] = {
    [sym_expr] = STATE(455),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(669),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [383] = {
    [sym_expr] = STATE(456),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [384] = {
    [sym_expr] = STATE(457),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [385] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym_literal] = ACTIONS(348),
    [sym_set_n] = ACTIONS(348),
    [sym_name_at] = ACTIONS(348),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(348),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_LPAREN_PIPE] = ACTIONS(348),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
  },
  [386] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [387] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [388] = {
    [sym__expr2] = STATE(389),
    [sym_atomic_expr] = STATE(386),
    [sym__atomic_expr_curly] = STATE(387),
    [sym__atomic_expr_no_curly] = STATE(387),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(549),
    [sym_set_n] = ACTIONS(549),
    [sym_name_at] = ACTIONS(551),
    [sym_qualified_name] = ACTIONS(549),
    [anon_sym__] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(549),
    [anon_sym_Prop] = ACTIONS(549),
    [anon_sym_Set] = ACTIONS(549),
    [anon_sym_quote] = ACTIONS(549),
    [anon_sym_quoteTerm] = ACTIONS(549),
    [anon_sym_unquote] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_LPAREN_PIPE] = ACTIONS(559),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(549),
  },
  [389] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym_literal] = ACTIONS(368),
    [sym_set_n] = ACTIONS(368),
    [sym_name_at] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(368),
    [anon_sym_QMARK] = ACTIONS(368),
    [anon_sym_Prop] = ACTIONS(368),
    [anon_sym_Set] = ACTIONS(368),
    [anon_sym_quote] = ACTIONS(368),
    [anon_sym_quoteTerm] = ACTIONS(368),
    [anon_sym_unquote] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [anon_sym_LPAREN_PIPE] = ACTIONS(368),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
  },
  [390] = {
    [sym_vopen] = STATE(257),
    [sym_declarations] = STATE(258),
    [sym__declarations0] = STATE(458),
    [sym__layout_open_brace] = ACTIONS(324),
    [sym_comment] = ACTIONS(80),
  },
  [391] = {
    [ts_builtin_sym_end] = ACTIONS(671),
    [sym_literal] = ACTIONS(671),
    [sym_set_n] = ACTIONS(671),
    [sym_name_at] = ACTIONS(671),
    [sym_qualified_name] = ACTIONS(671),
    [anon_sym__] = ACTIONS(671),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_LBRACE] = ACTIONS(671),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(671),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(671),
    [anon_sym_Prop] = ACTIONS(671),
    [anon_sym_Set] = ACTIONS(671),
    [anon_sym_quote] = ACTIONS(671),
    [anon_sym_quoteTerm] = ACTIONS(671),
    [anon_sym_unquote] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LPAREN_PIPE] = ACTIONS(671),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(671),
  },
  [392] = {
    [sym__layout_semicolon] = ACTIONS(673),
    [sym__layout_close_brace] = ACTIONS(673),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_rewrite] = ACTIONS(24),
    [anon_sym_with] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [393] = {
    [sym_atomic_expr] = STATE(459),
    [sym__atomic_expr_curly] = STATE(403),
    [sym__atomic_expr_no_curly] = STATE(403),
    [sym_literal] = ACTIONS(571),
    [sym_set_n] = ACTIONS(571),
    [sym_name_at] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_Prop] = ACTIONS(571),
    [anon_sym_Set] = ACTIONS(571),
    [anon_sym_quote] = ACTIONS(571),
    [anon_sym_quoteTerm] = ACTIONS(571),
    [anon_sym_unquote] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LPAREN_PIPE] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(571),
  },
  [394] = {
    [sym_expr] = STATE(461),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [395] = {
    [sym_expr] = STATE(462),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(677),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [396] = {
    [sym_expr] = STATE(463),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(677),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [397] = {
    [sym_expr] = STATE(464),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [398] = {
    [ts_builtin_sym_end] = ACTIONS(679),
    [sym_literal] = ACTIONS(679),
    [sym_set_n] = ACTIONS(679),
    [sym_name_at] = ACTIONS(679),
    [sym_qualified_name] = ACTIONS(679),
    [anon_sym__] = ACTIONS(679),
    [anon_sym_DOT] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(679),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(679),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(679),
    [anon_sym_Prop] = ACTIONS(679),
    [anon_sym_Set] = ACTIONS(679),
    [anon_sym_quote] = ACTIONS(679),
    [anon_sym_quoteTerm] = ACTIONS(679),
    [anon_sym_unquote] = ACTIONS(679),
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_LPAREN_PIPE] = ACTIONS(679),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(679),
  },
  [399] = {
    [sym_rewrite_equations] = STATE(467),
    [sym_with_expressions] = STATE(468),
    [sym__layout_semicolon] = ACTIONS(681),
    [sym__layout_close_brace] = ACTIONS(681),
    [anon_sym_SEMI] = ACTIONS(681),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(681),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_module] = ACTIONS(681),
    [anon_sym_rewrite] = ACTIONS(683),
    [anon_sym_with] = ACTIONS(685),
    [anon_sym_where] = ACTIONS(681),
  },
  [400] = {
    [sym__layout_semicolon] = ACTIONS(180),
    [sym__layout_close_brace] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_rewrite] = ACTIONS(180),
    [anon_sym_with] = ACTIONS(180),
    [anon_sym_where] = ACTIONS(180),
  },
  [401] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [sym__layout_close_brace] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(182),
    [anon_sym_rewrite] = ACTIONS(182),
    [anon_sym_with] = ACTIONS(182),
    [anon_sym_where] = ACTIONS(182),
  },
  [402] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [sym__layout_close_brace] = ACTIONS(687),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_rewrite] = ACTIONS(94),
    [anon_sym_with] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [sym__layout_close_brace] = ACTIONS(689),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_rewrite] = ACTIONS(98),
    [anon_sym_with] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [404] = {
    [sym_where_clause] = STATE(472),
    [sym_rhs] = STATE(473),
    [sym__layout_semicolon] = ACTIONS(691),
    [sym__layout_close_brace] = ACTIONS(691),
    [anon_sym_SEMI] = ACTIONS(691),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(693),
    [anon_sym_module] = ACTIONS(695),
    [anon_sym_where] = ACTIONS(697),
  },
  [405] = {
    [sym_semi] = STATE(475),
    [aux_sym__declarations1_repeat1] = STATE(476),
    [sym__layout_semicolon] = ACTIONS(699),
    [sym__layout_close_brace] = ACTIONS(701),
    [anon_sym_SEMI] = ACTIONS(699),
    [sym_comment] = ACTIONS(80),
  },
  [406] = {
    [sym__layout_semicolon] = ACTIONS(703),
    [sym__layout_close_brace] = ACTIONS(703),
    [anon_sym_SEMI] = ACTIONS(703),
    [sym_comment] = ACTIONS(80),
  },
  [407] = {
    [sym_vclose] = STATE(477),
    [sym__layout_close_brace] = ACTIONS(569),
    [sym_comment] = ACTIONS(80),
  },
  [408] = {
    [sym__application] = STATE(478),
    [sym__expr2] = STATE(401),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(402),
    [sym__atomic_expr_curly] = STATE(403),
    [sym__atomic_expr_no_curly] = STATE(403),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(409),
    [sym_literal] = ACTIONS(571),
    [sym_set_n] = ACTIONS(571),
    [sym_name_at] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_Prop] = ACTIONS(571),
    [anon_sym_Set] = ACTIONS(571),
    [anon_sym_quote] = ACTIONS(571),
    [anon_sym_quoteTerm] = ACTIONS(571),
    [anon_sym_unquote] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LPAREN_PIPE] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(571),
  },
  [409] = {
    [sym__expr2] = STATE(479),
    [sym_atomic_expr] = STATE(402),
    [sym__atomic_expr_curly] = STATE(403),
    [sym__atomic_expr_no_curly] = STATE(403),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(571),
    [sym_set_n] = ACTIONS(571),
    [sym_name_at] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_Prop] = ACTIONS(571),
    [anon_sym_Set] = ACTIONS(571),
    [anon_sym_quote] = ACTIONS(571),
    [anon_sym_quoteTerm] = ACTIONS(571),
    [anon_sym_unquote] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LPAREN_PIPE] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(571),
  },
  [410] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [411] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [412] = {
    [anon_sym_RBRACE] = ACTIONS(705),
    [sym_comment] = ACTIONS(80),
  },
  [413] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(707),
    [sym_comment] = ACTIONS(80),
  },
  [414] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(707),
  },
  [415] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(707),
  },
  [416] = {
    [sym_expr] = STATE(482),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [417] = {
    [sym_expr] = STATE(483),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [418] = {
    [sym_expr] = STATE(484),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [419] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
  },
  [420] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(709),
    [sym_comment] = ACTIONS(80),
  },
  [422] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(711),
    [sym_comment] = ACTIONS(80),
  },
  [423] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(711),
  },
  [424] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(711),
  },
  [425] = {
    [sym_atomic_expr] = STATE(493),
    [sym__atomic_expr_curly] = STATE(494),
    [sym__atomic_expr_no_curly] = STATE(494),
    [aux_sym__application_repeat1] = STATE(425),
    [sym_literal] = ACTIONS(713),
    [sym_set_n] = ACTIONS(713),
    [sym_name_at] = ACTIONS(716),
    [sym_qualified_name] = ACTIONS(713),
    [anon_sym__] = ACTIONS(713),
    [anon_sym_DOT] = ACTIONS(716),
    [anon_sym_LBRACE] = ACTIONS(719),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(722),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(713),
    [anon_sym_Prop] = ACTIONS(713),
    [anon_sym_Set] = ACTIONS(713),
    [anon_sym_quote] = ACTIONS(713),
    [anon_sym_quoteTerm] = ACTIONS(713),
    [anon_sym_unquote] = ACTIONS(713),
    [anon_sym_LPAREN] = ACTIONS(725),
    [anon_sym_LPAREN_PIPE] = ACTIONS(728),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(713),
  },
  [426] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
  },
  [427] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
  },
  [428] = {
    [anon_sym_RBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(80),
  },
  [429] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
  },
  [430] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
  },
  [431] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(80),
  },
  [432] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(731),
  },
  [433] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [434] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [435] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [436] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [437] = {
    [anon_sym_RBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(80),
  },
  [438] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(735),
    [sym_comment] = ACTIONS(80),
  },
  [439] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(735),
  },
  [440] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(735),
  },
  [441] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [442] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [443] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_PIPE_RPAREN] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [444] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_PIPE_RPAREN] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [445] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_with] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [446] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_with] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [447] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [448] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [449] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [450] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [451] = {
    [ts_builtin_sym_end] = ACTIONS(737),
    [sym_literal] = ACTIONS(737),
    [sym_set_n] = ACTIONS(737),
    [sym_name_at] = ACTIONS(737),
    [sym_qualified_name] = ACTIONS(737),
    [anon_sym__] = ACTIONS(737),
    [anon_sym_DOT] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(737),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(737),
    [anon_sym_Prop] = ACTIONS(737),
    [anon_sym_Set] = ACTIONS(737),
    [anon_sym_quote] = ACTIONS(737),
    [anon_sym_quoteTerm] = ACTIONS(737),
    [anon_sym_unquote] = ACTIONS(737),
    [anon_sym_LPAREN] = ACTIONS(737),
    [anon_sym_LPAREN_PIPE] = ACTIONS(737),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(737),
    [anon_sym_module] = ACTIONS(737),
    [anon_sym_where] = ACTIONS(737),
  },
  [452] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [453] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [454] = {
    [anon_sym_RBRACE] = ACTIONS(739),
    [sym_comment] = ACTIONS(80),
  },
  [455] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(741),
    [sym_comment] = ACTIONS(80),
  },
  [456] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(741),
  },
  [457] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(741),
  },
  [458] = {
    [ts_builtin_sym_end] = ACTIONS(743),
    [sym_literal] = ACTIONS(743),
    [sym_set_n] = ACTIONS(743),
    [sym_name_at] = ACTIONS(743),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_DOT] = ACTIONS(743),
    [anon_sym_LBRACE] = ACTIONS(743),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(743),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_LPAREN] = ACTIONS(743),
    [anon_sym_LPAREN_PIPE] = ACTIONS(743),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(743),
  },
  [459] = {
    [sym__layout_semicolon] = ACTIONS(745),
    [sym__layout_close_brace] = ACTIONS(745),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_rewrite] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [460] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [sym__layout_close_brace] = ACTIONS(747),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_rewrite] = ACTIONS(152),
    [anon_sym_with] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(749),
    [sym_comment] = ACTIONS(80),
  },
  [462] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(751),
    [sym_comment] = ACTIONS(80),
  },
  [463] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(751),
  },
  [464] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(751),
  },
  [465] = {
    [sym__expr1] = STATE(508),
    [sym__application] = STATE(509),
    [sym__expr2] = STATE(510),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(511),
    [sym__atomic_expr_curly] = STATE(512),
    [sym__atomic_expr_no_curly] = STATE(512),
    [aux_sym__expr1_repeat1] = STATE(513),
    [aux_sym__application_repeat1] = STATE(514),
    [sym_literal] = ACTIONS(753),
    [sym_set_n] = ACTIONS(753),
    [sym_name_at] = ACTIONS(755),
    [sym_qualified_name] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(759),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_Prop] = ACTIONS(753),
    [anon_sym_Set] = ACTIONS(753),
    [anon_sym_quote] = ACTIONS(753),
    [anon_sym_quoteTerm] = ACTIONS(753),
    [anon_sym_unquote] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_LPAREN_PIPE] = ACTIONS(763),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(753),
  },
  [466] = {
    [sym__expr1] = STATE(521),
    [sym__application] = STATE(522),
    [sym__expr2] = STATE(523),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(524),
    [sym__atomic_expr_curly] = STATE(525),
    [sym__atomic_expr_no_curly] = STATE(525),
    [aux_sym__expr1_repeat1] = STATE(526),
    [aux_sym__application_repeat1] = STATE(527),
    [sym_literal] = ACTIONS(765),
    [sym_set_n] = ACTIONS(765),
    [sym_name_at] = ACTIONS(767),
    [sym_qualified_name] = ACTIONS(765),
    [anon_sym__] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(767),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(765),
    [anon_sym_Prop] = ACTIONS(765),
    [anon_sym_Set] = ACTIONS(765),
    [anon_sym_quote] = ACTIONS(765),
    [anon_sym_quoteTerm] = ACTIONS(765),
    [anon_sym_unquote] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_LPAREN_PIPE] = ACTIONS(775),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(765),
  },
  [467] = {
    [sym_with_expressions] = STATE(528),
    [sym__layout_semicolon] = ACTIONS(777),
    [sym__layout_close_brace] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(777),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_with] = ACTIONS(685),
    [anon_sym_where] = ACTIONS(777),
  },
  [468] = {
    [sym__layout_semicolon] = ACTIONS(777),
    [sym__layout_close_brace] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(777),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(777),
  },
  [469] = {
    [sym_expr] = STATE(536),
    [sym__expr1] = STATE(537),
    [sym__application] = STATE(538),
    [sym__expr2] = STATE(539),
    [sym__atomic_exprs1] = STATE(540),
    [sym_atomic_expr] = STATE(541),
    [sym__atomic_expr_curly] = STATE(542),
    [sym__atomic_expr_no_curly] = STATE(542),
    [sym_tele_arrow] = STATE(543),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(544),
    [aux_sym__application_repeat1] = STATE(545),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(779),
    [sym_set_n] = ACTIONS(779),
    [sym_name_at] = ACTIONS(781),
    [sym_qualified_name] = ACTIONS(779),
    [anon_sym__] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(785),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(779),
    [anon_sym_Prop] = ACTIONS(779),
    [anon_sym_Set] = ACTIONS(779),
    [anon_sym_quote] = ACTIONS(779),
    [anon_sym_quoteTerm] = ACTIONS(779),
    [anon_sym_unquote] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(789),
    [anon_sym_LPAREN_PIPE] = ACTIONS(791),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(779),
  },
  [470] = {
    [sym_anonymous_name] = STATE(546),
    [sym_name] = ACTIONS(793),
    [anon_sym__] = ACTIONS(322),
    [sym_comment] = ACTIONS(18),
  },
  [471] = {
    [sym_vopen] = STATE(547),
    [sym_declarations] = STATE(548),
    [sym__declarations0] = STATE(549),
    [sym__layout_open_brace] = ACTIONS(324),
    [sym_comment] = ACTIONS(80),
  },
  [472] = {
    [sym__layout_semicolon] = ACTIONS(795),
    [sym__layout_close_brace] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(795),
    [sym_comment] = ACTIONS(80),
  },
  [473] = {
    [sym_where_clause] = STATE(550),
    [sym__layout_semicolon] = ACTIONS(795),
    [sym__layout_close_brace] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(795),
    [sym_comment] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(695),
    [anon_sym_where] = ACTIONS(697),
  },
  [474] = {
    [sym_literal] = ACTIONS(797),
    [sym_set_n] = ACTIONS(797),
    [sym_name_at] = ACTIONS(797),
    [sym_qualified_name] = ACTIONS(797),
    [anon_sym__] = ACTIONS(797),
    [anon_sym_DOT] = ACTIONS(797),
    [anon_sym_LBRACE] = ACTIONS(797),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(797),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(797),
    [anon_sym_Prop] = ACTIONS(797),
    [anon_sym_Set] = ACTIONS(797),
    [anon_sym_quote] = ACTIONS(797),
    [anon_sym_quoteTerm] = ACTIONS(797),
    [anon_sym_unquote] = ACTIONS(797),
    [anon_sym_LPAREN] = ACTIONS(797),
    [anon_sym_LPAREN_PIPE] = ACTIONS(797),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(797),
  },
  [475] = {
    [sym__expr1] = STATE(399),
    [sym__application] = STATE(400),
    [sym__expr2] = STATE(401),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(402),
    [sym__atomic_expr_curly] = STATE(403),
    [sym__atomic_expr_no_curly] = STATE(403),
    [sym_lhs] = STATE(404),
    [sym__declaration] = STATE(551),
    [sym_function_clause] = STATE(406),
    [aux_sym__expr1_repeat1] = STATE(408),
    [aux_sym__application_repeat1] = STATE(409),
    [sym_literal] = ACTIONS(571),
    [sym_set_n] = ACTIONS(571),
    [sym_name_at] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_Prop] = ACTIONS(571),
    [anon_sym_Set] = ACTIONS(571),
    [anon_sym_quote] = ACTIONS(571),
    [anon_sym_quoteTerm] = ACTIONS(571),
    [anon_sym_unquote] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LPAREN_PIPE] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(571),
  },
  [476] = {
    [sym_semi] = STATE(475),
    [aux_sym__declarations1_repeat1] = STATE(552),
    [sym__layout_semicolon] = ACTIONS(699),
    [sym__layout_close_brace] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(699),
    [sym_comment] = ACTIONS(80),
  },
  [477] = {
    [ts_builtin_sym_end] = ACTIONS(801),
    [sym_literal] = ACTIONS(801),
    [sym_set_n] = ACTIONS(801),
    [sym_name_at] = ACTIONS(801),
    [sym_qualified_name] = ACTIONS(801),
    [anon_sym__] = ACTIONS(801),
    [anon_sym_DOT] = ACTIONS(801),
    [anon_sym_LBRACE] = ACTIONS(801),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(801),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(801),
    [anon_sym_Prop] = ACTIONS(801),
    [anon_sym_Set] = ACTIONS(801),
    [anon_sym_quote] = ACTIONS(801),
    [anon_sym_quoteTerm] = ACTIONS(801),
    [anon_sym_unquote] = ACTIONS(801),
    [anon_sym_LPAREN] = ACTIONS(801),
    [anon_sym_LPAREN_PIPE] = ACTIONS(801),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(801),
  },
  [478] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [sym__layout_close_brace] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_rewrite] = ACTIONS(452),
    [anon_sym_with] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
  },
  [479] = {
    [sym__layout_semicolon] = ACTIONS(454),
    [sym__layout_close_brace] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_rewrite] = ACTIONS(454),
    [anon_sym_with] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
  },
  [480] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [481] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [482] = {
    [anon_sym_RBRACE] = ACTIONS(803),
    [sym_comment] = ACTIONS(80),
  },
  [483] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(803),
    [sym_comment] = ACTIONS(80),
  },
  [484] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(803),
  },
  [485] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
  },
  [486] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
  },
  [487] = {
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
  },
  [488] = {
    [sym_atomic_expr] = STATE(554),
    [sym__atomic_expr_curly] = STATE(494),
    [sym__atomic_expr_no_curly] = STATE(494),
    [sym_literal] = ACTIONS(805),
    [sym_set_n] = ACTIONS(805),
    [sym_name_at] = ACTIONS(807),
    [sym_qualified_name] = ACTIONS(805),
    [anon_sym__] = ACTIONS(805),
    [anon_sym_DOT] = ACTIONS(807),
    [anon_sym_LBRACE] = ACTIONS(809),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(811),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(805),
    [anon_sym_Prop] = ACTIONS(805),
    [anon_sym_Set] = ACTIONS(805),
    [anon_sym_quote] = ACTIONS(805),
    [anon_sym_quoteTerm] = ACTIONS(805),
    [anon_sym_unquote] = ACTIONS(805),
    [anon_sym_LPAREN] = ACTIONS(813),
    [anon_sym_LPAREN_PIPE] = ACTIONS(815),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(805),
  },
  [489] = {
    [sym_expr] = STATE(556),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [490] = {
    [sym_expr] = STATE(557),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [491] = {
    [sym_expr] = STATE(558),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [492] = {
    [sym_expr] = STATE(559),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [493] = {
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
  },
  [494] = {
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
  },
  [495] = {
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_DOT_DOT] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
  },
  [496] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [497] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [498] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [499] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [500] = {
    [sym__layout_semicolon] = ACTIONS(825),
    [sym__layout_close_brace] = ACTIONS(825),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_rewrite] = ACTIONS(444),
    [anon_sym_with] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [501] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [sym__layout_close_brace] = ACTIONS(827),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_rewrite] = ACTIONS(497),
    [anon_sym_with] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(673),
    [sym__layout_close_brace] = ACTIONS(673),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_with] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [503] = {
    [sym_atomic_expr] = STATE(560),
    [sym__atomic_expr_curly] = STATE(512),
    [sym__atomic_expr_no_curly] = STATE(512),
    [sym_literal] = ACTIONS(753),
    [sym_set_n] = ACTIONS(753),
    [sym_name_at] = ACTIONS(755),
    [sym_qualified_name] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(759),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_Prop] = ACTIONS(753),
    [anon_sym_Set] = ACTIONS(753),
    [anon_sym_quote] = ACTIONS(753),
    [anon_sym_quoteTerm] = ACTIONS(753),
    [anon_sym_unquote] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_LPAREN_PIPE] = ACTIONS(763),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(753),
  },
  [504] = {
    [sym_expr] = STATE(562),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [505] = {
    [sym_expr] = STATE(563),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [506] = {
    [sym_expr] = STATE(564),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [507] = {
    [sym_expr] = STATE(565),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [508] = {
    [sym__layout_semicolon] = ACTIONS(833),
    [sym__layout_close_brace] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(833),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(833),
    [anon_sym_COLON] = ACTIONS(833),
    [anon_sym_module] = ACTIONS(833),
    [anon_sym_with] = ACTIONS(833),
    [anon_sym_where] = ACTIONS(833),
  },
  [509] = {
    [sym__layout_semicolon] = ACTIONS(180),
    [sym__layout_close_brace] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_with] = ACTIONS(180),
    [anon_sym_where] = ACTIONS(180),
  },
  [510] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [sym__layout_close_brace] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(182),
    [anon_sym_with] = ACTIONS(182),
    [anon_sym_where] = ACTIONS(182),
  },
  [511] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [sym__layout_close_brace] = ACTIONS(687),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_with] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [512] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [sym__layout_close_brace] = ACTIONS(689),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_with] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [513] = {
    [sym__application] = STATE(566),
    [sym__expr2] = STATE(510),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(511),
    [sym__atomic_expr_curly] = STATE(512),
    [sym__atomic_expr_no_curly] = STATE(512),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(514),
    [sym_literal] = ACTIONS(753),
    [sym_set_n] = ACTIONS(753),
    [sym_name_at] = ACTIONS(755),
    [sym_qualified_name] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(759),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_Prop] = ACTIONS(753),
    [anon_sym_Set] = ACTIONS(753),
    [anon_sym_quote] = ACTIONS(753),
    [anon_sym_quoteTerm] = ACTIONS(753),
    [anon_sym_unquote] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_LPAREN_PIPE] = ACTIONS(763),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(753),
  },
  [514] = {
    [sym__expr2] = STATE(567),
    [sym_atomic_expr] = STATE(511),
    [sym__atomic_expr_curly] = STATE(512),
    [sym__atomic_expr_no_curly] = STATE(512),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(753),
    [sym_set_n] = ACTIONS(753),
    [sym_name_at] = ACTIONS(755),
    [sym_qualified_name] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(759),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(753),
    [anon_sym_Prop] = ACTIONS(753),
    [anon_sym_Set] = ACTIONS(753),
    [anon_sym_quote] = ACTIONS(753),
    [anon_sym_quoteTerm] = ACTIONS(753),
    [anon_sym_unquote] = ACTIONS(753),
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_LPAREN_PIPE] = ACTIONS(763),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(753),
  },
  [515] = {
    [sym__layout_semicolon] = ACTIONS(673),
    [sym__layout_close_brace] = ACTIONS(673),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_COLON] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [516] = {
    [sym_atomic_expr] = STATE(568),
    [sym__atomic_expr_curly] = STATE(525),
    [sym__atomic_expr_no_curly] = STATE(525),
    [sym_literal] = ACTIONS(765),
    [sym_set_n] = ACTIONS(765),
    [sym_name_at] = ACTIONS(767),
    [sym_qualified_name] = ACTIONS(765),
    [anon_sym__] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(767),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(765),
    [anon_sym_Prop] = ACTIONS(765),
    [anon_sym_Set] = ACTIONS(765),
    [anon_sym_quote] = ACTIONS(765),
    [anon_sym_quoteTerm] = ACTIONS(765),
    [anon_sym_unquote] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_LPAREN_PIPE] = ACTIONS(775),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(765),
  },
  [517] = {
    [sym_expr] = STATE(570),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [518] = {
    [sym_expr] = STATE(571),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [519] = {
    [sym_expr] = STATE(572),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(837),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [520] = {
    [sym_expr] = STATE(573),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [521] = {
    [sym__layout_semicolon] = ACTIONS(839),
    [sym__layout_close_brace] = ACTIONS(839),
    [anon_sym_SEMI] = ACTIONS(839),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(839),
    [anon_sym_COLON] = ACTIONS(839),
    [anon_sym_module] = ACTIONS(839),
    [anon_sym_where] = ACTIONS(839),
  },
  [522] = {
    [sym__layout_semicolon] = ACTIONS(180),
    [sym__layout_close_brace] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_where] = ACTIONS(180),
  },
  [523] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [sym__layout_close_brace] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(182),
    [anon_sym_where] = ACTIONS(182),
  },
  [524] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [sym__layout_close_brace] = ACTIONS(687),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [525] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [sym__layout_close_brace] = ACTIONS(689),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [526] = {
    [sym__application] = STATE(574),
    [sym__expr2] = STATE(523),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(524),
    [sym__atomic_expr_curly] = STATE(525),
    [sym__atomic_expr_no_curly] = STATE(525),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(527),
    [sym_literal] = ACTIONS(765),
    [sym_set_n] = ACTIONS(765),
    [sym_name_at] = ACTIONS(767),
    [sym_qualified_name] = ACTIONS(765),
    [anon_sym__] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(767),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(765),
    [anon_sym_Prop] = ACTIONS(765),
    [anon_sym_Set] = ACTIONS(765),
    [anon_sym_quote] = ACTIONS(765),
    [anon_sym_quoteTerm] = ACTIONS(765),
    [anon_sym_unquote] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_LPAREN_PIPE] = ACTIONS(775),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(765),
  },
  [527] = {
    [sym__expr2] = STATE(575),
    [sym_atomic_expr] = STATE(524),
    [sym__atomic_expr_curly] = STATE(525),
    [sym__atomic_expr_no_curly] = STATE(525),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(765),
    [sym_set_n] = ACTIONS(765),
    [sym_name_at] = ACTIONS(767),
    [sym_qualified_name] = ACTIONS(765),
    [anon_sym__] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(767),
    [anon_sym_LBRACE] = ACTIONS(769),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(765),
    [anon_sym_Prop] = ACTIONS(765),
    [anon_sym_Set] = ACTIONS(765),
    [anon_sym_quote] = ACTIONS(765),
    [anon_sym_quoteTerm] = ACTIONS(765),
    [anon_sym_unquote] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(773),
    [anon_sym_LPAREN_PIPE] = ACTIONS(775),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(765),
  },
  [528] = {
    [sym__layout_semicolon] = ACTIONS(841),
    [sym__layout_close_brace] = ACTIONS(841),
    [anon_sym_SEMI] = ACTIONS(841),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(841),
    [anon_sym_module] = ACTIONS(841),
    [anon_sym_where] = ACTIONS(841),
  },
  [529] = {
    [sym__layout_semicolon] = ACTIONS(673),
    [sym__layout_close_brace] = ACTIONS(673),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(24),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [530] = {
    [sym_atomic_expr] = STATE(579),
    [sym__atomic_expr_curly] = STATE(542),
    [sym__atomic_expr_no_curly] = STATE(542),
    [sym_literal] = ACTIONS(779),
    [sym_set_n] = ACTIONS(779),
    [sym_name_at] = ACTIONS(781),
    [sym_qualified_name] = ACTIONS(779),
    [anon_sym__] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(781),
    [anon_sym_LBRACE] = ACTIONS(843),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(845),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(779),
    [anon_sym_Prop] = ACTIONS(779),
    [anon_sym_Set] = ACTIONS(779),
    [anon_sym_quote] = ACTIONS(779),
    [anon_sym_quoteTerm] = ACTIONS(779),
    [anon_sym_unquote] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(847),
    [anon_sym_LPAREN_PIPE] = ACTIONS(791),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(779),
  },
  [531] = {
    [sym_atomic_expr] = STATE(579),
    [sym__atomic_expr_curly] = STATE(542),
    [sym__atomic_expr_no_curly] = STATE(542),
    [sym_literal] = ACTIONS(779),
    [sym_set_n] = ACTIONS(779),
    [sym_name_at] = ACTIONS(781),
    [sym_qualified_name] = ACTIONS(779),
    [anon_sym__] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(781),
    [anon_sym_LBRACE] = ACTIONS(849),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(851),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(779),
    [anon_sym_Prop] = ACTIONS(779),
    [anon_sym_Set] = ACTIONS(779),
    [anon_sym_quote] = ACTIONS(779),
    [anon_sym_quoteTerm] = ACTIONS(779),
    [anon_sym_unquote] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(853),
    [anon_sym_LPAREN_PIPE] = ACTIONS(791),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(779),
  },
  [532] = {
    [sym_expr] = STATE(584),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(117),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [533] = {
    [sym_expr] = STATE(585),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [534] = {
    [sym_expr] = STATE(586),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [535] = {
    [sym_expr] = STATE(587),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [536] = {
    [sym__layout_semicolon] = ACTIONS(859),
    [sym__layout_close_brace] = ACTIONS(859),
    [anon_sym_SEMI] = ACTIONS(859),
    [sym_comment] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(859),
    [anon_sym_where] = ACTIONS(859),
  },
  [537] = {
    [sym__layout_semicolon] = ACTIONS(176),
    [sym__layout_close_brace] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(861),
    [anon_sym_module] = ACTIONS(176),
    [anon_sym_where] = ACTIONS(176),
  },
  [538] = {
    [sym__layout_semicolon] = ACTIONS(180),
    [sym__layout_close_brace] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_where] = ACTIONS(180),
  },
  [539] = {
    [sym__layout_semicolon] = ACTIONS(182),
    [sym__layout_close_brace] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(182),
    [anon_sym_where] = ACTIONS(182),
  },
  [540] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(92),
  },
  [541] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [sym__layout_close_brace] = ACTIONS(687),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [542] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [sym__layout_close_brace] = ACTIONS(689),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(98),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [543] = {
    [sym_expr] = STATE(589),
    [sym__expr1] = STATE(537),
    [sym__application] = STATE(538),
    [sym__expr2] = STATE(539),
    [sym__atomic_exprs1] = STATE(540),
    [sym_atomic_expr] = STATE(541),
    [sym__atomic_expr_curly] = STATE(542),
    [sym__atomic_expr_no_curly] = STATE(542),
    [sym_tele_arrow] = STATE(543),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(544),
    [aux_sym__application_repeat1] = STATE(545),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(779),
    [sym_set_n] = ACTIONS(779),
    [sym_name_at] = ACTIONS(781),
    [sym_qualified_name] = ACTIONS(779),
    [anon_sym__] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(785),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(779),
    [anon_sym_Prop] = ACTIONS(779),
    [anon_sym_Set] = ACTIONS(779),
    [anon_sym_quote] = ACTIONS(779),
    [anon_sym_quoteTerm] = ACTIONS(779),
    [anon_sym_unquote] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(789),
    [anon_sym_LPAREN_PIPE] = ACTIONS(791),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(779),
  },
  [544] = {
    [sym__application] = STATE(596),
    [sym__expr2] = STATE(539),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(597),
    [sym__atomic_expr_curly] = STATE(598),
    [sym__atomic_expr_no_curly] = STATE(598),
    [aux_sym__expr1_repeat1] = STATE(95),
    [aux_sym__application_repeat1] = STATE(599),
    [sym_literal] = ACTIONS(863),
    [sym_set_n] = ACTIONS(863),
    [sym_name_at] = ACTIONS(865),
    [sym_qualified_name] = ACTIONS(863),
    [anon_sym__] = ACTIONS(863),
    [anon_sym_DOT] = ACTIONS(865),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_Prop] = ACTIONS(863),
    [anon_sym_Set] = ACTIONS(863),
    [anon_sym_quote] = ACTIONS(863),
    [anon_sym_quoteTerm] = ACTIONS(863),
    [anon_sym_unquote] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_LPAREN_PIPE] = ACTIONS(873),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(863),
  },
  [545] = {
    [sym__expr2] = STATE(600),
    [sym_atomic_expr] = STATE(541),
    [sym__atomic_expr_curly] = STATE(542),
    [sym__atomic_expr_no_curly] = STATE(542),
    [aux_sym__application_repeat1] = STATE(153),
    [sym_literal] = ACTIONS(779),
    [sym_set_n] = ACTIONS(779),
    [sym_name_at] = ACTIONS(781),
    [sym_qualified_name] = ACTIONS(779),
    [anon_sym__] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(781),
    [anon_sym_LBRACE] = ACTIONS(843),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(845),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(114),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(779),
    [anon_sym_Prop] = ACTIONS(779),
    [anon_sym_Set] = ACTIONS(779),
    [anon_sym_quote] = ACTIONS(779),
    [anon_sym_quoteTerm] = ACTIONS(779),
    [anon_sym_unquote] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(847),
    [anon_sym_LPAREN_PIPE] = ACTIONS(791),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(779),
  },
  [546] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_where] = ACTIONS(875),
  },
  [547] = {
    [sym_vclose] = STATE(603),
    [sym__expr1] = STATE(399),
    [sym__application] = STATE(400),
    [sym__expr2] = STATE(401),
    [sym__atomic_exprs1] = STATE(12),
    [sym_atomic_expr] = STATE(402),
    [sym__atomic_expr_curly] = STATE(403),
    [sym__atomic_expr_no_curly] = STATE(403),
    [sym_lhs] = STATE(404),
    [sym__declaration] = STATE(405),
    [sym_function_clause] = STATE(406),
    [sym__declarations1] = STATE(604),
    [aux_sym__expr1_repeat1] = STATE(408),
    [aux_sym__application_repeat1] = STATE(409),
    [sym__layout_close_brace] = ACTIONS(877),
    [sym_literal] = ACTIONS(571),
    [sym_set_n] = ACTIONS(571),
    [sym_name_at] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(571),
    [anon_sym_Prop] = ACTIONS(571),
    [anon_sym_Set] = ACTIONS(571),
    [anon_sym_quote] = ACTIONS(571),
    [anon_sym_quoteTerm] = ACTIONS(571),
    [anon_sym_unquote] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_LPAREN_PIPE] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(571),
  },
  [548] = {
    [sym__layout_semicolon] = ACTIONS(879),
    [sym__layout_close_brace] = ACTIONS(879),
    [anon_sym_SEMI] = ACTIONS(879),
    [sym_comment] = ACTIONS(80),
  },
  [549] = {
    [sym__layout_semicolon] = ACTIONS(881),
    [sym__layout_close_brace] = ACTIONS(881),
    [anon_sym_SEMI] = ACTIONS(881),
    [sym_comment] = ACTIONS(80),
  },
  [550] = {
    [sym__layout_semicolon] = ACTIONS(883),
    [sym__layout_close_brace] = ACTIONS(883),
    [anon_sym_SEMI] = ACTIONS(883),
    [sym_comment] = ACTIONS(80),
  },
  [551] = {
    [sym__layout_semicolon] = ACTIONS(885),
    [sym__layout_close_brace] = ACTIONS(885),
    [anon_sym_SEMI] = ACTIONS(885),
    [sym_comment] = ACTIONS(80),
  },
  [552] = {
    [sym_semi] = STATE(475),
    [aux_sym__declarations1_repeat1] = STATE(552),
    [sym__layout_semicolon] = ACTIONS(887),
    [sym__layout_close_brace] = ACTIONS(885),
    [anon_sym_SEMI] = ACTIONS(887),
    [sym_comment] = ACTIONS(80),
  },
  [553] = {
    [anon_sym_DOT] = ACTIONS(890),
    [anon_sym_DOT_DOT] = ACTIONS(892),
    [anon_sym_LBRACE] = ACTIONS(890),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(892),
    [sym_comment] = ACTIONS(80),
    [anon_sym_DASH_GT] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(892),
  },
  [554] = {
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
  },
  [555] = {
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
  },
  [556] = {
    [anon_sym_RBRACE] = ACTIONS(894),
    [sym_comment] = ACTIONS(80),
  },
  [557] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(896),
    [sym_comment] = ACTIONS(80),
  },
  [558] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(896),
  },
  [559] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(896),
  },
  [560] = {
    [sym__layout_semicolon] = ACTIONS(745),
    [sym__layout_close_brace] = ACTIONS(745),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_with] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [561] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [sym__layout_close_brace] = ACTIONS(747),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_with] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [562] = {
    [anon_sym_RBRACE] = ACTIONS(898),
    [sym_comment] = ACTIONS(80),
  },
  [563] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(900),
    [sym_comment] = ACTIONS(80),
  },
  [564] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(900),
  },
  [565] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(900),
  },
  [566] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [sym__layout_close_brace] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_with] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
  },
  [567] = {
    [sym__layout_semicolon] = ACTIONS(454),
    [sym__layout_close_brace] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_with] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
  },
  [568] = {
    [sym__layout_semicolon] = ACTIONS(745),
    [sym__layout_close_brace] = ACTIONS(745),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [569] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [sym__layout_close_brace] = ACTIONS(747),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [570] = {
    [anon_sym_RBRACE] = ACTIONS(902),
    [sym_comment] = ACTIONS(80),
  },
  [571] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(904),
    [sym_comment] = ACTIONS(80),
  },
  [572] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(904),
  },
  [573] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(904),
  },
  [574] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [sym__layout_close_brace] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
  },
  [575] = {
    [sym__layout_semicolon] = ACTIONS(454),
    [sym__layout_close_brace] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_COLON] = ACTIONS(454),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
  },
  [576] = {
    [sym_expr] = STATE(584),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [577] = {
    [sym_expr] = STATE(585),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [578] = {
    [sym_expr] = STATE(586),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [579] = {
    [sym__layout_semicolon] = ACTIONS(745),
    [sym__layout_close_brace] = ACTIONS(745),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [580] = {
    [sym_expr] = STATE(584),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(270),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(120),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(138),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(855),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [581] = {
    [sym_expr] = STATE(585),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(130),
    [sym__atomic_expr_curly] = STATE(131),
    [sym__atomic_expr_no_curly] = STATE(131),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(132),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(154),
    [sym_set_n] = ACTIONS(154),
    [sym_name_at] = ACTIONS(156),
    [sym_qualified_name] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_Prop] = ACTIONS(154),
    [anon_sym_Set] = ACTIONS(154),
    [anon_sym_quote] = ACTIONS(154),
    [anon_sym_quoteTerm] = ACTIONS(154),
    [anon_sym_unquote] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LPAREN_PIPE] = ACTIONS(168),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(154),
  },
  [582] = {
    [sym_expr] = STATE(586),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(272),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(118),
    [sym__atomic_expr_curly] = STATE(119),
    [sym__atomic_expr_no_curly] = STATE(119),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(137),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(136),
    [sym_set_n] = ACTIONS(136),
    [sym_name_at] = ACTIONS(170),
    [sym_qualified_name] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_Prop] = ACTIONS(136),
    [anon_sym_Set] = ACTIONS(136),
    [anon_sym_quote] = ACTIONS(136),
    [anon_sym_quoteTerm] = ACTIONS(136),
    [anon_sym_unquote] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_LPAREN_PIPE] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(136),
  },
  [583] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [sym__layout_close_brace] = ACTIONS(747),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [584] = {
    [anon_sym_RBRACE] = ACTIONS(906),
    [sym_comment] = ACTIONS(80),
  },
  [585] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(908),
    [sym_comment] = ACTIONS(80),
  },
  [586] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(908),
  },
  [587] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(908),
  },
  [588] = {
    [sym_expr] = STATE(613),
    [sym__expr1] = STATE(537),
    [sym__application] = STATE(538),
    [sym__expr2] = STATE(539),
    [sym__atomic_exprs1] = STATE(540),
    [sym_atomic_expr] = STATE(541),
    [sym__atomic_expr_curly] = STATE(542),
    [sym__atomic_expr_no_curly] = STATE(542),
    [sym_tele_arrow] = STATE(543),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(544),
    [aux_sym__application_repeat1] = STATE(545),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(779),
    [sym_set_n] = ACTIONS(779),
    [sym_name_at] = ACTIONS(781),
    [sym_qualified_name] = ACTIONS(779),
    [anon_sym__] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(785),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(779),
    [anon_sym_Prop] = ACTIONS(779),
    [anon_sym_Set] = ACTIONS(779),
    [anon_sym_quote] = ACTIONS(779),
    [anon_sym_quoteTerm] = ACTIONS(779),
    [anon_sym_unquote] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(789),
    [anon_sym_LPAREN_PIPE] = ACTIONS(791),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(779),
  },
  [589] = {
    [sym__layout_semicolon] = ACTIONS(446),
    [sym__layout_close_brace] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(446),
    [sym_comment] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(446),
    [anon_sym_where] = ACTIONS(446),
  },
  [590] = {
    [sym__layout_semicolon] = ACTIONS(673),
    [sym__layout_close_brace] = ACTIONS(673),
    [sym_literal] = ACTIONS(24),
    [sym_set_n] = ACTIONS(24),
    [anon_sym_SEMI] = ACTIONS(24),
    [sym_name_at] = ACTIONS(24),
    [sym_qualified_name] = ACTIONS(24),
    [anon_sym__] = ACTIONS(24),
    [anon_sym_DOT] = ACTIONS(24),
    [anon_sym_LBRACE] = ACTIONS(24),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(24),
    [anon_sym_PIPE] = ACTIONS(24),
    [anon_sym_QMARK] = ACTIONS(24),
    [anon_sym_Prop] = ACTIONS(24),
    [anon_sym_Set] = ACTIONS(24),
    [anon_sym_quote] = ACTIONS(24),
    [anon_sym_quoteTerm] = ACTIONS(24),
    [anon_sym_unquote] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_LPAREN_PIPE] = ACTIONS(24),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(24),
    [anon_sym_module] = ACTIONS(24),
    [anon_sym_where] = ACTIONS(24),
  },
  [591] = {
    [sym_atomic_expr] = STATE(614),
    [sym__atomic_expr_curly] = STATE(598),
    [sym__atomic_expr_no_curly] = STATE(598),
    [sym_literal] = ACTIONS(863),
    [sym_set_n] = ACTIONS(863),
    [sym_name_at] = ACTIONS(865),
    [sym_qualified_name] = ACTIONS(863),
    [anon_sym__] = ACTIONS(863),
    [anon_sym_DOT] = ACTIONS(865),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_Prop] = ACTIONS(863),
    [anon_sym_Set] = ACTIONS(863),
    [anon_sym_quote] = ACTIONS(863),
    [anon_sym_quoteTerm] = ACTIONS(863),
    [anon_sym_unquote] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_LPAREN_PIPE] = ACTIONS(873),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(863),
  },
  [592] = {
    [sym_expr] = STATE(616),
    [sym__expr1] = STATE(32),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(35),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(38),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(40),
    [aux_sym__application_repeat1] = STATE(41),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(28),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(910),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [593] = {
    [sym_expr] = STATE(617),
    [sym__expr1] = STATE(51),
    [sym__application] = STATE(52),
    [sym__expr2] = STATE(53),
    [sym__atomic_exprs1] = STATE(54),
    [sym_atomic_expr] = STATE(55),
    [sym__atomic_expr_curly] = STATE(56),
    [sym__atomic_expr_no_curly] = STATE(56),
    [sym_tele_arrow] = STATE(57),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(59),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(44),
    [sym_set_n] = ACTIONS(44),
    [sym_name_at] = ACTIONS(46),
    [sym_qualified_name] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(912),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_Prop] = ACTIONS(44),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_quote] = ACTIONS(44),
    [anon_sym_quoteTerm] = ACTIONS(44),
    [anon_sym_unquote] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LPAREN_PIPE] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
  },
  [594] = {
    [sym_expr] = STATE(618),
    [sym__expr1] = STATE(63),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(64),
    [sym_atomic_expr] = STATE(36),
    [sym__atomic_expr_curly] = STATE(37),
    [sym__atomic_expr_no_curly] = STATE(37),
    [sym_tele_arrow] = STATE(65),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(66),
    [aux_sym__application_repeat1] = STATE(67),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(26),
    [sym_set_n] = ACTIONS(26),
    [sym_name_at] = ACTIONS(60),
    [sym_qualified_name] = ACTIONS(26),
    [anon_sym__] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(26),
    [anon_sym_Prop] = ACTIONS(26),
    [anon_sym_Set] = ACTIONS(26),
    [anon_sym_quote] = ACTIONS(26),
    [anon_sym_quoteTerm] = ACTIONS(26),
    [anon_sym_unquote] = ACTIONS(26),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(912),
    [anon_sym_LPAREN_PIPE] = ACTIONS(42),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(26),
  },
  [595] = {
    [sym_expr] = STATE(619),
    [sym__expr1] = STATE(76),
    [sym__application] = STATE(33),
    [sym__expr2] = STATE(34),
    [sym__atomic_exprs1] = STATE(77),
    [sym_atomic_expr] = STATE(78),
    [sym__atomic_expr_curly] = STATE(79),
    [sym__atomic_expr_no_curly] = STATE(79),
    [sym_tele_arrow] = STATE(80),
    [sym_typed_bindings] = STATE(39),
    [aux_sym__expr1_repeat1] = STATE(81),
    [aux_sym__application_repeat1] = STATE(82),
    [aux_sym_tele_arrow_repeat1] = STATE(42),
    [sym_literal] = ACTIONS(64),
    [sym_set_n] = ACTIONS(64),
    [sym_name_at] = ACTIONS(66),
    [sym_qualified_name] = ACTIONS(64),
    [anon_sym__] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_DOT_DOT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_Prop] = ACTIONS(64),
    [anon_sym_Set] = ACTIONS(64),
    [anon_sym_quote] = ACTIONS(64),
    [anon_sym_quoteTerm] = ACTIONS(64),
    [anon_sym_unquote] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_LPAREN_PIPE] = ACTIONS(76),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(64),
  },
  [596] = {
    [sym__layout_semicolon] = ACTIONS(452),
    [sym__layout_close_brace] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
  },
  [597] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [sym__layout_close_brace] = ACTIONS(687),
    [sym_literal] = ACTIONS(96),
    [sym_set_n] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [sym_name_at] = ACTIONS(96),
    [sym_qualified_name] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_Prop] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_quote] = ACTIONS(96),
    [anon_sym_quoteTerm] = ACTIONS(96),
    [anon_sym_unquote] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_LPAREN_PIPE] = ACTIONS(96),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
  },
  [598] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [sym__layout_close_brace] = ACTIONS(689),
    [sym_literal] = ACTIONS(98),
    [sym_set_n] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_name_at] = ACTIONS(98),
    [sym_qualified_name] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_Prop] = ACTIONS(98),
    [anon_sym_Set] = ACTIONS(98),
    [anon_sym_quote] = ACTIONS(98),
    [anon_sym_quoteTerm] = ACTIONS(98),
    [anon_sym_unquote] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_LPAREN_PIPE] = ACTIONS(98),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
  },
  [599] = {
    [sym__expr2] = STATE(600),
    [sym_atomic_expr] = STATE(597),
    [sym__atomic_expr_curly] = STATE(598),
    [sym__atomic_expr_no_curly] = STATE(598),
    [aux_sym__application_repeat1] = STATE(97),
    [sym_literal] = ACTIONS(863),
    [sym_set_n] = ACTIONS(863),
    [sym_name_at] = ACTIONS(865),
    [sym_qualified_name] = ACTIONS(863),
    [anon_sym__] = ACTIONS(863),
    [anon_sym_DOT] = ACTIONS(865),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_Prop] = ACTIONS(863),
    [anon_sym_Set] = ACTIONS(863),
    [anon_sym_quote] = ACTIONS(863),
    [anon_sym_quoteTerm] = ACTIONS(863),
    [anon_sym_unquote] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_LPAREN_PIPE] = ACTIONS(873),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(863),
  },
  [600] = {
    [sym__layout_semicolon] = ACTIONS(454),
    [sym__layout_close_brace] = ACTIONS(454),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(454),
    [anon_sym_module] = ACTIONS(454),
    [anon_sym_where] = ACTIONS(454),
  },
  [601] = {
    [sym_vopen] = STATE(547),
    [sym_declarations] = STATE(548),
    [sym__declarations0] = STATE(620),
    [sym__layout_open_brace] = ACTIONS(324),
    [sym_comment] = ACTIONS(80),
  },
  [602] = {
    [sym__layout_semicolon] = ACTIONS(914),
    [sym__layout_close_brace] = ACTIONS(914),
    [anon_sym_SEMI] = ACTIONS(914),
    [sym_comment] = ACTIONS(80),
  },
  [603] = {
    [sym__layout_semicolon] = ACTIONS(916),
    [sym__layout_close_brace] = ACTIONS(916),
    [anon_sym_SEMI] = ACTIONS(916),
    [sym_comment] = ACTIONS(80),
  },
  [604] = {
    [sym_vclose] = STATE(621),
    [sym__layout_close_brace] = ACTIONS(877),
    [sym_comment] = ACTIONS(80),
  },
  [605] = {
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
  },
  [606] = {
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
  },
  [607] = {
    [sym__layout_semicolon] = ACTIONS(825),
    [sym__layout_close_brace] = ACTIONS(825),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_with] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [608] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [sym__layout_close_brace] = ACTIONS(827),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_with] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [609] = {
    [sym__layout_semicolon] = ACTIONS(825),
    [sym__layout_close_brace] = ACTIONS(825),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [610] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [sym__layout_close_brace] = ACTIONS(827),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [611] = {
    [sym__layout_semicolon] = ACTIONS(825),
    [sym__layout_close_brace] = ACTIONS(825),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [612] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [sym__layout_close_brace] = ACTIONS(827),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_DASH_GT] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
  [613] = {
    [sym__layout_semicolon] = ACTIONS(623),
    [sym__layout_close_brace] = ACTIONS(623),
    [anon_sym_SEMI] = ACTIONS(623),
    [sym_comment] = ACTIONS(80),
    [anon_sym_module] = ACTIONS(623),
    [anon_sym_where] = ACTIONS(623),
  },
  [614] = {
    [sym__layout_semicolon] = ACTIONS(745),
    [sym__layout_close_brace] = ACTIONS(745),
    [sym_literal] = ACTIONS(116),
    [sym_set_n] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [sym_name_at] = ACTIONS(116),
    [sym_qualified_name] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(116),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_Prop] = ACTIONS(116),
    [anon_sym_Set] = ACTIONS(116),
    [anon_sym_quote] = ACTIONS(116),
    [anon_sym_quoteTerm] = ACTIONS(116),
    [anon_sym_unquote] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_LPAREN_PIPE] = ACTIONS(116),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
  },
  [615] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [sym__layout_close_brace] = ACTIONS(747),
    [sym_literal] = ACTIONS(152),
    [sym_set_n] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_name_at] = ACTIONS(152),
    [sym_qualified_name] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(152),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_Prop] = ACTIONS(152),
    [anon_sym_Set] = ACTIONS(152),
    [anon_sym_quote] = ACTIONS(152),
    [anon_sym_quoteTerm] = ACTIONS(152),
    [anon_sym_unquote] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_LPAREN_PIPE] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(152),
  },
  [616] = {
    [anon_sym_RBRACE] = ACTIONS(918),
    [sym_comment] = ACTIONS(80),
  },
  [617] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(920),
    [sym_comment] = ACTIONS(80),
  },
  [618] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(920),
  },
  [619] = {
    [sym_comment] = ACTIONS(80),
    [anon_sym_PIPE_RPAREN] = ACTIONS(920),
  },
  [620] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [sym__layout_close_brace] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(922),
    [sym_comment] = ACTIONS(80),
  },
  [621] = {
    [sym__layout_semicolon] = ACTIONS(924),
    [sym__layout_close_brace] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(924),
    [sym_comment] = ACTIONS(80),
  },
  [622] = {
    [sym__layout_semicolon] = ACTIONS(825),
    [sym__layout_close_brace] = ACTIONS(825),
    [sym_literal] = ACTIONS(444),
    [sym_set_n] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_name_at] = ACTIONS(444),
    [sym_qualified_name] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(444),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_QMARK] = ACTIONS(444),
    [anon_sym_Prop] = ACTIONS(444),
    [anon_sym_Set] = ACTIONS(444),
    [anon_sym_quote] = ACTIONS(444),
    [anon_sym_quoteTerm] = ACTIONS(444),
    [anon_sym_unquote] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_LPAREN_PIPE] = ACTIONS(444),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(444),
  },
  [623] = {
    [sym__layout_semicolon] = ACTIONS(827),
    [sym__layout_close_brace] = ACTIONS(827),
    [sym_literal] = ACTIONS(497),
    [sym_set_n] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_name_at] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(497),
    [anon_sym__] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(18),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_QMARK] = ACTIONS(497),
    [anon_sym_Prop] = ACTIONS(497),
    [anon_sym_Set] = ACTIONS(497),
    [anon_sym_quote] = ACTIONS(497),
    [anon_sym_quoteTerm] = ACTIONS(497),
    [anon_sym_unquote] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_LPAREN_PIPE] = ACTIONS(497),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(497),
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_where] = ACTIONS(497),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [10] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 1),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_lhs, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expr1, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__application, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expr2, 1, .fragile = true),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_atomic_expr, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_exprs1, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 2),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 2),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(127),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expr1, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__application, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tele_arrow_repeat1, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 1),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(212),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(213),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(223),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(224),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(226),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_lhs, 2),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(237),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(238),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(239),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(243),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(254),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(255),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 2),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [330] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [333] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [336] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [339] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [342] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [345] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expr1, 2),
  [350] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(261),
  [353] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(262),
  [356] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(263),
  [359] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(264),
  [362] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(265),
  [365] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(266),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__application, 2),
  [370] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(261),
  [373] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(262),
  [376] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(263),
  [379] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(264),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2),
  [384] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(265),
  [387] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(266),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(278),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(285),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(287),
  [408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(288),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(300),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(301),
  [428] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(303),
  [430] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(304),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(302),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 2),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(316),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(315),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expr1, 2),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__application, 2),
  [456] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(321),
  [459] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(322),
  [462] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(323),
  [465] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(324),
  [468] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(325),
  [471] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(326),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tele_arrow, 2),
  [476] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(25),
  [479] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(25),
  [482] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(154),
  [485] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(155),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2),
  [490] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tele_arrow_repeat1, 2), SHIFT_REPEAT(157),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 3),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(336),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(335),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(344),
  [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(343),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(350),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(349),
  [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_rewrite_equations, 2),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(358),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(357),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_with_expressions, 2),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_lhs, 3),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(366),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(367),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(369),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(370),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(372),
  [539] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(368),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_rhs, 2),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expr, 1),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(377),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(380),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(382),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_anonymous_name, 1),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_vopen, 1),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_vopen, 1),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(392),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(393),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(395),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(396),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declarations0, 1),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_where_clause, 2),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 3),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(261),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(262),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(263),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(411),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(410),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(420),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(419),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expr, 3),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(322),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(323),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(326),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(436),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(435),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(450),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expr, 2),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(453),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(452),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_vclose, 1),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 1),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(460),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(459),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declarations0, 2),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lhs, 1),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(465),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expr2, 1, .fragile = true),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_atomic_expr, 1),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 1),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(474),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations1, 1),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [713] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(487),
  [716] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(488),
  [719] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(489),
  [722] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(490),
  [725] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(491),
  [728] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(492),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expr, 3),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_where_clause, 4),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 2),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 2),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(502),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(503),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(504),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(506),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(507),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(515),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(517),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(519),
  [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(520),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lhs, 2),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(529),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(530),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(531),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(532),
  [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(533),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(534),
  [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(535),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(546),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 2),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_semi, 1),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations1, 2),
  [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(553),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(487),
  [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(488),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(489),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(492),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(555),
  [819] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(554),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_typed_bindings, 5),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_typed_bindings, 5),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_curly, 3),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__atomic_expr_no_curly, 3),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(561),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(560),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_rewrite_equations, 2),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(569),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(568),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_with_expressions, 2),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_lhs, 3),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(576),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(577),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(578),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(580),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(581),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(582),
  [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(583),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(579),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_rhs, 2),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(590),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(591),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(592),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(593),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(594),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(595),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations0, 1),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where_clause, 2),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_clause, 3),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [887] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(474),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_typed_bindings, 6),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_typed_bindings, 6),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [910] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(615),
  [912] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(614),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_vclose, 1),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations0, 2),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(622),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where_clause, 4),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
};

void *tree_sitter_agda_external_scanner_create();
void tree_sitter_agda_external_scanner_destroy(void *);
bool tree_sitter_agda_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_agda_external_scanner_serialize(void *, char *);
void tree_sitter_agda_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_agda() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_agda_external_scanner_create,
      tree_sitter_agda_external_scanner_destroy,
      tree_sitter_agda_external_scanner_scan,
      tree_sitter_agda_external_scanner_serialize,
      tree_sitter_agda_external_scanner_deserialize,
    },
  };
  return &language;
}
