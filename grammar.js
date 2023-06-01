module.exports = grammar({
  name: 'eta',

  rules: {
    eta_script_element: $ => seq(
      '<%',
      optional($.text),
      '%>'
    ),

    text: $ => /[^<>&\s]([^<>&]*[^<>&\s])?/,

    _node: $ => choice(
      $.eta_script_element
    )
  }
});
