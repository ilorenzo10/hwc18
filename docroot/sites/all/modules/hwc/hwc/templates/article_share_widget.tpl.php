<?php
/**
 * @file
 * Social share widgets
 *
 * Available variables:
 * - $url: URL to the page
 * - $node: Current node
 * - $tweet_url: Twitter share URL
 * - $language: Current language
 * - $options: Additional configuration options
 *
 * Additional configuration options variables:
 * - rss_url: URL to the RSS feed
 * - rss_hide: Set to TRUE to hide the RSS link
 * @see template_process()
 */
?>
<div class="hwc-share-widget">
  <ul>
    <?php if ($label) { ?><li class="share-this-article">
      <?php print $label; ?>
    </li><?php } ?>
    <li id="facebook-share-button-<?php print $node->nid; ?>"  class="hwc-share-widget-button hwc-share-widget-facebook" data-href="">
      <a onclick="window.open(this.href, 'hwc-share', 'left=20,top=20,width=500,height=500,toolbar=1,resizable=0'); return false;"
        href="https://www.facebook.com/sharer/sharer.php?u=<?php print $url ?>">Facebook</a>
    </li>
    <li id="twitter-share-button-<?php print $node->nid; ?>" class="hwc-share-widget-button hwc-share-widget-twitter">
      <a href="<?php print $tweet_url; ?>">Twitter</a>
    </li>
    <li id="linked-in-<?php print $node->nid; ?>" class="napo-share-widget-button napo-share-widget-linkedin">
      <a href="https://www.linkedin.com/shareArticle?mini=true&url=<?php print $url; ?>">Linked in</a>
    </li>
    <li id="google-plus-<?php print $node->nid; ?>" class="napo-share-widget-button napo-share-widget-google-plus">
      <a onclick="window.open(this.href, 'hwc-share', 'left=20,top=20,width=500,height=500,toolbar=1,resizable=0'); return false;"
         href="https://plus.google.com/share?url=<?php print $url; ?>">Google+</a>
    </li>
  </ul>
</div>
<script>
  (function($) {

    $(window).ready(function(){
        $('#twitter-share-button-<?php print $node->nid; ?> a').click(function(e) {
            e.preventDefault();
            var width  = 575,
            height = 400,
            left   = ($(window).width()  - width)  / 2,
            top    = ($(window).height() - height) / 2,
            opts   = 'status=1' +
              ',width='  + width  +
              ',height=' + height +
              ',top='    + top    +
              ',left='   + left;
          window.open(this.href, 'twitter', opts);
        });
        $('#linked-in-<?php print $node->nid; ?> a').click(function(e) {
            e.preventDefault();
            var width  = 575,
            height = 400,
            left   = ($(window).width()  - width)  / 2,
            top    = ($(window).height() - height) / 2,
            opts   = 'status=1' +
              ',width='  + width  +
              ',height=' + height +
              ',top='    + top    +
              ',left='   + left;
          window.open(this.href, 'Linked In', opts);
        });
    });
  })(jQuery);

</script>

<?php
/* PIWIK EVENTS */
$event_name = '/node/' . $node->nid;
$event_val = $language->language;
if (!empty($node->path['alias'])) {
  $event_name = '/' . $node->path['alias'];
}
?>
<script>
(function($) {
    $(window).ready(function(){
        if (typeof _paq != 'undefined') {
            $('#linked-in-<?php print $node->nid; ?> a').click(function(event) {
                _paq.push(['trackEvent', 'Share', 'LinkedIn', '<?php print $event_name ?>', '<?php print $event_val ?>']);
            });
            $('#twitter-share-button-<?php print $node->nid; ?> a').click(function(event) {
                _paq.push(['trackEvent', 'Share', 'Twitter', '<?php print $event_name ?>', '<?php print $event_val ?>']);
            });
            $('#facebook-share-button-<?php print $node->nid; ?> a').click(function(event) {
                _paq.push(['trackEvent', 'Share', 'Facebook', '<?php print $event_name ?>', '<?php print $event_val ?>']);
            });
            $('#google-plus-<?php print $node->nid; ?> a').click(function(event) {
                _paq.push(['trackEvent', 'Share', 'Google+', '<?php print $event_name ?>', '<?php print $event_val ?>']);
            });
        }
    });
})(jQuery);
</script>
