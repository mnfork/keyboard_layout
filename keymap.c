
#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  //QWERTY base layer
  [0] = LAYOUT(
  //------------------------------------------------------------------                       -----------------------------------------------------------------------
    KC_NO, KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,                         KC_Y,    KC_U,        KC_I,        KC_O,        KC_P,            KC_NO,
  //------------------------------------------------------------------                       -----------------------------------------------------------------------
    KC_NO, GUI_T(KC_A), ALT_T(KC_S), CTL_T(KC_D), SFT_T(KC_F), KC_G,                         KC_H,    SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), GUI_T(KC_SCLN),  KC_NO,
  //------------------------------------------------------------------                       -----------------------------------------------------------------------
    KC_NO, KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,   KC_TAB,      TO(3),   KC_N,    KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,         KC_NO,
  //------------------------------------------------------------------                       -----------------------------------------------------------------------
                                                  MO(2),       MO(1),  QK_GESC,     KC_BSPC, LT(3, KC_SPC),  KC_ENT
  ),

  //Symbol layer
  [1] = LAYOUT(
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_EXLM,     KC_AT,       KC_HASH,     KC_DLR,      KC_PERC,                       KC_EQL,  KC_GRV,      KC_COLN,     KC_SCLN,      KC_PLUS,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_LGUI,     KC_LALT,     KC_LCTL,     KC_LSFT,     KC_CIRC,                       KC_ASTR, KC_LPRN,     KC_LCBR,     KC_LBRC,      KC_MINS,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_QUOT,     KC_RABK,     KC_BSLS,     KC_PIPE,     KC_AMPR, LCA(KC_DEL), TO(3),   KC_TILD, KC_RPRN,     KC_RCBR,     KC_RBRC,      KC_UNDS,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
                                                  KC_NO,       MO(1),   TO(4),       KC_TAB,  KC_SPC,  KC_ENT
  ),

  //Number layer
  [2] = LAYOUT(
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_PSCR,     KC_INS,      KC_DEL,      RCS(KC_M),   KC_VOLU,                       KC_EQL,  KC_7,        KC_8,        KC_9,         KC_PPLS,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_VOLD,                       KC_ASTR, KC_4,        KC_5,        KC_6,         KC_PMNS,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_UNDO,     KC_CUT,      KC_COPY,     KC_PSTE,     KC_MUTE, LCA(KC_DEL), TO(3),   KC_0,    KC_1,        KC_2,        KC_3,         KC_PSLS,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
                                                  MO(2),       KC_NO,   TO(4),       KC_TAB,  KC_SPC,  KC_ENT
  ),

  //Navigation layer
  [3] = LAYOUT(
  //-------------------------------------------------------------------                        --------------------------------------------------------------------
    KC_NO, MS_ACL2,     MS_WHLL,     MS_UP,       MS_WHLR,     MS_WHLU,                        KC_PGUP, KC_HOME,     KC_UP,       KC_END,       KC_TAB,      KC_NO,
  //-------------------------------------------------------------------                        --------------------------------------------------------------------
    KC_NO, MS_ACL1,     MS_LEFT,     MS_DOWN,     MS_RGHT,     MS_WHLD,                        KC_PGDN, KC_LEFT,     KC_DOWN,     KC_RGHT,      RCS(KC_TAB), KC_NO,
  //-------------------------------------------------------------------                        --------------------------------------------------------------------
    KC_NO, MS_ACL0,     KC_LALT,     KC_LCTL,     KC_LSFT,     KC_LGUI, KC_TAB,      KC_NO,    KC_ESC,  MS_BTN1,     MS_BTN3,     MS_BTN2,      A(KC_TAB),   KC_NO,
  //-------------------------------------------------------------------                        --------------------------------------------------------------------
                                                  KC_COPY,     KC_PSTE, TO(0),       KC_BSPC,  KC_SPC,  KC_ENT
  ),

  //Function layer
  [4] = LAYOUT(
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, UG_TOGG,     UG_NEXT,     UG_PREV,     UG_VALU,     UG_VALD,                       KC_F12,  KC_F7,       KC_F8,       KC_F9,        KC_SCRL,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, KC_LGUI,     KC_LALT,     KC_LCTL,     KC_LSFT,     UG_SPDU,                       KC_F11,  KC_F4,       KC_F5,       KC_F6,        KC_BRIU,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
    KC_NO, UG_HUEU,     UG_HUED,     UG_SATU,     UG_SATD,     UG_SPDD, KC_NO,       KC_NO,   KC_F10,  KC_F1,       KC_F2,       KC_F3,        KC_BRID,     KC_NO,
  //-------------------------------------------------------------------                       --------------------------------------------------------------------
                                                  KC_NO,       KC_NO,   TO(0),       KC_NO,   KC_NO,  KC_NO
  )

};
