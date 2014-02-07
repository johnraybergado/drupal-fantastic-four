<?php
/**
 * @file
 * footer_menu_and_static_pages_content_type.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function footer_menu_and_static_pages_content_type_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Advertising',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '98b308ef-76e6-45f0-9c88-2a4121e678db',
  'type' => 'static_pages',
  'language' => 'und',
  'created' => 1391773119,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '327ad012-d64a-4a32-a72a-6900a3473fcd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Fusce feugiat mattis neque, quis iaculis sem venenatis vitae. Sed nisl arcu; varius quis porttitor quis, semper quis nisl. Maecenas vitae vestibulum neque. Ut ac libero mauris! Vivamus viverra, risus vel aliquet scelerisque, nisi erat ullamcorper mi; non tincidunt sapien ipsum sed nunc. Nunc sapien turpis, consequat et bibendum eu; varius ac nisi. Pellentesque odio augue, vestibulum at massa egestas, ullamcorper fermentum erat. Sed fermentum aliquam sem. Nunc interdum est augue, id gravida velit vehicula vel. Donec a porttitor ante.

Pellentesque dignissim auctor erat, sit amet ornare ligula tristique ac. Pellentesque lobortis lobortis justo, id euismod odio venenatis commodo. Morbi faucibus ornare purus nec commodo. Etiam sit amet lobortis libero. Aliquam euismod turpis sed eleifend consectetur. Duis eu commodo metus, et volutpat felis. Quisque mollis placerat nisl, id varius nisl sagittis vitae.

Praesent a placerat purus. Vestibulum vitae massa sit amet nibh convallis molestie sed nec turpis. Integer non erat nisi. Sed aliquet justo nec dignissim sagittis. Cras eleifend a risus varius blandit. Aliquam non orci sed lectus aliquet porta! Ut enim justo, condimentum quis dui ac posuere.
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Fusce feugiat mattis neque, quis iaculis sem venenatis vitae. Sed nisl arcu; varius quis porttitor quis, semper quis nisl. Maecenas vitae vestibulum neque. Ut ac libero mauris! Vivamus viverra, risus vel aliquet scelerisque, nisi erat ullamcorper mi; non tincidunt sapien ipsum sed nunc. Nunc sapien turpis, consequat et bibendum eu; varius ac nisi. Pellentesque odio augue, vestibulum at massa egestas, ullamcorper fermentum erat. Sed fermentum aliquam sem. Nunc interdum est augue, id gravida velit vehicula vel. Donec a porttitor ante.</p>
<p>Pellentesque dignissim auctor erat, sit amet ornare ligula tristique ac. Pellentesque lobortis lobortis justo, id euismod odio venenatis commodo. Morbi faucibus ornare purus nec commodo. Etiam sit amet lobortis libero. Aliquam euismod turpis sed eleifend consectetur. Duis eu commodo metus, et volutpat felis. Quisque mollis placerat nisl, id varius nisl sagittis vitae.</p>
<p>Praesent a placerat purus. Vestibulum vitae massa sit amet nibh convallis molestie sed nec turpis. Integer non erat nisi. Sed aliquet justo nec dignissim sagittis. Cras eleifend a risus varius blandit. Aliquam non orci sed lectus aliquet porta! Ut enim justo, condimentum quis dui ac posuere.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_static_page_image' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-02-07 19:38:39 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Terms and Use',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '6cba60b5-586c-4d1c-8405-0abe0721fd5b',
  'type' => 'static_pages',
  'language' => 'und',
  'created' => 1391772960,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '684831c2-83b7-4fe1-8770-c98b3bc24b10',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Aliquam sapien dolor, tincidunt ac tristique a, semper bibendum lacus? Proin magna arcu, commodo in rhoncus non, iaculis ac tellus! Nam tristique ultrices nisi ac fringilla. Nullam lobortis, eros id porttitor volutpat, diam turpis sagittis lacus, nec scelerisque justo magna in ante. Pellentesque justo purus, luctus quis egestas non, dapibus ac leo. Nulla vitae dolor sollicitudin urna cursus bibendum ac a orci. Nulla facilisi. Sed nec pretium justo; ultricies consequat arcu?

Etiam commodo, sapien ac ullamcorper varius, ipsum eros fringilla metus, in pharetra enim tellus quis quam. Fusce euismod accumsan luctus. Sed nec dapibus ante. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Fusce sit amet nisl a odio auctor commodo venenatis non nisi. Sed adipiscing nunc est, nec dapibus neque interdum eu. Sed cursus magna arcu; a condimentum felis luctus nec. Nullam at est sit amet libero facilisis commodo. Sed ornare luctus elit, vitae ornare purus interdum ac. Maecenas eget nibh nec eros vestibulum imperdiet sit amet non urna. Maecenas cursus imperdiet ligula. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus metus.
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Aliquam sapien dolor, tincidunt ac tristique a, semper bibendum lacus? Proin magna arcu, commodo in rhoncus non, iaculis ac tellus! Nam tristique ultrices nisi ac fringilla. Nullam lobortis, eros id porttitor volutpat, diam turpis sagittis lacus, nec scelerisque justo magna in ante. Pellentesque justo purus, luctus quis egestas non, dapibus ac leo. Nulla vitae dolor sollicitudin urna cursus bibendum ac a orci. Nulla facilisi. Sed nec pretium justo; ultricies consequat arcu?</p>
<p>Etiam commodo, sapien ac ullamcorper varius, ipsum eros fringilla metus, in pharetra enim tellus quis quam. Fusce euismod accumsan luctus. Sed nec dapibus ante. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Fusce sit amet nisl a odio auctor commodo venenatis non nisi. Sed adipiscing nunc est, nec dapibus neque interdum eu. Sed cursus magna arcu; a condimentum felis luctus nec. Nullam at est sit amet libero facilisis commodo. Sed ornare luctus elit, vitae ornare purus interdum ac. Maecenas eget nibh nec eros vestibulum imperdiet sit amet non urna. Maecenas cursus imperdiet ligula. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus metus.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_static_page_image' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-02-07 19:36:00 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'About',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0f4f95fa-3f73-4251-a6a6-b1b1ef2bbbe2',
  'type' => 'static_pages',
  'language' => 'und',
  'created' => 1391773034,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e2109c4c-7835-4953-9f1f-2b756462d17a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Ut malesuada tristique tempus. Suspendisse potenti. Cras ut mollis augue, eget tempus dolor? Nam varius pellentesque leo, eu euismod mi lobortis et. Donec in hendrerit lorem. Vivamus vulputate consequat nulla, sed volutpat enim porttitor et. Duis vel dui risus? Aenean auctor gravida blandit. Sed ut aliquet orci, et mattis eros. Maecenas consectetur bibendum facilisis. Nulla eu fermentum risus. Nunc venenatis nisi at orci venenatis porttitor. Donec aliquet ullamcorper ipsum, vitae scelerisque felis lobortis facilisis.

Suspendisse pulvinar, est id pulvinar pharetra, lacus mi dictum tellus, quis pulvinar leo nunc et ipsum. Vestibulum eget nulla felis. Aliquam elementum, quam ut pellentesque condimentum; nisl mauris sollicitudin augue, ac aliquet sem dui ut est. Pellentesque pretium neque at laoreet scelerisque. Vestibulum ornare mi et hendrerit lobortis. Curabitur ut orci ac magna placerat ullamcorper at eu est. Duis porta turpis vel elementum rutrum.

Nulla at elit eu ante tempus cursus vestibulum ac mi. Sed eleifend magna sit amet orci iaculis, sit amet consectetur lacus dapibus. Nullam in aliquam sem, eu facilisis nulla. Ut non elit in mauris placerat lobortis. Lorem ipsum dolor amet.
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Ut malesuada tristique tempus. Suspendisse potenti. Cras ut mollis augue, eget tempus dolor? Nam varius pellentesque leo, eu euismod mi lobortis et. Donec in hendrerit lorem. Vivamus vulputate consequat nulla, sed volutpat enim porttitor et. Duis vel dui risus? Aenean auctor gravida blandit. Sed ut aliquet orci, et mattis eros. Maecenas consectetur bibendum facilisis. Nulla eu fermentum risus. Nunc venenatis nisi at orci venenatis porttitor. Donec aliquet ullamcorper ipsum, vitae scelerisque felis lobortis facilisis.</p>
<p>Suspendisse pulvinar, est id pulvinar pharetra, lacus mi dictum tellus, quis pulvinar leo nunc et ipsum. Vestibulum eget nulla felis. Aliquam elementum, quam ut pellentesque condimentum; nisl mauris sollicitudin augue, ac aliquet sem dui ut est. Pellentesque pretium neque at laoreet scelerisque. Vestibulum ornare mi et hendrerit lobortis. Curabitur ut orci ac magna placerat ullamcorper at eu est. Duis porta turpis vel elementum rutrum.</p>
<p>Nulla at elit eu ante tempus cursus vestibulum ac mi. Sed eleifend magna sit amet orci iaculis, sit amet consectetur lacus dapibus. Nullam in aliquam sem, eu facilisis nulla. Ut non elit in mauris placerat lobortis. Lorem ipsum dolor amet.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_static_page_image' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-02-07 19:37:14 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Disclaimer',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '26e7def0-b9ce-4c31-9a1f-83da9fa384b3',
  'type' => 'static_pages',
  'language' => 'und',
  'created' => 1391773090,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fe54be51-edd6-451d-8b38-2ab55e5e20c3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Vestibulum eu aliquet arcu, vitae hendrerit ligula? Praesent velit purus, porta feugiat lorem a; porttitor sodales neque. Phasellus fermentum ornare orci. Ut venenatis, lacus interdum iaculis pretium, sem lorem malesuada enim, at lacinia metus sem at eros. Ut vitae erat at dui tempus ultrices. Morbi semper dui et ipsum placerat venenatis? Phasellus eget accumsan risus. Vestibulum elementum ipsum non tellus cursus, eu venenatis turpis tincidunt. Nam venenatis; lectus in commodo tristique, risus eros eleifend lectus, at dictum turpis dui sit amet nisi. Sed ut elit ut dolor dapibus fermentum. Integer pharetra tellus justo, eu egestas libero molestie nec. Integer neque diam, sagittis id interdum vitae, laoreet a lorem. Proin sed enim neque.

Nullam nec sapien congue, venenatis odio sodales, congue massa. Aliquam placerat neque arcu, non condimentum quam dictum ut. Donec volutpat; dolor commodo laoreet sodales, tellus mauris ornare ipsum, a dignissim sem mi in leo. Praesent ut elementum enim; quis porta urna. Proin quis mattis magna. Etiam placerat enim sit amet pretium egestas. Nulla porta purus augue, et dictum sem adipiscing ut. Suspendisse at porttitor sem. In vel nisi ligula posuere.
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Vestibulum eu aliquet arcu, vitae hendrerit ligula? Praesent velit purus, porta feugiat lorem a; porttitor sodales neque. Phasellus fermentum ornare orci. Ut venenatis, lacus interdum iaculis pretium, sem lorem malesuada enim, at lacinia metus sem at eros. Ut vitae erat at dui tempus ultrices. Morbi semper dui et ipsum placerat venenatis? Phasellus eget accumsan risus. Vestibulum elementum ipsum non tellus cursus, eu venenatis turpis tincidunt. Nam venenatis; lectus in commodo tristique, risus eros eleifend lectus, at dictum turpis dui sit amet nisi. Sed ut elit ut dolor dapibus fermentum. Integer pharetra tellus justo, eu egestas libero molestie nec. Integer neque diam, sagittis id interdum vitae, laoreet a lorem. Proin sed enim neque.</p>
<p>Nullam nec sapien congue, venenatis odio sodales, congue massa. Aliquam placerat neque arcu, non condimentum quam dictum ut. Donec volutpat; dolor commodo laoreet sodales, tellus mauris ornare ipsum, a dignissim sem mi in leo. Praesent ut elementum enim; quis porta urna. Proin quis mattis magna. Etiam placerat enim sit amet pretium egestas. Nulla porta purus augue, et dictum sem adipiscing ut. Suspendisse at porttitor sem. In vel nisi ligula posuere.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_static_page_image' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-02-07 19:38:10 +0800',
);
  return $nodes;
}
