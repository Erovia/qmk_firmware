#pragma once

#if defined(KEYBOARD_lets_split_rev2)
  #define USE_SERIAL
  #define MASTER_LEFT
  
  #undef RGBLED_NUM
  #define RGBLED_NUM 24
  #define RGBLIGHT_EFFECT_KNIGHT
  #define RGBLIGHT_EFFECT_KNIGHT_LENGTH 1
  #define RGBLIGHT_VAL_STEP 50
  #define RGBLIGHT_SLEEP
#endif
