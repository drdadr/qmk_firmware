// based on users/manna-harbour_miryoku/manna-harbour_miryoku.c
#include "keymap.h"

// enum layers { BASE, MBO, MEDIA, NAV, MOUSE, SYM, NUM, FUN };
enum layers { BASE, MEDIA, NAV, MOUSE, SYM, NUM, FUN };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#if defined MIRYOKU_ALPHAS_QWERTY
[BASE] = LAYOUT(
KC_GRAVE,   KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINUS,
KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_EQUAL,
KC_LSHIFT,  LGUI_T_A,   LALT_T_S,   LCTL_T_D,   LSFT_T_F,   KC_G,                               KC_H,       LSFT_T_J,   LCTL_T_K,   LALT_T_L,   LGUI_T_QU,  KC_LBRACKET,
KC_LCTRL,   KC_Z,       ALGR_T_X,   KC_C,       KC_V,       KC_B,        U_NU,       U_NU,      KC_N,       KC_M,       KC_COMM,    ALGR_T_DOT, KC_SLSH,    KC_RBRACKET,
                        KC_LGUI,    KC_LALT,    MED_ESC,    NAV_SPC,     MOU_TAB,    SYM_ENT,   NUM_BSPC,   FUN_DEL,    KC_RALT,    KC_RGUI
),
#else
[BASE] = LAYOUT(
KC_GRAVE,   KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINUS,
KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,                               KC_J,       KC_L,       KC_U,       KC_Y,       KC_QUOT,    KC_EQUAL,
KC_LSHIFT,  LGUI_T_A,   LALT_T_R,   LCTL_T_S,   LSFT_T_T,   KC_G,                               KC_M,       LSFT_T_N,   LCTL_T_E,   LALT_T_I,   LGUI_T_O,   KC_LBRACKET,
KC_LCTRL,   KC_Z,       ALGR_T_X,   KC_C,       KC_D,       KC_V,        U_NU,       U_NU,      KC_K,       KC_H,       KC_COMM,    ALGR_T_DOT, KC_SLSH,    KC_RBRACKET,
                        KC_LGUI,    KC_LALT,    MED_ESC,    NAV_SPC,     MOU_TAB,    SYM_ENT,   NUM_BSPC,   FUN_DEL,    KC_RALT,    KC_RGUI
),
#endif

[NAV] = LAYOUT(
U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
U_NU,       RESET,      U_NA,       U_NA,       U_NA,       U_NA,                               U_RDO,      U_PST,      U_CPY,      U_CUT,      U_UND,      U_NU,
U_NU,       KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    U_NA,                               KC_CAPS,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    U_NU,
U_NU,       U_NA,       KC_ALGR,    U_NA,       U_NA,       U_NA,       U_NU,       U_NU,       KC_INS,     KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     U_NU,
                        U_NU,       U_NU,       U_NA,       U_NA,       U_NA,       KC_ENT,     KC_BSPC,    KC_DEL,     U_NU,       U_NU
),

[MOUSE] = LAYOUT(
U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
U_NU,       RESET,      U_NA,       U_NA,       U_NA,       U_NA,                               U_RDO,      U_PST,      U_CPY,      U_CUT,      U_UND,      U_NU,
U_NU,       KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    U_NA,                               U_NU,       KC_MS_L,    KC_MS_D,    KC_MS_U,    KC_MS_R,    U_NU,
U_NU,       U_NA,       KC_ALGR,    U_NA,       U_NA,       U_NA,       U_NU,       U_NU,       U_NU,       KC_WH_L,    KC_WH_D,    KC_WH_U,    KC_WH_R,    U_NU,
                        U_NU,       U_NU,       U_NA,       U_NA,       U_NA,       KC_BTN1,    KC_BTN3,    KC_BTN2,    U_NU,       U_NU
),

[MEDIA] = LAYOUT(
U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
U_NU,       RESET,      U_NA,       U_NA,       U_NA,       U_NA,                               RGB_TOG,    RGB_MOD,    RGB_HUI,    RGB_SAI,    RGB_VAI,    U_NU,
U_NU,       KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    U_NA,                               U_NU,       KC_MPRV,    KC_VOLD,    KC_VOLU,    KC_MNXT,    U_NU,
U_NU,       U_NA,       KC_ALGR,    U_NA,       U_NA,       U_NA,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
                        U_NU,       U_NU,       U_NA,       U_NA,       U_NA,       KC_MSTP,    KC_MPLY,    KC_MUTE,    U_NU,       U_NU
),

// [MBO] = LAYOUT(
//
// U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
// U_NU,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    U_NU,
// U_NU,       KC_LGUI,    KC_LALT,    KC_LCTL,    KC_LSFT,    KC_TRNS,                            KC_TRNS,    KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    U_NU,
// U_NU,       U_RDO,      U_PST,      U_CPY,      U_CUT,      U_UND,      U_NU,       U_NU,       U_RDO,      U_PST,      U_CPY,      U_CUT,      U_UND,      U_NU,
//                         U_NU,       U_NU,       KC_BTN2,    KC_BTN3,    KC_BTN1,    KC_BTN1,    KC_BTN3,    KC_BTN2,    U_NU,       U_NU
//
// ),

[NUM] = LAYOUT(
U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
U_NU,       KC_LBRC,    KC_7,       KC_8,       KC_9,       KC_RBRC,                            U_NA,       U_NA,       U_NA,       U_NA,       RESET,      U_NU,
U_NU,       KC_SCLN,    KC_4,       KC_5,       KC_6,       KC_EQL,                             U_NA,       KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    U_NU,
U_NU,       KC_GRV,     KC_1,       KC_2,       KC_3,       KC_BSLS,    U_NU,       U_NU,       U_NA,       U_NA,       U_NA,       KC_ALGR,    U_NA,       U_NU,
                        U_NU,       U_NU,       KC_DOT,     KC_0,       KC_MINS,    U_NA,       U_NA,       U_NA,       U_NU,       U_NU
),

[SYM] = LAYOUT(
U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
U_NU,       KC_LCBR,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RCBR,                            U_NA,       U_NA,       U_NA,       U_NA,       RESET,      U_NU,
U_NU,       KC_COLN,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_PLUS,                            U_NA,       KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    U_NU,
U_NU,       KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_PIPE,    U_NU,       U_NU,       U_NA,       U_NA,       U_NA,       KC_ALGR,    U_NA,       U_NU,
                        U_NU,       U_NU,       KC_LPRN,    KC_RPRN,    KC_UNDS,    U_NA,       U_NA,       U_NA,       U_NU,       U_NU
),

[FUN] = LAYOUT(
U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,                               U_NU,       U_NU,       U_NU,       U_NU,       U_NU,       U_NU,
U_NU,       KC_F12,     KC_F7,      KC_F8,      KC_F9,      KC_PSCR,                            U_NA,       U_NA,       U_NA,       U_NA,       RESET,      U_NU,
U_NU,       KC_F11,     KC_F4,      KC_F5,      KC_F6,      KC_SLCK,                            U_NA,       KC_LSFT,    KC_LCTL,    KC_LALT,    KC_LGUI,    U_NU,
U_NU,       KC_F10,     KC_F1,      KC_F2,      KC_F3,      KC_PAUS,    U_NU,       U_NU,       U_NA,       U_NA,       U_NA,       KC_ALGR,    U_NA,       U_NU,
                        U_NU,       U_NU,       KC_APP,     KC_SPC,     KC_TAB,     U_NA,       U_NA,       U_NA,       U_NU,       U_NU
)

};
