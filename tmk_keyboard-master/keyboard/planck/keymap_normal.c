


#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP( /* Jack */
  ESC,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,     BSPC,
  TAB,  A,    S,    D,    F,    G,    H,    J,    K,    L,    ENT,   ENT,
  LSFT, Z,    X,    C,    V,    B,    N,    M,   FN1,  FN2,  RALT,   RALT,
  LCTL, LALT,   NO,   NO,   NO,     SPC,      NO,   NO,   NO,   NO,    NO),
[1] = KEYMAP( /* raise  */
    TRNS, F1,   F2,   F3,   F4,   F5,   F6,   F7,   UP,   F9,   F10,   DEL,
    TRNS, COMM, DOT, SCLN,  FN16, FN23, FN24, LEFT, DOWN, RIGHT, FN11,  TRNS,
    TRNS, FN14, LBRC, RBRC, FN28, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS,
    TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,    TRNS, LSFT, RSFT, PAUS,  TRNS),
[2] = KEYMAP( /* lower */
  TRNS, 1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    TRNS,
  TRNS, FN10, FN29, FN22, FN30, FN17, FN15, FN18, FN19, QUOT, FN13, TRNS,
  TRNS, FN20, PAUS, PSCR, GRV,  TRNS, TRNS, PGUP, PGDN, TRNS, TRNS, TRNS,
  TRNS, TRNS, TRNS, TRNS, TRNS,    TRNS,   TRNS,  TRNS, VOLD, MUTE, VOLU),
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [2] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay

    [3] = ACTION_DEFAULT_LAYER_SET(0),
    [4] = ACTION_DEFAULT_LAYER_SET(1),

    [10] = ACTION_MODS_KEY(MOD_LSFT, KC_1),
    [11] = ACTION_MODS_KEY(MOD_LSFT, KC_2),
    [12] = ACTION_MODS_KEY(MOD_LSFT, KC_3),
    [13] = ACTION_MODS_KEY(MOD_LSFT, KC_4),
    [14] = ACTION_MODS_KEY(MOD_LSFT, KC_5),
    [15] = ACTION_MODS_KEY(MOD_LSFT, KC_6),
    [16] = ACTION_MODS_KEY(MOD_LSFT, KC_7),
    [17] = ACTION_MODS_KEY(MOD_LSFT, KC_8),
    [18] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
    [19] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
    [20] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
    [21] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
    [22] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),
    [23] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
    [24] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
    [28] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
    [29] = ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),
    [30] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT)
};
