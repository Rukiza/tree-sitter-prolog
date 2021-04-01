#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 20

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
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__end] = sym__end,
  [sym_variable] = sym_variable,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_STAR] = anon_sym_DASH_DASH_GT,
  [anon_sym_PIPE] = anon_sym_DASH_DASH_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_STAR_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_COLON_EQ] = anon_sym_DASH_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_dynamic] = anon_sym_DASH_DASH_GT,
  [anon_sym_discontiguous] = anon_sym_DASH_DASH_GT,
  [anon_sym_initialization] = anon_sym_DASH_DASH_GT,
  [anon_sym_meta_predicate] = anon_sym_DASH_DASH_GT,
  [anon_sym_module_transparent] = anon_sym_DASH_DASH_GT,
  [anon_sym_multifile] = anon_sym_DASH_DASH_GT,
  [anon_sym_public] = anon_sym_DASH_DASH_GT,
  [anon_sym_thread_local] = anon_sym_DASH_DASH_GT,
  [anon_sym_thread_initialization] = anon_sym_DASH_DASH_GT,
  [anon_sym_volitile] = anon_sym_DASH_DASH_GT,
  [anon_sym_directive] = anon_sym_DASH_DASH_GT,
  [anon_sym_qh_operator] = anon_sym_DASH_DASH_GT,
  [sym_number] = sym_number,
  [aux_sym_atom_token1] = aux_sym_atom_token1,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym_directive_term] = sym_directive_term,
  [sym_clause_term] = sym_clause_term,
  [sym__term] = sym__term,
  [sym__arg_term] = sym__arg_term,
  [sym_bracketed_term] = sym_bracketed_term,
  [sym_atomic] = sym_atomic,
  [sym_compound_term] = sym_compound_term,
  [sym__compound_term_arg] = sym_compound_term,
  [sym__functional_notation] = sym__functional_notation,
  [sym__operator_notation] = sym__operator_notation,
  [sym__list_notation] = sym__list_notation,
  [sym__curly_bracketed_notation] = sym__curly_bracketed_notation,
  [sym__prefix_notation] = sym__prefix_notation,
  [sym__infix_notation] = sym__infix_notation,
  [sym_infix_operator] = sym_infix_operator,
  [sym__non_arg_operator] = sym__non_arg_operator,
  [sym__prefix_non_associative] = sym__prefix_non_associative,
  [sym_atom] = sym_atom,
  [sym_list] = sym_list,
  [sym_curly_bracket_term] = sym_curly_bracket_term,
  [sym__arg] = sym__arg,
  [sym_args] = sym_args,
  [sym__operator_pred_list] = sym__operator_pred_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_curly_bracket_term_repeat1] = aux_sym_curly_bracket_term_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [alias_sym_bracket] = alias_sym_bracket,
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

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 4},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 3},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 1},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 6},
  [15] = {.index = 28, .length = 4},
  [16] = {.index = 32, .length = 2},
  [17] = {.index = 34, .length = 1},
  [18] = {.index = 35, .length = 3},
  [19] = {.index = 38, .length = 4},
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
    {field_infix, 0, .inherited = true},
    {field_prefix, 0, .inherited = true},
  [8] =
    {field_prefix, 0, .inherited = true},
  [9] =
    {field_infix, 0, .inherited = true},
  [10] =
    {field_infix, 0},
  [11] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [14] =
    {field_operator, 0, .inherited = true},
    {field_prefix, 0},
    {field_right, 0, .inherited = true},
  [17] =
    {field_atom, 0},
  [18] =
    {field_clause, 0, .inherited = true},
    {field_declarive, 0, .inherited = true},
  [20] =
    {field_operator, 0},
    {field_right, 1},
  [22] =
    {field_arguments, 0, .inherited = true},
    {field_close, 0, .inherited = true},
    {field_infix, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_prefix, 0, .inherited = true},
  [28] =
    {field_clause, 0, .inherited = true},
    {field_clause, 1, .inherited = true},
    {field_declarive, 0, .inherited = true},
    {field_declarive, 1, .inherited = true},
  [32] =
    {field_close, 2},
    {field_open, 0},
  [34] =
    {field_arguments, 1},
  [35] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [38] =
    {field_arguments, 2},
    {field_close, 3},
    {field_name, 0},
    {field_open, 1},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [14] = {
    [0] = anon_sym_DASH_DASH_GT,
  },
  [16] = {
    [0] = alias_sym_bracket,
    [2] = alias_sym_bracket,
  },
  [18] = {
    [1] = anon_sym_DASH_DASH_GT,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__operator_pred_list, 2,
    sym__operator_pred_list,
    anon_sym_DASH_DASH_GT,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
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
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(37);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_source_file] = STATE(72),
    [sym_directive_term] = STATE(21),
    [sym_clause_term] = STATE(22),
    [sym__term] = STATE(57),
    [sym_bracketed_term] = STATE(57),
    [sym_atomic] = STATE(57),
    [sym_compound_term] = STATE(57),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    [sym__term] = STATE(60),
    [sym__arg_term] = STATE(63),
    [sym_bracketed_term] = STATE(51),
    [sym_atomic] = STATE(51),
    [sym_compound_term] = STATE(60),
    [sym__compound_term_arg] = STATE(64),
    [sym__functional_notation] = STATE(54),
    [sym__operator_notation] = STATE(53),
    [sym__list_notation] = STATE(50),
    [sym__curly_bracketed_notation] = STATE(50),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(50),
    [sym_curly_bracket_term] = STATE(50),
    [sym__arg] = STATE(63),
    [sym_args] = STATE(71),
    [sym__operator_pred_list] = STATE(66),
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
    [sym__term] = STATE(60),
    [sym__arg_term] = STATE(63),
    [sym_bracketed_term] = STATE(51),
    [sym_atomic] = STATE(51),
    [sym_compound_term] = STATE(60),
    [sym__compound_term_arg] = STATE(64),
    [sym__functional_notation] = STATE(54),
    [sym__operator_notation] = STATE(53),
    [sym__list_notation] = STATE(50),
    [sym__curly_bracketed_notation] = STATE(50),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(50),
    [sym_curly_bracket_term] = STATE(50),
    [sym__arg] = STATE(63),
    [sym_args] = STATE(70),
    [sym__operator_pred_list] = STATE(66),
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
    [sym__term] = STATE(60),
    [sym__arg_term] = STATE(65),
    [sym_bracketed_term] = STATE(51),
    [sym_atomic] = STATE(51),
    [sym_compound_term] = STATE(60),
    [sym__compound_term_arg] = STATE(64),
    [sym__functional_notation] = STATE(54),
    [sym__operator_notation] = STATE(53),
    [sym__list_notation] = STATE(50),
    [sym__curly_bracketed_notation] = STATE(50),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(50),
    [sym_curly_bracket_term] = STATE(50),
    [sym__arg] = STATE(65),
    [sym__operator_pred_list] = STATE(66),
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
    [sym_directive_term] = STATE(21),
    [sym_clause_term] = STATE(22),
    [sym__term] = STATE(57),
    [sym_bracketed_term] = STATE(57),
    [sym_atomic] = STATE(57),
    [sym_compound_term] = STATE(57),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(29),
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
  [6] = {
    [sym_directive_term] = STATE(21),
    [sym_clause_term] = STATE(22),
    [sym__term] = STATE(57),
    [sym_bracketed_term] = STATE(57),
    [sym_atomic] = STATE(57),
    [sym_compound_term] = STATE(57),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_COLON_DASH] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym_variable] = ACTIONS(39),
    [anon_sym_dynamic] = ACTIONS(42),
    [anon_sym_discontiguous] = ACTIONS(42),
    [anon_sym_initialization] = ACTIONS(42),
    [anon_sym_meta_predicate] = ACTIONS(42),
    [anon_sym_module_transparent] = ACTIONS(42),
    [anon_sym_multifile] = ACTIONS(42),
    [anon_sym_public] = ACTIONS(42),
    [anon_sym_thread_local] = ACTIONS(42),
    [anon_sym_thread_initialization] = ACTIONS(42),
    [anon_sym_volitile] = ACTIONS(42),
    [anon_sym_directive] = ACTIONS(45),
    [anon_sym_qh_operator] = ACTIONS(45),
    [sym_number] = ACTIONS(48),
    [aux_sym_atom_token1] = ACTIONS(51),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(54),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
  },
  [7] = {
    [sym__term] = STATE(31),
    [sym_bracketed_term] = STATE(31),
    [sym_atomic] = STATE(31),
    [sym_compound_term] = STATE(31),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
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
    [sym__term] = STATE(52),
    [sym_bracketed_term] = STATE(52),
    [sym_atomic] = STATE(52),
    [sym_compound_term] = STATE(52),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
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
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
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
    [sym__term] = STATE(58),
    [sym_bracketed_term] = STATE(58),
    [sym_atomic] = STATE(58),
    [sym_compound_term] = STATE(58),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(69),
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
  [11] = {
    [sym__term] = STATE(59),
    [sym_bracketed_term] = STATE(59),
    [sym_atomic] = STATE(59),
    [sym_compound_term] = STATE(59),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(71),
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
    [sym__term] = STATE(40),
    [sym_bracketed_term] = STATE(40),
    [sym_atomic] = STATE(40),
    [sym_compound_term] = STATE(40),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(73),
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
    [sym__term] = STATE(41),
    [sym_bracketed_term] = STATE(41),
    [sym_atomic] = STATE(41),
    [sym_compound_term] = STATE(41),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
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
  [14] = {
    [sym__term] = STATE(37),
    [sym_bracketed_term] = STATE(37),
    [sym_atomic] = STATE(37),
    [sym_compound_term] = STATE(37),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
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
  [15] = {
    [sym__term] = STATE(32),
    [sym_bracketed_term] = STATE(32),
    [sym_atomic] = STATE(32),
    [sym_compound_term] = STATE(32),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(79),
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
  [16] = {
    [sym__term] = STATE(33),
    [sym_bracketed_term] = STATE(33),
    [sym_atomic] = STATE(33),
    [sym_compound_term] = STATE(33),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(81),
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
  [17] = {
    [sym__term] = STATE(34),
    [sym_bracketed_term] = STATE(34),
    [sym_atomic] = STATE(34),
    [sym_compound_term] = STATE(34),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(83),
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
  [18] = {
    [sym__term] = STATE(56),
    [sym_bracketed_term] = STATE(56),
    [sym_atomic] = STATE(56),
    [sym_compound_term] = STATE(56),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(85),
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
    [sym__term] = STATE(35),
    [sym_bracketed_term] = STATE(35),
    [sym_atomic] = STATE(35),
    [sym_compound_term] = STATE(35),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_variable] = ACTIONS(87),
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
    [sym__term] = STATE(36),
    [sym_bracketed_term] = STATE(36),
    [sym_atomic] = STATE(36),
    [sym_compound_term] = STATE(36),
    [sym__functional_notation] = STATE(42),
    [sym__operator_notation] = STATE(43),
    [sym__list_notation] = STATE(49),
    [sym__curly_bracketed_notation] = STATE(49),
    [sym__prefix_notation] = STATE(48),
    [sym__infix_notation] = STATE(47),
    [sym_infix_operator] = STATE(46),
    [sym__non_arg_operator] = STATE(45),
    [sym__prefix_non_associative] = STATE(44),
    [sym_atom] = STATE(26),
    [sym_list] = STATE(49),
    [sym_curly_bracket_term] = STATE(49),
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
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_variable,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(93), 15,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volitile,
      anon_sym_directive,
      anon_sym_qh_operator,
      aux_sym_atom_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [27] = 2,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_variable,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(97), 15,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volitile,
      anon_sym_directive,
      anon_sym_qh_operator,
      aux_sym_atom_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [54] = 2,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_variable,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(101), 15,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volitile,
      anon_sym_directive,
      anon_sym_qh_operator,
      aux_sym_atom_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [81] = 2,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      sym_variable,
      sym_number,
      anon_sym_LBRACK_RBRACK,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(105), 15,
      anon_sym_dynamic,
      anon_sym_discontiguous,
      anon_sym_initialization,
      anon_sym_meta_predicate,
      anon_sym_module_transparent,
      anon_sym_multifile,
      anon_sym_public,
      anon_sym_thread_local,
      anon_sym_thread_initialization,
      anon_sym_volitile,
      anon_sym_directive,
      anon_sym_qh_operator,
      aux_sym_atom_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [108] = 2,
    ACTIONS(109), 1,
      anon_sym_STAR,
    ACTIONS(107), 13,
      anon_sym_COLON_DASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [127] = 3,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(111), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [148] = 2,
    ACTIONS(119), 1,
      anon_sym_STAR,
    ACTIONS(117), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [166] = 2,
    ACTIONS(123), 1,
      anon_sym_STAR,
    ACTIONS(121), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [184] = 2,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(125), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [202] = 2,
    ACTIONS(131), 1,
      anon_sym_STAR,
    ACTIONS(129), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [220] = 7,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(135), 5,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_COLON_EQ,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [248] = 8,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_COLON_EQ,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(147), 4,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [278] = 6,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(147), 6,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [304] = 5,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(147), 8,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [328] = 4,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(147), 9,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [350] = 8,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
    ACTIONS(147), 4,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [380] = 3,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(156), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(147), 10,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [400] = 2,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(159), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [418] = 2,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(163), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [436] = 3,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(167), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(170), 10,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [456] = 3,
    ACTIONS(172), 1,
      anon_sym_STAR,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(170), 10,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [476] = 2,
    ACTIONS(176), 1,
      anon_sym_STAR,
    ACTIONS(174), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [494] = 2,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(178), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [512] = 2,
    ACTIONS(184), 1,
      anon_sym_STAR,
    ACTIONS(182), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [530] = 2,
    ACTIONS(188), 1,
      anon_sym_STAR,
    ACTIONS(186), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [548] = 2,
    ACTIONS(192), 1,
      anon_sym_STAR,
    ACTIONS(190), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [566] = 2,
    ACTIONS(196), 1,
      anon_sym_STAR,
    ACTIONS(194), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [584] = 2,
    ACTIONS(200), 1,
      anon_sym_STAR,
    ACTIONS(198), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [602] = 2,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(202), 12,
      anon_sym_COLON_DASH,
      anon_sym_RPAREN,
      sym__end,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [620] = 3,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(206), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(202), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
  [638] = 3,
    ACTIONS(212), 1,
      anon_sym_STAR,
    ACTIONS(210), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(208), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
  [656] = 9,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_curly_bracket_term_repeat1,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [686] = 3,
    ACTIONS(180), 1,
      anon_sym_STAR,
    ACTIONS(220), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(178), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
  [704] = 3,
    ACTIONS(176), 1,
      anon_sym_STAR,
    ACTIONS(222), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(174), 7,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
      anon_sym_COLON_EQ,
  [722] = 7,
    ACTIONS(137), 1,
      anon_sym_STAR,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(135), 2,
      anon_sym_COLON_EQ,
      anon_sym_RBRACE,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [747] = 8,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [774] = 8,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(226), 1,
      sym__end,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [801] = 8,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(228), 1,
      sym__end,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [828] = 8,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [855] = 7,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
    ACTIONS(214), 1,
      anon_sym_STAR,
    ACTIONS(133), 2,
      anon_sym_COLON_DASH,
      anon_sym_DASH_DASH_GT,
    ACTIONS(143), 2,
      anon_sym_DASH_GT,
      anon_sym_STAR_DASH_GT,
  [879] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_args_repeat1,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [890] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_args_repeat1,
    ACTIONS(237), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [901] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_args_repeat1,
    ACTIONS(241), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [912] = 1,
    ACTIONS(243), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [918] = 1,
    ACTIONS(232), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [924] = 1,
    ACTIONS(245), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [930] = 3,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_curly_bracket_term_repeat1,
  [940] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_curly_bracket_term_repeat1,
  [950] = 1,
    ACTIONS(254), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [956] = 1,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
  [960] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
  [964] = 1,
    ACTIONS(260), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 27,
  [SMALL_STATE(23)] = 54,
  [SMALL_STATE(24)] = 81,
  [SMALL_STATE(25)] = 108,
  [SMALL_STATE(26)] = 127,
  [SMALL_STATE(27)] = 148,
  [SMALL_STATE(28)] = 166,
  [SMALL_STATE(29)] = 184,
  [SMALL_STATE(30)] = 202,
  [SMALL_STATE(31)] = 220,
  [SMALL_STATE(32)] = 248,
  [SMALL_STATE(33)] = 278,
  [SMALL_STATE(34)] = 304,
  [SMALL_STATE(35)] = 328,
  [SMALL_STATE(36)] = 350,
  [SMALL_STATE(37)] = 380,
  [SMALL_STATE(38)] = 400,
  [SMALL_STATE(39)] = 418,
  [SMALL_STATE(40)] = 436,
  [SMALL_STATE(41)] = 456,
  [SMALL_STATE(42)] = 476,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 512,
  [SMALL_STATE(45)] = 530,
  [SMALL_STATE(46)] = 548,
  [SMALL_STATE(47)] = 566,
  [SMALL_STATE(48)] = 584,
  [SMALL_STATE(49)] = 602,
  [SMALL_STATE(50)] = 620,
  [SMALL_STATE(51)] = 638,
  [SMALL_STATE(52)] = 656,
  [SMALL_STATE(53)] = 686,
  [SMALL_STATE(54)] = 704,
  [SMALL_STATE(55)] = 722,
  [SMALL_STATE(56)] = 747,
  [SMALL_STATE(57)] = 774,
  [SMALL_STATE(58)] = 801,
  [SMALL_STATE(59)] = 828,
  [SMALL_STATE(60)] = 855,
  [SMALL_STATE(61)] = 879,
  [SMALL_STATE(62)] = 890,
  [SMALL_STATE(63)] = 901,
  [SMALL_STATE(64)] = 912,
  [SMALL_STATE(65)] = 918,
  [SMALL_STATE(66)] = 924,
  [SMALL_STATE(67)] = 930,
  [SMALL_STATE(68)] = 940,
  [SMALL_STATE(69)] = 950,
  [SMALL_STATE(70)] = 956,
  [SMALL_STATE(71)] = 960,
  [SMALL_STATE(72)] = 964,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(57),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(39),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_term, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_term, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause_term, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clause_term, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1, .production_id = 10),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic, 1, .production_id = 10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 17),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 17),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_term, 3, .production_id = 16),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_term, 3, .production_id = 16),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__functional_notation, 4, .production_id = 19),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__functional_notation, 4, .production_id = 19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracket_term, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracket_term, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_arg_operator, 3, .production_id = 18),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_arg_operator, 3, .production_id = 18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_operator, 3, .production_id = 18),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_operator, 3, .production_id = 18),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_infix_operator, 3, .production_id = 18), SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_infix_operator, 3, .production_id = 18), SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_curly_bracket_term, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_curly_bracket_term, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic, 1),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__prefix_non_associative, 2, .production_id = 12), SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_non_associative, 2, .production_id = 12),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_non_associative, 2, .production_id = 12),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_term, 1, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_term, 1, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_term, 1, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_term, 1, .production_id = 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefix_notation, 1, .production_id = 9),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prefix_notation, 1, .production_id = 9),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_term, 1, .production_id = 8),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_term, 1, .production_id = 8),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix_notation, 1, .production_id = 7),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infix_notation, 1, .production_id = 7),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 1, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 1, .production_id = 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_notation, 1, .production_id = 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operator_notation, 1, .production_id = 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_term, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_term, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_term_arg, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_term, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__term, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_term_arg, 1, .production_id = 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compound_term_arg, 1, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_curly_bracket_term_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg_term, 1, .production_id = 13),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 1, .production_id = 14),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_curly_bracket_term_repeat1, 2), SHIFT_REPEAT(11),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator_pred_list, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [260] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prolog(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
