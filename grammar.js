const PREC = {
  clause: 1200, // xfx
  dcg: 1200, // xfx

  directive: 1200, // fx
  qh_operator: 1200, // fx // TODO: find out what this does.

  dynamic: 1150, // fx
  discontiguous: 1150, // fx
  initialization: 1150, // fx
  meta_predicate: 1150, // fx
  module_transparent: 1150, // fx
  multifile: 1150, // fx
  public: 1150, // fx
  thread_local: 1150, // fx
  thread_initialization: 1150, // fx
  volitile: 1150, // fx

  list_sperator: 1105, // xfy

  disjunction: 1100, // xfy

  implies: 1050, // xfy
  soft_cut_implies: 1050, // xfy

  conjunction: 1000, // xfy

  colon_equals: 990, // xfx

  negation: 900, // fy

  less_than: 700, // xfx
  assign: 700, // xfx
  univ: 700, // xfx
  compund_equals: 700, // xfx
  compund_not_equals: 700, // xfx
  equation_equals: 700, // xfx
  less_than_equals: 700, // xfx
  equals: 700, // xfx
  equation_not_equals: 700, // xfx
  greater_than: 700, // xfx
  greater_than_equals: 700, // xfx
  compound_less_than: 700, // xfx
  compound_less_than_equals: 700, // xfx
  compound_greater_than: 700, // xfx
  compound_greater_than_equals: 700, // xfx
  not_assigned: 700, // xfx
  not_equals: 700, // xfx
  as: 700, // xfx
  is: 700, // xfx
  partial_unification_dict: 700, // xfx
  sub_dict: 700, // xfx
  cql_table: 700, // xfx

  coloun: 600, // xfy
  addition: 500, // yfx
  subtraction: 500, // yfx
  bitwise_or: 500, // yfx
  bitwise_and: 500, // yfx
  bitwise_xor: 500, // yfx

  question_mark: 500, // fx

  multipcation: 400, // yfx
  divistion: 400, // yfx
  integer_division: 400, // yfx
  div: 400, // yfx
  rdiv: 400, // yfx
  bitwise_shift_left: 400, // yfx
  bitwise_shift_right: 400, // yfx
  mod: 400, // yfx
  rem: 400, // yfx

  exponentiation_float: 200, // xfx

  exponentiation: 200, // xfy

  bitwise_negation: 200, //fy
  positive: 200, //fy
  negative: 200, //fy

  dict_inspection: 100, // yfx

  remander_deterministic: 1 // fx

}

const ops = [
  ':-',
  '-->',
  '?-',
  'dynamic','discontiguous','initialization','meta_predicate',
  'module_transparent','multifile','public','thread_local',
  'thread_initialization','volatile',
  '|',
  ';',
  '->','*->',
  // No ','
  ':=',
  '\\+','<','=','=..','=@=','\\=@=','=:=','=<','==','=\\=','>','>=','@<','@=<',
  '@>','@>=','\\=','\\==','as','is','>:<',':<',
  ':',
  '+', '-', '/\\', '\\/', 'xor',
  '?',
  '*', '/', '//', 'div', 'rdiv', '<<', '>>', 'mod', 'rem',
  '**',
  '^',
  '\\',
  '.',
  '$'
];


