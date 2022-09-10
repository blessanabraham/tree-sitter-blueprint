(object_id) @variable

[
  ";"
  "."
  ","
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(string) @string
(escape_sequence) @escape

(number) @number

(comment) @comment

[
  (constant)
  (boolean)
] @constant.builtin

(array) @array

[
  (using)
  (template)
] @keyword

[
  (decorator)
] @function

(property_definition (property_name) @parameter)

(object) @type

(signal_binding (signal_name) @function.builtin)
(signal_binding (function (identifier)) @function)
(signal_binding "swapped" @keyword)

(styles_list "styles" @function.builtin)

(gettext_string "_" @function.builtin)

(menu_definition "menu" @keyword)
(menu_section "section" @keyword)
(menu_item "item" @function.builtin)
