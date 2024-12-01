// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                         K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                         K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                         K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                         K35, K36, K37, N38, N39 \
) \
LAYOUT_5x6( \
  KC_MPLY, KC_PIPE, KC_LBRC, KC_LCBR, KC_LPRN, KC_PLUS,       KC_EQUAL, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSLS, KC_MUTE, \
   KC_GRV, K00, K01, K02, K03, K04,                                  K05, K06, K07, K08, K09, KC_SLSH, \
   KC_ESC, K10, K11, K12, K13, K14,                                  K15, K16, K17, K18, K19, KC_MINS, \
KC_LSFT, K20, K21, K22, K23, K24,                                  K25, K26, K27, K28, K29, KC_LSFT, \
        LGUI_T(KC_DOWN), LALT_T(KC_UP),           LALT_T(KC_LEFT), LGUI_T(KC_RIGHT), \
                     K32, K33,                                        K36, K37, \
                               KC_PGUP, K34,             K35, KC_END, \
                               KC_PGDN, LT(U_MOUSE, XXX),             LT(U_FUN, XXX), KC_HOME \
)
