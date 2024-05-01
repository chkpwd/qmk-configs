#pragma once // prevent multiple inclusions in different places from causing naming collisions with itself

enum layer_names {
    _COLEMAK,
    _QWERTY,
    _MED,
    _NAV,
    _NUM,
    //_SYM,
    _PNT
};

/* Colemak home row mods */
#define CK_A MT(MOD_LGUI, KC_A)
#define CK_R MT(MOD_LALT, KC_R)
#define CK_S MT(MOD_LCTL, KC_S)
#define CK_T MT(MOD_LSFT, KC_T)
#define CK_N MT(MOD_RSFT, KC_N)
#define CK_E MT(MOD_RCTL, KC_E)
#define CK_I MT(MOD_LALT, KC_I)
#define CK_O MT(MOD_RGUI, KC_O)

/* Qwerty home row mods */
#define CKQ_A MT(MOD_LGUI, KC_A)
#define CKQ_S MT(MOD_LALT, KC_S)
#define CKQ_D MT(MOD_LCTL, KC_D)
#define CKQ_F MT(MOD_LSFT, KC_F)
#define CKQ_H MT(MOD_RSFT, KC_H)
#define CKQ_J MT(MOD_RCTL, KC_J)
#define CKQ_K MT(MOD_LALT, KC_K)
#define CKQ_L MT(MOD_RGUI, KC_L)

/* Custom Layers vars */
#define CKMED LT(_MED, KC_LGUI)
#define CKNAV LT(_NAV, KC_SPC)
//#define CKSYM LT(_SYM, KC_R)
#define CKNUM LT(_NUM, KC_BSPC)
#define CKPNT LT(_PNT, KC_ENT)
