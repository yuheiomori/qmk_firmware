#include QMK_KEYBOARD_H
#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define UBUNTU 0 // default layer
#define MAC 1
#define UBUNTUFN 2
#define MACFN 3
#define MOUSE 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap 0: UBUNTU
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |   1  |   2  |   3  |   4  |   5  | `~   |           | `~   |   6  |   7  |   8  |   9  |   0  |   =    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  | A + ←|          | A + →|   Y  |   U  |   I  |   O  |   P  |   -    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTRL   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |  K   |   L  |   ;  | '"     |
 * |--------+------+------+------+------+------| LFn  |           | LFn  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |  \     |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | cut  | paste| copy | super| alt  |                                       | alt  | ctx  | [    | ]    |LMac  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | Home | End  |       | left |right   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | PgUp |       | Up   |        |      |
 *                                 |Space |Bask  |----- |       |----- |        |Enter |
 *                                 |      |Space | PgDn |       | Down |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
// Hyper ALL_T(KC_NO)
[UBUNTU] = KEYMAP(
        // left hand
        KC_ESC,         KC_1,         KC_2,       KC_3,    KC_4,   KC_5,   KC_GRV,
        KC_TAB,         KC_Q,         KC_W,       KC_E,    KC_R,   KC_T,   LALT(KC_LEFT),
        KC_LCTL,        KC_A,         KC_S,       KC_D,    KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,       KC_C,    KC_V,   KC_B,   MO(UBUNTUFN),
        LCTL(KC_X),     LCTL(KC_V),   LCTL(KC_C), KC_LGUI, KC_LALT,
                                                           KC_HOME, KC_END,
                                                                    KC_PGUP,
                                                  KC_SPC,  KC_BSPC, KC_PGDOWN,

        // right hand
        KC_GRV,         KC_6,         KC_7,       KC_8,    KC_9,    KC_0,             KC_EQL,
        LALT(KC_RIGHT), KC_Y,         KC_U,       KC_I,    KC_O,    KC_P,             KC_MINS,
                        KC_H,         KC_J,       KC_K,    KC_L,    KC_SCLN,          KC_QUOT,
        MO(UBUNTUFN),   KC_N,         KC_M,       KC_COMM, KC_DOT,  KC_SLSH,          KC_BSLS,
        KC_LALT,        KC_APP,       KC_LBRC,    KC_RBRC,          TO(MAC),
                                                  KC_LEFT, KC_RGHT,
                                                  KC_UP,
                                                  KC_DOWN, KC_NO ,  KC_ENT
    ),

/* Keymap 1: Mac
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |   1  |   2  |   3  |   4  |   5  | `~   |           | `~   |   6  |   7  |   8  |   9  |   0  |   =    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |      |           |      |   Y  |   U  |   I  |   O  |   P  |   -    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTRL   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |  K   |   L  |   ;  | '"     |
 * |--------+------+------+------+------+------| LFn  |           | LFn  |------+------+------+------+------+--------|
 * | LShift |  Z   |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   |  \     |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | cut  | paste| copy | Alt  | LGUI |                                       | RGUI |      | [    | ]    |  L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Home | End  |       | left |right |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | PgUp |       | Up   |        |      |
 *                                 |Space |Bask  |----- |       |----- |        |Enter |
 *                                 |      |Space | PgDn |       | Down |        |      |
 *                                 `--------------------'       `----------------------'
 */

[MAC] = KEYMAP(
        // left hand
        KC_ESC,         KC_1,         KC_2,       KC_3,    KC_4,   KC_5,   KC_GRV,
        KC_TAB,         KC_Q,         KC_W,       KC_E,    KC_R,   KC_T,   KC_NO,
        KC_LCTL,        KC_A,         KC_S,       KC_D,    KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,       KC_C,    KC_V,   KC_B,   MO(MACFN),
        LGUI(KC_X),     LGUI(KC_V),   LGUI(KC_C), KC_LALT, KC_LGUI,
                                                           KC_HOME, KC_END,
                                                                    KC_PGUP,
                                                  KC_SPC,  KC_BSPC, KC_PGDOWN,

        // right hand
        KC_GRV,         KC_6,         KC_7,       KC_8,    KC_9,    KC_0,             KC_EQL,
        KC_NO,          KC_Y,         KC_U,       KC_I,    KC_O,    KC_P,             KC_MINS,
                        KC_H,         KC_J,       KC_K,    KC_L,    KC_SCLN,          KC_QUOT,
        MO(MACFN),      KC_N,         KC_M,       KC_COMM, KC_DOT,  KC_SLSH,          KC_BSLS,
        KC_RGUI,        KC_NO,        KC_LBRC,    KC_RBRC,          TO(UBUNTU),
                                                  KC_LEFT, KC_RGHT,
                                                  KC_UP,
                                                  KC_DOWN, KC_NO ,  KC_ENT
    ),


