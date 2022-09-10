module.exports = grammar({
    name: 'blueprint',
    rules: {
        source_file: $ => repeat($._toplevel),
        _toplevel: $ => choice(
            $.import_statement,
            $._template_definition,
            $.object_definition,
            $.menu_definition,
        ),
        using: $ => 'using',
        template: $ => 'template',
        import_statement: $ => seq(
            $.using,
            $.object,
            $.number,
            ';',
        ),

        string: $ => choice(
            seq(
                '"',
                repeat(choice(
                    alias($.unescaped_double_string_fragment, $.string_fragment),
                    $.escape_sequence
                )),
                '"'
            ),
            seq(
                "'",
                repeat(choice(
                    alias($.unescaped_single_string_fragment, $.string_fragment),
                    $.escape_sequence
                )),
                "'"
            )
        ),

        // stolen from https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js#L906
        // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
        // We give names to the token() constructs containing a regexp
        // so as to obtain a node in the CST.
        unescaped_double_string_fragment: $ =>
            token.immediate(prec(1, /[^"\\]+/)),

        // same here
        unescaped_single_string_fragment: $ =>
            token.immediate(prec(1, /[^'\\]+/)),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
                /[^xu0-7]/,
                /[0-7]{1,3}/,
                /x[0-9a-fA-F]{2}/,
                /u[0-9a-fA-F]{4}/,
                /u{[0-9a-fA-F]+}/
            )
        )),

        gettext_string: $ => seq(
            '_', '(', $.string, ')'
        ),

        object_id: $ => /[a-z][A-Za-z0-9_\-]+/,
        identifier: $ => /[a-z][A-Za-z0-9_\-]+/,
        // Gtk | WebKit2 | Adw.StatusPage | Foo.Bar.Baz
        object: $ => /[A-Z][A-Za-z0-9_]+(\.[A-Z][A-Za-z0-9_]+)*/,
        block: $ => seq(
            '{',
            repeat(choice(
                $.styles_list,
                $.property_definition,
                $.signal_binding,
                $.object_definition,
            )),
            '}',
        ),
        decorator: $ => seq(
            '[',
            $.identifier,
            ']',
        ),
        object_definition: $ => seq(
            optional($.decorator),
            $.object,
            optional($.object_id),
            $.block,
        ),
        menu_definition: $ => seq(
            'menu',
            optional($.object_id),
            '{',
            repeat(choice($.menu_section, $.menu_item)),
            '}',
        ),
        menu_section: $ => seq(
            'section',
            '{',
            repeat($.property_definition),
            repeat($.menu_item),
            '}',
        ),
        menu_item: $ => choice(
            seq(
                'item',
                '{',
                repeat($.property_definition),
                '}',
            ),
            seq(
                'item',
                '(',
                choice($.string, $.gettext_string),
                optional(seq(',', $.string)),
                optional(seq(',', $.string)),
                ')',
            )
        ),
        _template_definition: $ => seq(
            $.template,
            $.object,
            ':', $.object,
            $.block,
        ),

        boolean: $ => choice('true', 'false'),

        property_name: $ => /[a-z][A-Za-z0-9\-]+/,
        signal_name: $ => choice(
            $.property_name,
            /notify::[a-z][A-Za-z0-9\-]+/,
        ),
        constant: $ => choice(
            'start', 'end',
            'top', 'bottom',
            'center', 'right', 'left', 'fill',
            'vertical', 'horizontal',
            'always', 'never',
            'natural',
            'none', 'word', 'char', 'word_char',
            'yes', 'no',
            'both',
        ),
        _property_value: $ => choice(
            $.constant,
            $.boolean,
            $.object_definition,
            $.identifier,
            $.string, $.gettext_string,
            $.number,
        ),
        _property_binding: $ => seq(
            'bind',
            $.object_id,
            '.',
            $.property_name,
            repeat(choice('no-sync-create', 'bidirectional', 'inverted')),
        ),
        property_definition: $ => seq(
            $.property_name,
            ':',
            choice($._property_value, $._property_binding),
            ';',
        ),

        function: $ => seq(
            $.identifier, '(', ')',
        ),

        signal_binding: $ => seq(
            $.signal_name,
            '=>',
            $.function,
            optional('swapped'),
            ';',
        ),

        styles_list: $ => seq(
            'styles', $.array
        ),

        // stolen from: https://github.com/tree-sitter/tree-sitter-javascript/blob/master/grammar.js#L929
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),
        number: $ => /\d+(\.\d+)*/,
        array: $ => seq(
            '[',
            optional(seq(
                choice($.string, $.gettext_string, $.number, $.identifier),
                repeat(
                    seq(',', choice($.string, $.gettext_string, $.number, $.identifier))
                )
            )),
            ']',
        ),
    }
})