#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 33
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  sym_text_format_indicator = 9,
  sym_escape_sequence = 10,
  sym_bad_escape_sequence = 11,
  sym_number = 12,
  sym_true = 13,
  sym_false = 14,
  sym_null = 15,
  sym_multi_line_comment = 16,
  sym_single_line_comment = 17,
  sym_document = 18,
  sym__value = 19,
  sym_object = 20,
  sym_object_comma_missing = 21,
  sym_pair = 22,
  sym_key = 23,
  sym_array = 24,
  sym_array_comma_missing = 25,
  sym_string = 26,
  aux_sym_object_repeat1 = 27,
  aux_sym_array_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_text_format_indicator] = "text_format_indicator",
  [sym_escape_sequence] = "escape_sequence",
  [sym_bad_escape_sequence] = "bad_escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_single_line_comment] = "single_line_comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_object_comma_missing] = "object_comma_missing",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym_array] = "array",
  [sym_array_comma_missing] = "array_comma_missing",
  [sym_string] = "string",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text_format_indicator] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_comma_missing] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_array_comma_missing] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '^') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(120);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == ';') ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == ';') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(6);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(105);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 77:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '^') ADVANCE(2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_text_format_indicator);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bad_escape_sequence);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bad_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_multi_line_comment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
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
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_text_format_indicator] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_bad_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(31),
    [sym__value] = STATE(32),
    [sym_object] = STATE(32),
    [sym_array] = STATE(32),
    [sym_string] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(16),
    [sym_object] = STATE(16),
    [sym_array] = STATE(16),
    [sym_array_comma_missing] = STATE(2),
    [sym_string] = STATE(16),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(16),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(24),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
    [sym_null] = ACTIONS(27),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(16),
    [sym_object] = STATE(16),
    [sym_array] = STATE(16),
    [sym_array_comma_missing] = STATE(2),
    [sym_string] = STATE(16),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(34),
    [sym_true] = ACTIONS(34),
    [sym_false] = ACTIONS(34),
    [sym_null] = ACTIONS(34),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(16),
    [sym_object] = STATE(16),
    [sym_array] = STATE(16),
    [sym_array_comma_missing] = STATE(3),
    [sym_string] = STATE(16),
    [aux_sym_array_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(34),
    [sym_true] = ACTIONS(34),
    [sym_false] = ACTIONS(34),
    [sym_null] = ACTIONS(34),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(4),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [sym_string] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(40),
    [sym_true] = ACTIONS(40),
    [sym_false] = ACTIONS(40),
    [sym_null] = ACTIONS(40),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_COLON] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(42),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(42),
    [sym_number] = ACTIONS(42),
    [sym_true] = ACTIONS(42),
    [sym_false] = ACTIONS(42),
    [sym_null] = ACTIONS(42),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(44),
    [anon_sym_RBRACK] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_number] = ACTIONS(44),
    [sym_true] = ACTIONS(44),
    [sym_false] = ACTIONS(44),
    [sym_null] = ACTIONS(44),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(46),
    [anon_sym_RBRACK] = ACTIONS(46),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym_number] = ACTIONS(46),
    [sym_true] = ACTIONS(46),
    [sym_false] = ACTIONS(46),
    [sym_null] = ACTIONS(46),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_true] = ACTIONS(48),
    [sym_false] = ACTIONS(48),
    [sym_null] = ACTIONS(48),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym_number] = ACTIONS(50),
    [sym_true] = ACTIONS(50),
    [sym_false] = ACTIONS(50),
    [sym_null] = ACTIONS(50),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_true] = ACTIONS(52),
    [sym_false] = ACTIONS(52),
    [sym_null] = ACTIONS(52),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [sym_number] = ACTIONS(54),
    [sym_true] = ACTIONS(54),
    [sym_false] = ACTIONS(54),
    [sym_null] = ACTIONS(54),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__value] = STATE(17),
    [sym_object] = STATE(17),
    [sym_array] = STATE(17),
    [sym_string] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(56),
    [sym_true] = ACTIONS(56),
    [sym_false] = ACTIONS(56),
    [sym_null] = ACTIONS(56),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_true] = ACTIONS(58),
    [sym_false] = ACTIONS(58),
    [sym_null] = ACTIONS(58),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__value] = STATE(28),
    [sym_object] = STATE(28),
    [sym_array] = STATE(28),
    [sym_string] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(60),
    [sym_true] = ACTIONS(60),
    [sym_false] = ACTIONS(60),
    [sym_null] = ACTIONS(60),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym_number] = ACTIONS(62),
    [sym_true] = ACTIONS(62),
    [sym_false] = ACTIONS(62),
    [sym_null] = ACTIONS(62),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(22),
    [anon_sym_RBRACK] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [sym_number] = ACTIONS(22),
    [sym_true] = ACTIONS(22),
    [sym_false] = ACTIONS(22),
    [sym_null] = ACTIONS(22),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_object_comma_missing] = STATE(19),
    [sym_pair] = STATE(26),
    [sym_key] = STATE(30),
    [sym_string] = STATE(29),
    [aux_sym_object_repeat1] = STATE(19),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_object_comma_missing] = STATE(19),
    [sym_pair] = STATE(26),
    [sym_key] = STATE(30),
    [sym_string] = STATE(29),
    [aux_sym_object_repeat1] = STATE(19),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_object_comma_missing] = STATE(18),
    [sym_pair] = STATE(26),
    [sym_key] = STATE(30),
    [sym_string] = STATE(29),
    [aux_sym_object_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [21] = {
    [aux_sym_string_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [aux_sym_string_token1] = ACTIONS(80),
    [sym_text_format_indicator] = ACTIONS(80),
    [sym_escape_sequence] = ACTIONS(82),
    [sym_bad_escape_sequence] = ACTIONS(80),
    [sym_multi_line_comment] = ACTIONS(84),
    [sym_single_line_comment] = ACTIONS(84),
  },
  [22] = {
    [aux_sym_string_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [aux_sym_string_token1] = ACTIONS(88),
    [sym_text_format_indicator] = ACTIONS(88),
    [sym_escape_sequence] = ACTIONS(91),
    [sym_bad_escape_sequence] = ACTIONS(88),
    [sym_multi_line_comment] = ACTIONS(84),
    [sym_single_line_comment] = ACTIONS(84),
  },
  [23] = {
    [aux_sym_string_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [aux_sym_string_token1] = ACTIONS(96),
    [sym_text_format_indicator] = ACTIONS(96),
    [sym_escape_sequence] = ACTIONS(98),
    [sym_bad_escape_sequence] = ACTIONS(96),
    [sym_multi_line_comment] = ACTIONS(84),
    [sym_single_line_comment] = ACTIONS(84),
  },
  [24] = {
    [sym_pair] = STATE(20),
    [sym_key] = STATE(30),
    [sym_string] = STATE(29),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_pair] = STATE(27),
    [sym_key] = STATE(30),
    [sym_string] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_COLON] = ACTIONS(106),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_COLON] = ACTIONS(108),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_multi_line_comment] = ACTIONS(3),
    [sym_single_line_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(24),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(23),
  [11] = {.count = 1, .reusable = true}, SHIFT(32),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [16] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [22] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [24] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(23),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(16),
  [30] = {.count = 1, .reusable = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true}, SHIFT(16),
  [36] = {.count = 1, .reusable = true}, SHIFT(12),
  [38] = {.count = 1, .reusable = true}, SHIFT(14),
  [40] = {.count = 1, .reusable = true}, SHIFT(4),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_object, 3),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_object, 4),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_object, 2),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [56] = {.count = 1, .reusable = true}, SHIFT(17),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [60] = {.count = 1, .reusable = true}, SHIFT(28),
  [62] = {.count = 1, .reusable = true}, REDUCE(sym_array_comma_missing, 1),
  [64] = {.count = 1, .reusable = true}, SHIFT(25),
  [66] = {.count = 1, .reusable = true}, SHIFT(9),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(25),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(23),
  [76] = {.count = 1, .reusable = true}, SHIFT(8),
  [78] = {.count = 1, .reusable = false}, SHIFT(6),
  [80] = {.count = 1, .reusable = false}, SHIFT(22),
  [82] = {.count = 1, .reusable = true}, SHIFT(22),
  [84] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [86] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(22),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(22),
  [94] = {.count = 1, .reusable = false}, SHIFT(7),
  [96] = {.count = 1, .reusable = false}, SHIFT(21),
  [98] = {.count = 1, .reusable = true}, SHIFT(21),
  [100] = {.count = 1, .reusable = true}, SHIFT(10),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_object_comma_missing, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [108] = {.count = 1, .reusable = true}, SHIFT(15),
  [110] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sbjson(void) {
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
  };
  return &language;
}
