const PREC = {
  OBJECT: -1,
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2  // In a string, prefer string characters over comments
};

module.exports = grammar({
  name: 'sbjson',

  extras: $ => [
    $.multi_line_comment,
    $.single_line_comment,
    /\s/
  ],

  supertypes: $ => [
    $._value
  ],

  rules: {
    document: $ => $._value,

    _value: $ => choice(
      $.object,
      $.array,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null
    ),

    object: $ => prec(PREC.OBJECT, seq(
      "{", commaSep($.pair, $.object_comma_missing), "}"
    )),
    
    object_comma_missing: $ => $.pair,

    pair: $ => seq(
      $.key,
      ":",
      $._value
    ),
    
    key: $ => $.string,

    array: $ => prec(PREC.OBJECT,seq(
      "[", commaSep($._value, $.array_comma_missing), "]"
    )),
    array_comma_missing: $ => $._value,
    

    string: $ => choice(
      seq(
        '"',
        '"'
      ),
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^"\\]/)),
          $.text_format_indicator,
          $.escape_sequence,
          $.bad_escape_sequence
        )),
        '"'
      )
    ),
    text_format_indicator : $ => {
      const hex_color = seq (
        "#",
        /[a-fA-F0-9]{6}/,
        optional(/[a-fA-F0-9]{2}/)
      )
      const identifiers = choice(
        'noshadow',
        'shadow',
        'clear',
        'reset',
        'white',
        'lightgray',
        'gray',
        'darkgray',
        'black',
        'darkmagenta',
        'magenta',
        'blue',
        'darkcyan',
        'cyan',
        'green',
        'darkgreen',
        'yellow',
        'orange',
        'red',
        'pink',
        hex_color
      )
      return token(
        prec(PREC.STRING + 1,
          seq(
            /\^/,
            seq(
              identifiers,
              repeat(
                seq(
                  ',',
                  identifiers
                )
              )
            ),
            /;/
          )
        )
      )
    },
    
    escape_sequence: $ => token.immediate(seq(
      '\\',
      /["\\\/bnrt]|u[A-Fa-f0-9]{4}/
    )),
    bad_escape_sequence: $ => token.immediate(seq(
      '\\',
      /[^"\\\/bnrt]/
    )),

    number: $ => {
      const hex_literal = seq(
        choice('0x', '0X'),
        /[\da-fA-F]+/
      )

      const decimal_digits = /\d+/
      const signed_integer = seq(optional(choice('-','+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)

      const octal_literal = seq(choice('0o', '0O'), /[0-7]+/)

      const decimal_integer_literal = seq(
        optional(choice('-','+')),
        choice(
          '0',
          seq(/[1-9]/, optional(decimal_digits))
        )
      )

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, optional(exponent_part))
      )

      return token(choice(
        hex_literal,
        decimal_literal,
        binary_literal,
        octal_literal
      ))
    },

    true: $ => "true",

    false: $ => "false",

    null: $ => "null",
    multi_line_comment: $ => token(prec(PREC.COMMENT,
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
    single_line_comment: $ => token(prec(PREC.COMMENT,
      seq(
        '//',
        /.*/
      )
    )),
  }
});

function commaSep1 (rule, commaError) {
  return seq(rule, repeat(choice(seq(",", rule),commaError)))
}

function commaSep (rule, commaError) {
  return optional(commaSep1(rule,commaError))
}
