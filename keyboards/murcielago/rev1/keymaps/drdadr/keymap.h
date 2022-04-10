// based on users/manna-harbour_miryoku/manna-harbour_miryoku.h
#pragma once

#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#if defined MIRYOKU_CLIPBOARD_FUN
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO

#elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)

#elif defined MIRYOKU_CLIPBOARD_WIN
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

#else
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO
#endif

// shorter mod keycodes
#define LGUI_T_A LGUI_T(KC_A)
#define LGUI_T_O LGUI_T(KC_O)
#define LGUI_T_QU LGUI_T(KC_QUOT)

#define LALT_T_R LALT_T(KC_R)
#define LALT_T_I LALT_T(KC_I)
#define LALT_T_S LALT_T(KC_S)
#define LALT_T_L LALT_T(KC_L)

#define LCTL_T_S LCTL_T(KC_S)
#define LCTL_T_E LCTL_T(KC_E)
#define LCTL_T_D LCTL_T(KC_D)
#define LCTL_T_K LCTL_T(KC_K)

#define LSFT_T_T LSFT_T(KC_T)
#define LSFT_T_N LSFT_T(KC_N)
#define LSFT_T_F LSFT_T(KC_F)
#define LSFT_T_J LSFT_T(KC_J)

#define ALGR_T_X ALGR_T(KC_X)
#define ALGR_T_DOT ALGR_T(KC_DOT)


// layer keycodes
#define MED_ESC LT(MEDIA, KC_ESC)
#define NAV_SPC LT(NAV, KC_SPC)
#define MOU_TAB LT(MOUSE, KC_TAB)
#define SYM_ENT LT(SYM, KC_ENT)
#define NUM_BSPC LT(NUM, KC_BSPC)
#define FUN_DEL LT(FUN, KC_DEL)
