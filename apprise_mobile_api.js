(function ($, Drupal) {
Drupal.behaviors.appriseMobileApi = {
  attach: function (context, settings) {
    $('input[name="apprise_mobile_api_post[und][0][value][date]"]').change(function() {
      setDate();
    });
    $('input[name="apprise_mobile_api_post[und][0][value][time]"]').change(function() {
      setDate();
    });
    function setDate() {
      var date = $('input[name="apprise_mobile_api_post[und][0][value][date]"]').val();
      var time = $('input[name="apprise_mobile_api_post[und][0][value][time]"]').val();
      var datetime = Date.parse(date + ' ' + time);
      var plus15days = datetime + (15 * 24 * 60 * 60 * 1000);
      var newdatetime = new Date(plus15days);
      var d = newdatetime.getDate();
      var m = newdatetime.getMonth() + 1;
      var y = newdatetime.getFullYear();
      var newdate = m + '/' + d + '/' + y;
      var h = newdatetime.getHours();
      var n = newdatetime.getMinutes();
      var newtime = pad(h, 2) + ':' + pad(n, 2);
      $('input[name="apprise_mobile_api_unpost[und][0][value][date]"]').val(newdate);
      $('input[name="apprise_mobile_api_unpost[und][0][value][time]"]').val(newtime);
    }
    function pad(str, max) {
      str = str.toString();
      return str.length < max ? pad("0" + str, max) : str;
    }
  }
};
}(jQuery, Drupal));
