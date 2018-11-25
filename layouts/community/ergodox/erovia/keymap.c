#include QMK_KEYBOARD_H
#include "erovia.h"

#define KC_ADJT TT(_ADJUST)
#define KC_NKRO MAGIC_TOGGLE_NKRO

#define LAYOUT_ergodox_pretty_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_ergodox_pretty_wrapper( \
      KC_GRV,  ________________NUMBER_1_5_________________, KC_COPY,                 KC_PSTE, ________________NUMBER_6_0_________________, KC_SLEP, \
      KC_TAB,  K01,     K02,     K03,     K04,     K05,     KC_MUTE,                 KC_LBRC, K06,     K07,     K08,     K09,     K0A,     KC_BSLS, \
      VIM_ESC, K11,     K12,     K13,     K14,     K15,                                       K16,     K17,     K18,     K19,     K1A,     KC_QUOT, \
      KC_LSPO, K21,     K22,     K23,     K24,     K25,     KC_ADJT,                 KC_RBRC, K26,     K27,     K28,     K29,     K2A,     KC_RSPC, \
      KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT,                                                     KC_DOWN, KC_UP,   KC_MINS, KC_EQL,  KC_RCTL, \
                                                   KC_CAPS, KC_LEAD,                 KC_INS,  KC_DEL, \
                                                            KC_HOME,                 KC_PGUP, \
                                           KC_SPC, KC_BSPC, KC_END,                  KC_PGDN, KC_TAB,  KC_ENT \
    )

#define LAYOUT_ergodox_pretty_base_wrapper(...) LAYOUT_ergodox_pretty_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  | Copy |           | Paste|   6  |   7  |   8  |   9  |   0  | Sleep  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  | Mute |           |  {   |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |  [   |------+------+------+------+------+--------|
 * |  Esc   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  Fn  |           |  }   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |  ]   |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |LCtrl | LGui | LAlt | Left | Right|                                       | Down |  Up  |   -  |   =  | RCtrl |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Caps |Leader|       | Ins  |  Del |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */

[_QWERTY] = LAYOUT_ergodox_pretty_base_wrapper(
  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,
  _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,
  _________________QWERTY_L3_________________, _________________QWERTY_R3_________________
),

/* Colemak Mod-DHm
 *
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  | Copy |           | Paste|   6  |   7  |   8  |   9  |   0  | Sleep  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   F  |   P  |   B  | Mute |           |  {   |   J  |   L  |   U  |   Y  |   ;  |   \    |
 * |--------+------+------+------+------+------|      |           |  [   |------+------+------+------+------+--------|
 * |  Esc   |   A  |   R  |   S  |   T  |   G  |------|           |------|   M  |   N  |   E  |   I  |   O  |   '    |
 * |--------+------+------+------+------+------|  Fn  |           |  }   |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   D  |   V  |      |           |  ]   |   K  |   H  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |LCtrl | LGui | LAlt | Left | Right|                                       | Down |  Up  |   -  |   =  | RCtrl |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Caps |Leader|       | Ins  |  Del |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
[_COLEMAK] = LAYOUT_ergodox_pretty_base_wrapper(
  _____________COLEMAK_MOD_DHm_L1____________, _____________COLEMAK_MOD_DHm_R1____________,
  _____________COLEMAK_MOD_DHm_L2____________, _____________COLEMAK_MOD_DHm_R2____________,
  _____________COLEMAK_MOD_DHm_L3____________, _____________COLEMAK_MOD_DHm_R3____________
),

/* Adjust
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * | EEPRST  |  F1  |  F2  |  F3  |  F4  |  F5  | F11  |           |  F12 |  F6  |  F7  |  F8  |  F9  |  F10 |        |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |  NKRO   |      |      |      |      |      |      |           |      |      |      |  Ue  |      |      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |  Ae  |      |      |VolDn | VolUp|------|           |------|Qwerty|Colemk|  Ee  |  Ie  |  Oe  |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |AuShDn|AuShUp|AuShPr| AuSh |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[_ADJUST] = LAYOUT_ergodox_pretty_wrapper(
       EEP_RST, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,                        KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
       KC_NKRO, __________________BLANK____________________, _______,                       _______, _______, _______, TD_U,    _______, _______, _______, \
       _______, _______, _______, _______, KC_VOLD, KC_VOLU,                                         _____________LAYOUTS_Ee_Ie_Oe______________, _______, \
       _______, TD_A,    __________________BLANK____________________,                       _______, __________________BLANK____________________, _______, \
          __________________BLANK____________________,                                                     ________________AUTO_SHIFT_________________, \
                                                    _______, _______,                       _______, _______, \
                                                             _______,                       _______, \
                                           _______, _______, _______,                       _______, _______, _______ \
),

/* VIM
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|   H  |   J  |   K  |   L  |   ;  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |       |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
[_VIM] = LAYOUT_ergodox_pretty_wrapper(
      XXXXXXX, __________________MASKED___________________, XXXXXXX,                XXXXXXX, __________________MASKED___________________, XXXXXXX, \
      XXXXXXX, __________________MASKED___________________, XXXXXXX,                XXXXXXX, __________________MASKED___________________, XXXXXXX, \
      XXXXXXX, __________________MASKED___________________,                                  _________________QWERTY_R2_________________, XXXXXXX, \
      XXXXXXX, __________________MASKED___________________, XXXXXXX,                XXXXXXX, __________________MASKED___________________, XXXXXXX, \
         __________________MASKED___________________,                                             __________________MASKED___________________,\
                                                    XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, \
                                                             XXXXXXX,               XXXXXXX, \
                                           XXXXXXX, XXXXXXX, XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX \
),
};

// Set LED according to the default layer
void default_layer_led_set(void) {
    switch (biton32(eeconfig_read_default_layer())) {
      case _COLEMAK:
        // LED2 for COLEMAK
        ergodox_right_led_2_on();
        ergodox_right_led_3_off();
        break;
      case _QWERTY:
        // LED3 for QWERTY
        ergodox_right_led_3_on();
        ergodox_right_led_2_off();
        break;
    };
}

/* false: Caps Lock LED is off
   true: Caps Lock LED is on */
bool CAPS_LED = false;

void check_capslock_led(void) {
  if (CAPS_LED) {
    ergodox_right_led_1_on();
  }
}

void matrix_init_keymap(void) {
  default_layer_led_set();
}

uint32_t layer_state_set_keymap(uint32_t state) {
  ergodox_led_all_off();
  switch (biton32(state)) {
    case _ADJUST:
      // Red led on Pro Micro for Fn layer
      ergodox_board_led_on();
      break;
    default:
      ergodox_board_led_off();
      break;
  }

  check_capslock_led();

  default_layer_led_set();

  return state;
}

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_CAPS:
      if (record->event.pressed) {
        // Turn LEDs On/Off for Caps Lock
        if (CAPS_LED) {
          ergodox_right_led_1_off();
          CAPS_LED = false;
        } else {
          ergodox_right_led_1_on();
          CAPS_LED = true;
        }
      }
      return true;
      break;
  }
  return true;
};

void suspend_power_down_keymap(void) {
  ergodox_led_all_off();
};

void suspend_wakeup_init_keymap(void) {
  default_layer_led_set();
  check_capslock_led();
  if (IS_LAYER_ON(_ADJUST)) {
    ergodox_board_led_on();
  }
};
