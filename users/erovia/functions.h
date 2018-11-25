#pragma once
#include "erovia.h"

// Add reconfigurable functions here, for keymap customization
// This allows for a global, userspace functions, and continued
// customization of the keymap.  Use _keymap instead of _user
// functions in the keymaps

void matrix_init_keymap(void);
void matrix_scan_keymap(void);
bool process_record_keymap(uint16_t keycode, keyrecord_t *record);
uint32_t layer_state_set_keymap (uint32_t state);
void led_set_keymap(uint8_t usb_led);
void suspend_power_down_keymap(void);
void suspend_wakeup_init_keymap(void);
void eeconfig_init_keymap(void);
