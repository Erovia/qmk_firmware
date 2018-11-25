#include QMK_KEYBOARD_H
#include "erovia.h"

#define LAYOUT_ortho_4x12_base( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A  \
  ) \
  LAYOUT_ortho_4x12_wrapper( \
    KC_GRV,  K01,     K02,     K03,     K04,   K05,    K06,    K07,   K08,     K09,     K0A,   KC_BSPC, \
    VIM_ESC, K11,     K12,     K13,     K14,   K15,    K16,    K17,   K18,     K19,     K1A,   KC_QUOT, \
    TD_SHFT, K21,     K22,     K23,     K24,   K25,    K26,    K27,   K28,     K29,     K2A,   TD_ENTR, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_BTN3, LOWER, KC_TAB, KC_SPC, RAISE, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT \
  )

#define LAYOUT_ortho_4x12_base_wrapper(...) LAYOUT_ortho_4x12_base(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | `    |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  |MBTN3 |Lower | Tab  |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12_base_wrapper(
  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________,
  _________________QWERTY_L2_________________, _________________QWERTY_R2_________________,
  _________________QWERTY_L3_________________, _________________QWERTY_R3_________________
),

/* Colemak Mod-DHm
 * ,-----------------------------------------------------------------------------------.
 * | `    |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  |MBTN3 |Lower | Tab  |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_ortho_4x12_base_wrapper(
  _____________COLEMAK_MOD_DHm_L1____________, _____________COLEMAK_MOD_DHm_R1____________,
  _____________COLEMAK_MOD_DHm_L2____________, _____________COLEMAK_MOD_DHm_R2____________,
  _____________COLEMAK_MOD_DHm_L3____________, _____________COLEMAK_MOD_DHm_R3____________
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      | Vol- | Vol+ | Mute |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12_wrapper(
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_HOME, KC_END,  _______,
  _______, _______, _______, __________________BLANK____________________, _______, KC_VOLD, KC_VOLU, KC_MUTE
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ins  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |      |      |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |Leader|      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12_wrapper(
  KC_GRV,  ________________NUMBER_1_5_________________, ________________NUMBER_6_0_________________, KC_BSPC,
  KC_INS,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_PGUP, KC_PGDN, _______,
  _______, _______, _______, KC_LEAD, __________________BLANK____________________, _______, _______, _______
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |EEPRST|RESET |      |      |      |      |      |      |  Ue  |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  Ae  |      |      |      |      |Qwerty|Colemk|  Ee  |  Ie  |  Oe  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |RGBVaD|RGBTog|RGBVaI|      |      |             |      |AuShDn|AuShUp|AuShPr| AuSh |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_ortho_4x12_wrapper(
  EEP_RST, RESET,   _______, __________________BLANK____________________, TD_U,    _______, _______, _______,
  _______, TD_A   , _______, _______, _______, _______, QWERTY,  COLEMAK, TD_E,    TD_I,    TD_O,    _______,
  _______, __________________BLANK____________________, __________________BLANK____________________, _______,
  RGB_VAD, RGB_TOG, RGB_VAI, __________________BLANK____________________, KC_ASDN, KC_ASUP, KC_ASRP, KC_ASTG
),

/* VIM
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |  H   |  J   |  K   |  L   |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_VIM] = LAYOUT_ortho_4x12_wrapper(
  XXXXXXX, __________________MASKED___________________, __________________MASKED___________________, XXXXXXX,
  XXXXXXX, __________________MASKED___________________, _________________QWERTY_R2_________________, XXXXXXX,
  XXXXXXX, __________________MASKED___________________, __________________MASKED___________________, XXXXXXX,
  XXXXXXX, __________________MASKED___________________, __________________MASKED___________________, XXXXXXX
)
};

bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
  }
  return true;
}

#ifdef RGBLIGHT_ENABLE
const uint8_t RGBLED_KNIGHT_INTERVALS[] PROGMEM = {60, 30, 15};

uint32_t layer_state_set_keymap(uint32_t state) {
  switch (biton32(state)) {
    case _LOWER:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_master(0, 255, 255);
      rgblight_sethsv_slave(0, 0 ,0);
      break;
    case _RAISE:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_master(0, 0 ,0);
      rgblight_sethsv_slave(39, 255, 255);
      break;
    case _ADJUST:
      rgblight_sethsv_noeeprom_pink();
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      break;
    case _VIM:
      rgblight_sethsv_noeeprom_green();
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      break;
    default:
      rgblight_sethsv_noeeprom_cyan();
      rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT);
      break;
  }
  return state;
}
#endif
