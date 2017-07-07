
Drupal.behaviors.totalAllocations = {
  attach: function (context, settings) {
    jQuery(document).mouseup(function () {

      var sum = 0;

      // Allocations are dollar amounts in thousands, show total selected.
      //jQuery('.sliderfield-display-values-field').each(function() {
      //    sum += parseInt(jQuery(this).text().substring(1));
      //});
      //sum *= 1000;
      //jQuery('input[name=total_allocations]').val('$' + addCommas(sum));

      // Allocations are % instead of dollar amounts, show estimated total available.
      var intent           = jQuery('#edit-field-what-is-your-long-term-int-und').val();

      var annual_cont      = parseInt(jQuery('.sliderfield-field-adjust-field-planned-annual-contributio').val());
      var initial_cont     = parseInt(jQuery('.sliderfield-field-adjust-field-planned-initial-contributi').val());

      var distribution_pct = parseInt(jQuery('.sliderfield-field-adjust-field-distribution-percentage').val());
      var spend_down       = parseInt(jQuery('.sliderfield-field-adjust-field-spend-down-period').val());


      var sum = (initial_cont * distribution_pct / 100);
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
