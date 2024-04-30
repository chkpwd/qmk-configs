enum layer_names {
    _COLEMAK,
    _MED,
    _NAV,
    _NUM,
    //_SYM,
    _PNT
};

/* Colemak home row mods */
#define CK_A LGUI_T(KC_A)
#define CK_R LALT_T(KC_R)
#define CK_S LCTL_T(KC_S)
#define CK_T LSFT_T(KC_T)
#define CK_N RSFT_T(KC_N)
#define CK_E RCTL_T(KC_E)
#define CK_I LALT_T(KC_I)
#define CK_O RGUI_T(KC_O)

/* Custom Layers vars */
#define CKMED LT(_NUM, KC_LGUI)
#define CKNAV LT(_NAV, KC_SPC)
//#define CKSYM LT(_SYM, KC_R)
#define CKNUM LT(_NUM, KC_BSPC)
#define CKPNT LT(_PNT, KC_ENT)
