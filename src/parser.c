#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 89
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 2
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_COLON_DASH = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym__end = 4,
  sym_variable = 5,
  anon_sym_DASH_DASH_GT = 6,
  anon_sym_STAR = 7,
  anon_sym_PIPE = 8,
  anon_sym_SEMI = 9,
  anon_sym_DASH_GT = 10,
  anon_sym_STAR_DASH_GT = 11,
  anon_sym_COLON_EQ = 12,
  anon_sym_COMMA = 13,
  anon_sym_dynamic = 14,
  anon_sym_discontiguous = 15,
  anon_sym_initialization = 16,
  anon_sym_meta_predicate = 17,
  anon_sym_module_transparent = 18,
  anon_sym_multifile = 19,
  anon_sym_public = 20,
  anon_sym_thread_local = 21,
  anon_sym_thread_initialization = 22,
  anon_sym_volitile = 23,
  anon_sym_directive = 24,
  anon_sym_qh_operator = 25,
  sym_number = 26,
  aux_sym_atom_token1 = 27,
  anon_sym_LBRACK_RBRACK = 28,
  anon_sym_LBRACE_RBRACE = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  sym_source_file = 34,
  sym_directive_term = 35,
  sym_clause_term = 36,
  sym__term = 37,
  sym__arg_term = 38,
  sym_bracketed_term = 39,
  sym_atomic = 40,
  sym_compound_term = 41,
  sym__compound_term_arg = 42,
  sym__functional_notation = 43,
  sym__operator_notation = 44,
  sym__list_notation = 45,
  sym__curly_bracketed_notation = 46,
  sym__prefix_notation = 47,
  sym__infix_notation = 48,
  sym_infix_operator = 49,
  sym__non_arg_operator = 50,
  sym__prefix_non_associative = 51,
  sym_atom = 52,
  sym_list = 53,
  sym_curly_bracket_term = 54,
  sym__arg = 55,
  sym_args = 56,
  sym__operator_pred_list = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_curly_bracket_term_repeat1 = 59,
  aux_sym_args_repeat1 = 60,
  alias_sym_bracket = 61,
  alias_sym_operator = 62,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__end] = "_end",
  [sym_variable] = "variable",
  [anon_sym_DASH_DASH_GT] = "operator",
  [anon_sym_STAR] = "operator",
  [anon_sym_PIPE] = "operator",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "operator",
  [anon_sym_STAR_DASH_GT] = "operator",
  [anon_sym_COLON_EQ] = "operator",
  [anon_sym_COMMA] = ",",
  [anon_sym_dynamic] = "operator",
  [anon_sym_discontiguous] = "operator",
  [anon_sym_initialization] = "operator",
  [anon_sym_meta_predicate] = "operator",
  [anon_sym_module_transparent] = "operator",
  [anon_sym_multifile] = "operator",
  [anon_sym_public] = "operator",
  [anon_sym_thread_local] = "operator",
  [anon_sym_thread_initialization] = "operator",
  [anon_sym_volitile] = "operator",
  [anon_sym_directive] = "operator",
  [anon_sym_qh_operator] = "operator",
  [sym_number] = "number",
  [aux_sym_atom_token1] = "atom_token1",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym_directive_term] = "directive_term",
  [sym_clause_term] = "clause_term",
  [sym__term] = "_term",
  [sym__arg_term] = "_arg_term",
  [sym_bracketed_term] = "bracketed_term",
  [sym_atomic] = "atomic",
  [sym_compound_term] = "compound_term",
  [sym__compound_term_arg] = "compound_term",
  [sym__functional_notation] = "_functional_notation",
  [sym__operator_notation] = "_operator_notation",
  [sym__list_notation] = "_list_notation",
  [sym__curly_bracketed_notation] = "_curly_bracketed_notation",
  [sym__prefix_notation] = "_prefix_notation",
  [sym__infix_notation] = "_infix_notation",
  [sym_infix_operator] = "infix_operator",
  [sym__non_arg_operator] = "_non_arg_operator",
  [sym__prefix_non_associative] = "prefix_operator",
  [sym_atom] = "atom",
  [sym_list] = "list",
  [sym_curly_bracket_term] = "curly_bracket_term",
  [sym__arg] = "_arg",
  [sym_args] = "args",
  [sym__operator_pred_list] = "_operator_pred_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_curly_bracket_term_repeat1] = "curly_bracket_term_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [alias_sym_bracket] = "bracket",
  [alias_sym_operator] = "operator",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON_DASH] = {
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
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_DASH_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_discontiguous] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initialization] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_meta_predicate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module_transparent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_multifile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_thread_local] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_thread_initialization] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_volitile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_directive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_qh_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_atom_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_term] = {
    .visible = true,
    .named = true,
  },
  [sym_clause_term] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_term] = {
    .visible = false,
    .named = true,
  },
  [sym_bracketed_term] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_term] = {
    .visible = true,
    .named = true,
  },
  [sym__compound_term_arg] = {
    .visible = true,
    .named = true,
  },
  [sym__functional_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__operator_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__list_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__curly_bracketed_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__infix_notation] = {
    .visible = false,
    .named = true,
  },
  [sym_infix_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__non_arg_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix_non_associative] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_curly_bracket_term] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_pred_list] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_curly_bracket_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_operator] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_atom = 2,
  field_clause = 3,
  field_close = 4,
  field_declarive = 5,
  field_infix = 6,
  field_left = 7,
  field_name = 8,
  field_open = 9,
  field_operator = 10,
  field_prefix = 11,
  field_right = 12,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_atom] = "atom",
  [field_clause] = "clause",
  [field_close] = "close",
  [field_declarive] = "declarive",
  [field_infix] = "infix",
  [field_left] = "left",
  [field_name] = "name",
  [field_open] = "open",
  [field_operator] = "operator",
  [field_prefix] = "prefix",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 4},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 6},
  [11] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 4},
  [14] = {.index = 29, .length = 2},
  [15] = {.index = 31, .length = 1},
  [16] = {.index = 32, .length = 3},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_declarive, 0},
  [1] =
    {field_clause, 0},
  [2] =
    {field_arguments, 0, .inherited = true},
    {field_close, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [6] =
    {field_prefix, 0, .inherited = true},
  [7] =
    {field_infix, 0},
  [8] =
    {field_operator, 0, .inherited = true},
    {field_prefix, 0},
    {field_right, 0, .inherited = true},
  [11] =
    {field_atom, 0},
  [12] =
    {field_clause, 0, .inherited = true},
    {field_declarive, 0, .inherited = true},
  [14] =
    {field_operator, 0},
    {field_right, 1},
  [16] =
    {field_arguments, 0, .inherited = true},
    {field_close, 0, .inherited = true},
    {field_infix, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_prefix, 0, .inherited = true},
  [22] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [25] =
    {field_clause, 0, .inherited = true},
    {field_clause, 1, .inherited = true},
    {field_declarive, 0, .inherited = true},
    {field_declarive, 1, .inherited = true},
  [29] =
    {field_close, 2},
    {field_open, 0},
  [31] =
    {field_arguments, 1},
  [32] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [35] =
    {field_arguments, 2},
    {field_close, 3},
    {field_name, 0},
    {field_open, 1},
};

