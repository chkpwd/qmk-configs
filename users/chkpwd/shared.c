#include QMK_KEYBOARD_H

#include "shared.h"
#include "features/achordion.h"

/* Shared keymaps across all keyboards */
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // Increase tapping term for GUI keys
    case HRMC_A:
    case HRMC_O:
      return TAPPING_TERM + 75;
    // case HRMQ_A:
    case HRMQ_L:
      return TAPPING_TERM + 75;
    default:
      return TAPPING_TERM;
  }
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Bypass Achordion for these keys.
  if (tap_hold_keycode==LTNAV) {
    return true; // consider it held, not tapped
  }

  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  switch (tap_hold_keycode) {
    case LTNAV:
      return 200;  // Bypass Achordion for these keys.
  }

  return 800;  // Otherwise use a timeout of 800 ms.
}
