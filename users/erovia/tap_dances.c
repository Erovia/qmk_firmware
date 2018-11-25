#include "tap_dances.h"

void tap_dance_a_finished(qk_tap_dance_state_t *state, void *user_data) {
  switch(state->count) {
    case 1: send_unicode_hex_string(ae); break;
    case 2: send_unicode_hex_string(AE); break;
  }
}

void tap_dance_e_finished(qk_tap_dance_state_t *state, void *user_data) {
  switch(state->count) {
    case 1: send_unicode_hex_string(ee); break;
    case 2: send_unicode_hex_string(EE); break;
  }
}

void tap_dance_i_finished(qk_tap_dance_state_t *state, void *user_data) {
  switch(state->count) {
    case 1: send_unicode_hex_string(ie); break;
    case 2: send_unicode_hex_string(IE); break;
  }
}

void tap_dance_u_finished(qk_tap_dance_state_t *state, void *user_data) {
  switch(state->count) {
    case 1: send_unicode_hex_string(ue); break;
    case 2: send_unicode_hex_string(UE); break;
    case 3: send_unicode_hex_string(uee); break;
    case 4: send_unicode_hex_string(UEE); break;
  }
}

void tap_dance_o_finished(qk_tap_dance_state_t *state, void *user_data) {
  switch(state->count) {
    case 1: send_unicode_hex_string(oe); break;
    case 2: send_unicode_hex_string(OE); break;
    case 3: send_unicode_hex_string(oee); break;
    case 4: send_unicode_hex_string(OEE); break;
    case 5: send_unicode_hex_string(oeee); break;
    case 6: send_unicode_hex_string(OEEE); break;
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_SPACE_CADET_SHIFT] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_LPRN),
  [TD_SPACE_CADET_ENTER] = ACTION_TAP_DANCE_DOUBLE(KC_ENT, KC_RPRN),
  [TD_AE] = ACTION_TAP_DANCE_FN(tap_dance_a_finished),
  [TD_EE] = ACTION_TAP_DANCE_FN(tap_dance_e_finished),
  [TD_IE] = ACTION_TAP_DANCE_FN(tap_dance_i_finished),
  [TD_UE] = ACTION_TAP_DANCE_FN(tap_dance_u_finished),
  [TD_OE] = ACTION_TAP_DANCE_FN(tap_dance_o_finished)
};