/* Keymap 3: Ubuntu function Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |           | F7   |  F8  |  F9  | F10  |  F11 |  F12 | F13    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |  up  |      |      |      |      |           |      |      |  7   |  8   |  9   |      | F14    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | left | down |right |      |      |------|           |------|      |  4   |  5   |  6   |      | K_LANG1|
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |  1   |  2   |  3   |      | K_LANG2|
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |  0   |      |      |      |LMouse|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      | Mute |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------| Vol- | Vol+ |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// Functions
[UBUNTUFN] = KEYMAP(
       // left hand
       KC_TRNS,     KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6,
       KC_TRNS,     KC_TRNS,    KC_UP,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
       KC_TRNS,     KC_LEFT,  KC_DOWN, KC_RGHT, KC_TRNS,   KC_TRNS,
       KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
       KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,
                                                       KC_TRNS, KC_TRNS,
                                                              KC_TRNS,
                                                KC_TRNS, KC_TRNS, KC_TRNS,
       // right hand
       KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13,
       KC_TRNS,   KC_TRNS,  KC_7,    KC_8,    KC_9,    KC_TRNS ,  KC_F14,
                KC_TRNS,  KC_4,    KC_5,    KC_6,    KC_TRNS,   K_LANG1,
       KC_TRNS,   KC_TRNS,  KC_1,    KC_2,    KC_3,    KC_TRNS,   K_LANG2,
                KC_0,   KC_TRNS,  KC_TRNS,    KC_TRNS,   TO(MOUSE),
       KC_TRNS,   KC_MUTE,
       KC_TRNS,
       KC_TRNS,   KC_VOLD, KC_VOLU
    ),

/* Keymap 4: Mac function Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |           | F7   |  F8  |  F9  | F10  |  F11 |  F12 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |  up  |      |      |      |      |           |      |      |  7   |  8   |  9   |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | left | down |right |      |      |------|           |------|      |  4   |  5   |  6   |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |  1   |  2   |  3   |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |  0   |      |      |      |LMouse|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      | Mute |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------| Vol- | Vol+ |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// Functions
[MACFN] = KEYMAP(
                 // left hand
                 KC_TRNS,     KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6,
                 KC_TRNS,     KC_TRNS,    KC_UP,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
                 KC_TRNS,     KC_LEFT,  KC_DOWN, KC_RGHT, KC_TRNS,   KC_TRNS,
                 KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
                 KC_TRNS,     KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,
                 KC_TRNS, KC_TRNS,
                 KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS,
                 // right hand
                 KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
                 KC_TRNS,   KC_TRNS,  KC_7,    KC_8,    KC_9,    KC_TRNS ,  KC_TRNS,
                 KC_TRNS,  KC_4,    KC_5,    KC_6,    KC_TRNS,   KC_TRNS,
                 KC_TRNS,   KC_TRNS,  KC_1,    KC_2,    KC_3,    KC_TRNS,   KC_TRNS,
                 KC_0,   KC_TRNS,  KC_TRNS,    KC_TRNS,   TO(MOUSE),
                 KC_TRNS,   KC_MUTE,
                 KC_TRNS,
                 KC_TRNS,   KC_VOLD, KC_VOLU
                 ),

/* Keymap 5: Mouse Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |           | F7   |  F8  |  F9  | F10  |  F11 |  F12 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      | M-Up |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           | L1   |------+------+------+------+------+--------|
 * |        |  M-L | M-Dn | M-R  |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           | L2   |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | WH-L | WH-R |                                       | Sp+2 | Sp+1 | Sp+0 |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       | M2   |MClick|
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       | PgUp |      |      |
 *                                 |Space |Enter |------|       |------|RClick|LClick|
 *                                 |      |      |      |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 */
// Mouse
[MOUSE] = KEYMAP(
       // left hand
       KC_NO,     KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6,
       KC_NO,     KC_NO,    KC_MS_U, KC_NO,   KC_NO,   KC_NO, KC_NO,
       KC_NO,     KC_MS_L,  KC_MS_D, KC_MS_R, KC_NO,   KC_NO,
       KC_NO,     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
       KC_NO,     KC_NO,    KC_NO,   KC_WH_L, KC_WH_R,
                                                       KC_NO, KC_NO,
                                                              KC_NO,
                                              KC_SPC, KC_ENT, KC_NO,
       // right hand
       KC_F7,         KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
       TO(UBUNTU),  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
       TO(MAC),     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                      KC_ACL2, KC_ACL1, KC_ACL0, KC_NO,   KC_NO,
       KC_BTN4, KC_BTN3,
       KC_PGUP,
       KC_PGDN, KC_BTN1, KC_BTN2
    ),
};

const uint16_t PROGMEM fn_actions[] = {
  //  [1] = ACTION_LAYER_TAP_TOGGLE(UBUNTUFN),
  //  [2] = ACTION_LAYER_TAP_TOGGLE(MACFN)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
      }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  ergodox_board_led_off();
  ergodox_right_led_1_on();
  ergodox_right_led_2_on();
  ergodox_right_led_3_on();
  ergodox_board_led_off();
  ergodox_right_led_1_on();
  ergodox_right_led_2_on();
  ergodox_right_led_3_on();
  ergodox_board_led_off();
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case UBUNTU:
          ergodox_right_led_1_on();
          ergodox_right_led_2_off();
          ergodox_right_led_3_off();
          break;
        case MAC:
          ergodox_right_led_1_off();
          ergodox_right_led_2_on();
          ergodox_right_led_3_off();
          break;
        case UBUNTUFN:
          ergodox_right_led_1_on();
          ergodox_right_led_2_off();
          ergodox_right_led_3_on();
          break;
        case MACFN:
          ergodox_right_led_1_off();
          ergodox_right_led_2_on();
          ergodox_right_led_3_on();
          break;
        case MOUSE:
          ergodox_right_led_1_on();
          ergodox_right_led_2_on();
          ergodox_right_led_3_on();
          break;
        default:
          // none
          break;
    }
};