module.exports = grammar({
  name: 'prolog',

  extras: $ => [
    /\s/, '\n', '\r',
    $.comment
  ],

  conflicts: $ => [
    [$.infix_operator, $.infix_operator],
    [$.infix_operator, $._prefix_non_associative],
    //[$._infix_non_associative, $._infix_non_associative]
  ],

  word: $ => $.atom,

  superTypes: $ => [
    $.atomic,
    $.variable,
    $.compound_term,
    $.bracketed_term,
    $.end
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(
      //$._expression_statement//,
      //$._declaration_statement
      choice(
        field('declarive', $.directive_term),
        field('clause', $.clause_term)
      )
    ),

    // Change

    directive_term: $ => seq(
      alias(':-', $.operator),
      $._term,
      $.end
    ),


    clause_term: $ => seq(
      $._term,
      $.end
    ),

    _term: $ => prec(1, choice(
      // Define Term
      $.atomic,
      $.variable,
      $.compound_term,
      $.bracketed_term,
      $.dict
    )),

    _arg_term: $ => prec(2, choice(
      $.atomic,
      $.variable,
      alias($._compound_term_arg, $.compound_term),
      $.bracketed_term
    )),

    bracketed_term: $ => seq(
      field('open', alias('(', $.bracket)),
      $._term,
      field('close', alias(')', $.bracket)),
    ),

    end: $ => choice(
      /[\n|\r]*\.\s*\n*/,
      /[\n|\r]*\.\s*[\r\n]*/
    ),

    atomic: $ => choice(
      $.number,
      //$.negaltive_number,
      $.string,
      $.quoted_atom,
      $.atom,
      alias('!', $.cut)
    ),

    variable: $ =>
      // Define Veriable
      /[A-Z_][a-zA-Z0-9_]*/,

    compound_term: $ => prec(1, choice(
      $.functional_notation,
      $._non_arg_operator, // Special case for ',' not being in arguments without ().
      $._operator_notation,
      $._list_notation,
      $._curly_bracketed_notation,
    )),

    _compound_term_arg: $ => prec(2, choice(
      $.functional_notation,
      $._operator_notation,
      $._list_notation,
      $._curly_bracketed_notation,
    )),

    functional_notation: $ => seq(
      field('name', $.atom),
      field('open', alias('(', $.bracket)),//$.open_ct,
      field('arguments', $.args),
      field('close', alias(')', $.bracket))//$.close_ct
    ),

    _operator_notation: $ => choice(
      $._prefix_notation,
      $._infix_notation,
      $._postfix_notation
      //'thing that should not be matched'
    ),

    _list_notation: $ => $.list,

    _curly_bracketed_notation: $ => $.curly_bracket_term,

    _prefix_notation: $ => field('prefix', alias(choice(
      // Define prefx notation`
      $._prefix_non_associative,          // fx
      $._prefix_right_associative         // fy
    ), $.prefix_operator)),

    _infix_notation: $ => (
      // Define infix notation
      field('infix', $.infix_operator)
    ),

    _postfix_notation: $ => field('postfix', alias(choice(
      // Define postfix notation - Non in SWI spec I can see
      // Need dynamic defintion of operators
      //$._postfix_non_associative,         // xf
      //$._postfix_left_associative         // yf
    ), $.postfix_operator)),


    infix_operator: $ => { // xfx

      const table = [
        [prec, PREC.clause, ':-'], // xfx
        [prec, PREC.dcg, '-->'], // xfx

        [prec.right, PREC.list_sperator, '|'], // xfy

        [prec.right, PREC.disjunction, ';'], // xfy

        [prec.right, PREC.implies, '->'], // xfy
        [prec.right, PREC.soft_cut_implies, '*->'], // xfy

        [prec, PREC.colon_equals, ':='], // xfx

        [prec, PREC.less_than, '<'], // xfx
        [prec, PREC.assign, '='], // xfx
        [prec, PREC.univ, '=..'], // xfx
        [prec, PREC.compund_equals, '=@='], // xfx
        [prec, PREC.compund_not_equals, '\\=@='], // xfx
        [prec, PREC.equation_equals, '=:='], // xfx
        [prec, PREC.less_than_equals, '=<'], // xfx
        [prec, PREC.equals, '=='], // xfx
        [prec, PREC.equation_not_equals, '=\\='], // xfx
        [prec, PREC.greater_than, '>'], // xfx
        [prec, PREC.greater_than_equals, '>='], // xfx
        [prec, PREC.compound_less_than, '@<'], // xfx
        [prec, PREC.compound_less_than_equals, '@=<'], // xfx
        [prec, PREC.compound_greater_than, '@>'], // xfx
        [prec, PREC.compound_greater_than_equals, '@>='], // xfx
        [prec, PREC.not_assigned, '\\='], // xfx
        [prec, PREC.not_equals, '\\=='], // xfx
        [prec, PREC.as, 'as'], // xfx
        [prec, PREC.is, 'is'], // xfx
        [prec, PREC.partial_unification_dict, '>:<'], // xfx
        [prec, PREC.sub_dict, ':<'], // xfx
        [prec, PREC.cql_table, '::'], // xfx

        [prec.right, PREC.coloun, ':'], // xfy

        [prec.left, PREC.addition, '+'], // yfx
        [prec.left, PREC.subtraction, '-'], // yfx
        [prec.left, PREC.bitwise_or, '\\/'], // yfx
        [prec.left, PREC.bitwise_and, '/\\'], // yfx
        [prec.left, PREC.bitwise_xor, 'xor'], // yfx

        [prec.left, PREC.multipcation, '*'], // yfx
        [prec.left, PREC.divistion, '/'], // yfx
        [prec.left, PREC.integer_division, '//'], // yfx
        [prec.left, PREC.div, 'div'], // yfx
        [prec.left, PREC.rdiv, 'rdiv'], // yfx
        [prec.left, PREC.bitwise_shift_left, '<<'], // yfx
        [prec.left, PREC.bitwise_shift_right, '>>'], // yfx
        [prec.left, PREC.mod, 'mod'], // yfx
        [prec.left, PREC.rem, 'rem'], // yfx

        [prec, PREC.exponentiation_float, '**'], // xfx

        [prec.right, PREC.exponentiation, '^'], // xfy

        [prec.left, PREC.dict_inspection, '.'], // yfx
      ];

      return choice(...table.map(([fn, precidence, operator]) => fn(precidence, seq(
        field('left', $._term),
        field('operator', alias(operator, $.operator)),
        field('right', $._term)
      ))))
    },

    _non_arg_operator: $ => prec.right(PREC.conjunction, seq(
      field('left', $._term),
      field('operator', alias(',', $.operator)),
      field('right', $._term)
    )),

    // Prefix operaters seporated.. Unsure if I should colapes them at this stage.
    _prefix_non_associative: $ => {
      const table = [
        [PREC.dynamic, 'dynamic'],
        [PREC.discontiguous, 'discontiguous'], // fx
        [PREC.initialization, 'initialization'], // fx
        [PREC.meta_predicate, 'meta_predicate'], // fx
        [PREC.module_transparent, 'module_transparent'], // fx
        [PREC.multifile, 'multifile'], // fx
        [PREC.public, 'public'], // fx
        [PREC.thread_local, 'thread_local'], // fx
        [PREC.thread_initialization, 'thread_initialization'], // fx
        [PREC.volitile, 'volitile'],
        [PREC.directive, 'directive'],
        [PREC.qh_operator, '?-'],
        // [PREC.directive, ':-'], // fx leaving out for the time being
        [PREC.question_mark, '?'],
        [PREC.remander_deterministic, '$'] // fx
      ];

      return choice(...table.map(([precidence, operator]) => prec(precidence, seq(
        field('operator', alias(operator, $.operator)),
        field('right', $._term)
      ))))
    },

    _prefix_right_associative: $=> {
      const table = [
        [PREC.negation, '/+'], // fy
        [PREC.bitwise_negation, '/'], //fy
        [PREC.positive, '+'], //fy
        [PREC.negative, '-'], //fy
      ];

      return choice(...table.map(([precidence, operator]) => prec.right(precidence, seq(
        field('operator', alias(operator, $.operator)),
        field('right', $._term)
      ))))
    },

    dict: $ => seq(
      choice(
        $.atom,
        $.variable
      ),
      '{',
      seq($.dict_value,
        repeat(
          seq(
            ',',
            $.dict_value
          )
        )
      ),
      '}'
    ),

    dict_value: $ => seq(
      $.atom,
      token.immediate(':'),
      $._arg_term
    ),

    number: $ => (
      /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/
    ),

    atom: $ => (
      /[a-z][a-zA-Z0-9_]*/
    ),

    quoted_atom: $ => token(seq('\'', /.*/, '\'')),

    string: $ => token(seq('\"', /.*/, '\"')),

    comment: $ => token(choice(
      seq('%', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    list: $ => prec.right(seq(
      field('open_list', alias('[', $.square_brackets)), // open list
      field('arguments', optional($.args)),
      field('close_list', alias(']', $.square_brackets)) // close list
    )),

    curly_bracket_term: $ => prec.right(seq(
      field('open_cb', alias('{', $.curly_bracket)),
      optional(seq($._term,
      repeat(
        prec.right(seq( // TODO: Work out if correct
          ',',
          $._term
        ))
      ))),
      field('close_cb', alias('}', $.curly_bracket))
    )),

    _arg: $ => prec.left(choice(
      $._operator_pred_list,
      $._arg_term
    )),

    args: $ => prec.right(seq(
      $._arg,
      repeat(
        prec.left(seq( // TODO: Work out if correct
          ',',
          $._arg
        ))
      ),
    )),

    // Operators avliable in a predicate or list.
    _operator_pred_list: $ => {
      return alias(choice(...ops.map((op) =>
        op
      )), $.operator)
    }

  },
  user_defined_operators: $ => {

  }

});
