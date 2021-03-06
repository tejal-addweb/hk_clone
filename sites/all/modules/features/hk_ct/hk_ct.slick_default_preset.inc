<?php
/**
 * @file
 * hk_ct.slick_default_preset.inc
 */

/**
 * Implements hook_slick_default_presets().
 */
function hk_ct_slick_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'referenzen';
  $preset->label = 'Referenzen';
  $preset->breakpoints = 0;
  $preset->skin = 'boxed-split';
  $preset->options = array(
    'general' => array(
      'normal' => 'referenz',
      'thumbnail' => '',
      'template_class' => '',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => TRUE,
      'autoplaySpeed' => 5000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev" aria-label="previous">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next" aria-label="next">Next</button>',
      'centerMode' => FALSE,
      'centerPadding' => '50px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => TRUE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => TRUE,
      'edgeFriction' => 0.34999999999999998,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => 'ease-in-out',
      'cssEaseOverride' => 'swing',
      'useTransform' => FALSE,
      'easing' => 'swing',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
  );
  $export['referenzen'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'wohnungsgalerie';
  $preset->label = 'Wohnungsgalerie';
  $preset->breakpoints = 3;
  $preset->skin = 'default';
  $preset->options = array(
    'general' => array(
      'normal' => 'flexfullbreakpoints_theme_hk_theme_wide_1x',
      'thumbnail' => 'flexslider_thumbnail',
      'template_class' => 'slick--main',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => TRUE,
      'asNavFor' => '',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next">Next</button>',
      'centerMode' => FALSE,
      'centerPadding' => '50px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => FALSE,
      'fade' => TRUE,
      'focusOnSelect' => FALSE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 1,
      'slide' => '',
      'slidesToShow' => 1,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => FALSE,
      'edgeFriction' => 0.34999999999999998,
      'touchMove' => FALSE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => 'ease-in-out',
      'cssEaseOverride' => 'swing',
      'useTransform' => FALSE,
      'easing' => 'swing',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => 900,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => TRUE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => TRUE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => TRUE,
            'centerMode' => FALSE,
            'centerPadding' => '50px',
            'dots' => FALSE,
            'draggable' => TRUE,
            'fade' => FALSE,
            'focusOnSelect' => FALSE,
            'infinite' => TRUE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 1,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => FALSE,
            'edgeFriction' => 0.34999999999999998,
            'touchMove' => TRUE,
            'touchThreshold' => 5,
            'useCSS' => TRUE,
            'cssEase' => 'ease',
            'cssEaseBezier' => 'ease-in-out',
            'cssEaseOverride' => 'swing',
            'useTransform' => TRUE,
            'easing' => 'swing',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => TRUE,
          ),
        ),
        1 => array(
          'breakpoint' => 481,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => TRUE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => TRUE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => TRUE,
            'centerMode' => FALSE,
            'centerPadding' => '50px',
            'dots' => FALSE,
            'draggable' => TRUE,
            'fade' => FALSE,
            'focusOnSelect' => FALSE,
            'infinite' => TRUE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 1,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => FALSE,
            'edgeFriction' => 0.34999999999999998,
            'touchMove' => TRUE,
            'touchThreshold' => 5,
            'useCSS' => TRUE,
            'cssEase' => 'ease',
            'cssEaseBezier' => 'ease-in-out',
            'cssEaseOverride' => 'swing',
            'useTransform' => FALSE,
            'easing' => 'swing',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => TRUE,
          ),
        ),
        2 => array(
          'breakpoint' => 1025,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => TRUE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => TRUE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => TRUE,
            'centerMode' => FALSE,
            'centerPadding' => '10px',
            'dots' => FALSE,
            'draggable' => TRUE,
            'fade' => TRUE,
            'focusOnSelect' => TRUE,
            'infinite' => TRUE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 1,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => FALSE,
            'edgeFriction' => 0.34999999999999998,
            'touchMove' => TRUE,
            'touchThreshold' => 5,
            'useCSS' => TRUE,
            'cssEase' => 'ease',
            'cssEaseBezier' => 'ease-in-out',
            'cssEaseOverride' => 'swing',
            'useTransform' => TRUE,
            'easing' => 'swing',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['wohnungsgalerie'] = $preset;

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'wohnungsgalerie_thumbs';
  $preset->label = 'Wohnungsgalerie Thumbnail Navigation';
  $preset->breakpoints = 2;
  $preset->skin = 'default';
  $preset->options = array(
    'general' => array(
      'normal' => 'flexslider_thumbnail',
      'thumbnail' => '',
      'template_class' => 'slick--nav',
      'goodies' => array(
        'arrow-down' => 0,
        'pattern' => 0,
        'random' => 0,
      ),
      'arrow_down_target' => '',
      'arrow_down_offset' => '',
    ),
    'settings' => array(
      'mobileFirst' => FALSE,
      'asNavFor' => 'slick--main',
      'accessibility' => TRUE,
      'adaptiveHeight' => FALSE,
      'autoplay' => FALSE,
      'autoplaySpeed' => 3000,
      'pauseOnHover' => TRUE,
      'pauseOnDotsHover' => FALSE,
      'arrows' => TRUE,
      'prevArrow' => '<button type="button" data-role="none" class="slick-prev">Previous</button>',
      'nextArrow' => '<button type="button" data-role="none" class="slick-next">Next</button>',
      'centerMode' => TRUE,
      'centerPadding' => '0px',
      'dots' => FALSE,
      'dotsClass' => 'slick-dots',
      'appendDots' => '$(element)',
      'draggable' => TRUE,
      'fade' => FALSE,
      'focusOnSelect' => TRUE,
      'infinite' => TRUE,
      'initialSlide' => 0,
      'lazyLoad' => 'ondemand',
      'respondTo' => 'window',
      'rtl' => FALSE,
      'rows' => 1,
      'slidesPerRow' => 5,
      'slide' => '',
      'slidesToShow' => 5,
      'slidesToScroll' => 1,
      'speed' => 500,
      'swipe' => TRUE,
      'swipeToSlide' => FALSE,
      'edgeFriction' => 0.34999999999999998,
      'touchMove' => TRUE,
      'touchThreshold' => 5,
      'useCSS' => TRUE,
      'cssEase' => 'ease',
      'cssEaseBezier' => 'ease-in-out',
      'cssEaseOverride' => 'swing',
      'useTransform' => FALSE,
      'easing' => 'swing',
      'variableWidth' => FALSE,
      'vertical' => FALSE,
      'verticalSwiping' => FALSE,
      'waitForAnimate' => TRUE,
    ),
    'responsives' => array(
      'responsive' => array(
        0 => array(
          'breakpoint' => 900,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => TRUE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => TRUE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => FALSE,
            'centerMode' => FALSE,
            'centerPadding' => '20px',
            'dots' => FALSE,
            'draggable' => TRUE,
            'fade' => FALSE,
            'focusOnSelect' => TRUE,
            'infinite' => TRUE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 4,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => FALSE,
            'edgeFriction' => 0.34999999999999998,
            'touchMove' => TRUE,
            'touchThreshold' => 5,
            'useCSS' => TRUE,
            'cssEase' => 'ease',
            'cssEaseBezier' => 'ease-in-out',
            'cssEaseOverride' => 'swing',
            'useTransform' => TRUE,
            'easing' => 'linear',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => TRUE,
          ),
        ),
        1 => array(
          'breakpoint' => 481,
          'unslick' => FALSE,
          'settings' => array(
            'accessibility' => TRUE,
            'adaptiveHeight' => FALSE,
            'autoplay' => FALSE,
            'autoplaySpeed' => 3000,
            'pauseOnHover' => TRUE,
            'pauseOnDotsHover' => FALSE,
            'arrows' => FALSE,
            'centerMode' => TRUE,
            'centerPadding' => '0px',
            'dots' => FALSE,
            'draggable' => TRUE,
            'fade' => FALSE,
            'focusOnSelect' => TRUE,
            'infinite' => TRUE,
            'initialSlide' => 0,
            'rows' => 1,
            'slidesPerRow' => 1,
            'slidesToShow' => 3,
            'slidesToScroll' => 1,
            'speed' => 500,
            'swipe' => TRUE,
            'swipeToSlide' => FALSE,
            'edgeFriction' => 0.34999999999999998,
            'touchMove' => TRUE,
            'touchThreshold' => 5,
            'useCSS' => TRUE,
            'cssEase' => 'ease',
            'cssEaseBezier' => 'ease-in-out',
            'cssEaseOverride' => 'swing',
            'useTransform' => FALSE,
            'easing' => 'swing',
            'variableWidth' => FALSE,
            'vertical' => FALSE,
            'verticalSwiping' => FALSE,
            'waitForAnimate' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['wohnungsgalerie_thumbs'] = $preset;

  return $export;
}
