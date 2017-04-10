
Drupal.behaviors.totalAllocations = {
  attach: function (context, settings) {
    jQuery(document).mouseup(function () {
      var sum = 0;
      jQuery('.sliderfield-display-values-field').each(function() {
          sum += parseInt(jQuery(this).text().substring(1));
      });
      sum *= 1000;
      jQuery('input[name=total_allocations]').val('$' + addCommas(sum));
    })
  }
};

function addCommas(nStr) {
    nStr += '';
    x = nStr.split('.');
    x1 = x[0];
    x2 = x.length > 1 ? '.' + x[1] : '';
    var rgx = /(\d+)(\d{3})/;
    while (rgx.test(x1)) {
        x1 = x1.replace(rgx, '$1' + ',' + '$2');
    }
    return x1 + x2;
}
