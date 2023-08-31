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
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
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
  aux_sym_object_token1 = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_layout = 21,
  anon_sym_menu = 22,
  anon_sym_section = 23,
  anon_sym_item = 24,
  anon_sym_COMMA = 25,
  anon_sym_COLON = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  sym_property_name = 29,
  aux_sym_signal_name_token1 = 30,
  anon_sym_start = 31,
  anon_sym_end = 32,
  anon_sym_top = 33,
  anon_sym_bottom = 34,
  anon_sym_center = 35,
  anon_sym_right = 36,
  anon_sym_left = 37,
  anon_sym_fill = 38,
  anon_sym_vertical = 39,
  anon_sym_horizontal = 40,
  anon_sym_always = 41,
  anon_sym_never = 42,
  anon_sym_natural = 43,
  anon_sym_none = 44,
  anon_sym_word = 45,
  anon_sym_char = 46,
  anon_sym_word_char = 47,
  anon_sym_yes = 48,
  anon_sym_no = 49,
  anon_sym_both = 50,
  anon_sym_hidden = 51,
  anon_sym_visible = 52,
  anon_sym_wide = 53,
  anon_sym_narrow = 54,
  anon_sym_bind = 55,
  anon_sym_no_DASHsync_DASHcreate = 56,
  anon_sym_bidirectional = 57,
  anon_sym_inverted = 58,
  anon_sym_EQ_GT = 59,
  anon_sym_swapped = 60,
  anon_sym_styles = 61,
  sym_comment = 62,
  sym_float = 63,
  sym_source_file = 64,
  sym__toplevel = 65,
  sym_gobject_library = 66,
  sym_version_number = 67,
  sym_import_statement = 68,
  sym_string = 69,
  sym_gettext_string = 70,
  sym_identifier = 71,
  sym_object = 72,
  sym_block = 73,
  sym_decorator = 74,
  sym_object_definition = 75,
  sym_layout_definition = 76,
  sym_menu_definition = 77,
  sym_menu_section = 78,
  sym_menu_item = 79,
  sym_template_name_qualifier = 80,
  sym_template_definition = 81,
  sym_boolean = 82,
  sym_signal_name = 83,
  sym_constant = 84,
  sym__property_value = 85,
  sym__property_binding = 86,
  sym_property_definition = 87,
  sym_function = 88,
  sym_signal_binding = 89,
  sym_styles_list = 90,
  sym_number = 91,
  sym_array = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_version_number_repeat1 = 94,
  aux_sym_string_repeat1 = 95,
  aux_sym_string_repeat2 = 96,
  aux_sym_object_repeat1 = 97,
  aux_sym_block_repeat1 = 98,
  aux_sym_layout_definition_repeat1 = 99,
  aux_sym_menu_definition_repeat1 = 100,
  aux_sym_menu_section_repeat1 = 101,
  aux_sym__property_binding_repeat1 = 102,
  aux_sym_array_repeat1 = 103,
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
  [aux_sym_object_token1] = "object_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_layout] = "layout",
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
  [anon_sym_hidden] = "hidden",
  [anon_sym_visible] = "visible",
  [anon_sym_wide] = "wide",
  [anon_sym_narrow] = "narrow",
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
  [sym_layout_definition] = "layout_definition",
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
  [aux_sym_layout_definition_repeat1] = "layout_definition_repeat1",
  [aux_sym_menu_definition_repeat1] = "menu_definition_repeat1",
  [aux_sym_menu_section_repeat1] = "menu_section_repeat1",
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
  [aux_sym_object_token1] = aux_sym_object_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_layout] = anon_sym_layout,
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
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_visible] = anon_sym_visible,
  [anon_sym_wide] = anon_sym_wide,
  [anon_sym_narrow] = anon_sym_narrow,
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
  [sym_layout_definition] = sym_layout_definition,
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
  [aux_sym_layout_definition_repeat1] = aux_sym_layout_definition_repeat1,
  [aux_sym_menu_definition_repeat1] = aux_sym_menu_definition_repeat1,
  [aux_sym_menu_section_repeat1] = aux_sym_menu_section_repeat1,
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
  [aux_sym_object_token1] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
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
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_narrow] = {
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
  [sym_layout_definition] = {
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
  [aux_sym_layout_definition_repeat1] = {
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
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
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
  [23] = 15,
  [24] = 24,
  [25] = 16,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 14,
  [31] = 21,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
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
  [71] = 54,
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
  [84] = 81,
  [85] = 19,
  [86] = 78,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 80,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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
  [110] = 19,
  [111] = 111,
  [112] = 112,
  [113] = 109,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 108,
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 122,
  [146] = 122,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(207);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '$') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(63);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'y') ADVANCE(62);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(205)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == 'y') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '.') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('d' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(405);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(400);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(383);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(385);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 83:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(361);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(320);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 184:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 186:
      if (lookahead == 'w') ADVANCE(393);
      END_STATE();
    case 187:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 191:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 192:
      if (lookahead == 'z') ADVANCE(137);
      END_STATE();
    case 193:
      if (lookahead == '{') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 194:
      if (lookahead == '}') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 200:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 202:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 203:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 204:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 205:
      if (eof) ADVANCE(207);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '$') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(324);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(86);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == 'v') ADVANCE(63);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == 'y') ADVANCE(62);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(205)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 206:
      if (eof) ADVANCE(207);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '[') ADVANCE(316);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(206)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(201);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_using);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_template);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == '.') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'd') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'g') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(386);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'h') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'm') ADVANCE(354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 't') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'u') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'v') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'w') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'w') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'y') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == 'z') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_object_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__object_fragment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_object_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_layout);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_menu);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_item);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 's') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'u') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == 'y') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_property_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_top);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_bottom);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_bottom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_center);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_center);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_right);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_left);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_fill);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_vertical);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_vertical);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_horizontal);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_horizontal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_always);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_always);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_never);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_natural);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_natural);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_none);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_word_char);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_word_char);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_both);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_both);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_visible);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_visible);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_wide);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_wide);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_narrow);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_narrow);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_no_DASHsync_DASHcreate);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_bidirectional);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_inverted);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_swapped);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_styles);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_styles);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(345);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 206},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 206},
  [11] = {.lex_state = 206},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 206},
  [15] = {.lex_state = 206},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 206},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 206},
  [25] = {.lex_state = 206},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 206},
  [35] = {.lex_state = 206},
  [36] = {.lex_state = 206},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 206},
  [39] = {.lex_state = 206},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 206},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 206},
  [53] = {.lex_state = 206},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 206},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 206},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 206},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 206},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 206},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 206},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 206},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 206},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 206},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
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
    [aux_sym_object_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
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
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_visible] = ACTIONS(1),
    [anon_sym_wide] = ACTIONS(1),
    [anon_sym_narrow] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_no_DASHsync_DASHcreate] = ACTIONS(1),
    [anon_sym_bidirectional] = ACTIONS(1),
    [anon_sym_inverted] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_swapped] = ACTIONS(1),
    [anon_sym_styles] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(143),
    [sym__toplevel] = STATE(10),
    [sym_import_statement] = STATE(10),
    [sym_object] = STATE(81),
    [sym_decorator] = STATE(86),
    [sym_object_definition] = STATE(10),
    [sym_menu_definition] = STATE(10),
    [sym_template_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_using] = ACTIONS(7),
    [sym_template] = ACTIONS(9),
    [sym__object_fragment] = ACTIONS(11),
    [aux_sym_object_token1] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_menu] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      sym_object_id,
    ACTIONS(33), 1,
      anon_sym_bind,
    ACTIONS(35), 1,
      sym_float,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(146), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(31), 24,
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
      anon_sym_hidden,
      anon_sym_visible,
      anon_sym_wide,
      anon_sym_narrow,
  [81] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      sym_object_id,
    ACTIONS(33), 1,
      anon_sym_bind,
    ACTIONS(37), 1,
      sym_float,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(145), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(31), 24,
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
      anon_sym_hidden,
      anon_sym_visible,
      anon_sym_wide,
      anon_sym_narrow,
  [162] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__number,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      sym_object_id,
    ACTIONS(33), 1,
      anon_sym_bind,
    ACTIONS(39), 1,
      sym_float,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 9,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_object_definition,
      sym_boolean,
      sym_constant,
      sym__property_value,
      sym__property_binding,
      sym_number,
    ACTIONS(31), 24,
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
      anon_sym_hidden,
      anon_sym_visible,
      anon_sym_wide,
      anon_sym_narrow,
  [243] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__object_fragment,
    ACTIONS(44), 1,
      aux_sym_object_token1,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_layout,
    ACTIONS(55), 1,
      sym_property_name,
    ACTIONS(58), 1,
      aux_sym_signal_name_token1,
    ACTIONS(61), 1,
      anon_sym_styles,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(5), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [288] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_layout,
    ACTIONS(68), 1,
      sym_property_name,
    ACTIONS(70), 1,
      aux_sym_signal_name_token1,
    ACTIONS(72), 1,
      anon_sym_styles,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(5), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [333] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_layout,
    ACTIONS(68), 1,
      sym_property_name,
    ACTIONS(70), 1,
      aux_sym_signal_name_token1,
    ACTIONS(72), 1,
      anon_sym_styles,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(5), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [378] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_layout,
    ACTIONS(68), 1,
      sym_property_name,
    ACTIONS(70), 1,
      aux_sym_signal_name_token1,
    ACTIONS(72), 1,
      anon_sym_styles,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(7), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [423] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_layout,
    ACTIONS(68), 1,
      sym_property_name,
    ACTIONS(70), 1,
      aux_sym_signal_name_token1,
    ACTIONS(72), 1,
      anon_sym_styles,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_decorator,
    STATE(84), 1,
      sym_object,
    STATE(127), 1,
      sym_signal_name,
    STATE(6), 6,
      sym_object_definition,
      sym_layout_definition,
      sym_property_definition,
      sym_signal_binding,
      sym_styles_list,
      aux_sym_block_repeat1,
  [468] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_using,
    ACTIONS(9), 1,
      sym_template,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_menu,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    STATE(11), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym_template_definition,
      aux_sym_source_file_repeat1,
  [507] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      sym_using,
    ACTIONS(87), 1,
      sym_template,
    ACTIONS(90), 1,
      sym__object_fragment,
    ACTIONS(93), 1,
      aux_sym_object_token1,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_menu,
    STATE(81), 1,
      sym_object,
    STATE(86), 1,
      sym_decorator,
    STATE(11), 6,
      sym__toplevel,
      sym_import_statement,
      sym_object_definition,
      sym_menu_definition,
      sym_template_definition,
      aux_sym_source_file_repeat1,
  [546] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(104), 1,
      sym_object_id,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(89), 4,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_number,
  [574] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(102), 1,
      sym__number,
    ACTIONS(104), 1,
      sym_object_id,
    STATE(118), 4,
      sym_string,
      sym_gettext_string,
      sym_identifier,
      sym_number,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(112), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(116), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(120), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(124), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(128), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(134), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(110), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      anon_sym_SEMI,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(142), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(140), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(148), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(152), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(108), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(132), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_layout,
      sym_property_name,
      anon_sym_styles,
    ACTIONS(160), 5,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      aux_sym_signal_name_token1,
  [893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_item,
    ACTIONS(168), 1,
      sym_property_name,
    STATE(37), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
    STATE(74), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_item,
    ACTIONS(168), 1,
      sym_property_name,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
    STATE(61), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      sym_using,
      sym_template,
      sym__object_fragment,
      aux_sym_object_token1,
      anon_sym_LBRACK,
      anon_sym_menu,
  [1000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_section,
    ACTIONS(187), 1,
      anon_sym_item,
    STATE(40), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [1018] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_section,
    ACTIONS(194), 1,
      anon_sym_item,
    STATE(49), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [1036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_object_repeat1,
    ACTIONS(196), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_section,
    ACTIONS(194), 1,
      anon_sym_item,
    STATE(40), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [1070] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_object_repeat1,
    ACTIONS(201), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_object_repeat1,
    ACTIONS(205), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_section,
    ACTIONS(194), 1,
      anon_sym_item,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(43), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [1120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_object_repeat1,
    ACTIONS(209), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DOT,
    STATE(42), 1,
      aux_sym_object_repeat1,
    ACTIONS(209), 4,
      sym__number,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_section,
    ACTIONS(194), 1,
      anon_sym_item,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(40), 3,
      sym_menu_section,
      sym_menu_item,
      aux_sym_menu_definition_repeat1,
  [1170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(215), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [1185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym__,
    STATE(114), 2,
      sym_string,
      sym_gettext_string,
  [1202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(219), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [1217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym__property_binding_repeat1,
    ACTIONS(224), 3,
      anon_sym_no_DASHsync_DASHcreate,
      anon_sym_bidirectional,
      anon_sym_inverted,
  [1232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      anon_sym_item,
    ACTIONS(230), 1,
      sym_property_name,
    STATE(54), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      sym__number,
      anon_sym_DOT,
      sym_object_id,
      anon_sym_LBRACE,
      anon_sym_COLON,
  [1260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      sym_property_name,
    STATE(72), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1274] = 4,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_string_repeat2,
    ACTIONS(239), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    STATE(112), 1,
      sym_gobject_library,
    STATE(134), 1,
      sym_object,
  [1304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_property_name,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(68), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_item,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(63), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [1342] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(251), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(256), 1,
      anon_sym_item,
    STATE(63), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [1370] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      aux_sym_string_repeat2,
    ACTIONS(261), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1404] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym_string_repeat2,
    ACTIONS(270), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [1418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_property_name,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1442] = 4,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(276), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      sym_property_name,
    STATE(71), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_property_name,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      sym_property_definition,
      aux_sym_layout_definition_repeat1,
  [1484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    STATE(132), 1,
      sym_template_name_qualifier,
    STATE(133), 1,
      sym_object,
  [1500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_item,
    STATE(63), 2,
      sym_menu_item,
      aux_sym_menu_section_repeat1,
  [1514] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym_string_repeat1,
    ACTIONS(283), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat1,
  [1550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    STATE(80), 1,
      sym_object,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_object_id,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [1585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_object_id,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      sym_object_id,
    STATE(16), 1,
      sym_block,
  [1629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      anon_sym_item,
      sym_property_name,
  [1640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    STATE(93), 1,
      sym_object,
  [1653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_version_number_repeat1,
  [1675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_array_repeat1,
  [1688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym_string,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      sym_object_id,
    STATE(15), 1,
      sym_block,
  [1732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_object_id,
    STATE(119), 1,
      sym_function,
    STATE(129), 1,
      sym_identifier,
  [1745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_version_number_repeat1,
  [1758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_version_number_repeat1,
  [1771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_array_repeat1,
  [1784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__object_fragment,
    ACTIONS(13), 1,
      aux_sym_object_token1,
    STATE(115), 1,
      sym_object,
  [1797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_string,
  [1810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_RBRACE,
      anon_sym_section,
      anon_sym_item,
  [1819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_string,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      sym__object_fragment,
      aux_sym_object_token1,
  [1840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_SEMI,
      anon_sym_swapped,
  [1848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_object_id,
    STATE(130), 1,
      sym_identifier,
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_array,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_object_id,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
  [1878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(347), 1,
      anon_sym_EQ_GT,
  [1888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      sym_property_name,
  [1916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__number,
    STATE(125), 1,
      sym_version_number,
  [1936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [1946] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [1956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_COMMA,
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_swapped,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SEMI,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_property_name,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_SEMI,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym__number,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_EQ_GT,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__object_fragment,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym__number,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_object_id,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COLON,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SEMI,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym__object_fragment,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_EQ_GT,
  [2215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 333,
  [SMALL_STATE(8)] = 378,
  [SMALL_STATE(9)] = 423,
  [SMALL_STATE(10)] = 468,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 546,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 599,
  [SMALL_STATE(15)] = 613,
  [SMALL_STATE(16)] = 627,
  [SMALL_STATE(17)] = 643,
  [SMALL_STATE(18)] = 659,
  [SMALL_STATE(19)] = 675,
  [SMALL_STATE(20)] = 691,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 721,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 753,
  [SMALL_STATE(25)] = 767,
  [SMALL_STATE(26)] = 781,
  [SMALL_STATE(27)] = 797,
  [SMALL_STATE(28)] = 813,
  [SMALL_STATE(29)] = 829,
  [SMALL_STATE(30)] = 845,
  [SMALL_STATE(31)] = 861,
  [SMALL_STATE(32)] = 877,
  [SMALL_STATE(33)] = 893,
  [SMALL_STATE(34)] = 914,
  [SMALL_STATE(35)] = 927,
  [SMALL_STATE(36)] = 940,
  [SMALL_STATE(37)] = 953,
  [SMALL_STATE(38)] = 974,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1000,
  [SMALL_STATE(41)] = 1018,
  [SMALL_STATE(42)] = 1036,
  [SMALL_STATE(43)] = 1052,
  [SMALL_STATE(44)] = 1070,
  [SMALL_STATE(45)] = 1086,
  [SMALL_STATE(46)] = 1102,
  [SMALL_STATE(47)] = 1120,
  [SMALL_STATE(48)] = 1136,
  [SMALL_STATE(49)] = 1152,
  [SMALL_STATE(50)] = 1170,
  [SMALL_STATE(51)] = 1185,
  [SMALL_STATE(52)] = 1202,
  [SMALL_STATE(53)] = 1217,
  [SMALL_STATE(54)] = 1232,
  [SMALL_STATE(55)] = 1249,
  [SMALL_STATE(56)] = 1260,
  [SMALL_STATE(57)] = 1274,
  [SMALL_STATE(58)] = 1288,
  [SMALL_STATE(59)] = 1304,
  [SMALL_STATE(60)] = 1318,
  [SMALL_STATE(61)] = 1328,
  [SMALL_STATE(62)] = 1342,
  [SMALL_STATE(63)] = 1356,
  [SMALL_STATE(64)] = 1370,
  [SMALL_STATE(65)] = 1384,
  [SMALL_STATE(66)] = 1394,
  [SMALL_STATE(67)] = 1404,
  [SMALL_STATE(68)] = 1418,
  [SMALL_STATE(69)] = 1432,
  [SMALL_STATE(70)] = 1442,
  [SMALL_STATE(71)] = 1456,
  [SMALL_STATE(72)] = 1470,
  [SMALL_STATE(73)] = 1484,
  [SMALL_STATE(74)] = 1500,
  [SMALL_STATE(75)] = 1514,
  [SMALL_STATE(76)] = 1528,
  [SMALL_STATE(77)] = 1537,
  [SMALL_STATE(78)] = 1550,
  [SMALL_STATE(79)] = 1563,
  [SMALL_STATE(80)] = 1572,
  [SMALL_STATE(81)] = 1585,
  [SMALL_STATE(82)] = 1598,
  [SMALL_STATE(83)] = 1607,
  [SMALL_STATE(84)] = 1616,
  [SMALL_STATE(85)] = 1629,
  [SMALL_STATE(86)] = 1640,
  [SMALL_STATE(87)] = 1653,
  [SMALL_STATE(88)] = 1662,
  [SMALL_STATE(89)] = 1675,
  [SMALL_STATE(90)] = 1688,
  [SMALL_STATE(91)] = 1701,
  [SMALL_STATE(92)] = 1710,
  [SMALL_STATE(93)] = 1719,
  [SMALL_STATE(94)] = 1732,
  [SMALL_STATE(95)] = 1745,
  [SMALL_STATE(96)] = 1758,
  [SMALL_STATE(97)] = 1771,
  [SMALL_STATE(98)] = 1784,
  [SMALL_STATE(99)] = 1797,
  [SMALL_STATE(100)] = 1810,
  [SMALL_STATE(101)] = 1819,
  [SMALL_STATE(102)] = 1832,
  [SMALL_STATE(103)] = 1840,
  [SMALL_STATE(104)] = 1848,
  [SMALL_STATE(105)] = 1858,
  [SMALL_STATE(106)] = 1868,
  [SMALL_STATE(107)] = 1878,
  [SMALL_STATE(108)] = 1888,
  [SMALL_STATE(109)] = 1898,
  [SMALL_STATE(110)] = 1908,
  [SMALL_STATE(111)] = 1916,
  [SMALL_STATE(112)] = 1926,
  [SMALL_STATE(113)] = 1936,
  [SMALL_STATE(114)] = 1946,
  [SMALL_STATE(115)] = 1956,
  [SMALL_STATE(116)] = 1966,
  [SMALL_STATE(117)] = 1976,
  [SMALL_STATE(118)] = 1984,
  [SMALL_STATE(119)] = 1992,
  [SMALL_STATE(120)] = 2002,
  [SMALL_STATE(121)] = 2012,
  [SMALL_STATE(122)] = 2019,
  [SMALL_STATE(123)] = 2026,
  [SMALL_STATE(124)] = 2033,
  [SMALL_STATE(125)] = 2040,
  [SMALL_STATE(126)] = 2047,
  [SMALL_STATE(127)] = 2054,
  [SMALL_STATE(128)] = 2061,
  [SMALL_STATE(129)] = 2068,
  [SMALL_STATE(130)] = 2075,
  [SMALL_STATE(131)] = 2082,
  [SMALL_STATE(132)] = 2089,
  [SMALL_STATE(133)] = 2096,
  [SMALL_STATE(134)] = 2103,
  [SMALL_STATE(135)] = 2110,
  [SMALL_STATE(136)] = 2117,
  [SMALL_STATE(137)] = 2124,
  [SMALL_STATE(138)] = 2131,
  [SMALL_STATE(139)] = 2138,
  [SMALL_STATE(140)] = 2145,
  [SMALL_STATE(141)] = 2152,
  [SMALL_STATE(142)] = 2159,
  [SMALL_STATE(143)] = 2166,
  [SMALL_STATE(144)] = 2173,
  [SMALL_STATE(145)] = 2180,
  [SMALL_STATE(146)] = 2187,
  [SMALL_STATE(147)] = 2194,
  [SMALL_STATE(148)] = 2201,
  [SMALL_STATE(149)] = 2208,
  [SMALL_STATE(150)] = 2215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(45),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(104),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(144),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(149),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(105),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_definition, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_definition, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_layout_definition, 4),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_layout_definition, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_definition, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_styles_list, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_styles_list, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_binding, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal_binding, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_definition, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_definition, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(138),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_definition_repeat1, 2), SHIFT_REPEAT(111),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(131),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__property_binding_repeat1, 2), SHIFT_REPEAT(52),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__property_binding, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_layout_definition_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_layout_definition_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_layout_definition_repeat1, 2), SHIFT_REPEAT(142),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(62),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_menu_section_repeat1, 2), SHIFT_REPEAT(111),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(64),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gettext_string, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_layout_definition_repeat1, 2), SHIFT_REPEAT(150),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 8),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2), SHIFT_REPEAT(126),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_number_repeat1, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_section, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_number, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_menu_item, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decorator, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal_name, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_name_qualifier, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gobject_library, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [409] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
