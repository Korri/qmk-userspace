#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER = 1,
  _UPPER = 2,
  _ADJUST = 3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   `   |    |  Ent  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RAlt  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | Del  |LOWER | LGUI | /Space  /       \Space \  | RGUI |RAISE |BackSP|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_GRV,   KC_ENT,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RALT,
                        KC_DEL, TL_LOWR, KC_LGUI, KC_SPC,        KC_SPC, KC_RGUI, TL_UPPR, KC_BSPC
 ),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | F15  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | F16  |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | F17  |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  | F13  |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | F18  |      |      |      |   =  | Play |-------|    |-------|   (  |   )  |   |  |   `  |   +  | F14  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |BackSP|LOWER | LGUI | /Space  /       \Space \  | RGUI |RAISE | Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_LOWER] = LAYOUT(
  KC_F15, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  KC_F16, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_F12,
  KC_F17, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F13,
  KC_F18, XXXXXXX, KC_TRNS, KC_TRNS, KC_EQL,  KC_MPLY, KC_LPRN,   KC_RPRN, KC_PIPE, KC_GRV,  KC_PLUS, KC_LCBR, KC_RCBR, KC_F14,
                       KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL
 ),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |   (  |   )  |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |   [  |   ]  |      |                    | PgUp | Home |  Up  | End  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |   {  |   }  |      |-------.    ,-------| PgDn | Left | Down |Right |   -  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |   <  |   >  |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |BackSP|RAISE | LGUI | /Space  /       \Space \  | RGUI |RAISE | Del  |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_UPPER] = LAYOUT(
  KC_TRNS, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_TRNS, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX,                   KC_PGUP, KC_HOME, KC_UP,   KC_END,  XXXXXXX, XXXXXXX,
  KC_TRNS, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX,                   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_MINS, XXXXXXX,
  KC_TRNS, XXXXXXX, XXXXXXX, S(KC_COMM), S(KC_DOT), XXXXXXX,     XXXXXXX, KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,
                        KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL
 ),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |RESET |      |      |      |      |      |                    |      |      |      |      |      |RESET |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | EEPRM|      |      |      |      |      |-------.    ,-------|  Up  | Down |      |      |      | EEPRM|
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /Space  /       \Space \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_ADJUST] = LAYOUT(
  KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_UP,   KC_DOWN, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
 )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _UPPER, _ADJUST);
}

static void scale_pointing_report(report_mouse_t *report) {
  report->x = (report->x * 5) / 4;
  report->y = (report->y * 5) / 4;

  const int16_t resolution = pointing_device_get_hires_scroll_resolution();
  report->h = (report->h * resolution) / 15;
  report->v = (report->v * resolution) / 15;
}

report_mouse_t pointing_device_task_combined_user(report_mouse_t left_report, report_mouse_t right_report) {
  scale_pointing_report(&left_report);
  scale_pointing_report(&right_report);
  return pointing_device_combine_reports(left_report, right_report);
}
