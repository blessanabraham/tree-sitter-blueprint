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
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym_using = 1,
  sym_template = 2,
  sym__number = 3,
  anon_sym_DOT = 4,
  anon_sym_SEMI = 5,
  anon_sym_DQUOTE = 6,
  anon_sym_SQUOTE = 7,
  sym_unescaped_double_string_fragment = 8,
  sym_unescaped_single_string_fragment = 9,
  sym_escape_sequence = 10,
  anon_sym__ = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_object_id = 14,
  sym__object_fragment = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_menu = 20,
  anon_sym_section = 21,
  anon_sym_item = 22,
  anon_sym_COMMA = 23,
  anon_sym_COLON = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  sym_property_name = 27,
  aux_sym_signal_name_token1 = 28,
  anon_sym_start = 29,
  anon_sym_end = 30,
  anon_sym_top = 31,
  anon_sym_bottom = 32,
  anon_sym_center = 33,
  anon_sym_right = 34,
  anon_sym_left = 35,
  anon_sym_fill = 36,
  anon_sym_vertical = 37,
  anon_sym_horizontal = 38,
  anon_sym_always = 39,
  anon_sym_never = 40,
  anon_sym_natural = 41,
  anon_sym_none = 42,
  anon_sym_word = 43,
  anon_sym_char = 44,
  anon_sym_word_char = 45,
  anon_sym_yes = 46,
  anon_sym_no = 47,
  anon_sym_both = 48,
  anon_sym_bind = 49,
  anon_sym_no_DASHsync_DASHcreate = 50,
  anon_sym_bidirectional = 51,
  anon_sym_inverted = 52,
  anon_sym_EQ_GT = 53,
  anon_sym_swapped = 54,
  anon_sym_styles = 55,
  sym_comment = 56,
  sym_float = 57,
  sym_source_file = 58,
  sym__toplevel = 59,
  sym_gobject_library = 60,
  sym_version_number = 61,
  sym_import_statement = 62,
  sym_string = 63,
  sym_gettext_string = 64,
  sym_identifier = 65,
  sym_object = 66,
  sym_block = 67,
  sym_decorator = 68,
  sym_object_definition = 69,
  sym_menu_definition = 70,
  sym_menu_section = 71,
  sym_menu_item = 72,
  sym_template_name_qualifier = 73,
  sym_template_definition = 74,
  sym_boolean = 75,
  sym_signal_name = 76,
  sym_constant = 77,
  sym__property_value = 78,
  sym__property_binding = 79,
  sym_property_definition = 80,
  sym_function = 81,
  sym_signal_binding = 82,
  sym_styles_list = 83,
  sym_number = 84,
  sym_array = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_version_number_repeat1 = 87,
  aux_sym_string_repeat1 = 88,
  aux_sym_string_repeat2 = 89,
  aux_sym_object_repeat1 = 90,
  aux_sym_block_repeat1 = 91,
  aux_sym_menu_definition_repeat1 = 92,
  aux_sym_menu_section_repeat1 = 93,
  aux_sym_menu_section_repeat2 = 94,
  aux_sym__property_binding_repeat1 = 95,
  aux_sym_array_repeat1 = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_using] = "using",
  [sym_template] = "template",
  [sym__number] = "_number",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym__] = "_",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_object_id] = "object_id",
  [sym__object_fragment] = "_object_fragment",
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
  [anon_sym_no_DASHsync_DASHcreate] = "no-sync-create",
  [anon_sym_bidirectional] = "bidirectional",
  [anon_sym_inverted] = "inverted",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_swapped] = "swapped",
  [anon_sym_styles] = "styles",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_source_file] = "source_file",
  [sym__toplevel] = "_toplevel",
  [sym_gobject_library] = "gobject_library",
  [sym_version_number] = "version_number",
  [sym_import_statement] = "import_statement",
  [sym_string] = "string",
  [sym_gettext_string] = "gettext_string",
  [sym_identifier] = "identifier",
  [sym_object] = "object",
  [sym_block] = "block",
  [sym_decorator] = "decorator",
  [sym_object_definition] = "object_definition",
  [sym_menu_definition] = "menu_definition",
  [sym_menu_section] = "menu_section",
  [sym_menu_item] = "menu_item",
  [sym_template_name_qualifier] = "template_name_qualifier",
  [sym_template_definition] = "template_definition",
  [sym_boolean] = "boolean",
  [sym_signal_name] = "signal_name",
  [sym_constant] = "constant",
  [sym__property_value] = "_property_value",
  [sym__property_binding] = "_property_binding",
  [sym_property_definition] = "property_definition",
  [sym_function] = "function",
  [sym_signal_binding] = "signal_binding",
  [sym_styles_list] = "styles_list",
  [sym_number] = "number",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_version_number_repeat1] = "version_number_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_object_repeat1] = "object_repeat1",
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
  [sym__number] = sym__number,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym__] = anon_sym__,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_object_id] = sym_object_id,
  [sym__object_fragment] = sym__object_fragment,
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
  [anon_sym_no_DASHsync_DASHcreate] = anon_sym_no_DASHsync_DASHcreate,
  [anon_sym_bidirectional] = anon_sym_bidirectional,
  [anon_sym_inverted] = anon_sym_inverted,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_swapped] = anon_sym_swapped,
  [anon_sym_styles] = anon_sym_styles,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_source_file] = sym_source_file,
  [sym__toplevel] = sym__toplevel,
  [sym_gobject_library] = sym_gobject_library,
  [sym_version_number] = sym_version_number,
  [sym_import_statement] = sym_import_statement,
  [sym_string] = sym_string,
  [sym_gettext_string] = sym_gettext_string,
  [sym_identifier] = sym_identifier,
  [sym_object] = sym_object,
  [sym_block] = sym_block,
  [sym_decorator] = sym_decorator,
  [sym_object_definition] = sym_object_definition,
  [sym_menu_definition] = sym_menu_definition,
  [sym_menu_section] = sym_menu_section,
  [sym_menu_item] = sym_menu_item,
  [sym_template_name_qualifier] = sym_template_name_qualifier,
  [sym_template_definition] = sym_template_definition,
  [sym_boolean] = sym_boolean,
  [sym_signal_name] = sym_signal_name,
  [sym_constant] = sym_constant,
  [sym__property_value] = sym__property_value,
  [sym__property_binding] = sym__property_binding,
  [sym_property_definition] = sym_property_definition,
  [sym_function] = sym_function,
  [sym_signal_binding] = sym_signal_binding,
  [sym_styles_list] = sym_styles_list,
  [sym_number] = sym_number,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_version_number_repeat1] = aux_sym_version_number_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
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
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_object_id] = {
    .visible = true,
    .named = true,
  },
  [sym__object_fragment] = {
    .visible = false,
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
  [sym_float] = {
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
  [sym_gobject_library] = {
    .visible = true,
    .named = true,
  },
  [sym_version_number] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
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
  [sym_template_name_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_template_definition] = {
    .visible = true,
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
  [sym_number] = {
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
  [aux_sym_version_number_repeat1] = {
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
  [aux_sym_object_repeat1] = {
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
  [9] = 9,
  [10] = 6,
  [11] = 9,
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
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 15,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 18,
  [45] = 17,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 27,
  [90] = 88,
  [91] = 80,
  [92] = 92,
  [93] = 93,
  [94] = 27,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 100,
  [105] = 102,
  [106] = 97,
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
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 131,
  [138] = 131,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(187);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '_') ADVANCE(203);
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
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == '_') ADVANCE(203);
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
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(348);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(347);
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
      if (lookahead == ':') ADVANCE(181);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(343);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'o') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(342);
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
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(336);
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
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
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
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(314);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(304);
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
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
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
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (lookahead == 'p') ADVANCE(302);
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
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(330);
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
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(345);
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
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
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
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == 'u') ADVANCE(275);
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
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(174)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 186:
      if (eof) ADVANCE(187);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == ',') ADVANCE(279);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(193);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '_') ADVANCE(203);
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
      if (lookahead == '{') ADVANCE(271);
      if (lookahead == '}') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_using);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'f') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'g') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(337);
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'm') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'v') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'w') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'y') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'z') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__object_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_natural);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_word_char);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_word_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(296);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 82},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 174},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 174},
  [64] = {.lex_state = 174},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 174},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 174},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_using] = ACTIONS(1),
    [sym_template] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__object_fragment] = ACTIONS(1),
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
    [anon_sym_no_DASHsync_DASHcreate] = ACTIONS(1),
    [anon_sym_bidirectional] = ACTIONS(1),
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_swapped] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(133),
    [sym__toplevel] = STATE(5),
    [sym_import_statement] = STATE(5),
    [sym_object] = STATE(88),
    [sym_decorator] = STATE(106),
    [sym_object_definition] = STATE(5),
    [sym_menu_definition] = STATE(5),
    [sym_template_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_using] = ACTIONS(5),
    [sym_template] = ACTIONS(7),
    [sym__object_fragment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_menu] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym__number,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(23), 1,
      sym_object_id,
    ACTIONS(29), 1,
      anon_sym_bind,
    ACTIONS(31), 1,
      sym_float,
    STATE(88), 1,
      sym_object,
    STATE(106), 1,
      sym_decorator,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(131), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(27), 20,
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
  [71] = 14,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym__number,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(23), 1,
      sym_object_id,
    ACTIONS(29), 1,
      anon_sym_bind,
    ACTIONS(33), 1,
      sym_float,
    STATE(88), 1,
      sym_object,
    STATE(106), 1,
      sym_decorator,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(27), 20,
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
  [142] = 14,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym__number,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(23), 1,
      sym_object_id,
    ACTIONS(29), 1,
      anon_sym_bind,
    ACTIONS(35), 1,
      sym_float,
    STATE(88), 1,
      sym_object,
    STATE(106), 1,
      sym_decorator,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(27), 20,
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
  [213] = 9,
    ACTIONS(5), 1,
      sym_using,
    ACTIONS(7), 1,
      sym_template,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_menu,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_object,
    STATE(106), 1,
      sym_decorator,
    STATE(8), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym_template_definition,
      aux_sym_source_file_repeat1,
  [246] = 10,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_property_name,
    ACTIONS(43), 1,
      aux_sym_signal_name_token1,
    ACTIONS(45), 1,
      anon_sym_styles,
    STATE(90), 1,
      sym_object,
    STATE(97), 1,
      sym_decorator,
    STATE(127), 1,
      sym_signal_name,
    STATE(11), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [281] = 10,
    ACTIONS(47), 1,
      sym__object_fragment,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym_property_name,
    ACTIONS(58), 1,
      aux_sym_signal_name_token1,
    ACTIONS(61), 1,
      anon_sym_styles,
    STATE(90), 1,
      sym_object,
    STATE(97), 1,
      sym_decorator,
    STATE(127), 1,
      sym_signal_name,
    STATE(7), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [316] = 9,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_using,
    ACTIONS(69), 1,
      sym_template,
    ACTIONS(72), 1,
      sym__object_fragment,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_menu,
    STATE(88), 1,
      sym_object,
    STATE(106), 1,
      sym_decorator,
    STATE(8), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym_template_definition,
      aux_sym_source_file_repeat1,
  [349] = 10,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_property_name,
    ACTIONS(43), 1,
      aux_sym_signal_name_token1,
    ACTIONS(45), 1,
      anon_sym_styles,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_object,
    STATE(97), 1,
      sym_decorator,
    STATE(127), 1,
      sym_signal_name,
    STATE(7), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [384] = 10,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_property_name,
    ACTIONS(43), 1,
      aux_sym_signal_name_token1,
    ACTIONS(45), 1,
      anon_sym_styles,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_object,
    STATE(97), 1,
      sym_decorator,
    STATE(127), 1,
      sym_signal_name,
    STATE(9), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [419] = 10,
    ACTIONS(9), 1,
      sym__object_fragment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym_property_name,
    ACTIONS(43), 1,
      aux_sym_signal_name_token1,
    ACTIONS(45), 1,
      anon_sym_styles,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_object,
    STATE(97), 1,
      sym_decorator,
    STATE(127), 1,
      sym_signal_name,
    STATE(7), 5,
      sym_object_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [454] = 7,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(87), 1,
      sym__number,
    ACTIONS(89), 1,
      sym_object_id,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(82), 4,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_number,
  [479] = 6,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(87), 1,
      sym__number,
    ACTIONS(89), 1,
      sym_object_id,
    STATE(110), 4,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_number,
  [501] = 1,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [511] = 1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [521] = 5,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_item,
    ACTIONS(101), 1,
      sym_property_name,
    STATE(19), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
    STATE(65), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [539] = 1,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [549] = 1,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [559] = 5,
    ACTIONS(99), 1,
      anon_sym_item,
    ACTIONS(101), 1,
      sym_property_name,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
    STATE(59), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [577] = 1,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [587] = 2,
    ACTIONS(113), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(111), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [598] = 2,
    ACTIONS(115), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(109), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [609] = 2,
    ACTIONS(119), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(117), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [620] = 4,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_section,
    ACTIONS(125), 1,
      anon_sym_item,
    STATE(36), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [635] = 2,
    ACTIONS(129), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(127), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [646] = 2,
    ACTIONS(131), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(93), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [657] = 2,
    ACTIONS(135), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(133), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [668] = 4,
    ACTIONS(123), 1,
      anon_sym_section,
    ACTIONS(125), 1,
      anon_sym_item,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(35), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [683] = 1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [692] = 3,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_object_repeat1,
    ACTIONS(141), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [705] = 2,
    ACTIONS(148), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(146), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [716] = 4,
    ACTIONS(123), 1,
      anon_sym_section,
    ACTIONS(125), 1,
      anon_sym_item,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(28), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [731] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [740] = 3,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_object_repeat1,
    ACTIONS(154), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [753] = 4,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_section,
    ACTIONS(163), 1,
      anon_sym_item,
    STATE(35), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [768] = 4,
    ACTIONS(123), 1,
      anon_sym_section,
    ACTIONS(125), 1,
      anon_sym_item,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(35), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [783] = 3,
    ACTIONS(156), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_object_repeat1,
    ACTIONS(166), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [796] = 1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [805] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [814] = 2,
    ACTIONS(172), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(95), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [825] = 2,
    ACTIONS(176), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(174), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [836] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      anon_sym_LBRACK,
      anon_sym_menu,
  [845] = 2,
    ACTIONS(182), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(180), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [856] = 2,
    ACTIONS(184), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(105), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [867] = 2,
    ACTIONS(186), 2,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(103), 4,
      sym__object_fragment,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [878] = 3,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(190), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [890] = 3,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(195), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [902] = 3,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(199), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [914] = 1,
    ACTIONS(141), 5,
      sym__number,
      anon_sym_DOT,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [922] = 4,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_item,
    ACTIONS(205), 1,
      sym_property_name,
    STATE(50), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [936] = 4,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym__,
    STATE(112), 2,
      sym_string,
      sym_gettext_string,
  [950] = 3,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(210), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [961] = 1,
    ACTIONS(213), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [968] = 3,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat2,
    ACTIONS(217), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [979] = 3,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(219), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [990] = 1,
    ACTIONS(221), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [997] = 3,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_item,
    STATE(57), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [1008] = 3,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym_property_name,
    STATE(58), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [1019] = 3,
    ACTIONS(125), 1,
      anon_sym_item,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [1030] = 1,
    ACTIONS(233), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1037] = 3,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      aux_sym_string_repeat2,
    ACTIONS(237), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1048] = 1,
    ACTIONS(240), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1055] = 3,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      sym_property_name,
    STATE(64), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [1066] = 3,
    ACTIONS(244), 1,
      sym_property_name,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(58), 2,
      sym_property_definition,
      aux_sym_menu_section_repeat1,
  [1077] = 3,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_item,
    STATE(57), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat2,
  [1088] = 3,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat1,
    ACTIONS(250), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1099] = 3,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      aux_sym_string_repeat2,
    ACTIONS(252), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1110] = 3,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_array_repeat1,
  [1120] = 3,
    ACTIONS(9), 1,
      sym__object_fragment,
    STATE(107), 1,
      sym_gobject_library,
    STATE(124), 1,
      sym_object,
  [1130] = 3,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_version_number_repeat1,
  [1140] = 1,
    ACTIONS(264), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1146] = 1,
    ACTIONS(266), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1152] = 1,
    ACTIONS(268), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1158] = 1,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1164] = 3,
    ACTIONS(9), 1,
      sym__object_fragment,
    STATE(122), 1,
      sym_template_name_qualifier,
    STATE(123), 1,
      sym_object,
  [1174] = 1,
    ACTIONS(272), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1180] = 3,
    ACTIONS(89), 1,
      sym_object_id,
    STATE(99), 1,
      sym_function,
    STATE(135), 1,
      sym_identifier,
  [1190] = 3,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      aux_sym_version_number_repeat1,
  [1200] = 1,
    ACTIONS(278), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1206] = 3,
    ACTIONS(280), 1,
      sym_object_id,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [1216] = 3,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym_string,
  [1226] = 3,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_array_repeat1,
  [1236] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_array_repeat1,
  [1246] = 3,
    ACTIONS(274), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      aux_sym_version_number_repeat1,
  [1256] = 1,
    ACTIONS(292), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1262] = 3,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym_string,
  [1272] = 1,
    ACTIONS(294), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1278] = 3,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      sym_object_id,
    STATE(20), 1,
      sym_block,
  [1288] = 2,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 2,
      anon_sym_item,
      sym_property_name,
  [1296] = 3,
    ACTIONS(298), 1,
      sym_object_id,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [1306] = 3,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      sym_object_id,
    STATE(44), 1,
      sym_block,
  [1316] = 3,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      sym_string,
  [1326] = 2,
    ACTIONS(9), 1,
      sym__object_fragment,
    STATE(109), 1,
      sym_object,
  [1333] = 1,
    ACTIONS(133), 2,
      anon_sym_RBRACE,
      sym_property_name,
  [1338] = 2,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_EQ_GT,
  [1345] = 2,
    ACTIONS(89), 1,
      sym_object_id,
    STATE(118), 1,
      sym_identifier,
  [1352] = 2,
    ACTIONS(9), 1,
      sym__object_fragment,
    STATE(91), 1,
      sym_object,
  [1359] = 2,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1366] = 2,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_swapped,
  [1373] = 2,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [1380] = 2,
    ACTIONS(316), 1,
      sym_object_id,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
  [1387] = 2,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
  [1394] = 2,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_array,
  [1401] = 2,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [1408] = 2,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [1415] = 2,
    ACTIONS(9), 1,
      sym__object_fragment,
    STATE(80), 1,
      sym_object,
  [1422] = 2,
    ACTIONS(322), 1,
      sym__number,
    STATE(139), 1,
      sym_version_number,
  [1429] = 2,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
  [1436] = 2,
    ACTIONS(282), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
  [1443] = 1,
    ACTIONS(254), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1448] = 1,
    ACTIONS(262), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1453] = 2,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      anon_sym_COMMA,
  [1460] = 1,
    ACTIONS(330), 2,
      anon_sym_SEMI,
      anon_sym_swapped,
  [1465] = 1,
    ACTIONS(332), 1,
      sym_object_id,
  [1469] = 1,
    ACTIONS(334), 1,
      sym__number,
  [1473] = 1,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
  [1477] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1481] = 1,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
  [1485] = 1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [1489] = 1,
    ACTIONS(344), 1,
      sym__object_fragment,
  [1493] = 1,
    ACTIONS(346), 1,
      sym_property_name,
  [1497] = 1,
    ACTIONS(348), 1,
      anon_sym_COLON,
  [1501] = 1,
    ACTIONS(350), 1,
      anon_sym_COLON,
  [1505] = 1,
    ACTIONS(352), 1,
      sym__number,
  [1509] = 1,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [1513] = 1,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1517] = 1,
    ACTIONS(358), 1,
      anon_sym_EQ_GT,
  [1521] = 1,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
  [1525] = 1,
    ACTIONS(362), 1,
      anon_sym_SEMI,
  [1529] = 1,
    ACTIONS(364), 1,
      sym__object_fragment,
  [1533] = 1,
    ACTIONS(366), 1,
      anon_sym_SEMI,
  [1537] = 1,
    ACTIONS(368), 1,
      anon_sym_SEMI,
  [1541] = 1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [1545] = 1,
    ACTIONS(306), 1,
      anon_sym_EQ_GT,
  [1549] = 1,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
  [1553] = 1,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
  [1557] = 1,
    ACTIONS(376), 1,
      anon_sym_SEMI,
  [1561] = 1,
    ACTIONS(378), 1,
      anon_sym_SEMI,
  [1565] = 1,
    ACTIONS(380), 1,
      anon_sym_SEMI,
  [1569] = 1,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
  [1573] = 1,
    ACTIONS(384), 1,
      anon_sym_DOT,
  [1577] = 1,
    ACTIONS(386), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 71,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 419,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 479,
  [SMALL_STATE(14)] = 501,
  [SMALL_STATE(15)] = 511,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 549,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 577,
  [SMALL_STATE(21)] = 587,
  [SMALL_STATE(22)] = 598,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 620,
  [SMALL_STATE(25)] = 635,
  [SMALL_STATE(26)] = 646,
  [SMALL_STATE(27)] = 657,
  [SMALL_STATE(28)] = 668,
  [SMALL_STATE(29)] = 683,
  [SMALL_STATE(30)] = 692,
  [SMALL_STATE(31)] = 705,
  [SMALL_STATE(32)] = 716,
  [SMALL_STATE(33)] = 731,
  [SMALL_STATE(34)] = 740,
  [SMALL_STATE(35)] = 753,
  [SMALL_STATE(36)] = 768,
  [SMALL_STATE(37)] = 783,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 805,
  [SMALL_STATE(40)] = 814,
  [SMALL_STATE(41)] = 825,
  [SMALL_STATE(42)] = 836,
  [SMALL_STATE(43)] = 845,
  [SMALL_STATE(44)] = 856,
  [SMALL_STATE(45)] = 867,
  [SMALL_STATE(46)] = 878,
  [SMALL_STATE(47)] = 890,
  [SMALL_STATE(48)] = 902,
  [SMALL_STATE(49)] = 914,
  [SMALL_STATE(50)] = 922,
  [SMALL_STATE(51)] = 936,
  [SMALL_STATE(52)] = 950,
  [SMALL_STATE(53)] = 961,
  [SMALL_STATE(54)] = 968,
  [SMALL_STATE(55)] = 979,
  [SMALL_STATE(56)] = 990,
  [SMALL_STATE(57)] = 997,
  [SMALL_STATE(58)] = 1008,
  [SMALL_STATE(59)] = 1019,
  [SMALL_STATE(60)] = 1030,
  [SMALL_STATE(61)] = 1037,
  [SMALL_STATE(62)] = 1048,
  [SMALL_STATE(63)] = 1055,
  [SMALL_STATE(64)] = 1066,
  [SMALL_STATE(65)] = 1077,
  [SMALL_STATE(66)] = 1088,
  [SMALL_STATE(67)] = 1099,
  [SMALL_STATE(68)] = 1110,
  [SMALL_STATE(69)] = 1120,
  [SMALL_STATE(70)] = 1130,
  [SMALL_STATE(71)] = 1140,
  [SMALL_STATE(72)] = 1146,
  [SMALL_STATE(73)] = 1152,
  [SMALL_STATE(74)] = 1158,
  [SMALL_STATE(75)] = 1164,
  [SMALL_STATE(76)] = 1174,
  [SMALL_STATE(77)] = 1180,
  [SMALL_STATE(78)] = 1190,
  [SMALL_STATE(79)] = 1200,
  [SMALL_STATE(80)] = 1206,
  [SMALL_STATE(81)] = 1216,
  [SMALL_STATE(82)] = 1226,
  [SMALL_STATE(83)] = 1236,
  [SMALL_STATE(84)] = 1246,
  [SMALL_STATE(85)] = 1256,
  [SMALL_STATE(86)] = 1262,
  [SMALL_STATE(87)] = 1272,
  [SMALL_STATE(88)] = 1278,
  [SMALL_STATE(89)] = 1288,
  [SMALL_STATE(90)] = 1296,
  [SMALL_STATE(91)] = 1306,
  [SMALL_STATE(92)] = 1316,
  [SMALL_STATE(93)] = 1326,
  [SMALL_STATE(94)] = 1333,
  [SMALL_STATE(95)] = 1338,
  [SMALL_STATE(96)] = 1345,
  [SMALL_STATE(97)] = 1352,
  [SMALL_STATE(98)] = 1359,
  [SMALL_STATE(99)] = 1366,
  [SMALL_STATE(100)] = 1373,
  [SMALL_STATE(101)] = 1380,
  [SMALL_STATE(102)] = 1387,
  [SMALL_STATE(103)] = 1394,
  [SMALL_STATE(104)] = 1401,
  [SMALL_STATE(105)] = 1408,
  [SMALL_STATE(106)] = 1415,
  [SMALL_STATE(107)] = 1422,
  [SMALL_STATE(108)] = 1429,
  [SMALL_STATE(109)] = 1436,
  [SMALL_STATE(110)] = 1443,
  [SMALL_STATE(111)] = 1448,
  [SMALL_STATE(112)] = 1453,
  [SMALL_STATE(113)] = 1460,
  [SMALL_STATE(114)] = 1465,
  [SMALL_STATE(115)] = 1469,
  [SMALL_STATE(116)] = 1473,
  [SMALL_STATE(117)] = 1477,
  [SMALL_STATE(118)] = 1481,
  [SMALL_STATE(119)] = 1485,
  [SMALL_STATE(120)] = 1489,
  [SMALL_STATE(121)] = 1493,
  [SMALL_STATE(122)] = 1497,
  [SMALL_STATE(123)] = 1501,
  [SMALL_STATE(124)] = 1505,
  [SMALL_STATE(125)] = 1509,
  [SMALL_STATE(126)] = 1513,
  [SMALL_STATE(127)] = 1517,
  [SMALL_STATE(128)] = 1521,
  [SMALL_STATE(129)] = 1525,
  [SMALL_STATE(130)] = 1529,
  [SMALL_STATE(131)] = 1533,
  [SMALL_STATE(132)] = 1537,
  [SMALL_STATE(133)] = 1541,
  [SMALL_STATE(134)] = 1545,
  [SMALL_STATE(135)] = 1549,
  [SMALL_STATE(136)] = 1553,
  [SMALL_STATE(137)] = 1557,
  [SMALL_STATE(138)] = 1561,
  [SMALL_STATE(139)] = 1565,
  [SMALL_STATE(140)] = 1569,
  [SMALL_STATE(141)] = 1573,
  [SMALL_STATE(142)] = 1577,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(96),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(95),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(120),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(140),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(98),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_list, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_list, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_definition, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 5),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2), SHIFT_REPEAT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(117),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettext_string, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat2, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat2, 2), SHIFT_REPEAT(98),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(142),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(61),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2), SHIFT_REPEAT(115),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 6),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 8),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_name, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name_qualifier, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gobject_library, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [370] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
