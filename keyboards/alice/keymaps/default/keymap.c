#include QMK_KEYBOARD_H
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN) },
    [_LOWER] =  { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN) },
    [_RAISE] =  { ENCODER_CCW_CW() },
    [_ADJUST] = { ENCODER_CCW_CW() },
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_ESCAPE,   KC_TAB,   KC_CAPS_LOCK,   KC_LEFT_SHIFT,   KC_LEFT_CTRL,  
        KC_1,   KC_Q,   KC_A,   KC_Z,   KC_LEFT_GUI,   
        KC_2,   KC_W,   KC_S,   KC_X,   KC_LEFT_ALT, 
        KC_3,   KC_E,   KC_D,   KC_C,   KC_CAPS_LOCK,
        KC_4,   KC_R,   KC_F,   KC_V,   KC_SPACE,
        KC_5,   KC_T,   KC_G,   KC_B,   KC_AUDIO_MUTE,
        KC_6,   KC_Y,   KC_H,   KC_N.   KC_ENTER,
        KC_7,   KC_U,   KC_J,   KC_M,   KC_BACKSPACE,
        KC_8,   KC_I,   KC_K,   KC_COMMA,   KC_TRANSPARENT
        KC_9,   KC_O,   KC_L,   
    )
};
