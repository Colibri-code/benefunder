<form id="request-info" action="https://webto.salesforce.com/servlet/servlet.WebToLead?encoding=UTF-8" method="POST">

  <input type=hidden name="oid" value="00Do0000000JSTB">
  <input type=hidden name="retURL" value="<?php print $base_url; ?>/thank-you">
  <input type=hidden id="recordType" name="recordType" value="012o0000000clFV" />
  <input type=hidden id="lead_source" name="lead_source" value="Web inquiry" />

  <div style="margin-bottom: 6px">I am interested in Benefunder as a <select id="00No000000EvSzN" name="00No000000EvSzN" class="form-control">
      <option value="">-None-</option>
      <option value="Advisor">Advisor</option>
      <option value="Donor">Donor</option>
      <option value="Financial Institution">Financial Institution</option>
      <option value="Investor">Investor</option>
      <option value="Employment">Employment</option>
      <option value="Media Outlet">Media Outlet</option>
      <option value="Researcher / Innovator">Researcher / Innovator</option>
      <option value="University">University</option>
      <option value="Other">Other</option>
    </select>
  </div>

  <div class="form-group"><label for="first_name">First Name</label><input id="request-info-first-name" class="form-control" id="first_name" maxlength="40" name="first_name" size="20" required type="text" placeholder="First Name" /></div>

  <div class="form-group"><label for="last_name">Last Name</label><input id="request-info-last-name" class="form-control" id="last_name" maxlength="80" name="last_name" size="20" required type="text" placeholder="Last Name" /></div>

  <div class="form-group"><label for="email">Email</label><input id="request-info-email" class="form-control" id="email" maxlength="80" name="email" size="20" type="email" required placeholder="Email" /></div>

  <div class="form-group"><label for="Notes">Notes</label><textarea id="00No000000EvSzS" name="00No000000EvSzS" type="text" wrap="soft" placeholder="Notes" class="form-control"></textarea></div>

  <div class="form-group"><label for="phone">Phone</label><input id="request-info-phone" class="form-control" id="phone" maxlength="40" name="phone" size="20" type="text" placeholder="Phone (Optional)" /><button type="submit" class="btn btn-default">Send</button></div>

</form>
