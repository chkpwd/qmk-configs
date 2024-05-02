#include QMK_KEYBOARD_H

#include "shared.h"

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Increase tapping term for these keys
        case HRMC_A: // #define HRMQ_A LGUI_T(KC_A)
            return 10000;
        case HRMC_O:
            return TAPPING_TERM + 75;
        default:
            return TAPPING_TERM;
    }
}
