#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_using = 1,
  sym_template = 2,
  anon_sym_SEMI = 3,
  anon_sym_DQUOTE = 4,
  anon_sym_SQUOTE = 5,
  sym_unescaped_double_string_fragment = 6,
  sym_unescaped_single_string_fragment = 7,
  sym_escape_sequence = 8,
  anon_sym__ = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_object_id_token1 = 12,
  sym_object = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_menu = 18,
  anon_sym_section = 19,
  anon_sym_item = 20,
  anon_sym_COMMA = 21,
  anon_sym_COLON = 22,
  anon_sym_true = 23,
  anon_sym_false = 24,
  sym_property_name = 25,
  aux_sym_signal_name_token1 = 26,
  anon_sym_start = 27,
  anon_sym_end = 28,
  anon_sym_top = 29,
  anon_sym_bottom = 30,
  anon_sym_center = 31,
  anon_sym_right = 32,
  anon_sym_left = 33,
  anon_sym_fill = 34,
  anon_sym_vertical = 35,
  anon_sym_horizontal = 36,
  anon_sym_always = 37,
  anon_sym_never = 38,
  anon_sym_natural = 39,
  anon_sym_none = 40,
  anon_sym_word = 41,
  anon_sym_char = 42,
  anon_sym_word_char = 43,
  anon_sym_yes = 44,
  anon_sym_no = 45,
  anon_sym_both = 46,
  anon_sym_bind = 47,
  anon_sym_DOT = 48,
  anon_sym_no_DASHsync_DASHcreate = 49,
  anon_sym_bidirectional = 50,
  anon_sym_inverted = 51,
  anon_sym_EQ_GT = 52,
  anon_sym_swapped = 53,
  anon_sym_styles = 54,
  sym_comment = 55,
  sym_number = 56,
  sym_source_file = 57,
  sym__toplevel = 58,
  sym_import_statement = 59,
  sym_string = 60,
  sym_gettext_string = 61,
  sym_object_id = 62,
  sym_identifier = 63,
  sym_block = 64,
  sym_decorator = 65,
  sym_object_definition = 66,
  sym_menu_definition = 67,
  sym_menu_section = 68,
  sym_menu_item = 69,
  sym__template_definition = 70,
  sym_boolean = 71,
  sym_signal_name = 72,
  sym_constant = 73,
  sym__property_value = 74,
  sym__property_binding = 75,
  sym_property_definition = 76,
  sym_function = 77,
  sym_signal_binding = 78,
  sym_styles_list = 79,
  sym_array = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_string_repeat1 = 82,
  aux_sym_string_repeat2 = 83,
  aux_sym_block_repeat1 = 84,
  aux_sym_menu_definition_repeat1 = 85,
  aux_sym_menu_section_repeat1 = 86,
  aux_sym_menu_section_repeat2 = 87,
  aux_sym__property_binding_repeat1 = 88,
  aux_sym_array_repeat1 = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_using] = "using",
  [sym_template] = "template",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym__] = "_",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_object_id_token1] = "object_id_token1",
  [sym_object] = "object",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_menu] = "menu",
  [anon_sym_section] = "section",
  [anon_sym_item] = "item",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_property_name] = "property_name",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [anon_sym_start] = "start",
  [anon_sym_end] = "end",
  [anon_sym_top] = "top",
  [anon_sym_bottom] = "bottom",
  [anon_sym_center] = "center",
  [anon_sym_right] = "right",
  [anon_sym_left] = "left",
  [anon_sym_fill] = "fill",
  [anon_sym_vertical] = "vertical",
  [anon_sym_horizontal] = "horizontal",
  [anon_sym_always] = "always",
  [anon_sym_never] = "never",
  [anon_sym_natural] = "natural",
  [anon_sym_none] = "none",
  [anon_sym_word] = "word",
  [anon_sym_char] = "char",
  [anon_sym_word_char] = "word_char",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_both] = "both",
  [anon_sym_bind] = "bind",
  [anon_sym_DOT] = ".",
  [anon_sym_no_DASHsync_DASHcreate] = "no-sync-create",
  [anon_sym_bidirectional] = "bidirectional",
  [anon_sym_inverted] = "inverted",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_swapped] = "swapped",
  [anon_sym_styles] = "styles",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_import_statement] = "import_statement",
  [sym_string] = "string",
  [sym_gettext_string] = "gettext_string",
  [sym_object_id] = "object_id",
  [sym_identifier] = "identifier",
  [sym_block] = "block",
  [sym_decorator] = "decorator",
  [sym_object_definition] = "object_definition",
  [sym_menu_definition] = "menu_definition",
  [sym_menu_section] = "menu_section",
  [sym_menu_item] = "menu_item",
  [sym__template_definition] = "_template_definition",
  [sym_boolean] = "boolean",
  [sym_signal_name] = "signal_name",
  [sym_constant] = "constant",
  [sym__property_value] = "_property_value",
  [sym__property_binding] = "_property_binding",
  [sym_property_definition] = "property_definition",
  [sym_function] = "function",
  [sym_signal_binding] = "signal_binding",
  [sym_styles_list] = "styles_list",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_menu_definition_repeat1] = "menu_definition_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
  [aux_sym_menu_section_repeat2] = "menu_section_repeat2",
  [aux_sym__property_binding_repeat1] = "_property_binding_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_using] = sym_using,
  [sym_template] = sym_template,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym__] = anon_sym__,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_object_id_token1] = aux_sym_object_id_token1,
  [sym_object] = sym_object,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_menu] = anon_sym_menu,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_item] = anon_sym_item,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_property_name] = sym_property_name,
  [aux_sym_signal_name_token1] = aux_sym_signal_name_token1,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_bottom] = anon_sym_bottom,
  [anon_sym_center] = anon_sym_center,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_vertical] = anon_sym_vertical,
  [anon_sym_horizontal] = anon_sym_horizontal,
  [anon_sym_always] = anon_sym_always,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_natural] = anon_sym_natural,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_word_char] = anon_sym_word_char,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_both] = anon_sym_both,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_no_DASHsync_DASHcreate] = anon_sym_no_DASHsync_DASHcreate,
  [anon_sym_bidirectional] = anon_sym_bidirectional,
  [anon_sym_inverted] = anon_sym_inverted,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_swapped] = anon_sym_swapped,
  [anon_sym_styles] = anon_sym_styles,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_import_statement] = sym_import_statement,
  [sym_string] = sym_string,
  [sym_gettext_string] = sym_gettext_string,
  [sym_object_id] = sym_object_id,
  [sym_identifier] = sym_identifier,
  [sym_block] = sym_block,
  [sym_decorator] = sym_decorator,
  [sym_object_definition] = sym_object_definition,
  [sym_menu_definition] = sym_menu_definition,
  [sym_menu_section] = sym_menu_section,
  [sym_menu_item] = sym_menu_item,
  [sym__template_definition] = sym__template_definition,
  [sym_boolean] = sym_boolean,
  [sym_signal_name] = sym_signal_name,
  [sym_constant] = sym_constant,
  [sym__property_value] = sym__property_value,
  [sym__property_binding] = sym__property_binding,
  [sym_property_definition] = sym_property_definition,
  [sym_function] = sym_function,
  [sym_signal_binding] = sym_signal_binding,
  [sym_styles_list] = sym_styles_list,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_menu_definition_repeat1] = aux_sym_menu_definition_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
  [aux_sym_menu_section_repeat2] = aux_sym_menu_section_repeat2,
  [aux_sym__property_binding_repeat1] = aux_sym__property_binding_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
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
  [aux_sym_object_id_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_item] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_signal_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_center] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertical] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_horizontal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_natural] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_none] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_both] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsync_DASHcreate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bidirectional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_swapped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_styles] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_gettext_string] = {
    .visible = true,
    .named = true,
  },
  [sym_object_id] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_section] = {
    .visible = true,
    .named = true,
  },
  [sym_menu_item] = {
    .visible = true,
    .named = true,
  },
  [sym__template_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__property_value] = {
    .visible = false,
    .named = true,
  },
  [sym__property_binding] = {
    .visible = false,
    .named = true,
  },
  [sym_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_styles_list] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_menu_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__property_binding_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 5,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 25,
  [26] = 19,
  [27] = 15,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 16,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 14,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 50,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 61,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 29,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 29,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 89,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 88,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 111,
  [126] = 111,
  [127] = 122,
  [128] = 128,
  [129] = 129,
  [130] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(188);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(54);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(347);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(334);
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 166:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 167:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 168:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 170:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 171:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 172:
      if (lookahead == 'z') ADVANCE(123);
      END_STATE();
    case 173:
      if (lookahead == '{') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 181:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 182:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 184:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 186:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 187:
      if (eof) ADVANCE(188);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead == '(') ADVANCE(202);
      if (lookahead == ')') ADVANCE(203);
      if (lookahead == ',') ADVANCE(277);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == ';') ADVANCE(191);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '_') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == 'w') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(54);
      if (lookahead == '{') ADVANCE(269);
      if (lookahead == '}') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(185);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_using);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'd') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'g') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'h') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'm') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'p') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 's') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'v') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'w') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == 'z') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_object_id_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_object);
      if (lookahead == '.') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'm') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_natural);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_word_char);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_word_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 174},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 174},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 174},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 174},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 174},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_using] = ACTIONS(1),
    [sym_template] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_object] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_menu] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_item] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_signal_name_token1] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_bottom] = ACTIONS(1),
    [anon_sym_center] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_vertical] = ACTIONS(1),
    [anon_sym_horizontal] = ACTIONS(1),
    [anon_sym_always] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_natural] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_word_char] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_both] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_no_DASHsync_DASHcreate] = ACTIONS(1),
    [anon_sym_bidirectional] = ACTIONS(1),
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_swapped] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(123),
    [sym__toplevel] = STATE(7),
    [sym_import_statement] = STATE(7),
    [sym_decorator] = STATE(122),
    [sym_object_definition] = STATE(7),
    [sym_menu_definition] = STATE(7),
    [sym__template_definition] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_using] = ACTIONS(5),
    [sym_template] = ACTIONS(7),
    [sym_object] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_menu] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      sym_object,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(21), 1,
      aux_sym_object_id_token1,
    ACTIONS(27), 1,
      anon_sym_bind,
    ACTIONS(29), 1,
      sym_number,
    STATE(122), 1,
      sym_decorator,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(126), 8,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
    ACTIONS(25), 20,
      anon_sym_start,
      anon_sym_end,
      anon_sym_top,
      anon_sym_bottom,
      anon_sym_center,
      anon_sym_right,
      anon_sym_left,
      anon_sym_fill,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_always,
      anon_sym_never,
      anon_sym_natural,
      anon_sym_none,
      anon_sym_word,
      anon_sym_char,
      anon_sym_word_char,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_both,
  [64] = 12,
    ACTIONS(9), 1,
      sym_object,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(21), 1,
      aux_sym_object_id_token1,
    ACTIONS(27), 1,
      anon_sym_bind,
    ACTIONS(31), 1,
      sym_number,
    STATE(122), 1,
      sym_decorator,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 8,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
    ACTIONS(25), 20,
      anon_sym_start,
      anon_sym_end,
      anon_sym_top,
      anon_sym_bottom,
      anon_sym_center,
      anon_sym_right,
      anon_sym_left,
      anon_sym_fill,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_always,
      anon_sym_never,
      anon_sym_natural,
      anon_sym_none,
      anon_sym_word,
      anon_sym_char,
      anon_sym_word_char,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_both,
  [128] = 12,
    ACTIONS(9), 1,
      sym_object,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(21), 1,
      aux_sym_object_id_token1,
    ACTIONS(27), 1,
      anon_sym_bind,
    ACTIONS(33), 1,
      sym_number,
    STATE(122), 1,
      sym_decorator,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(111), 8,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
    ACTIONS(25), 20,
      anon_sym_start,
      anon_sym_end,
      anon_sym_top,
      anon_sym_bottom,
      anon_sym_center,
      anon_sym_right,
      anon_sym_left,
      anon_sym_fill,
      anon_sym_vertical,
      anon_sym_horizontal,
      anon_sym_always,
      anon_sym_never,
      anon_sym_natural,
      anon_sym_none,
      anon_sym_word,
      anon_sym_char,
      anon_sym_word_char,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_both,
  [192] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_object,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_property_name,
    ACTIONS(41), 1,
      aux_sym_signal_name_token1,
    ACTIONS(43), 1,
      anon_sym_styles,
    STATE(107), 1,
      sym_signal_name,
    STATE(127), 1,
      sym_decorator,
    STATE(10), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [224] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_object,
    ACTIONS(39), 1,
      sym_property_name,
    ACTIONS(41), 1,
      aux_sym_signal_name_token1,
    ACTIONS(43), 1,
      anon_sym_styles,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_signal_name,
    STATE(127), 1,
      sym_decorator,
    STATE(5), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [256] = 8,
    ACTIONS(5), 1,
      sym_using,
    ACTIONS(7), 1,
      sym_template,
    ACTIONS(9), 1,
      sym_object,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_menu,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_decorator,
    STATE(8), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym__template_definition,
      aux_sym_source_file_repeat1,
  [286] = 8,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_using,
    ACTIONS(54), 1,
      sym_template,
    ACTIONS(57), 1,
      sym_object,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_menu,
    STATE(122), 1,
      sym_decorator,
    STATE(8), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym__template_definition,
      aux_sym_source_file_repeat1,
  [316] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_object,
    ACTIONS(39), 1,
      sym_property_name,
    ACTIONS(41), 1,
      aux_sym_signal_name_token1,
    ACTIONS(43), 1,
      anon_sym_styles,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_signal_name,
    STATE(127), 1,
      sym_decorator,
    STATE(10), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [348] = 9,
    ACTIONS(68), 1,
      sym_object,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym_property_name,
    ACTIONS(79), 1,
      aux_sym_signal_name_token1,
    ACTIONS(82), 1,
      anon_sym_styles,
    STATE(107), 1,
      sym_signal_name,
    STATE(127), 1,
      sym_decorator,
    STATE(10), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [380] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_object,
    ACTIONS(39), 1,
      sym_property_name,
    ACTIONS(41), 1,
      aux_sym_signal_name_token1,
    ACTIONS(43), 1,
      anon_sym_styles,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_signal_name,
    STATE(127), 1,
      sym_decorator,
    STATE(9), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [412] = 7,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(87), 1,
      aux_sym_object_id_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym_number,
    STATE(79), 3,
      sym_string,
      sym_gettext_string,
      sym_identifier,
  [436] = 6,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    ACTIONS(87), 1,
      aux_sym_object_id_token1,
    ACTIONS(93), 1,
      sym_number,
    STATE(84), 3,
      sym_string,
      sym_gettext_string,
      sym_identifier,
  [457] = 1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [467] = 1,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [477] = 1,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [487] = 5,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      anon_sym_item,
    ACTIONS(105), 1,
      sym_property_name,
    STATE(44), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
    STATE(56), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [505] = 1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [515] = 1,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [525] = 5,
    ACTIONS(103), 1,
      anon_sym_item,
    ACTIONS(105), 1,
      sym_property_name,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
    STATE(67), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [543] = 2,
    ACTIONS(115), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(113), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [554] = 1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [563] = 4,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_section,
    ACTIONS(123), 1,
      anon_sym_item,
    STATE(36), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [578] = 2,
    ACTIONS(125), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(107), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [589] = 2,
    ACTIONS(129), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(127), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [600] = 2,
    ACTIONS(131), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(109), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [611] = 2,
    ACTIONS(133), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(97), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [622] = 2,
    ACTIONS(137), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(135), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [633] = 2,
    ACTIONS(141), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(139), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [644] = 1,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [653] = 2,
    ACTIONS(147), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(145), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [664] = 2,
    ACTIONS(151), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(149), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [675] = 1,
    ACTIONS(153), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [684] = 2,
    ACTIONS(155), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(99), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [695] = 4,
    ACTIONS(121), 1,
      anon_sym_section,
    ACTIONS(123), 1,
      anon_sym_item,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(38), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [710] = 4,
    ACTIONS(121), 1,
      anon_sym_section,
    ACTIONS(123), 1,
      anon_sym_item,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(38), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [725] = 4,
    ACTIONS(121), 1,
      anon_sym_section,
    ACTIONS(123), 1,
      anon_sym_item,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(35), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [740] = 4,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      anon_sym_section,
    ACTIONS(166), 1,
      anon_sym_item,
    STATE(38), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [755] = 1,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [764] = 2,
    ACTIONS(173), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(171), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [775] = 1,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym_object,
      anon_sym_LBRACK,
      anon_sym_menu,
  [784] = 2,
    ACTIONS(177), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(95), 4,
      sym_object,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [795] = 3,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(181), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [807] = 4,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      anon_sym_item,
    ACTIONS(187), 1,
      sym_property_name,
    STATE(44), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [821] = 3,
    ACTIONS(190), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(192), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [833] = 3,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(197), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [845] = 4,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym__,
    STATE(86), 2,
      sym_string,
      sym_gettext_string,
  [859] = 1,
    ACTIONS(199), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [866] = 3,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym_property_name,
    STATE(53), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [877] = 4,
    ACTIONS(205), 1,
      aux_sym_object_id_token1,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
    STATE(92), 1,
      sym_object_id,
  [890] = 3,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_item,
    STATE(51), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [901] = 1,
    ACTIONS(214), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [908] = 3,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 1,
      sym_property_name,
    STATE(53), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [919] = 3,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_string_repeat1,
    ACTIONS(221), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [930] = 3,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat2,
    ACTIONS(223), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [941] = 3,
    ACTIONS(123), 1,
      anon_sym_item,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [952] = 3,
    ACTIONS(203), 1,
      sym_property_name,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [963] = 4,
    ACTIONS(205), 1,
      aux_sym_object_id_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    STATE(89), 1,
      sym_object_id,
  [976] = 3,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      aux_sym_string_repeat2,
    ACTIONS(233), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [987] = 3,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(238), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [998] = 4,
    ACTIONS(205), 1,
      aux_sym_object_id_token1,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
    STATE(97), 1,
      sym_object_id,
  [1011] = 3,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      aux_sym_string_repeat2,
    ACTIONS(243), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1022] = 3,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym_string_repeat1,
    ACTIONS(245), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1033] = 1,
    ACTIONS(247), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1040] = 1,
    ACTIONS(249), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1047] = 4,
    ACTIONS(205), 1,
      aux_sym_object_id_token1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    STATE(88), 1,
      sym_object_id,
  [1060] = 3,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_item,
    STATE(51), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [1071] = 1,
    ACTIONS(251), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1077] = 1,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1083] = 1,
    ACTIONS(255), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1089] = 1,
    ACTIONS(257), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1095] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      sym_string,
  [1105] = 3,
    ACTIONS(87), 1,
      aux_sym_object_id_token1,
    STATE(91), 1,
      sym_function,
    STATE(116), 1,
      sym_identifier,
  [1115] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      sym_string,
  [1125] = 2,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 2,
      anon_sym_item,
      sym_property_name,
  [1133] = 1,
    ACTIONS(259), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1139] = 3,
    ACTIONS(205), 1,
      aux_sym_object_id_token1,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_object_id,
  [1149] = 3,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_array_repeat1,
  [1159] = 3,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      aux_sym_array_repeat1,
  [1169] = 1,
    ACTIONS(269), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1175] = 1,
    ACTIONS(271), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1181] = 3,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_string,
  [1191] = 3,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_array_repeat1,
  [1201] = 1,
    ACTIONS(273), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1206] = 1,
    ACTIONS(139), 2,
      anon_sym_RBRACE,
      sym_property_name,
  [1211] = 2,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      anon_sym_COMMA,
  [1218] = 2,
    ACTIONS(87), 1,
      aux_sym_object_id_token1,
    STATE(115), 1,
      sym_identifier,
  [1225] = 2,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [1232] = 2,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [1239] = 1,
    ACTIONS(280), 2,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [1244] = 2,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_swapped,
  [1251] = 2,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [1258] = 2,
    ACTIONS(286), 1,
      anon_sym_COLON,
    ACTIONS(288), 1,
      anon_sym_EQ_GT,
  [1265] = 2,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_array,
  [1272] = 2,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
  [1279] = 2,
    ACTIONS(205), 1,
      aux_sym_object_id_token1,
    STATE(118), 1,
      sym_object_id,
  [1286] = 2,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [1293] = 2,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
  [1300] = 1,
    ACTIONS(300), 2,
      anon_sym_SEMI,
      anon_sym_swapped,
  [1305] = 2,
    ACTIONS(207), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [1312] = 1,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
  [1316] = 1,
    ACTIONS(304), 1,
      anon_sym_SEMI,
  [1320] = 1,
    ACTIONS(306), 1,
      anon_sym_SEMI,
  [1324] = 1,
    ACTIONS(308), 1,
      sym_property_name,
  [1328] = 1,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1332] = 1,
    ACTIONS(312), 1,
      sym_object,
  [1336] = 1,
    ACTIONS(314), 1,
      anon_sym_EQ_GT,
  [1340] = 1,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1344] = 1,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
  [1348] = 1,
    ACTIONS(288), 1,
      anon_sym_EQ_GT,
  [1352] = 1,
    ACTIONS(320), 1,
      anon_sym_SEMI,
  [1356] = 1,
    ACTIONS(322), 1,
      sym_object,
  [1360] = 1,
    ACTIONS(324), 1,
      anon_sym_SEMI,
  [1364] = 1,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
  [1368] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
  [1372] = 1,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
  [1376] = 1,
    ACTIONS(332), 1,
      sym_object,
  [1380] = 1,
    ACTIONS(334), 1,
      anon_sym_DOT,
  [1384] = 1,
    ACTIONS(336), 1,
      anon_sym_COLON,
  [1388] = 1,
    ACTIONS(338), 1,
      sym_number,
  [1392] = 1,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [1396] = 1,
    ACTIONS(342), 1,
      sym_object,
  [1400] = 1,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
  [1404] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1408] = 1,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [1412] = 1,
    ACTIONS(350), 1,
      anon_sym_SEMI,
  [1416] = 1,
    ACTIONS(352), 1,
      sym_object,
  [1420] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1424] = 1,
    ACTIONS(356), 1,
      sym_object,
  [1428] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 256,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 316,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 380,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 436,
  [SMALL_STATE(14)] = 457,
  [SMALL_STATE(15)] = 467,
  [SMALL_STATE(16)] = 477,
  [SMALL_STATE(17)] = 487,
  [SMALL_STATE(18)] = 505,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 525,
  [SMALL_STATE(21)] = 543,
  [SMALL_STATE(22)] = 554,
  [SMALL_STATE(23)] = 563,
  [SMALL_STATE(24)] = 578,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 600,
  [SMALL_STATE(27)] = 611,
  [SMALL_STATE(28)] = 622,
  [SMALL_STATE(29)] = 633,
  [SMALL_STATE(30)] = 644,
  [SMALL_STATE(31)] = 653,
  [SMALL_STATE(32)] = 664,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 684,
  [SMALL_STATE(35)] = 695,
  [SMALL_STATE(36)] = 710,
  [SMALL_STATE(37)] = 725,
  [SMALL_STATE(38)] = 740,
  [SMALL_STATE(39)] = 755,
  [SMALL_STATE(40)] = 764,
  [SMALL_STATE(41)] = 775,
  [SMALL_STATE(42)] = 784,
  [SMALL_STATE(43)] = 795,
  [SMALL_STATE(44)] = 807,
  [SMALL_STATE(45)] = 821,
  [SMALL_STATE(46)] = 833,
  [SMALL_STATE(47)] = 845,
  [SMALL_STATE(48)] = 859,
  [SMALL_STATE(49)] = 866,
  [SMALL_STATE(50)] = 877,
  [SMALL_STATE(51)] = 890,
  [SMALL_STATE(52)] = 901,
  [SMALL_STATE(53)] = 908,
  [SMALL_STATE(54)] = 919,
  [SMALL_STATE(55)] = 930,
  [SMALL_STATE(56)] = 941,
  [SMALL_STATE(57)] = 952,
  [SMALL_STATE(58)] = 963,
  [SMALL_STATE(59)] = 976,
  [SMALL_STATE(60)] = 987,
  [SMALL_STATE(61)] = 998,
  [SMALL_STATE(62)] = 1011,
  [SMALL_STATE(63)] = 1022,
  [SMALL_STATE(64)] = 1033,
  [SMALL_STATE(65)] = 1040,
  [SMALL_STATE(66)] = 1047,
  [SMALL_STATE(67)] = 1060,
  [SMALL_STATE(68)] = 1071,
  [SMALL_STATE(69)] = 1077,
  [SMALL_STATE(70)] = 1083,
  [SMALL_STATE(71)] = 1089,
  [SMALL_STATE(72)] = 1095,
  [SMALL_STATE(73)] = 1105,
  [SMALL_STATE(74)] = 1115,
  [SMALL_STATE(75)] = 1125,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1139,
  [SMALL_STATE(78)] = 1149,
  [SMALL_STATE(79)] = 1159,
  [SMALL_STATE(80)] = 1169,
  [SMALL_STATE(81)] = 1175,
  [SMALL_STATE(82)] = 1181,
  [SMALL_STATE(83)] = 1191,
  [SMALL_STATE(84)] = 1201,
  [SMALL_STATE(85)] = 1206,
  [SMALL_STATE(86)] = 1211,
  [SMALL_STATE(87)] = 1218,
  [SMALL_STATE(88)] = 1225,
  [SMALL_STATE(89)] = 1232,
  [SMALL_STATE(90)] = 1239,
  [SMALL_STATE(91)] = 1244,
  [SMALL_STATE(92)] = 1251,
  [SMALL_STATE(93)] = 1258,
  [SMALL_STATE(94)] = 1265,
  [SMALL_STATE(95)] = 1272,
  [SMALL_STATE(96)] = 1279,
  [SMALL_STATE(97)] = 1286,
  [SMALL_STATE(98)] = 1293,
  [SMALL_STATE(99)] = 1300,
  [SMALL_STATE(100)] = 1305,
  [SMALL_STATE(101)] = 1312,
  [SMALL_STATE(102)] = 1316,
  [SMALL_STATE(103)] = 1320,
  [SMALL_STATE(104)] = 1324,
  [SMALL_STATE(105)] = 1328,
  [SMALL_STATE(106)] = 1332,
  [SMALL_STATE(107)] = 1336,
  [SMALL_STATE(108)] = 1340,
  [SMALL_STATE(109)] = 1344,
  [SMALL_STATE(110)] = 1348,
  [SMALL_STATE(111)] = 1352,
  [SMALL_STATE(112)] = 1356,
  [SMALL_STATE(113)] = 1360,
  [SMALL_STATE(114)] = 1364,
  [SMALL_STATE(115)] = 1368,
  [SMALL_STATE(116)] = 1372,
  [SMALL_STATE(117)] = 1376,
  [SMALL_STATE(118)] = 1380,
  [SMALL_STATE(119)] = 1384,
  [SMALL_STATE(120)] = 1388,
  [SMALL_STATE(121)] = 1392,
  [SMALL_STATE(122)] = 1396,
  [SMALL_STATE(123)] = 1400,
  [SMALL_STATE(124)] = 1404,
  [SMALL_STATE(125)] = 1408,
  [SMALL_STATE(126)] = 1412,
  [SMALL_STATE(127)] = 1416,
  [SMALL_STATE(128)] = 1420,
  [SMALL_STATE(129)] = 1424,
  [SMALL_STATE(130)] = 1428,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(58),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(87),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(93),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(110),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(94),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_list, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_list, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_definition, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(105),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(95),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(124),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2), SHIFT_REPEAT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat2, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat2, 2), SHIFT_REPEAT(95),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettext_string, 4),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(130),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(59),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_id, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_name, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [344] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blueprint(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
