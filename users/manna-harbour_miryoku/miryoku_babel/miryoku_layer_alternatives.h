// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define HOME_A KC_A
#define HOME_O KC_O
#define HOME_E KC_E
#define HOME_U LSFT_T(KC_U)
#define HOME_H LSFT_T(KC_H)
#define HOME_T KC_T
#define HOME_N KC_N
#define HOME_S KC_S
#define LTHUMB_IN LCTL_T(KC_ESC)
#define LTHUMB_MID LT(U_NAV, KC_SPC)
#define LTHUMB_OUT LT(U_MEDIA, KC_TAB)
#define RTHUMB_OUT LT(U_SYM, KC_ENT)
#define RTHUMB_MID LT(U_NUM, KC_BSPC)
#define RTHUMB_IN LCTL_T(KC_DEL)
#define LBTN_LYR LT(U_BUTTON, KC_SCLN)
#define RBTN_LYR LT(U_BUTTON, KC_Z)

#define BASE_DVORAK \
KC_QUOT      , KC_COMM        , KC_DOT        , KC_P            , KC_Y      , KC_F      , KC_G           , KC_C            , KC_R           , KC_L           , \
HOME_A       , HOME_O         , HOME_E        , HOME_U          , KC_I      , KC_D      , HOME_H         , HOME_T          , HOME_N         , HOME_S         , \
LBTN_LYR     , KC_Q           , KC_J          , KC_K            , KC_X      , KC_B      , KC_M           , KC_W            , KC_V           , RBTN_LYR       , \
U_NP         , U_NP           , LTHUMB_IN     , LTHUMB_MID      , LTHUMB_OUT, RTHUMB_OUT, RTHUMB_MID     , RTHUMB_IN       , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
KC_Q         , KC_W           , KC_E          , KC_R            , KC_T      , KC_Y      , KC_U           , KC_I            , KC_O           , KC_P           , \
LGUI_T(KC_A) , LALT_T(KC_S)   , LCTL_T(KC_D)  , LSFT_T(KC_F)    , KC_G      , KC_H      , LSFT_T(KC_J)   , LCTL_T(KC_K)    , LALT_T(KC_L)   , LGUI_T(KC_QUOT), \
LT(U_BUTTON  , KC_Z)          , KC_X          , KC_C            , KC_V      , KC_B      , KC_N           , KC_M            , KC_COMM        , KC_DOT         , LT(U_BUTTON,KC_SLSH) , \
U_NP         , U_NP           , LT(U_MEDIA    , KC_ESC)         , LT(U_NAV  , KC_SPC)   , LT(U_MOUSE     , KC_TAB)         , LT(U_SYM       , KC_ENT)        , LT(U_NUM   , KC_BSPC), LT(U_FUN,KC_DEL), U_NP, U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
KC_Q         , KC_W           , KC_E          , KC_R            , KC_T      , KC_Y      , KC_U           , KC_I            , KC_O           , KC_P           , \
KC_A         , KC_S           , KC_D          , KC_F            , KC_G      , KC_H      , KC_J           , KC_K            , KC_L           , KC_QUOT        , \
KC_Z         , KC_X           , KC_C          , KC_V            , KC_B      , KC_N      , KC_M           , KC_COMM         , KC_DOT         , KC_SLSH        , \
U_NP         , U_NP           , KC_ESC        , KC_SPC          , KC_TAB    , KC_ENT    , KC_BSPC        , KC_DEL          , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
TD(U_TD_BOOT), TD(U_TD_REBOOT), TD(U_TD_U_TAP), TD(U_TD_U_BASE) , U_NA      , KC_INS    , KC_HOME        , KC_UP           , KC_END         , KC_PGUP        , \
KC_LGUI      , KC_LALT        , KC_LCTL       , KC_LSFT         , U_NA      , CW_TOGG   , KC_LEFT        , KC_DOWN         , KC_RGHT        , KC_PGDN        , \
U_NA         , KC_ALGR        , TD(U_TD_U_NUM), TD(U_TD_U_NAV)  , U_NA      , U_RDO     , U_PST          , U_CPY           , U_CUT          , U_UND          , \
U_NP         , U_NP           , U_NA          , U_NA            , U_NA      , KC_ENT    , KC_BSPC        , KC_DEL          , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
TD(U_TD_BOOT), TD(U_TD_REBOOT), TD(U_TD_U_TAP), TD(U_TD_U_BASE) , U_NA      , U_NU      , KC_WH_L        , KC_MS_U         , KC_WH_R        , KC_WH_U        , \
KC_LGUI      , KC_LALT        , KC_LCTL       , KC_LSFT         , U_NA      , U_NU      , KC_MS_L        , KC_MS_D         , KC_MS_R        , KC_WH_D        , \
U_NA         , KC_ALGR        , TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA      , U_RDO     , U_PST          , U_CPY           , U_CUT          , U_UND          , \
U_NP         , U_NP           , U_NA          , U_NA            , U_NA      , KC_BTN2   , KC_BTN1        , KC_BTN3         , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
TD(U_TD_BOOT), TD(U_TD_REBOOT), TD(U_TD_U_TAP), TD(U_TD_U_BASE) , U_NA      , RGB_TOG   , RGB_MOD        , KC_VOLU         , RGB_HUI        , RGB_SAI        , \
KC_LGUI      , KC_LALT        , KC_LCTL       , KC_LSFT         , U_NA      , U_NU      , KC_MPRV        , KC_VOLD         , KC_MNXT        , RGB_VAI        , \
U_NA         , KC_ALGR        , TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), U_NA      , OU_AUTO   , U_NU           , U_NU            , U_NU           , U_NU           , \
U_NP         , U_NP           , U_NA          , U_NA            , U_NA      , KC_MSTP   , KC_MPLY        , KC_MUTE         , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_NUM \
KC_LBRC      , KC_7           , KC_8          , KC_9            , KC_RBRC   , U_NA      , TD(U_TD_U_BASE), TD(U_TD_U_TAP)  , TD(U_TD_REBOOT), TD(U_TD_BOOT)  , \
KC_SCLN      , KC_4           , KC_5          , KC_6            , KC_EQL    , U_NA      , KC_LSFT        , KC_LCTL         , KC_LALT        , KC_LGUI        , \
KC_GRV       , KC_1           , KC_2          , KC_3            , KC_BSLS   , U_NA      , TD(U_TD_U_NUM) , TD(U_TD_U_NAV)  , KC_ALGR        , U_NA           , \
U_NP         , U_NP           , KC_DOT        , KC_0            , KC_MINS   , U_NA      , U_NA           , U_NA            , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_SYM \
KC_LCBR      , KC_AMPR        , KC_ASTR       , KC_LPRN         , KC_RCBR   , U_NA      , TD(U_TD_U_BASE), TD(U_TD_U_TAP)  , TD(U_TD_REBOOT), TD(U_TD_BOOT)  , \
KC_COLN      , KC_DLR         , KC_PERC       , KC_CIRC         , KC_PLUS   , U_NA      , KC_LSFT        , KC_LCTL         , KC_LALT        , KC_LGUI        , \
KC_TILD      , KC_EXLM        , KC_AT         , KC_HASH         , KC_PIPE   , U_NA      , TD(U_TD_U_SYM) , TD(U_TD_U_MOUSE), KC_ALGR        , U_NA           , \
U_NP         , U_NP           , KC_LPRN       , KC_RPRN         , KC_UNDS   , U_NA      , U_NA           , U_NA            , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_FUN \
KC_F12       , KC_F7          , KC_F8         , KC_F9           , KC_PSCR   , U_NA      , TD(U_TD_U_BASE), TD(U_TD_U_TAP)  , TD(U_TD_REBOOT), TD(U_TD_BOOT)  , \
KC_F11       , KC_F4          , KC_F5         , KC_F6           , KC_SCRL   , U_NA      , KC_LSFT        , KC_LCTL         , KC_LALT        , KC_LGUI        , \
KC_F10       , KC_F1          , KC_F2         , KC_F3           , KC_PAUS   , U_NA      , TD(U_TD_U_FUN) , TD(U_TD_U_MEDIA), KC_ALGR        , U_NA           , \
U_NP         , U_NP           , KC_APP        , KC_SPC          , KC_TAB    , U_NA      , U_NA           , U_NA            , U_NP           , U_NP

#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND        , U_CUT          , U_CPY         , U_PST           , U_RDO     , U_RDO     , U_PST          , U_CPY           , U_CUT          , U_UND          , \
KC_LGUI      , KC_LALT        , KC_LCTL       , KC_LSFT         , U_NU      , U_NU      , KC_LSFT        , KC_LCTL         , KC_LALT        , KC_LGUI        , \
U_UND        , U_CUT          , U_CPY         , U_PST           , U_RDO     , U_RDO     , U_PST          , U_CPY           , U_CUT          , U_UND          , \
U_NP         , U_NP           , KC_BTN3       , KC_BTN1         , KC_BTN2   , KC_BTN2   , KC_BTN1        , KC_BTN3         , U_NP           , U_NP
