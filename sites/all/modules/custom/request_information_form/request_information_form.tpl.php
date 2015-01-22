<form id="request-info" action="https://www.salesforce.com/servlet/servlet.WebToLead?encoding=UTF-8" method="POST">

  <input type=hidden name="oid" value="00Do0000000JSTB">
  <input type=hidden name="retURL" value="<?php print $base_url; ?>/thank-you">

  <div class="form-group"><label for="first_name">First Name</label><input id="request-info-first-name" class="form-control" id="first_name" maxlength="40" name="first_name" size="20" required type="text" placeholder="First Name" /></div>

  <div class="form-group"><label for="last_name">Last Name</label><input id="request-info-last-name" class="form-control" id="last_name" maxlength="80" name="last_name" size="20" required type="text" placeholder="Last Name" /></div>

  <div class="form-group"><label for="email">Email</label><input id="request-info-email" class="form-control" id="email" maxlength="80" name="email" size="20" type="email" required placeholder="Email" /></div>

  <div class="form-group"><label for="phone">Phone</label><input id="request-info-phone" class="form-control" id="phone" maxlength="40" name="phone" size="20" type="text" placeholder="Phone (Optional)" /><button type="submit" class="btn btn-default">Send</button></div>

</form>