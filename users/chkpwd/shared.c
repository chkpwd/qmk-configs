#include QMK_KEYBOARD_H

#include "shared.h"

/* Shared keymaps across all keyboards */
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Increase tapping term for these keys
        case HRMC_A:
            return TAPPING_TERM + 10000;
        case HRMC_O:
            return TAPPING_TERM + 10000;
        // case HRMQ_A:
        //     return TAPPING_TERM + 75;
        // case HRMQ_L:
        //     return TAPPING_TERM + 75;
        default:
            return TAPPING_TERM;
    }
}
