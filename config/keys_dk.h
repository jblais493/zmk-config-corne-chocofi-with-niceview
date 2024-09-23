#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

#define DK_AE    SEMICOLON       // Æ
#define DK_OE    SINGLE_QUOTE    // Ø
#define DK_AA    LEFT_BRACKET    // Å
#define DK_QUOT  DOUBLE_QUOTES   // "
#define DK_PLUS  EQUALS          // +
#define DK_MINS  MINUS           // -
#define DK_SCLN  SEMICOLON       // ;
#define DK_COLN  COLON           // :
#define DK_UNDS  UNDERSCORE      // _
#define DK_COMM  COMMA           // ,
#define DK_DOT   PERIOD          // .
#define DK_LPRN  LEFT_PAREN      // (
#define DK_RPRN  RIGHT_PAREN     // )
#define DK_LCBR  LEFT_CURLY_BRACE  // {
#define DK_RCBR  RIGHT_CURLY_BRACE // }
#define DK_PIPE  PIPE            // |
#define DK_AMPR  AMPERSAND       // &
#define DK_HASH  HASH            // #
#define DK_AT    ALTGR(DIGIT2)      // @ on AltGr + 2
#define DK_DLR   ALTGR(DIGIT4)      // $ on AltGr + 4
#define DK_EURO  ALTGR(DIGIT5)      // € on AltGr + 5
#define DK_LCBR  ALTGR(DIGIT7)      // { on AltGr + 7
#define DK_RCBR  ALTGR(DIGIT0)      // } on AltGr + 0
#define DK_LBKT  ALTGR(DIGIT8)      // [ on AltGr + 8
#define DK_RBKT  ALTGR(DIGIT9)      // ] on AltGr + 9
#define DK_PIPE  ALTGR(DIGIT1)      // | on AltGr + 1
#define DK_BSLS  ALTGR(MINUS)       // \ on AltGr + -
#define DK_SCLN  ALTGR(COMMA)       // ; on AltGr + ,
#define DK_COLN  ALTGR(PERIOD)      // : on AltGr + .
#define DK_HASH  ALTGR(RIGHT_BRACE) // # on AltGr + '
#define DK_LESS  SHIFT(COMMA)       // < on Shift + ,
#define DK_GRTR  SHIFT(PERIOD)      // > on Shift + .
#define DK_QUES  SHIFT(MINUS)       // ? on Shift + -
#define DK_EXLM  SHIFT(DIGIT1)      // ! on Shift + 1
#define DK_DQUO  SHIFT(DIGIT2)      // " on Shift + 2
