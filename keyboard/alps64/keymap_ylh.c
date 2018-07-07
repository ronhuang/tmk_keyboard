#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Bspc   |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * |Ctrl |Alt |Gui  |       Space            |Gui   |App |Fn0  |
     * `-----------------------------------------------------------'
     */
    [0] = KEYMAP_AEK( \
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT, \
        FN0 ,LALT,LGUI,          SPC,                          RGUI,APP, FN0),

    /* HHKB mode
     * ,-----------------------------------------------------------.
     * |Grv| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins    |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
     * |-----------------------------------------------------------|
     * |Caps  |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift     |
     * |-----------------------------------------------------------|
     * |     |    |     |                        |      |    |     |
     * `-----------------------------------------------------------'
     */ 
    [1] = KEYMAP_AEK( \
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,TRNS, \
        CAPS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,           \
        TRNS,TRNS,TRNS,          TRNS,                         TRNS,FN1 ,TRNS),

    /* Arrow mode
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |Up |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |Lef|Rig|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |Dow|          |
     * |-----------------------------------------------------------|
     * |     |    |     |                        |      |    |     |
     * `-----------------------------------------------------------'
     */
    [2] = KEYMAP_AEK( \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,RGHT,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DOWN,TRNS,           \
        TRNS,TRNS,TRNS,          TRNS,                         TRNS,TRNS,TRNS),
};

const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2),
};
