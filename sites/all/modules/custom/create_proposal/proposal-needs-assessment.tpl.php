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

<h1>Giving Profile</h1>
<p>Benefunder provides you with impact in your giving: a unique opportunity to find, fund, and follow
research that supports your charitable interests in an efficient, cost effective manner.</p>

<table>
  <tr>
    <td>Name</td>
    <td><?php print $name; ?></td>
  </tr>
  <tr>
    <td>Location</td>
    <td><?php print $citystate; ?></td>
  </tr>
  <tr>
    <td>Relationship</td>
    <td><?php print $relationship; ?></td>
  </tr>
  <tr>
    <td>University Alumni Associations</td>
    <td><?php print $alumni_associations; ?></td>
  </tr>
  <tr>
    <td>What problems are you most interested in solving?</td>
    <td><?php print $what_problems_are_you_most; ?></td>
  </tr>
  <tr>
    <td>Philanthropic Interests</td>
    <td><?php print $philanthropic_interests; ?></td>
  </tr>
  <tr>
    <td>What is your primary motivation behind your philanthropy</td>
    <td><?php print $what_is_your_primary_motiv; ?></td>
  </tr>
  <tr>
    <td>In addition to your gift, would you like to volunteer or get involved?</td>
    <td><?php print $in_addition_to_providing_f; ?></td>
  </tr>
  <tr>
    <td>Research Stages</td>
    <td><?php print $research_stages; ?></td>
  </tr>
  <tr>
    <td>Accomplishments</td>
    <td><?php print $accomplishments; ?></td>
  </tr>
  <tr>
    <td>Engagements</td>
    <td><?php print $engagements; ?></td>
  </tr>
</table>
</body>
</html>