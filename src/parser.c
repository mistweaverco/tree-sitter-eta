#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  sym_entity = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_attribute_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_quoted_attribute_value_token2 = 15,
  sym_text = 16,
  anon_sym_LT_PERCENT = 17,
  anon_sym_PERCENT_GT = 18,
  sym__start_tag_name = 19,
  sym__script_start_tag_name = 20,
  sym__style_start_tag_name = 21,
  sym__end_tag_name = 22,
  sym_erroneous_end_tag_name = 23,
  sym__implicit_end_tag = 24,
  sym_raw_text = 25,
  sym_comment = 26,
  sym_fragment = 27,
  sym_doctype = 28,
  sym__node = 29,
  sym_element = 30,
  sym_script_element = 31,
  sym_style_element = 32,
  sym_start_tag = 33,
  sym_script_start_tag = 34,
  sym_style_start_tag = 35,
  sym_self_closing_tag = 36,
  sym_end_tag = 37,
  sym_erroneous_end_tag = 38,
  sym_attribute = 39,
  sym_quoted_attribute_value = 40,
  sym_eta_script_element = 41,
  aux_sym_fragment_repeat1 = 42,
  aux_sym_start_tag_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_entity] = "entity",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_PERCENT_GT] = "%>",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_fragment] = "fragment",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_eta_script_element] = "eta_script_element",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_entity] = sym_entity,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_fragment] = sym_fragment,
  [sym_doctype] = sym_doctype,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_script_element] = sym_script_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_script_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_eta_script_element] = sym_eta_script_element,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_eta_script_element] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 9,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 10,
  [29] = 29,
  [30] = 15,
  [31] = 17,
  [32] = 18,
  [33] = 21,
  [34] = 22,
  [35] = 26,
  [36] = 20,
  [37] = 25,
  [38] = 23,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 41,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 59,
  [61] = 46,
  [62] = 57,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 64,
  [72] = 72,
  [73] = 68,
  [74] = 70,
  [75] = 52,
  [76] = 54,
  [77] = 67,
  [78] = 78,
  [79] = 78,
  [80] = 69,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 85,
  [91] = 83,
  [92] = 92,
  [93] = 93,
  [94] = 86,
  [95] = 95,
  [96] = 95,
  [97] = 89,
  [98] = 87,
  [99] = 88,
  [100] = 93,
  [101] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == ';') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 53:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(61);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(59);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 57, .external_lex_state = 2},
  [2] = {.lex_state = 57, .external_lex_state = 3},
  [3] = {.lex_state = 57, .external_lex_state = 3},
  [4] = {.lex_state = 57, .external_lex_state = 3},
  [5] = {.lex_state = 57, .external_lex_state = 3},
  [6] = {.lex_state = 57, .external_lex_state = 2},
  [7] = {.lex_state = 57, .external_lex_state = 3},
  [8] = {.lex_state = 57, .external_lex_state = 2},
  [9] = {.lex_state = 57, .external_lex_state = 3},
  [10] = {.lex_state = 57, .external_lex_state = 2},
  [11] = {.lex_state = 57, .external_lex_state = 3},
  [12] = {.lex_state = 57, .external_lex_state = 2},
  [13] = {.lex_state = 57, .external_lex_state = 3},
  [14] = {.lex_state = 57, .external_lex_state = 3},
  [15] = {.lex_state = 57, .external_lex_state = 2},
  [16] = {.lex_state = 57, .external_lex_state = 2},
  [17] = {.lex_state = 57, .external_lex_state = 3},
  [18] = {.lex_state = 57, .external_lex_state = 3},
  [19] = {.lex_state = 57, .external_lex_state = 2},
  [20] = {.lex_state = 57, .external_lex_state = 2},
  [21] = {.lex_state = 57, .external_lex_state = 3},
  [22] = {.lex_state = 57, .external_lex_state = 3},
  [23] = {.lex_state = 57, .external_lex_state = 3},
  [24] = {.lex_state = 57, .external_lex_state = 2},
  [25] = {.lex_state = 57, .external_lex_state = 3},
  [26] = {.lex_state = 57, .external_lex_state = 2},
  [27] = {.lex_state = 57, .external_lex_state = 3},
  [28] = {.lex_state = 57, .external_lex_state = 3},
  [29] = {.lex_state = 57, .external_lex_state = 3},
  [30] = {.lex_state = 57, .external_lex_state = 3},
  [31] = {.lex_state = 57, .external_lex_state = 2},
  [32] = {.lex_state = 57, .external_lex_state = 2},
  [33] = {.lex_state = 57, .external_lex_state = 2},
  [34] = {.lex_state = 57, .external_lex_state = 2},
  [35] = {.lex_state = 57, .external_lex_state = 3},
  [36] = {.lex_state = 57, .external_lex_state = 3},
  [37] = {.lex_state = 57, .external_lex_state = 2},
  [38] = {.lex_state = 57, .external_lex_state = 2},
  [39] = {.lex_state = 5, .external_lex_state = 4},
  [40] = {.lex_state = 5, .external_lex_state = 4},
  [41] = {.lex_state = 5, .external_lex_state = 4},
  [42] = {.lex_state = 5, .external_lex_state = 4},
  [43] = {.lex_state = 5, .external_lex_state = 4},
  [44] = {.lex_state = 5, .external_lex_state = 2},
  [45] = {.lex_state = 5, .external_lex_state = 2},
  [46] = {.lex_state = 5, .external_lex_state = 4},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 5, .external_lex_state = 2},
  [50] = {.lex_state = 5, .external_lex_state = 2},
  [51] = {.lex_state = 5, .external_lex_state = 2},
  [52] = {.lex_state = 5, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 5},
  [54] = {.lex_state = 5, .external_lex_state = 4},
  [55] = {.lex_state = 0, .external_lex_state = 6},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 5, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 5, .external_lex_state = 2},
  [62] = {.lex_state = 5, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 2, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 7},
  [72] = {.lex_state = 0, .external_lex_state = 5},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 5, .external_lex_state = 2},
  [76] = {.lex_state = 5, .external_lex_state = 2},
  [77] = {.lex_state = 2, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 4, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 55, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 8},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 8},
  [98] = {.lex_state = 55, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 9},
  [101] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(82),
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(60),
    [sym_style_start_tag] = STATE(53),
    [sym_self_closing_tag] = STATE(12),
    [sym_erroneous_end_tag] = STATE(6),
    [sym_eta_script_element] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_entity] = ACTIONS(13),
    [sym_text] = ACTIONS(13),
    [anon_sym_LT_PERCENT] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(22), 1,
      sym_end_tag,
    STATE(58), 1,
      sym_style_start_tag,
    STATE(59), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [48] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(36), 1,
      sym_end_tag,
    STATE(58), 1,
      sym_style_start_tag,
    STATE(59), 1,
      sym_script_start_tag,
    ACTIONS(29), 2,
      sym_entity,
      sym_text,
    STATE(2), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [96] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(20), 1,
      sym_end_tag,
    STATE(58), 1,
      sym_style_start_tag,
    STATE(59), 1,
      sym_script_start_tag,
    ACTIONS(35), 2,
      sym_entity,
      sym_text,
    STATE(5), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [144] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(33), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(34), 1,
      sym_end_tag,
    STATE(58), 1,
      sym_style_start_tag,
    STATE(59), 1,
      sym_script_start_tag,
    ACTIONS(23), 2,
      sym_entity,
      sym_text,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [192] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_SLASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_style_start_tag,
    STATE(60), 1,
      sym_script_start_tag,
    ACTIONS(43), 2,
      sym_entity,
      sym_text,
    STATE(8), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [237] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_LT_BANG,
    ACTIONS(48), 1,
      anon_sym_LT,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(57), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(60), 1,
      sym__implicit_end_tag,
    STATE(3), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(58), 1,
      sym_style_start_tag,
    STATE(59), 1,
      sym_script_start_tag,
    ACTIONS(54), 2,
      sym_entity,
      sym_text,
    STATE(7), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [282] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_LT_BANG,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(68), 1,
      anon_sym_LT_SLASH,
    ACTIONS(74), 1,
      anon_sym_LT_PERCENT,
    STATE(4), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(53), 1,
      sym_style_start_tag,
    STATE(60), 1,
      sym_script_start_tag,
    ACTIONS(71), 2,
      sym_entity,
      sym_text,
    STATE(8), 8,
      sym_doctype,
      sym__node,
      sym_element,
      sym_script_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_eta_script_element,
      aux_sym_fragment_repeat1,
  [327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LT,
    ACTIONS(89), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LT,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(133), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LT,
    ACTIONS(81), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(137), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(97), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_LT,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_LT,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LT,
    ACTIONS(129), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LT,
    ACTIONS(109), 6,
      sym__implicit_end_tag,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LT,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LT,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      sym_entity,
      sym_text,
      anon_sym_LT_PERCENT,
  [777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      anon_sym_SLASH_GT,
    ACTIONS(145), 1,
      sym_attribute_name,
    STATE(42), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_attribute_name,
    ACTIONS(147), 1,
      anon_sym_GT,
    ACTIONS(149), 1,
      anon_sym_SLASH_GT,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_attribute_name,
    ACTIONS(151), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_attribute_name,
    ACTIONS(147), 1,
      anon_sym_GT,
    ACTIONS(156), 1,
      anon_sym_SLASH_GT,
    STATE(41), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_GT,
    ACTIONS(145), 1,
      sym_attribute_name,
    ACTIONS(158), 1,
      anon_sym_SLASH_GT,
    STATE(40), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_GT,
    ACTIONS(162), 1,
      sym_attribute_name,
    STATE(51), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_attribute_name,
    ACTIONS(164), 1,
      anon_sym_GT,
    STATE(51), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_EQ,
    ACTIONS(166), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_attribute_value,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_quoted_attribute_value,
  [916] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_attribute_value,
    ACTIONS(178), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_attribute_value,
  [932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_attribute_name,
    ACTIONS(182), 1,
      anon_sym_GT,
    STATE(44), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_attribute_name,
    ACTIONS(184), 1,
      anon_sym_GT,
    STATE(45), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_GT,
    ACTIONS(186), 1,
      sym_attribute_name,
    STATE(51), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    ACTIONS(193), 1,
      sym_raw_text,
    STATE(26), 1,
      sym_end_tag,
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__start_tag_name,
    ACTIONS(199), 1,
      sym__script_start_tag_name,
    ACTIONS(201), 1,
      sym__style_start_tag_name,
  [1018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__script_start_tag_name,
    ACTIONS(201), 1,
      sym__style_start_tag_name,
    ACTIONS(203), 1,
      sym__start_tag_name,
  [1031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [1040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    ACTIONS(209), 1,
      sym_raw_text,
    STATE(35), 1,
      sym_end_tag,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    ACTIONS(211), 1,
      sym_raw_text,
    STATE(9), 1,
      sym_end_tag,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    ACTIONS(213), 1,
      sym_raw_text,
    STATE(24), 1,
      sym_end_tag,
  [1079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_EQ,
    ACTIONS(166), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__end_tag_name,
    ACTIONS(221), 1,
      sym_erroneous_end_tag_name,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_quoted_attribute_value_token2,
  [1142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(32), 1,
      sym_end_tag,
  [1152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      aux_sym_quoted_attribute_value_token1,
  [1162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LT_SLASH,
    STATE(33), 1,
      sym_end_tag,
  [1172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(233), 1,
      sym__end_tag_name,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    STATE(18), 1,
      sym_end_tag,
  [1200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LT_SLASH,
    STATE(21), 1,
      sym_end_tag,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_GT,
      sym_attribute_name,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_quoted_attribute_value_token2,
  [1236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(243), 1,
      sym_raw_text,
  [1246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(247), 1,
      sym_raw_text,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      aux_sym_quoted_attribute_value_token1,
  [1266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_PERCENT_GT,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_GT,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_PERCENT_GT,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_GT,
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
  [1308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_doctype_token1,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_GT,
  [1322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_erroneous_end_tag_name,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_GT,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_GT,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__doctype,
  [1350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__end_tag_name,
  [1357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
  [1378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_erroneous_end_tag_name,
  [1385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_doctype_token1,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
  [1399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__end_tag_name,
  [1406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__doctype,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 357,
  [SMALL_STATE(12)] = 372,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 432,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 462,
  [SMALL_STATE(19)] = 477,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 522,
  [SMALL_STATE(23)] = 537,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 567,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 597,
  [SMALL_STATE(28)] = 612,
  [SMALL_STATE(29)] = 627,
  [SMALL_STATE(30)] = 642,
  [SMALL_STATE(31)] = 657,
  [SMALL_STATE(32)] = 672,
  [SMALL_STATE(33)] = 687,
  [SMALL_STATE(34)] = 702,
  [SMALL_STATE(35)] = 717,
  [SMALL_STATE(36)] = 732,
  [SMALL_STATE(37)] = 747,
  [SMALL_STATE(38)] = 762,
  [SMALL_STATE(39)] = 777,
  [SMALL_STATE(40)] = 794,
  [SMALL_STATE(41)] = 811,
  [SMALL_STATE(42)] = 826,
  [SMALL_STATE(43)] = 843,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 874,
  [SMALL_STATE(46)] = 888,
  [SMALL_STATE(47)] = 900,
  [SMALL_STATE(48)] = 916,
  [SMALL_STATE(49)] = 932,
  [SMALL_STATE(50)] = 946,
  [SMALL_STATE(51)] = 960,
  [SMALL_STATE(52)] = 974,
  [SMALL_STATE(53)] = 983,
  [SMALL_STATE(54)] = 996,
  [SMALL_STATE(55)] = 1005,
  [SMALL_STATE(56)] = 1018,
  [SMALL_STATE(57)] = 1031,
  [SMALL_STATE(58)] = 1040,
  [SMALL_STATE(59)] = 1053,
  [SMALL_STATE(60)] = 1066,
  [SMALL_STATE(61)] = 1079,
  [SMALL_STATE(62)] = 1090,
  [SMALL_STATE(63)] = 1098,
  [SMALL_STATE(64)] = 1106,
  [SMALL_STATE(65)] = 1116,
  [SMALL_STATE(66)] = 1124,
  [SMALL_STATE(67)] = 1132,
  [SMALL_STATE(68)] = 1142,
  [SMALL_STATE(69)] = 1152,
  [SMALL_STATE(70)] = 1162,
  [SMALL_STATE(71)] = 1172,
  [SMALL_STATE(72)] = 1182,
  [SMALL_STATE(73)] = 1190,
  [SMALL_STATE(74)] = 1200,
  [SMALL_STATE(75)] = 1210,
  [SMALL_STATE(76)] = 1218,
  [SMALL_STATE(77)] = 1226,
  [SMALL_STATE(78)] = 1236,
  [SMALL_STATE(79)] = 1246,
  [SMALL_STATE(80)] = 1256,
  [SMALL_STATE(81)] = 1266,
  [SMALL_STATE(82)] = 1273,
  [SMALL_STATE(83)] = 1280,
  [SMALL_STATE(84)] = 1287,
  [SMALL_STATE(85)] = 1294,
  [SMALL_STATE(86)] = 1301,
  [SMALL_STATE(87)] = 1308,
  [SMALL_STATE(88)] = 1315,
  [SMALL_STATE(89)] = 1322,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1336,
  [SMALL_STATE(92)] = 1343,
  [SMALL_STATE(93)] = 1350,
  [SMALL_STATE(94)] = 1357,
  [SMALL_STATE(95)] = 1364,
  [SMALL_STATE(96)] = 1371,
  [SMALL_STATE(97)] = 1378,
  [SMALL_STATE(98)] = 1385,
  [SMALL_STATE(99)] = 1392,
  [SMALL_STATE(100)] = 1399,
  [SMALL_STATE(101)] = 1406,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(101),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(97),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(78),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(92),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(56),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(79),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eta_script_element, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eta_script_element, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eta_script_element, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eta_script_element, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(46),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(61),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_start_tag, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_eta_external_scanner_create(void);
void tree_sitter_eta_external_scanner_destroy(void *);
bool tree_sitter_eta_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_eta_external_scanner_serialize(void *, char *);
void tree_sitter_eta_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_eta(void) {
  static const TSLanguage language = {
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
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_eta_external_scanner_create,
      tree_sitter_eta_external_scanner_destroy,
      tree_sitter_eta_external_scanner_scan,
      tree_sitter_eta_external_scanner_serialize,
      tree_sitter_eta_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
