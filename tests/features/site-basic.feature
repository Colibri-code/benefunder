Feature: working behat test suite

Scenario: the homepage works
  Given I am an anonymous user
  When I go to "/"
  Then I should see "Benefunder is fueling innovation by providing a marketplace"

Scenario: search works
  Given I am an anonymous user
  When I go to "/search/site/smurf"
  Then I should see "Your search yielded no results"

Scenario: search works
  Given I am an anonymous user
  When I go to "/search/site/cancer"
  Then I should not see "Your search yielded no results"

Scenario: cause listing works
  Given I am an anonymous user
  When I go to "/causes"
  Then I should see "The people and causes that are driving new advances"

Scenario: request information form is displayed
  Given I am an anonymous user
  When I go to "/connect"
  Then I should see "I am interested in Benefunder as a"

Scenario: spot check search facets
  Given I am an anonymous user
  When I go to "/search/site"
  Then I should see "Agriculture"
  And I should see "Women in STEM"
  And I should see "Stem Cell"
  And I should see "IOT, Devices, Data"
  And I should see "Healthy Aging"
  And I should see "Autism Research"
  And I should see "University or Institution"
  And I should see "California Institute of Technology"