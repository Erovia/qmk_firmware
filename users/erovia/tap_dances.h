#pragma once
#include "erovia.h"

enum tap_dances{
  TD_SPACE_CADET_SHIFT = 0,
  TD_SPACE_CADET_ENTER,
  TD_AE,
  TD_EE,
  TD_IE,
  TD_UE,
  TD_OE
};

#define ae "00E1"  // á
#define AE "00C1"  // Á
void tap_dance_a_finished(qk_tap_dance_state_t*, void*);

#define ee "00E9"  // é
#define EE "00C9"  // É
void tap_dance_e_finished(qk_tap_dance_state_t*, void*);

#define ie "00ED"  // í
#define IE "00CD"  // Í
void tap_dance_i_finished(qk_tap_dance_state_t*, void*);

#define ue  "00FC" // ü
#define UE  "00DC" // Ü
#define uee "0171" // ű
#define UEE "0170" // Ű
void tap_dance_u_finished(qk_tap_dance_state_t*, void*);

#define oe   "00F3" // ó
#define OE   "00D3" // Ó
#define oee  "00F6" // ö
#define OEE  "00D6" // Ö
#define oeee "0151" // ő
#define OEEE "0150" // Ő
void tap_dance_o_finished(qk_tap_dance_state_t*, void*);

#define TD_SHFT TD(TD_SPACE_CADET_SHIFT)
#define TD_ENTR TD(TD_SPACE_CADET_ENTER)
#define TD_A TD(TD_AE)
#define TD_E TD(TD_EE)
#define TD_I TD(TD_IE)
#define TD_U TD(TD_UE)
#define TD_O TD(TD_OE)
