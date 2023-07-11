#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_ansi(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, LT(5,KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP), KC_LCTL, KC_LALT, KC_LGUI, LT(5,KC_SPC), KC_RGUI, RALT_T(KC_LEFT), RCTL_T(KC_DOWN), LT(6,KC_RGHT)),
	[1] = LAYOUT_60_ansi(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_D, KC_R, KC_W, KC_B, KC_J, KC_F, KC_U, KC_P, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_H, KC_T, KC_G, KC_Y, KC_N, KC_E, KC_O, KC_I, KC_TRNS, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_M, KC_C, KC_V, KC_K, KC_L, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_60_ansi(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_QUOT, KC_COMM, KC_DOT, KC_TRNS, KC_Y, KC_F, KC_G, KC_C, KC_L, KC_R, KC_QUES, KC_PLUS, KC_TRNS, KC_TRNS, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_TRNS, KC_TRNS, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_60_ansi(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_TRNS, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_60_ansi(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_S, KC_C, KC_P, KC_Q, KC_J, KC_F, KC_B, KC_E, KC_U, KC_O, KC_LBRC, KC_RBRC, KC_BSLS, LT(4,KC_CAPS), KC_V, KC_A, KC_N, KC_K, KC_T, KC_M, KC_J, KC_L, KC_I, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_W, KC_D, KC_R, KC_X, KC_Y, KC_H, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP), KC_LCTL, KC_LALT, KC_LGUI, LT(4,KC_SPC), KC_RGUI, RALT_T(KC_LEFT), RCTL_T(KC_DOWN), LT(5,KC_RGHT)),
	[5] = LAYOUT_60_ansi(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TRNS, KC_WH_D, KC_MS_U, KC_WH_U, KC_BTN2, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END, KC_PSCR, KC_HOME, KC_END, KC_VOLU, KC_ESC, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_PGDN, KC_PGUP, KC_VOLD, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN3, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_DEL, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_60_ansi(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, KC_NO, DF(0), DF(1), KC_NO, DF(2), KC_NO, KC_NO, KC_PSCR, KC_SCRL, KC_PAUS, RGB_VAD, RGB_VAI, RGB_RMOD, RGB_MOD, RGB_HUI, KC_MPLY, KC_MPRV, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_INS, KC_HOME, KC_PGUP, RGB_SPD, RGB_SPI, KC_TRNS, KC_LSFT, KC_NO, DF(4), DF(3), KC_NO, KC_NO, KC_NO, KC_DEL, KC_END, KC_PGDN, KC_UP, KC_NO, KC_NO, AG_NORM, AG_SWAP, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, LT(6,KC_RGHT))
};


