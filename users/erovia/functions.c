#include "functions.h"

__attribute__ ((weak))
void matrix_init_keymap(void) {}

void matrix_init_user(void) {
  if(get_unicode_input_mode() != UC_LNX) {
    set_unicode_input_mode(UC_LNX);
  }
  matrix_init_keymap();
}


__attribute__ ((weak))
void matrix_scan_keymap(void) {}

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_TWO_KEYS(KC_T, KC_F) {
      send_unicode_hex_string(UC_TABLE_FLIP);
    }
    SEQ_ONE_KEY(KC_S) {
      send_unicode_hex_string(UC_SHRUG);
    }
    SEQ_ONE_KEY(KC_L) {
      send_unicode_hex_string(UC_LENNY);
    }
    SEQ_ONE_KEY(KC_H) {
      send_unicode_hex_string(UC_HUG);
    }
    SEQ_ONE_KEY(KC_Y) {
      send_unicode_hex_string(UC_YEAH);
    }
    SEQ_ONE_KEY(KC_C) {
      send_unicode_hex_string(UC_CONCERN);
    }
  }
}


__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QWERTY:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_QWERTY);
    }
    return false;
    break;
  case COLEMAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_COLEMAK);
    }
    return false;
    break;
  }
  return process_record_keymap(keycode, record);
}


__attribute__ ((weak))
uint32_t layer_state_set_keymap(uint32_t state) {
  return state;
}

bool aush_state = false;

uint32_t layer_state_set_user(uint32_t state) {
  switch (biton32(state)) {
    case _VIM:
      aush_state = autoshift_state();
      if (aush_state) autoshift_disable();
      break;
    default: //  for any other layers, or the default layer
      if (aush_state) autoshift_enable();
      break;
  }
  return layer_state_set_keymap(state);
}


__attribute__ ((weak))
void led_set_keymap(uint8_t usb_led) {}

void led_set_user(uint8_t usb_led) {
   led_set_keymap(usb_led);
}


__attribute__ ((weak))
void suspend_power_down_keymap(void) {}

void suspend_power_down_user(void) {
    suspend_power_down_keymap();
}


__attribute__ ((weak))
void suspend_wakeup_init_keymap(void) {}

void suspend_wakeup_init_user(void) {
  suspend_wakeup_init_keymap();
}


__attribute__ ((weak))
void eeconfig_init_keymap() {}

void eeconfig_init_user(void) {
  eeconfig_init_keymap();
}
