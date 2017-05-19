<html>
<head>
  <meta charset="UTF-8">
  <style type="text/css">
    body {
      font-family: "Raleway", sans-serif;
    }
    h1 {
      color: #1F99A4;
      font-weight: normal;
    }
    table {
      border-collapse: collapse;
      width: 100%;
    }
    td {
      border: 1px dotted #1F99A4;
      padding: 5px;
    }
    td:first-child {
      font-weight: bold;
    }
  </style>
</head>

<body>

<h1>Giving History</h1>
<table>
  <tr>
    <td>What organizations has the client/family given to in the past?</td>
    <td><?php print $what_organizations_has_the; ?></td>
  </tr>
  <tr>
    <td>What did the client like/dislike about their past funding experiences?</td>
    <td><?php print $what_did_the_client_like_d; ?></td>
  </tr>
  <tr>
    <td>How many hours per year did the family spend volunteering in the past?</td>
    <td><?php print $how_many_hours_per_year_di; ?></td>
  </tr>
  <tr>
    <td>Does the family have an established mission/vision statement for philanthropy?</td>
    <td><?php print $does_the_family_have_an_es; ?></td>
  </tr>
  <tr>
    <td>What does the client like/dislike about their current giving structure and/or process?</td>
    <td><?php print $what_does_the_client_like_; ?></td>
  </tr>
  <tr>
    <td>Advisor Name</td>
    <td><?php print $advisor_name; ?></td>
  </tr>
  <tr>
    <td>Advisor Firm</td>
    <td><?php print $advisor_firm; ?></td>
  </tr>
  <tr>
    <td>Advisor Contact</td>
    <td><?php print $advisor_contact; ?></td>
  </tr>
  <tr>
    <td>Giving Vehicle Name</td>
    <td><?php print $vehicle_name; ?></td>
  </tr>
  <tr>
    <td>Giving Vehicle Type</td>
    <td><?php print $giving_vehicle_type; ?></td>
  </tr>
</table>

<h1>Anticipated Giving Plan</h1>
<table>
  <tr>
    <td>Funding Source</td>
    <td><?php print $contribution_funding; ?></td>
  </tr>
  <tr>
    <td>How does the client plan on funding the account?</td>
    <td><?php print $how_does_the_client_plan_o; ?></td>
  </tr>
  <tr>
    <td>Planned Initial Contribution</td>
    <td><?php print $planned_initial_contributi; ?></td>
  </tr>
  <tr>
    <td>Planned Annual Contribution</td>
    <td><?php print $planned_annual_contributio; ?></td>
  </tr>
  <tr>
    <td>Planned Distribution (%) or Spend Down Period</td>
    <td><?php print $what_is_the_intended_distr; ?></td>
  </tr>
</table>
</body>
</html>