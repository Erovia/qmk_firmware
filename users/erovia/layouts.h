#pragma once

#define VIM_ESC LT(_VIM, KC_ESC)

#define LAYOUT_ortho_4x12_wrapper(...) LAYOUT_ortho_4x12(__VA_ARGS__)
#define LAYOUT_ergodox_pretty_wrapper(...) LAYOUT_ergodox_pretty(__VA_ARGS__)

#define _________________QWERTY_L1_________________       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________       KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define _____________COLEMAK_MOD_DHm_L1____________       KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define _____________COLEMAK_MOD_DHm_L2____________       KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define _____________COLEMAK_MOD_DHm_L3____________       KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define _____________COLEMAK_MOD_DHm_R1____________       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _____________COLEMAK_MOD_DHm_R2____________       KC_M,    KC_N,    KC_E,    KC_I,    KC_O
#define _____________COLEMAK_MOD_DHm_R3____________       KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH

#define ________________NUMBER_1_5_________________       KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_6_0_________________       KC_6,    KC_7,    KC_8,    KC_9,    KC_0

#define __________________BLANK____________________       _______, _______, _______, _______, _______
#define __________________MASKED___________________       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

#define _____________LAYOUTS_Ee_Ie_Oe______________       QWERTY,  COLEMAK, TD_E,    TD_I,    TD_O

#define ________________AUTO_SHIFT_________________       _______, KC_ASDN, KC_ASUP, KC_ASRP, KC_ASTG
