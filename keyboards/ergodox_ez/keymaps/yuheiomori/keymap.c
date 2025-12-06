#include QMK_KEYBOARD_H
#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define MAC 0 // default layer
#define MACFN 1


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



/* Keymap 0: Mac
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  1   |   2  |   3  |   4  |   5  | `~   |           | `~   |   6  |   7  |   8  |   9  |   0  |   =    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |  Q   |   W  |   E  |   R  |   T  | Hypr |           | Hypr |   Y  |   U  |   I  |   O  |   P  |   -    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTRL   |  A   |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |  K   |   L  |   ;  | '"     |
 * |--------+------+------+------+------+------| LFn  |           | LFn  |------+------+------+------+------+--------|
 * | LShift |  Z   |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   |  \     |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | cut  | paste| copy | Alt  | LGUI |                                       | RGUI |      | [    | ]    |  L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | BTN4 | BTN5 |       | left |right |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | PgUp |       | Up   |        |      |
 *                                 |Space |Bask  |----- |       |----- | RClick |Enter |
 *                                 |      |Space | PgDn |       | Down |        |      |
 *                                 `--------------------'       `----------------------'
 */

[MAC] = KEYMAP(
        // left hand
        KC_ESC,         KC_1,         KC_2,       KC_3,    KC_4,   KC_5,   KC_GRV,
        KC_TAB,         KC_Q,         KC_W,       KC_E,    KC_R,   KC_T,   KC_HYPR,
        KC_LCTL,        KC_A,         KC_S,       KC_D,    KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,       KC_C,    KC_V,   KC_B,   MO(MACFN),
        LGUI(KC_X),     LGUI(KC_V),   LGUI(KC_C), KC_LALT, KC_LGUI,
                                                           KC_BTN4, KC_BTN5,
                                                                    KC_PGUP,
                                                  KC_SPC,  KC_BSPC, KC_PGDOWN,

        // right hand
        KC_GRV,         KC_6,         KC_7,       KC_8,    KC_9,    KC_0,     KC_EQL,
        KC_HYPR,        KC_Y,         KC_U,       KC_I,    KC_O,    KC_P,     KC_MINS,
                        KC_H,         KC_J,       KC_K,    KC_L,    KC_SCLN,  KC_QUOT,
        MO(MACFN),      KC_N,         KC_M,       KC_COMM, KC_DOT,  KC_SLSH,  KC_BSLS,
                                      KC_RGUI,    KC_NO,   KC_LBRC, KC_RBRC,  TO(MACFN),
                                                  KC_LEFT, KC_RGHT,
                                                  KC_UP,
                                                  KC_DOWN, KC_MS_BTN2, KC_ENT
    ),

/* Keymap 2: Mac function Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | ESC    |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |           | F7   |  F8  |  F9  | F10  |  F11 |  F12 |   =    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |      |      |      |      |      |Hyper |           |Hyper |      |LClick|RClick|      |      |   -    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | CTRL   |      | SP+0 | SP+1 | SP+2 |      |------|           |------| M-L  | M-Dn | M-U  | M-R  |      |  '"    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LShift |      |      |      |      |      |      |           |      | WH-L | WH-U | WH_D | WH_R |      |  \     |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | cut  | paste| copy | Alt  | LGUI |                                       | RGUI |      |      |      | L0   |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | BTN4 | BTN5 |       | left |right |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | PgUp |       | Up   |      |      |
 *                                 |Space |Back  |------|       |------|RClick|Enter |
 *                                 |      |Space | PgDn |       | Down |      |      |
 *                                 `--------------------'       `--------------------'
 */
// Functions
[MACFN] = KEYMAP(
                 // left hand
                 KC_TRNS,     KC_F1,    KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,
                 KC_TRNS,     KC_NO,    KC_NO  , KC_NO,   KC_NO,    KC_NO,   KC_TRNS,
                 KC_TRNS,     KC_NO,    KC_ACL0, KC_ACL1, KC_ACL2,  KC_NO,
                 KC_TRNS,     KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,
                 KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
                                                          KC_TRNS,  KC_TRNS,
                                                                    KC_TRNS,
                                                  KC_TRNS, KC_TRNS, KC_TRNS,
                 // right hand
                 KC_F7,   KC_F8,   KC_F9,      KC_F10,     KC_F11,  KC_F12,  KC_TRNS,
                 KC_TRNS, KC_NO,   KC_MS_BTN1, KC_MS_BTN2, KC_NO,   KC_NO,   KC_TRNS,
                          KC_MS_L, KC_MS_D,    KC_MS_U,    KC_MS_R, KC_NO,   KC_TRNS,
                 KC_NO,   KC_WH_L, KC_WH_U,    KC_WH_D,    KC_WH_R, KC_NO,   KC_TRNS,
                                   KC_TRNS,    KC_NO,      KC_NO,   KC_NO,   TO(MAC),
                                               KC_TRNS,    KC_TRNS,
                                               KC_TRNS,
                                               KC_TRNS,    KC_TRNS, KC_TRNS
                 )


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
        case MAC:
          ergodox_right_led_1_on();
          ergodox_right_led_2_off();
          ergodox_right_led_3_off();
          break;

        case MACFN:
          ergodox_right_led_1_off();
          ergodox_right_led_2_on();
          ergodox_right_led_3_off();
          break;
        default:
          // none
          break;
    }
};
