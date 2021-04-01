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

  multipcation: 400, // yfx

}



module.exports = grammar({
  name: 'prolog',

  conflicts: $ => [
    [$.infix_operator, $.infix_operator],
    [$.infix_operator, $._prefix_non_associative]
    //[$._infix_non_associative, $._infix_non_associative]
  ],

  //word: $ => $.identifier,

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
      prec(1000, ':-'),
      $._term,
      $._end
    ),


    clause_term: $ => seq(
      $._term,
      $._end
    ),

    _term: $ => prec(1, choice(
      // Define Term
      $.atomic,
      $.variable,
      $.compound_term,
      $.bracketed_term
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

    _end: $ => /\./,

    atomic: $ => choice(
      $.number,
      //$.negative_number,
      field('atom', $.atom)
    ),

    variable: $ =>
      // Define Veriable
      /[A-Z_][a-zA-Z0-9_]*/,

    compound_term: $ => prec(1, choice(
      $._functional_notation,
      $._non_arg_operator, // Special case for ',' not being in arguments without ().
      $._operator_notation,
      $._list_notation,
      $._curly_bracketed_notation,
    )),

    _compound_term_arg: $ => prec(2, choice(
      $._functional_notation,
      $._operator_notation,
      $._list_notation,
      $._curly_bracketed_notation,
    )),

    _functional_notation: $ => seq(
      field('name', $.atom),
      field('open', '('),//$.open_ct,
      field('arguments', $.args),
      field('close', ')')//$.close_ct
    ),

    _operator_notation: $ => choice(
      $._prefix_notation,
      $._infix_notation,
      //$._postfix_notation
      //'thing that should not be matched'
    ),

    _list_notation: $ => $.list,

    _curly_bracketed_notation: $ => $.curly_bracket_term,


    _prefix_notation: $ => choice(
      // Define prefx notation`
      field('prefix', alias($._prefix_non_associative, $.prefix_operator))          // fx
      //$._prefix_right_associative         // fy
    ),

    _infix_notation: $ => (
      // Define infix notation
      field('infix', $.infix_operator)
    ),
    /*
    _postfix_notation: $ => choice(
      // Define postfix notation
      $._postfix_non_associative,         // xf
      $._postfix_left_associative         // yf
    ),
    */

    infix_operator: $ => { // xfx

      const table = [
        [prec, PREC.clause, ':-'], // xfx
        [prec, PREC.dcg, '-->'], // xfx
        //[prec.right, PREC.conjunction, 1, 0, ','], // xfy
        [prec.left, PREC.multipcation, '*'], // yfx
        [prec.right, PREC.list_sperator, '|'], // xfy

        [prec.right, PREC.disjunction, ';'], // xfy

        [prec.right, PREC.implies, '->'], // xfy
        [prec.right, PREC.soft_cut_implies, '*->'], // xfy

        [prec, PREC.colon_equals, ':='] // xfx
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

    /*
    _infix_right_associative: $ => {
      const table = [
        [PREC.conjunction, ',']
      ];

      return choice(...table.map(([precidence, operator]) => prec.right(precidence, seq(
        field('left', $.term),
        field('operator', operator),
        field('right', $.term)
      ))))
    },

    _infix_left_associative: $ => {
      const table = [
        [PREC.multipcation, '*']
      ];

      return choice(...table.map(([precidence, operator]) => prec.right(precidence, seq(
        field('left', $.term),
        field('operator', operator),
        field('right', $.term)
      ))))
    },
    */

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
        [PREC.qh_operator, 'qh_operator'] // fx
      ];

      return choice(...table.map(([precidence, operator]) => prec(precidence, seq(
        field('operator', alias(operator, $.operator)),
        field('right', $._term)
      ))))
    },

    number: $ => (
      /0[bB][01](_?[01])*|0[oO]?[0-7](_?[0-7])*|(0[dD])?\d(_?\d)*|0[xX][0-9a-fA-F](_?[0-9a-fA-F])*/
    ),

    //negative_number: $ => prec.left(seq(
    //  '-',
    //  /\d+/
    //)),

    atom: $ => prec.left(choice(
      /[a-z][a-zA-Z0-9_]*/,
      '[]',
      '{}'
    )),

    list: $ => prec.right(seq(
      '[', // open list
      field('arguments', $.args),
      ']' // open list
    )),

    curly_bracket_term: $ => prec.right(seq(
      '\{',
      $._term,
      repeat(
        prec.right(seq( // TODO: Work out if correct
          ',',
          $._term
        ))
      ),
      '\}'
    )),

    _arg: $ => prec.left(choice(
      alias(prec(0, $._operator_pred_list), $.operator),
      prec(999, $._arg_term)
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

    _operator_pred_list: $ => choice(
      ';',
      ':-'
    ),

    operator: $ => prec.left(choice(
        $._operator_pred_list,
        ','
    ))

  },
  user_defined_operators: $ => {

  }

});
