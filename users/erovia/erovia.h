#pragma once
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "tap_dances.h"
#include "layouts.h"
#include "functions.h"
#include "unicodes.h"

enum custom_layers {
  _QWERTY = 0,
  _COLEMAK,
  _LOWER,
  _RAISE,
  _ADJUST,
  _VIM,
  _FN
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  LOWER,
  RAISE,
  KEYMAP_SAFE_RANGE
};
