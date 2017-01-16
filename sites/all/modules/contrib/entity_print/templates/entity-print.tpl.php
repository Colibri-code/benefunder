<?php

/**
 * @file
 * PDF template for printing.
 *
 * Available variables are:
 *  - $entity - The entity itself.
 *  - $entity_array - The renderable array of this entity.
 *  - $entity_print_css - An array of stylesheets to be rendered.
 */
?>

<html>
<head>
  <meta charset="UTF-8">
  <title>PDF</title>
</head>
<body>
<div class="page">
  Module Smurf :( <br/>
  <?php print get_class($entity); ?><br/>
  <?php print $entity->title ?>
</div>
</body>
</html>
