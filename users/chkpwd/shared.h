#pragma once // prevent multiple inclusions in different places from causing naming collisions with itself

enum layer_names {
    _COLEMAK,
    _NUMSYM,
    _MED,
    _NAV,
    _PNT,
    _UTILS,
};

/* Modifier Keys*/
#define C_HYPR HYPR_T(KC_CAPS)

/* Colemak home row mods */
// Left Hand
#define HRMC_A LGUI_T(KC_A)
#define HRMC_R LALT_T(KC_R)
#define HRMC_S LCTL_T(KC_S)
#define HRMC_T LSFT_T(KC_T)

// Right Hand
#define HRMC_N RSFT_T(KC_N)
#define HRMC_E RCTL_T(KC_E)
#define HRMC_I LALT_T(KC_I)
#define HRMC_O RGUI_T(KC_O)

/* Custom Layers vars */
#define LTMED LT(_MED, KC_LGUI)
#define LTNAV LT(_NAV, KC_SPC)
#define LTNUM LT(_NUMSYM, KC_BSPC)
#define LTPNT LT(_PNT, KC_ENT)
#define LTUTILS LT(_UTILS, KC_RCTL)

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64