static TSSymbol ts_alias_sequences[19][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [0] = alias_sym_operator,
  },
  [14] = {
    [0] = alias_sym_bracket,
    [2] = alias_sym_bracket,
  },
  [16] = {
    [1] = alias_sym_operator,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 'q') ADVANCE(81);
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'v') ADVANCE(121);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR_DASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_dynamic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_discontiguous);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_initialization);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_meta_predicate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_module_transparent);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_multifile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_thread_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_thread_initialization);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_volitile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_directive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_qh_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(8);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'b') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'c') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'd') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'f') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'g') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'h') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'h') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'm') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'p') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'p') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'p') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'u') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'v') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'z') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (lookahead == 'z') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_atom_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(161);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(162);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_STAR_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_discontiguous] = ACTIONS(1),
    [anon_sym_initialization] = ACTIONS(1),
    [anon_sym_meta_predicate] = ACTIONS(1),
    [anon_sym_module_transparent] = ACTIONS(1),
    [anon_sym_multifile] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_thread_local] = ACTIONS(1),
    [anon_sym_thread_initialization] = ACTIONS(1),
    [anon_sym_volitile] = ACTIONS(1),
    [anon_sym_directive] = ACTIONS(1),
    [anon_sym_qh_operator] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_atom_token1] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym_directive_term] = STATE(34),
    [sym_clause_term] = STATE(33),
    [sym__term] = STATE(61),
    [sym_bracketed_term] = STATE(61),
    [sym_atomic] = STATE(61),
    [sym_compound_term] = STATE(61),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [2] = {
    [sym__term] = STATE(70),
    [sym__arg_term] = STATE(77),
    [sym_bracketed_term] = STATE(57),
    [sym_atomic] = STATE(57),
    [sym_compound_term] = STATE(70),
    [sym__compound_term_arg] = STATE(82),
    [sym__functional_notation] = STATE(59),
    [sym__operator_notation] = STATE(59),
    [sym__list_notation] = STATE(59),
    [sym__curly_bracketed_notation] = STATE(59),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(59),
    [sym_curly_bracket_term] = STATE(59),
    [sym__arg] = STATE(77),
    [sym_args] = STATE(87),
    [sym__operator_pred_list] = STATE(80),
    [anon_sym_COLON_DASH] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [3] = {
    [sym__term] = STATE(70),
    [sym__arg_term] = STATE(77),
    [sym_bracketed_term] = STATE(57),
    [sym_atomic] = STATE(57),
    [sym_compound_term] = STATE(70),
    [sym__compound_term_arg] = STATE(82),
    [sym__functional_notation] = STATE(59),
    [sym__operator_notation] = STATE(59),
    [sym__list_notation] = STATE(59),
    [sym__curly_bracketed_notation] = STATE(59),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(59),
    [sym_curly_bracket_term] = STATE(59),
    [sym__arg] = STATE(77),
    [sym_args] = STATE(88),
    [sym__operator_pred_list] = STATE(80),
    [anon_sym_COLON_DASH] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [4] = {
    [sym__term] = STATE(70),
    [sym__arg_term] = STATE(81),
    [sym_bracketed_term] = STATE(57),
    [sym_atomic] = STATE(57),
    [sym_compound_term] = STATE(70),
    [sym__compound_term_arg] = STATE(82),
    [sym__functional_notation] = STATE(59),
    [sym__operator_notation] = STATE(59),
    [sym__list_notation] = STATE(59),
    [sym__curly_bracketed_notation] = STATE(59),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(59),
    [sym_curly_bracket_term] = STATE(59),
    [sym__arg] = STATE(81),
    [sym__operator_pred_list] = STATE(80),
    [anon_sym_COLON_DASH] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [5] = {
    [sym_directive_term] = STATE(34),
    [sym_clause_term] = STATE(33),
    [sym__term] = STATE(61),
    [sym_bracketed_term] = STATE(61),
    [sym_atomic] = STATE(61),
    [sym_compound_term] = STATE(61),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COLON_DASH] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(34),
    [sym_variable] = ACTIONS(37),
    [anon_sym_dynamic] = ACTIONS(40),
    [anon_sym_discontiguous] = ACTIONS(40),
    [anon_sym_initialization] = ACTIONS(40),
    [anon_sym_meta_predicate] = ACTIONS(40),
    [anon_sym_module_transparent] = ACTIONS(40),
    [anon_sym_multifile] = ACTIONS(40),
    [anon_sym_public] = ACTIONS(40),
    [anon_sym_thread_local] = ACTIONS(40),
    [anon_sym_thread_initialization] = ACTIONS(40),
    [anon_sym_volitile] = ACTIONS(40),
    [anon_sym_directive] = ACTIONS(43),
    [anon_sym_qh_operator] = ACTIONS(43),
    [sym_number] = ACTIONS(46),
    [aux_sym_atom_token1] = ACTIONS(49),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(58),
  },
  [6] = {
    [sym_directive_term] = STATE(34),
    [sym_clause_term] = STATE(33),
    [sym__term] = STATE(61),
    [sym_bracketed_term] = STATE(61),
    [sym_atomic] = STATE(61),
    [sym_compound_term] = STATE(61),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COLON_DASH] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(9),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [7] = {
    [sym__term] = STATE(58),
    [sym_bracketed_term] = STATE(58),
    [sym_atomic] = STATE(58),
    [sym_compound_term] = STATE(58),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(63),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [8] = {
    [sym__term] = STATE(60),
    [sym_bracketed_term] = STATE(60),
    [sym_atomic] = STATE(60),
    [sym_compound_term] = STATE(60),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(65),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [9] = {
    [sym__term] = STATE(55),
    [sym_bracketed_term] = STATE(55),
    [sym_atomic] = STATE(55),
    [sym_compound_term] = STATE(55),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(67),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [10] = {
    [sym__term] = STATE(72),
    [sym_bracketed_term] = STATE(72),
    [sym_atomic] = STATE(72),
    [sym_compound_term] = STATE(72),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(69),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [11] = {
    [sym__term] = STATE(54),
    [sym_bracketed_term] = STATE(54),
    [sym_atomic] = STATE(54),
    [sym_compound_term] = STATE(54),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(75),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [12] = {
    [sym__term] = STATE(53),
    [sym_bracketed_term] = STATE(53),
    [sym_atomic] = STATE(53),
    [sym_compound_term] = STATE(53),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(77),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [13] = {
    [sym__term] = STATE(73),
    [sym_bracketed_term] = STATE(73),
    [sym_atomic] = STATE(73),
    [sym_compound_term] = STATE(73),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(79),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [14] = {
    [sym__term] = STATE(74),
    [sym_bracketed_term] = STATE(74),
    [sym_atomic] = STATE(74),
    [sym_compound_term] = STATE(74),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(81),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [15] = {
    [sym__term] = STATE(75),
    [sym_bracketed_term] = STATE(75),
    [sym_atomic] = STATE(75),
    [sym_compound_term] = STATE(75),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(83),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [16] = {
    [sym__term] = STATE(66),
    [sym_bracketed_term] = STATE(66),
    [sym_atomic] = STATE(66),
    [sym_compound_term] = STATE(66),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(85),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [17] = {
    [sym__term] = STATE(65),
    [sym_bracketed_term] = STATE(65),
    [sym_atomic] = STATE(65),
    [sym_compound_term] = STATE(65),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(87),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [18] = {
    [sym__term] = STATE(52),
    [sym_bracketed_term] = STATE(52),
    [sym_atomic] = STATE(52),
    [sym_compound_term] = STATE(52),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(89),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [19] = {
    [sym__term] = STATE(62),
    [sym_bracketed_term] = STATE(62),
    [sym_atomic] = STATE(62),
    [sym_compound_term] = STATE(62),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(91),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [20] = {
    [sym__term] = STATE(67),
    [sym_bracketed_term] = STATE(67),
    [sym_atomic] = STATE(67),
    [sym_compound_term] = STATE(67),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(93),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [21] = {
    [sym__term] = STATE(68),
    [sym_bracketed_term] = STATE(68),
    [sym_atomic] = STATE(68),
    [sym_compound_term] = STATE(68),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(95),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [22] = {
    [sym__term] = STATE(49),
    [sym_bracketed_term] = STATE(49),
    [sym_atomic] = STATE(49),
    [sym_compound_term] = STATE(49),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(97),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [23] = {
    [sym__term] = STATE(71),
    [sym_bracketed_term] = STATE(71),
    [sym_atomic] = STATE(71),
    [sym_compound_term] = STATE(71),
    [sym__functional_notation] = STATE(69),
    [sym__operator_notation] = STATE(69),
    [sym__list_notation] = STATE(69),
    [sym__curly_bracketed_notation] = STATE(69),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(69),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(69),
    [sym_curly_bracket_term] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(99),
    [anon_sym_dynamic] = ACTIONS(71),
    [anon_sym_discontiguous] = ACTIONS(71),
    [anon_sym_initialization] = ACTIONS(71),
    [anon_sym_meta_predicate] = ACTIONS(71),
    [anon_sym_module_transparent] = ACTIONS(71),
    [anon_sym_multifile] = ACTIONS(71),
    [anon_sym_public] = ACTIONS(71),
    [anon_sym_thread_local] = ACTIONS(71),
    [anon_sym_thread_initialization] = ACTIONS(71),
    [anon_sym_volitile] = ACTIONS(71),
    [anon_sym_directive] = ACTIONS(73),
    [anon_sym_qh_operator] = ACTIONS(73),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [24] = {
    [sym__term] = STATE(63),
    [sym_bracketed_term] = STATE(63),
    [sym_atomic] = STATE(63),
    [sym_compound_term] = STATE(63),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(101),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [25] = {
    [sym__term] = STATE(37),
    [sym_bracketed_term] = STATE(37),
    [sym_atomic] = STATE(37),
    [sym_compound_term] = STATE(37),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(103),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [26] = {
    [sym__term] = STATE(51),
    [sym_bracketed_term] = STATE(51),
    [sym_atomic] = STATE(51),
    [sym_compound_term] = STATE(51),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(105),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [27] = {
    [sym__term] = STATE(44),
    [sym_bracketed_term] = STATE(44),
    [sym_atomic] = STATE(44),
    [sym_compound_term] = STATE(44),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(107),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [28] = {
    [sym__term] = STATE(64),
    [sym_bracketed_term] = STATE(64),
    [sym_atomic] = STATE(64),
    [sym_compound_term] = STATE(64),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(109),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [29] = {
    [sym__term] = STATE(56),
    [sym_bracketed_term] = STATE(56),
    [sym_atomic] = STATE(56),
    [sym_compound_term] = STATE(56),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(111),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [30] = {
    [sym__term] = STATE(38),
    [sym_bracketed_term] = STATE(38),
    [sym_atomic] = STATE(38),
    [sym_compound_term] = STATE(38),
    [sym__functional_notation] = STATE(39),
    [sym__operator_notation] = STATE(39),
    [sym__list_notation] = STATE(39),
    [sym__curly_bracketed_notation] = STATE(39),
    [sym__prefix_notation] = STATE(40),
    [sym__infix_notation] = STATE(40),
    [sym_infix_operator] = STATE(41),
    [sym__non_arg_operator] = STATE(39),
    [sym__prefix_non_associative] = STATE(43),
    [sym_atom] = STATE(36),
    [sym_list] = STATE(39),
    [sym_curly_bracket_term] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(113),
    [anon_sym_dynamic] = ACTIONS(11),
    [anon_sym_discontiguous] = ACTIONS(11),
    [anon_sym_initialization] = ACTIONS(11),
    [anon_sym_meta_predicate] = ACTIONS(11),
    [anon_sym_module_transparent] = ACTIONS(11),
    [anon_sym_multifile] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_thread_local] = ACTIONS(11),
    [anon_sym_thread_initialization] = ACTIONS(11),
    [anon_sym_volitile] = ACTIONS(11),
    [anon_sym_directive] = ACTIONS(13),
    [anon_sym_qh_operator] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_atom_token1] = ACTIONS(17),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_COLON_DASH] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym_variable] = ACTIONS(115),
    [anon_sym_dynamic] = ACTIONS(117),
    [anon_sym_discontiguous] = ACTIONS(117),
    [anon_sym_initialization] = ACTIONS(117),
    [anon_sym_meta_predicate] = ACTIONS(117),
    [anon_sym_module_transparent] = ACTIONS(117),
    [anon_sym_multifile] = ACTIONS(117),
    [anon_sym_public] = ACTIONS(117),
    [anon_sym_thread_local] = ACTIONS(117),
    [anon_sym_thread_initialization] = ACTIONS(117),
    [anon_sym_volitile] = ACTIONS(117),
    [anon_sym_directive] = ACTIONS(117),
    [anon_sym_qh_operator] = ACTIONS(117),
    [sym_number] = ACTIONS(115),
    [aux_sym_atom_token1] = ACTIONS(117),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_COLON_DASH] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym_variable] = ACTIONS(119),
    [anon_sym_dynamic] = ACTIONS(121),
    [anon_sym_discontiguous] = ACTIONS(121),
    [anon_sym_initialization] = ACTIONS(121),
    [anon_sym_meta_predicate] = ACTIONS(121),
    [anon_sym_module_transparent] = ACTIONS(121),
    [anon_sym_multifile] = ACTIONS(121),
    [anon_sym_public] = ACTIONS(121),
    [anon_sym_thread_local] = ACTIONS(121),
    [anon_sym_thread_initialization] = ACTIONS(121),
    [anon_sym_volitile] = ACTIONS(121),
    [anon_sym_directive] = ACTIONS(121),
    [anon_sym_qh_operator] = ACTIONS(121),
    [sym_number] = ACTIONS(119),
    [aux_sym_atom_token1] = ACTIONS(121),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_COLON_DASH] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [sym_variable] = ACTIONS(123),
    [anon_sym_dynamic] = ACTIONS(125),
    [anon_sym_discontiguous] = ACTIONS(125),
    [anon_sym_initialization] = ACTIONS(125),
    [anon_sym_meta_predicate] = ACTIONS(125),
    [anon_sym_module_transparent] = ACTIONS(125),
    [anon_sym_multifile] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_thread_local] = ACTIONS(125),
    [anon_sym_thread_initialization] = ACTIONS(125),
    [anon_sym_volitile] = ACTIONS(125),
    [anon_sym_directive] = ACTIONS(125),
    [anon_sym_qh_operator] = ACTIONS(125),
    [sym_number] = ACTIONS(123),
    [aux_sym_atom_token1] = ACTIONS(125),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_COLON_DASH] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [sym_variable] = ACTIONS(127),
    [anon_sym_dynamic] = ACTIONS(129),
    [anon_sym_discontiguous] = ACTIONS(129),
    [anon_sym_initialization] = ACTIONS(129),
    [anon_sym_meta_predicate] = ACTIONS(129),
    [anon_sym_module_transparent] = ACTIONS(129),
    [anon_sym_multifile] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_thread_local] = ACTIONS(129),
    [anon_sym_thread_initialization] = ACTIONS(129),
    [anon_sym_volitile] = ACTIONS(129),
    [anon_sym_directive] = ACTIONS(129),
    [anon_sym_qh_operator] = ACTIONS(129),
    [sym_number] = ACTIONS(127),
    [aux_sym_atom_token1] = ACTIONS(129),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [35] = {
    [anon_sym_COLON_DASH] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [sym__end] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_STAR_DASH_GT] = ACTIONS(131),
    [anon_sym_COLON_EQ] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
  },
  [36] = {
    [anon_sym_COLON_DASH] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym__end] = ACTIONS(135),
    [anon_sym_DASH_DASH_GT] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_DASH_GT] = ACTIONS(135),
    [anon_sym_STAR_DASH_GT] = ACTIONS(135),
    [anon_sym_COLON_EQ] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [37] = {
    [anon_sym_COLON_DASH] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym__end] = ACTIONS(144),
    [anon_sym_DASH_DASH_GT] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_STAR_DASH_GT] = ACTIONS(144),
    [anon_sym_COLON_EQ] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
  },
  [38] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym__end] = ACTIONS(153),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [39] = {
    [anon_sym_COLON_DASH] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [sym__end] = ACTIONS(165),
    [anon_sym_DASH_DASH_GT] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(165),
    [anon_sym_STAR_DASH_GT] = ACTIONS(165),
    [anon_sym_COLON_EQ] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
  },
  [40] = {
    [anon_sym_COLON_DASH] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [sym__end] = ACTIONS(169),
    [anon_sym_DASH_DASH_GT] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_DASH_GT] = ACTIONS(169),
    [anon_sym_STAR_DASH_GT] = ACTIONS(169),
    [anon_sym_COLON_EQ] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [41] = {
    [anon_sym_COLON_DASH] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [sym__end] = ACTIONS(173),
    [anon_sym_DASH_DASH_GT] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_DASH_GT] = ACTIONS(173),
    [anon_sym_STAR_DASH_GT] = ACTIONS(173),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
  },
  [42] = {
    [anon_sym_COLON_DASH] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [sym__end] = ACTIONS(177),
    [anon_sym_DASH_DASH_GT] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(177),
    [anon_sym_STAR_DASH_GT] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
  },
  [43] = {
    [anon_sym_COLON_DASH] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [sym__end] = ACTIONS(181),
    [anon_sym_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(181),
    [anon_sym_STAR_DASH_GT] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
  },
  [44] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym__end] = ACTIONS(144),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_STAR_DASH_GT] = ACTIONS(144),
    [anon_sym_COLON_EQ] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
  },
  [45] = {
    [anon_sym_COLON_DASH] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [sym__end] = ACTIONS(185),
    [anon_sym_DASH_DASH_GT] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_DASH_GT] = ACTIONS(185),
    [anon_sym_STAR_DASH_GT] = ACTIONS(185),
    [anon_sym_COLON_EQ] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
  },
  [46] = {
    [anon_sym_COLON_DASH] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym__end] = ACTIONS(189),
    [anon_sym_DASH_DASH_GT] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_DASH_GT] = ACTIONS(189),
    [anon_sym_STAR_DASH_GT] = ACTIONS(189),
    [anon_sym_COLON_EQ] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [47] = {
    [anon_sym_COLON_DASH] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [sym__end] = ACTIONS(193),
    [anon_sym_DASH_DASH_GT] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_DASH_GT] = ACTIONS(193),
    [anon_sym_STAR_DASH_GT] = ACTIONS(193),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [48] = {
    [anon_sym_COLON_DASH] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym__end] = ACTIONS(197),
    [anon_sym_DASH_DASH_GT] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_DASH_GT] = ACTIONS(197),
    [anon_sym_STAR_DASH_GT] = ACTIONS(197),
    [anon_sym_COLON_EQ] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
  },
  [49] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(201),
    [sym__end] = ACTIONS(201),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
  },
  [50] = {
    [anon_sym_COLON_DASH] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym__end] = ACTIONS(207),
    [anon_sym_DASH_DASH_GT] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(207),
    [anon_sym_STAR_DASH_GT] = ACTIONS(207),
    [anon_sym_COLON_EQ] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
  },
  [51] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym__end] = ACTIONS(153),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [52] = {
    [anon_sym_COLON_DASH] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(217),
    [sym__end] = ACTIONS(217),
    [anon_sym_DASH_DASH_GT] = ACTIONS(219),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_STAR_DASH_GT] = ACTIONS(217),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
  },
  [53] = {
    [anon_sym_COLON_DASH] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym__end] = ACTIONS(153),
    [anon_sym_DASH_DASH_GT] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_STAR_DASH_GT] = ACTIONS(153),
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [54] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym__end] = ACTIONS(153),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [55] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(153),
    [sym__end] = ACTIONS(153),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_STAR_DASH_GT] = ACTIONS(153),
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [56] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(217),
    [sym__end] = ACTIONS(217),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_STAR_DASH_GT] = ACTIONS(217),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
  },
  [57] = {
    [anon_sym_COLON_DASH] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_DASH_DASH_GT] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_DASH_GT] = ACTIONS(232),
    [anon_sym_STAR_DASH_GT] = ACTIONS(232),
    [anon_sym_COLON_EQ] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(234),
  },
  [58] = {
    [aux_sym_curly_bracket_term_repeat1] = STATE(85),
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(242),
  },
  [59] = {
    [anon_sym_COLON_DASH] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_DASH_DASH_GT] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_DASH_GT] = ACTIONS(165),
    [anon_sym_STAR_DASH_GT] = ACTIONS(165),
    [anon_sym_COLON_EQ] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
  },
  [60] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(246),
  },
  [61] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [sym__end] = ACTIONS(248),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(205),
  },
  [62] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [sym__end] = ACTIONS(250),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(205),
  },
  [63] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(201),
  },
  [64] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(205),
  },
  [65] = {
    [anon_sym_COLON_DASH] = ACTIONS(254),
    [anon_sym_DASH_DASH_GT] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_STAR_DASH_GT] = ACTIONS(217),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
  },
  [66] = {
    [anon_sym_COLON_DASH] = ACTIONS(260),
    [anon_sym_DASH_DASH_GT] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_STAR_DASH_GT] = ACTIONS(153),
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
  },
  [67] = {
    [anon_sym_COLON_DASH] = ACTIONS(266),
    [anon_sym_DASH_DASH_GT] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_STAR_DASH_GT] = ACTIONS(144),
    [anon_sym_COLON_EQ] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
  },
  [68] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_DASH_GT] = ACTIONS(144),
    [anon_sym_STAR_DASH_GT] = ACTIONS(144),
    [anon_sym_COLON_EQ] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
  },
  [69] = {
    [anon_sym_COLON_DASH] = ACTIONS(276),
    [anon_sym_DASH_DASH_GT] = ACTIONS(276),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_DASH_GT] = ACTIONS(276),
    [anon_sym_STAR_DASH_GT] = ACTIONS(276),
    [anon_sym_COLON_EQ] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
  },
  [70] = {
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_DASH_DASH_GT] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_STAR_DASH_GT] = ACTIONS(163),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(280),
  },
  [71] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_DASH_GT] = ACTIONS(286),
    [anon_sym_STAR_DASH_GT] = ACTIONS(286),
    [anon_sym_COLON_EQ] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(280),
  },
  [72] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_DASH_GT] = ACTIONS(286),
    [anon_sym_STAR_DASH_GT] = ACTIONS(286),
    [anon_sym_COLON_EQ] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(280),
  },
  [73] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_DASH_GT] = ACTIONS(286),
    [anon_sym_STAR_DASH_GT] = ACTIONS(286),
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
  },
  [74] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_DASH_GT] = ACTIONS(217),
    [anon_sym_STAR_DASH_GT] = ACTIONS(217),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
  },
  [75] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(153),
    [anon_sym_STAR_DASH_GT] = ACTIONS(153),
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
  },
  [76] = {
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_DASH_DASH_GT] = ACTIONS(274),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_DASH_GT] = ACTIONS(286),
    [anon_sym_STAR_DASH_GT] = ACTIONS(286),
    [anon_sym_COLON_EQ] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(280),
  },
  [77] = {
    [aux_sym_args_repeat1] = STATE(78),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(293),
  },
  [78] = {
    [aux_sym_args_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(297),
  },
  [79] = {
    [aux_sym_args_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(304),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
  },
  [84] = {
    [aux_sym_curly_bracket_term_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(246),
  },
  [85] = {
    [aux_sym_curly_bracket_term_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(315),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(317),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(319),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(321),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(19),
  [7] = {.count = 1, .reusable = true}, SHIFT(28),
  [9] = {.count = 1, .reusable = true}, SHIFT(61),
  [11] = {.count = 1, .reusable = false}, SHIFT(27),
  [13] = {.count = 1, .reusable = false}, SHIFT(25),
  [15] = {.count = 1, .reusable = true}, SHIFT(42),
  [17] = {.count = 1, .reusable = false}, SHIFT(35),
  [19] = {.count = 1, .reusable = true}, SHIFT(35),
  [21] = {.count = 1, .reusable = false}, SHIFT(2),
  [23] = {.count = 1, .reusable = false}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, SHIFT(83),
  [27] = {.count = 1, .reusable = true}, SHIFT(57),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(19),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(28),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(61),
  [40] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(27),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(25),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(42),
  [49] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(35),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(35),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(2),
  [58] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 13), SHIFT_REPEAT(7),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1, .production_id = 8),
  [63] = {.count = 1, .reusable = true}, SHIFT(58),
  [65] = {.count = 1, .reusable = true}, SHIFT(60),
  [67] = {.count = 1, .reusable = true}, SHIFT(55),
  [69] = {.count = 1, .reusable = true}, SHIFT(72),
  [71] = {.count = 1, .reusable = false}, SHIFT(21),
  [73] = {.count = 1, .reusable = false}, SHIFT(20),
  [75] = {.count = 1, .reusable = true}, SHIFT(54),
  [77] = {.count = 1, .reusable = true}, SHIFT(53),
  [79] = {.count = 1, .reusable = true}, SHIFT(73),
  [81] = {.count = 1, .reusable = true}, SHIFT(74),
  [83] = {.count = 1, .reusable = true}, SHIFT(75),
  [85] = {.count = 1, .reusable = true}, SHIFT(66),
  [87] = {.count = 1, .reusable = true}, SHIFT(65),
  [89] = {.count = 1, .reusable = true}, SHIFT(52),
  [91] = {.count = 1, .reusable = true}, SHIFT(62),
  [93] = {.count = 1, .reusable = true}, SHIFT(67),
  [95] = {.count = 1, .reusable = true}, SHIFT(68),
  [97] = {.count = 1, .reusable = true}, SHIFT(49),
  [99] = {.count = 1, .reusable = true}, SHIFT(71),
  [101] = {.count = 1, .reusable = true}, SHIFT(63),
  [103] = {.count = 1, .reusable = true}, SHIFT(37),
  [105] = {.count = 1, .reusable = true}, SHIFT(51),
  [107] = {.count = 1, .reusable = true}, SHIFT(44),
  [109] = {.count = 1, .reusable = true}, SHIFT(64),
  [111] = {.count = 1, .reusable = true}, SHIFT(56),
  [113] = {.count = 1, .reusable = true}, SHIFT(38),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_directive_term, 3),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_directive_term, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_clause_term, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_clause_term, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_atomic, 1, .production_id = 7),
  [137] = {.count = 1, .reusable = true}, SHIFT(3),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_atomic, 1, .production_id = 7),
  [141] = {.count = 2, .reusable = true}, REDUCE(sym__prefix_non_associative, 2, .production_id = 9), SHIFT(18),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__prefix_non_associative, 2, .production_id = 9),
  [146] = {.count = 2, .reusable = true}, REDUCE(sym__prefix_non_associative, 2, .production_id = 9), SHIFT(12),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__prefix_non_associative, 2, .production_id = 9),
  [151] = {.count = 1, .reusable = true}, SHIFT(18),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17),
  [155] = {.count = 1, .reusable = true}, SHIFT(12),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_infix_operator, 3, .production_id = 17),
  [159] = {.count = 1, .reusable = true}, SHIFT(9),
  [161] = {.count = 1, .reusable = true}, SHIFT(29),
  [163] = {.count = 1, .reusable = true}, SHIFT(30),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_compound_term, 1, .production_id = 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_compound_term, 1, .production_id = 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym__operator_notation, 1, .production_id = 4),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym__operator_notation, 1, .production_id = 4),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__infix_notation, 1, .production_id = 5),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__infix_notation, 1, .production_id = 5),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_atomic, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_atomic, 1),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__prefix_notation, 1, .production_id = 6),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym__prefix_notation, 1, .production_id = 6),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_bracketed_term, 3, .production_id = 14),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_bracketed_term, 3, .production_id = 14),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__functional_notation, 4, .production_id = 18),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__functional_notation, 4, .production_id = 18),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_curly_bracket_term, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_curly_bracket_term, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3, .production_id = 15),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3, .production_id = 15),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__non_arg_operator, 3, .production_id = 16),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym__non_arg_operator, 3, .production_id = 16),
  [205] = {.count = 1, .reusable = true}, SHIFT(22),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_curly_bracket_term, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_curly_bracket_term, 3),
  [211] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17), SHIFT(26),
  [214] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 16), SHIFT(18),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 16),
  [219] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 16), SHIFT(12),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_infix_operator, 3, .production_id = 16),
  [224] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17), SHIFT(18),
  [227] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17), SHIFT(12),
  [230] = {.count = 1, .reusable = true}, SHIFT(26),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__term, 1),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym__arg_term, 1),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym__term, 1),
  [238] = {.count = 1, .reusable = false}, SHIFT(11),
  [240] = {.count = 1, .reusable = true}, SHIFT(24),
  [242] = {.count = 1, .reusable = true}, SHIFT(50),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym__compound_term_arg, 1, .production_id = 3),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_curly_bracket_term_repeat1, 2),
  [248] = {.count = 1, .reusable = true}, SHIFT(32),
  [250] = {.count = 1, .reusable = true}, SHIFT(31),
  [252] = {.count = 1, .reusable = true}, SHIFT(45),
  [254] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 16), SHIFT(17),
  [257] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 16), SHIFT(16),
  [260] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17), SHIFT(17),
  [263] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17), SHIFT(16),
  [266] = {.count = 2, .reusable = true}, REDUCE(sym__prefix_non_associative, 2, .production_id = 9), SHIFT(17),
  [269] = {.count = 2, .reusable = true}, REDUCE(sym__prefix_non_associative, 2, .production_id = 9), SHIFT(16),
  [272] = {.count = 1, .reusable = true}, SHIFT(17),
  [274] = {.count = 1, .reusable = true}, SHIFT(16),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_compound_term, 1, .production_id = 11),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym_compound_term, 1, .production_id = 11),
  [280] = {.count = 1, .reusable = true}, SHIFT(23),
  [282] = {.count = 1, .reusable = true}, SHIFT(15),
  [284] = {.count = 1, .reusable = true}, SHIFT(14),
  [286] = {.count = 1, .reusable = true}, SHIFT(13),
  [288] = {.count = 2, .reusable = true}, REDUCE(sym_infix_operator, 3, .production_id = 17), SHIFT(10),
  [291] = {.count = 1, .reusable = true}, SHIFT(10),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [295] = {.count = 1, .reusable = true}, SHIFT(4),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_args, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(4),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__arg, 1, .production_id = 12),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__arg_term, 1, .production_id = 10),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym__operator_pred_list, 1),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_curly_bracket_term_repeat1, 2), SHIFT_REPEAT(8),
  [313] = {.count = 1, .reusable = true}, SHIFT(8),
  [315] = {.count = 1, .reusable = true}, SHIFT(47),
  [317] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [319] = {.count = 1, .reusable = true}, SHIFT(48),
  [321] = {.count = 1, .reusable = true}, SHIFT(46),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prolog(void) {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
