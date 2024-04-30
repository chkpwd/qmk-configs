// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _NUM,
    _SYM,
    _NAV
};

/* QMK */
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT /* for rolling on mod-tap keys */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ F │ P │ B │       │ J │ L │ U │ Y │ ; │Esc│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ R │ S │ T │ G │       │ M │ N │ E │ I │ O │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ D │ V │       │ K │ H │ , │ . │ / │ \ │
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
    */
    [_BASE] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,  KC_W, KC_F, KC_P, KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_ESC,
        KC_LBRC, KC_A,  KC_R, KC_S, KC_T, KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_RBRC, KC_Z,  KC_X, KC_C, KC_D, KC_V,                               KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                        LT1(KC_LGUI), LT2(KC_SPACE), KC_LSHIFT,    KC_RCTRL,  LT3(KC_BSPACE), LT4(KC_ENTER)
    ),

    [_NUM] = LAYOUT_split_3x6_3(
      _______, KC_1, KC_7, KC_8, KC_9, KC_MINS,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
      _______, KC_0, KC_4, KC_5, KC_6, KC_EQL,                                XXXXXXX, _______, _______, _______, _______, _______,
      _______, KC_0, KC_1, KC_2, KC_3, KC_4,                                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                          _______, _______,     _______,           _______,  _______, _______
    )
};
