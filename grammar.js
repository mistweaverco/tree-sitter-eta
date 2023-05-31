const html = require("tree-sitter-html/grammar");

module.exports = grammar(html, {
  name: 'eta',

  rules: {
    fragment: (_, o) => o,

    doctype: (_, o) => o,

    _node: $ => choice(
      $.doctype,
      $.entity,
      $.text,
      $.element,
      $.script_element,
      $.style_element,
      $.eta_script_element,
      $.erroneous_end_tag
    ),

    element: (_, o) => o,

    start_tag: (_, o) => o,

    eta_script_start_tag: () => '<%',

    eta_script_element: $ => seq(
      alias($.eta_script_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag
    ),

    script_element: (_, o) => o,

    style_element: (_, o) => o,

    script_start_tag: (_, o) => o,

    style_start_tag: (_, o) => o,

    self_closing_tag: (_, o) => o,

    end_tag: (_, o) => o,

    erroneous_end_tag: (_, o) => o,

    attribute: (_, o) => o,

    attribute_name: (_, o) => o,

    attribute_value: (_, o) => o,

    entity: (_, o) => o,

    quoted_attribute_value: (_, o) => o,

    text: (_, o) => o,
  }
});
