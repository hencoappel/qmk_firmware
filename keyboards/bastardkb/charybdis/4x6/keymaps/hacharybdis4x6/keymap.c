/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum charybdis_keymap_layers {
    LAYER0 = 0,
    LAYER1,
    LAYER2,
};

#define MTLCTL(K) MT(MOD_LCTL, K)
#define MTLSFT(K) MT(MOD_LSFT, K)
#define MTLALT(K) MT(MOD_LALT, K)
#define MTLGUI(K) MT(MOD_LGUI, K)

#define MTRCTL(K) MT(MOD_RCTL, K)
#define MTRSFT(K) MT(MOD_RSFT, K)
#define MTRALT(K) MT(MOD_RALT, K)
#define MTRGUI(K) MT(MOD_RGUI, K)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LAYER0] = LAYOUT(
//╭────────────────────────────────────────────────────────────────────────────────╮╭─────────────────────────────────────────────────────────────────────────────────────╮
      KC_ESC,         KC_1,         KC_2,         KC_3,         KC_4,         KC_5,         KC_6,         KC_7,         KC_8,         KC_9,            KC_0,      KC_MINS,
//├────────────────────────────────────────────────────────────────────────────────┤├─────────────────────────────────────────────────────────────────────────────────────┤
      KC_TAB,         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,            KC_P,      KC_BSLS,
//├────────────────────────────────────────────────────────────────────────────────┤├─────────────────────────────────────────────────────────────────────────────────────┤
     KC_LSFT, MTLGUI(KC_A), MTLALT(KC_S), MTLCTL(KC_D), MTLSFT(KC_F),         KC_G,         KC_H, MTRSFT(KC_J), MTRCTL(KC_K), MTRALT(KC_L), MTRGUI(KC_SCLN),   KC_QUOT,
//├────────────────────────────────────────────────────────────────────────────────┤├─────────────────────────────────────────────────────────────────────────────────────┤
     KC_LCTL,         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,      KC_COMM,       KC_DOT,         KC_SLSH,      KC_LALT,
//╰────────────────────────────────────────────────────────────────────────────────┤├─────────────────────────────────────────────────────────────────────────────────────╯
                                                  KC_LGUI,     KC_SPC,  MO(LAYER1),     MO(LAYER2),      KC_ENT,
                                                              QK_LEAD,     KC_BSPC,         KC_DEL
//                                              ╰───────────────────────────────────╯ ╰──────────────────────────╯
),

  [LAYER1] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RM_NEXT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_LBRC,   KC_7,   KC_8,   KC_9, KC_RBRC, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├─────────────────────────────────────────────────────
       RM_TOGG, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    KC_PPLS,   KC_4,   KC_5,   KC_6, KC_PMNS, KC_PEQL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RM_PREV, XXXXXXX, XXXXXXX, XXXXXXX, EE_CLR,  QK_BOOT,    KC_PAST,   KC_1,   KC_2,   KC_3, KC_PSLS, KC_PDOT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                           XXXXXXX, XXXXXXX,      KC_P0
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER2] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_MPLY, KC_LEFT,   KC_UP, KC_DOWN, KC_RGHT, XXXXXXX,    XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_MUTE,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_MPRV, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, XXXXXXX,    QK_BOOT, EE_CLR,  XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, XXXXXXX,    _______, XXXXXXX,
                                           _______, _______,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on


// Combos
const uint16_t PROGMEM mouse1_combo[] = {KC_M, KC_COMM, COMBO_END}; // M + , => Mouse button 1
const uint16_t PROGMEM mouse2_combo[] = {KC_COMM, KC_DOT, COMBO_END}; // , + . => Mouse button 2
combo_t key_combos[] = {
    COMBO(mouse1_combo, QK_MOUSE_BUTTON_1),
    COMBO(mouse2_combo, QK_MOUSE_BUTTON_2),
};



// Leader callbacks
void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    // Do something on subsequent key presses
     //     examples
     //     if (leader_sequence_one_key(KC_F)) {
     //         // Leader, f => Types the below string
     //         SEND_STRING("QMK is awesome.");
     //     } else if (leader_sequence_two_keys(KC_D, KC_D)) {
     //         // Leader, d, d => Ctrl+A, Ctrl+C
     //         SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
     //     } else if (leader_sequence_three_keys(KC_D, KC_D, KC_S)) {
     //         // Leader, d, d, s => Types the below string
     //         SEND_STRING("https://start.duckduckgo.com\n");
     //     } else if (leader_sequence_two_keys(KC_A, KC_S)) {
     //         // Leader, a, s => GUI+S
     //         tap_code16(LGUI(KC_S));
     //     }

     // Leader, k => Escape
    if (leader_sequence_one_key(KC_K)) {
        tap_code16(KC_ESC);
    }
}
