#include QMK_KEYBOARD_H

#include "chkpwd.h"
#include "features/achordion.h"

// Determine the current tap dance state
td_state_t cur_dance(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (!state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) return TD_DOUBLE_TAP;
    else return TD_UNKNOWN;
}

// Initialize tap structure associated with example tap dance key
static td_tap_t ql_tap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

// Functions that control what our tap dance key does
void ql_finished(tap_dance_state_t *state, void *user_data) {
    ql_tap_state.state = cur_dance(state);
    switch (ql_tap_state.state) {
        case TD_SINGLE_TAP:
            tap_code(KC_MPLY);
            break;
        case TD_SINGLE_HOLD:
            tap_code(KC_MUTE);
            break;
        case TD_DOUBLE_TAP:
            tap_code(KC_MNXT);
            break;
        default:
            break;
    }
}

void ql_reset(tap_dance_state_t *state, void *user_data) {
    // If the key was held down and now is released then switch off the layer
    if (ql_tap_state.state == TD_SINGLE_HOLD) {
        tap_code(KC_MUTE);
    }
    ql_tap_state.state = TD_NONE;
}

// Associate our tap dance key with its functionality
tap_dance_action_t tap_dance_actions[] = {
    [_MED] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ql_finished, ql_reset)
};

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
  if (tap_hold_keycode==LTNAV || tap_hold_keycode==LTNUM) {
    return true; // consider it held, not tapped
  }

  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  switch (tap_hold_keycode) {
    case LTNUM:
    case LTPNT:
    case KC_CAPS:
      return 200;  // Bypass Achordion for these keys.
  }

  return 800;  // Otherwise use a timeout of 800 ms.
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // Increase tapping term for GUI keys
    case HRMC_A:
    case HRMC_O:
    case KC_CAPS:
      return TAPPING_TERM + 75;
    default:
      return TAPPING_TERM;
  }
}
