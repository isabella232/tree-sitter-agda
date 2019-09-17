#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 7
#define SYMBOL_COUNT 8
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym_hello = 1,
  sym__newline = 2,
  sym__indent = 3,
  sym__dedent = 4,
  sym_source_file = 5,
  sym__declaration = 6,
  aux_sym_source_file_repeat1 = 7,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_hello] = "hello",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_hello] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(5);
      if (lookahead == 'h') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_hello);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hello] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(5),
    [sym__declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_hello] = ACTIONS(5),
  },
  [2] = {
    [sym__declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_hello] = ACTIONS(5),
  },
  [3] = {
    [sym__declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_hello] = ACTIONS(11),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_hello] = ACTIONS(9),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(14),
  },
  [6] = {
    [sym__newline] = ACTIONS(16),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(6),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [9] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [14] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [16] = {.count = 1, .reusable = true}, SHIFT(4),
};

void *tree_sitter_agda_external_scanner_create(void);
void tree_sitter_agda_external_scanner_destroy(void *);
bool tree_sitter_agda_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_agda_external_scanner_serialize(void *, char *);
void tree_sitter_agda_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_agda(void) {
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
