#include QMK_KEYBOARD_H

#include "shared.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT_split_3x6_3( // Colemak layer
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,   KC_L,    KC_U,   KC_Y, KC_SCLN, QK_GESC,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_LBRC, HRMC_A,  HRMC_R,  HRMC_S,  HRMC_T,    KC_G,                         KC_M, HRMC_N,  HRMC_E, HRMC_I,  HRMC_O, KC_QUOT,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_RBRC,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,   KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
  //|--------------------------------------------------------------|  |--------------------------------------------------------------|
                                          LTMED,   LTNAV,  KC_LSFT,    LTUTILS,   LTNUM, LTPNT
                                      //`--------------------------'  `--------------------------'
  ),

  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,   KC_O,    KC_P, KC_BSPC,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_LBRC, HRMQ_A,  HRMQ_S,  HRMQ_D,  HRMQ_F,    KC_G,                         KC_H,  HRMQ_J,  HRMQ_K, HRMQ_L, KC_SCLN, KC_QUOT,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      KC_RBRC,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MINS,
  //|--------------------------------------------------------------|  |--------------------------------------------------------------|
                                          LTMED,   LTNAV,  KC_LSFT,     KC_RCTL,   LTNUM, LTPNT
                                      //`--------------------------'  `--------------------------'
  ),

  [_MED] = LAYOUT_split_3x6_3(  // media layer
  //,-----------------------------------------------------.                  ,-----------------------------------------------------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|-----------------------------------------------------|                  |-----------------------------------------------------|
    XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,                     XXXXXXX, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPRV, XXXXXXX,
  //|-----------------------------------------------------|                  |-----------------------------------------------------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------------------------------------------------------------|  |------------------------------------------------------------|
                                          _______, _______, _______,    KC_MPLY, KC_MSTP, KC_MUTE
                                      //`--------------------------'  `--------------------------'
  ),

  [_NAV] = LAYOUT_split_3x6_3(  // navigation layer
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PSCR, KC_COPY, KC_CUT,  KC_PSTE, KC_UNDO, _______,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     XXXXXXX, _______, _______, _______, _______, XXXXXXX,                      KC_CAPS, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
  //|--------------------------------------------------------------|  |--------------------------------------------------------------|
                                          _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUMSYM] = LAYOUT_split_3x6_3(  // number - symbols layer
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_BSPC, KC_SLSH,  KC_P7,  KC_P8,  KC_P9, KC_MINS,                        KC_GRV,   KC_AT, KC_AMPR, KC_LPRN, KC_RPRN, KC_PAST,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
       KC_ENT,    KC_0,  KC_P4,  KC_P5,  KC_P6, KC_PPLS,                       KC_TILD, KC_PIPE,  KC_DLR, KC_LBRC, KC_RBRC, KC_HASH,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      _______, KC_PDOT,  KC_P1,  KC_P2,  KC_P3, KC_UNDS,                        KC_EQL, KC_EXLM, KC_PERC, KC_LCBR, KC_RCBR, KC_CIRC,
  //|--------------------------------------------------------------|  |--------------------------------------------------------------|
                                         XXXXXXX,  XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_PNT] = LAYOUT_split_3x6_3(  // mouse layer
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PSCR, KC_COPY,  KC_CUT, KC_PSTE, KC_UNDO, _______,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     XXXXXXX, _______, _______, _______, _______, XXXXXXX,                      XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
  //|--------------------------------------------------------------|  |--------------------------------------------------------------|
                                          KC_WH_D, KC_BTN2, KC_BTN1,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),


  [_UTILS] = LAYOUT_split_3x6_3(  // utilities layer
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX,                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      XXXXXXX, KC_F5,  KC_F6,  KC_F7,  KC_F8, XXXXXXX,                          XXXXXXX, XXXXXXX, DT_DOWN,   DT_UP, KC_MS_R, XXXXXXX,
  //|-----------------------------------------------------|                    |-----------------------------------------------------|
      XXXXXXX, KC_F1,  KC_F2,  KC_F3,  KC_F4, XXXXXXX,                          XXXXXXX, QK_MAKE, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------------------------------------------------------------|  |--------------------------------------------------------------|
                                         XXXXXXX, XXXXXXX, DT_PRNT,    XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};
