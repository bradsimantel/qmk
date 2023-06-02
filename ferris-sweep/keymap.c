#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,          KC_W,          KC_E,           KC_R,           KC_T,    KC_Y,    KC_U,           KC_I,         KC_O,           KC_P,
        CTL_T(KC_A),   ALT_T(KC_S),   GUI_T(KC_D),    SFT_T(KC_F),    KC_G,    KC_H,    SFT_T(KC_J),    GUI_T(KC_K),  ALT_T(KC_L),    CTL_T(KC_QUOT),
        KC_Z,          KC_X,          KC_C,           KC_V,           KC_B,    KC_N,    KC_M,           KC_COMM,      KC_DOT,         KC_SLSH, 
        KC_TAB,        LT(1,KC_BSPC), LT(1,KC_SPC),   KC_ENT
    ),
    [1] = LAYOUT(
        KC_1,          KC_2,          KC_3,           KC_4,           KC_5,    KC_6,    KC_7,           KC_8,         KC_9,           KC_0,
        CTL_T(KC_GRV), KC_TRNS,       GUI_T(KC_VOLU), SFT_T(KC_VOLD), KC_TRNS, KC_LEFT, SFT_T(KC_DOWN), GUI_T(KC_UP), ALT_T(KC_RGHT), CTL_T(KC_SCLN),
        KC_TRNS,       KC_TRNS,       KC_TRNS,        KC_TRNS,        KC_TRNS, KC_MINS, KC_EQL,         KC_LBRC,      KC_RBRC,        KC_BSLS,
        KC_ESC,        KC_TRNS,       KC_TRNS,        KC_ESC
    )
};