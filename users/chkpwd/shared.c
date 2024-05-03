#include QMK_KEYBOARD_H

#include "shared.h"
#include "features/achordion.h"

/* Shared functions across all keyboards */
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }

    // switch (keycode) {
    //     case LT(_UTILS,KC_RCTL):
    //         if (record->tap.count && record->event.pressed) {
    //             tap_code16(KC_A);
    //         } else if (record->event.pressed) {
    //             layer_on(_UTILS);
    //             break;
    //         }
    //         return false;
    // }

    return true;
}

void matrix_scan_user(void) {
    achordion_task();
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
    case LTNUM:
      return 200;  // Bypass Achordion for these keys.
  }

  return 800;  // Otherwise use a timeout of 800 ms.
}

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
