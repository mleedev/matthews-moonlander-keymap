#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_255,
  HSV_172_255_255,
  HSV_43_255_255,
  HSV_215_255_255,
  HSV_129_255_255,
  HSV_22_255_255,
  HSV_63_255_255,
  HSV_149_255_255,
};



#define DUAL_FUNC_0 LT(15, KC_D)
#define DUAL_FUNC_1 LT(6, KC_3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,                                          KC_NO,          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_NO,          
    KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,          
    KC_NO,          MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),KC_G,           KC_NO,                                                                          KC_NO,          KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_NO,          
    KC_NO,          KC_Z,           KC_X,           DUAL_FUNC_0,    DUAL_FUNC_1,    KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         LT(9, KC_SLASH),KC_NO,          
    MO(10),         MO(9),          KC_NO,          KC_NO,          MO(7),          KC_TAB,                                                                                                         KC_ENTER,       MO(6),          KC_NO,          KC_NO,          TG(3),          TG(5),          
    LT(3, KC_SPACE),LT(5, KC_BSPC), KC_ENTER,                       KC_TAB,         RCTL(KC_BSPC),  LT(4, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 MO(6),          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_TRANSPARENT, KC_C,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_RIGHT_ALT,   KC_RIGHT_SHIFT, KC_RIGHT_GUI,   KC_RIGHT_CTRL,  
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_ESCAPE,      RGUI(KC_TAB),   RALT(KC_TAB),   KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_BSPC,        KC_HOME,        KC_UP,          KC_END,         KC_DELETE,      KC_NO,          
    KC_NO,          KC_CAPS,        KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_NO,          KC_NO,                                                                          KC_NO,          KC_PAGE_UP,     KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_NO,                                          KC_PGDN,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_ENTER,                                                                                                       KC_ENTER,       KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_GRAVE,       KC_LABK,        KC_RABK,        KC_DLR,         KC_AT,          KC_NO,                                          KC_NO,          KC_CIRC,        KC_LCBR,        KC_RCBR,        KC_QUES,        KC_TILD,        KC_NO,          
    KC_NO,          KC_EXLM,        KC_PLUS,        KC_MINUS,       KC_EQUAL,       KC_BSLS,        KC_NO,                                                                          KC_NO,          KC_AMPR,        KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_DQUO,        KC_NO,          
    KC_NO,          KC_PERC,        KC_ASTR,        KC_SLASH,       KC_UNDS,        KC_HASH,                                        KC_PIPE,        KC_LBRC,        KC_RBRC,        KC_COLN,        KC_QUOTE,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_ENTER,                                                                                                       KC_ENTER,       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_LABK,        KC_RABK,        KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_BSPC,        KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,          
    KC_NO,          KC_EXLM,        KC_PLUS,        KC_MINUS,       KC_EQUAL,       KC_NO,          KC_NO,                                                                          KC_NO,          KC_LBRC,        KC_4,           KC_5,           KC_6,           KC_RBRC,        KC_NO,          
    KC_NO,          KC_NO,          KC_ASTR,        KC_SLASH,       KC_NO,          KC_NO,                                          KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_0,           KC_DOT,         KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,          KC_NO,                                          KC_NO,          KC_BSPC,        KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_NO,          
    KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_NO,          
    KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,                                          KC_NO,          KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL2,   KC_MS_BTN1,     KC_MS_BTN2,     KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_NO,          
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          HSV_0_255_255,  HSV_86_255_255, HSV_172_255_255,KC_NO,          RGB_TOG,        RGB_VAD,        RGB_VAI,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          HSV_43_255_255, HSV_215_255_255,HSV_129_255_255,KC_NO,          TOGGLE_LAYER_COLOR,RGB_SAD,        RGB_SAI,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          HSV_22_255_255, HSV_63_255_255, HSV_149_255_255,KC_NO,          RGB_SLD,        RGB_HUD,        RGB_HUI,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          RGB_MODE_FORWARD,RGB_SPD,        RGB_SPI,        
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          MOON_LED_LEVEL
  ),
  [9] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [10] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_NO,          TO(3),          TO(5),          TO(7),          KC_NO,          KC_NO,          
    TO(0),          TO(1),          TO(2),          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                                                          KC_NO,          KC_NO,          TO(0),          TO(1),          TO(2),          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', '*', '*', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);




extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {208,130,133}, {172,255,85}, {172,255,85}, {172,255,85}, {0,0,136}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {0,0,255}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {43,255,255}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,170}, {215,255,255}, {129,255,136}, {129,255,136}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {215,255,136}, {172,255,85}, {172,255,85}, {172,255,85}, {0,0,255}, {172,255,255}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {22,255,255}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {172,255,85}, {86,255,255}, {0,255,255}, {129,255,136}, {129,255,136} },

    [1] = { {135,52,244}, {135,52,244}, {135,52,244}, {0,0,255}, {0,0,136}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {0,0,255}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {215,255,255}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {0,0,255}, {215,255,136}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {172,255,170}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {19,255,187}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244}, {135,52,244} },

    [2] = { {215,119,255}, {129,255,136}, {0,245,245}, {129,255,136}, {0,0,136}, {0,255,170}, {0,245,245}, {0,0,255}, {0,255,170}, {129,255,136}, {0,255,170}, {0,0,255}, {0,0,255}, {0,255,170}, {129,255,136}, {0,255,170}, {0,255,170}, {0,0,255}, {0,255,170}, {129,255,136}, {0,255,170}, {0,0,255}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {129,255,136}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {129,255,136}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {129,255,136}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {129,255,136}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170}, {22,255,255}, {0,255,170}, {0,255,170}, {0,255,170}, {0,255,170} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,119,255}, {129,255,255}, {20,255,234}, {0,0,0}, {0,0,0}, {38,241,255}, {129,255,136}, {20,255,234}, {0,0,0}, {0,0,0}, {38,241,255}, {129,255,136}, {20,255,234}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {20,255,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,170}, {0,255,255}, {129,255,136}, {129,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {0,255,255}, {129,255,136}, {129,255,136} },

    [4] = { {215,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {0,255,255}, {129,255,136}, {129,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {215,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,255,255}, {129,255,136}, {129,255,136} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {86,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {0,255,255}, {129,255,136}, {129,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,136}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {0,0,0}, {0,255,255}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {0,255,255}, {129,255,136}, {129,255,136} },

    [6] = { {215,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {0,255,255}, {129,255,136}, {129,255,136}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {0,255,255}, {129,255,136}, {129,255,136} },

    [7] = { {215,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,85}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {129,255,136}, {129,255,136}, {215,119,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {129,255,136}, {129,255,136}, {129,255,136}, {215,119,255} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,155,255}, {23,187,255}, {23,187,255}, {23,187,255}, {0,0,0}, {42,155,255}, {23,187,255}, {23,187,255}, {23,187,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {129,255,255}, {149,255,255}, {0,0,0}, {0,0,0}, {86,255,255}, {215,255,255}, {60,255,255}, {0,0,0}, {0,255,255}, {43,255,255}, {22,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {172,255,85}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,52,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,153}, {0,255,170}, {0,0,0}, {0,0,0}, {0,0,0}, {215,255,255}, {135,52,244}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,170}, {172,255,85}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 9:
        set_layer_color(9);
        break;
      case 10:
        set_layer_color(10);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_86_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,255);
        }
        return false;
    case HSV_172_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(172,255,255);
        }
        return false;
    case HSV_43_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(43,255,255);
        }
        return false;
    case HSV_215_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(215,255,255);
        }
        return false;
    case HSV_129_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(129,255,255);
        }
        return false;
    case HSV_22_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(22,255,255);
        }
        return false;
    case HSV_63_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(63,255,255);
        }
        return false;
    case HSV_149_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(149,255,255);
        }
        return false;
  }
  return true;
}


/*
 * Custom Tap Flow behavior:
 *
 * Disable Tap Flow for Space/Symbols.
 * Keep the normal Tap Flow behavior for all other keys.
 */

uint16_t get_flow_tap_term(
    uint16_t keycode,
    keyrecord_t *record,
    uint16_t prev_keycode
) {
    // IMPORTANT:
    // Replace LT(2, KC_SPC) with your actual
    // Space/Symbols keycode from the layout.

    if (keycode == LT(3, KC_SPACE) || keycode == LT(4, KC_SPACE)) {
        return 0;
    }

    // Preserve the normal QMK Tap Flow behavior.
    if (is_flow_tap_key(keycode) &&
        is_flow_tap_key(prev_keycode)) {
        return FLOW_TAP_TERM;
    }

    return 0;
}


