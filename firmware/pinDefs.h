#ifndef PIN_DEFS_H
#define PIN_DEFS_H

#include <Arduino.h>

// microphone
#define MIC_IN_PIN

// mp3 module & speaker

// servo
#define SERVO_OUT_PIN


////////////////////////////////////////////////////////

// reference

// display control via shift registers (SRs) on SPI port
// D10 (CS)   -> all SRs RCK latch pin
#define SHIFTREG_RCK_PIN 10
// D11 (COPI) -> SR 0 SIN pin
#define SHIFTREG_SIN_PIN 11
// D12 (CIPO) -> NC
// D13 (SCK)  -> all SRs SRCK pin
#define SHIFTREG_SRCK_PIN 13

// control button pins
#define BTN_START_PIN 4 // with delay
#define BTN_PAUSE_PIN 5
#define BTN_RESUME_PIN 6 // without delay
#define BTN_ADD_30_SEC_PIN 7
#define BTN_ADD_60_SEC_PIN 8
#define BTN_SUB_15_SEC_PIN 9

// infrared control signal pins
#define IR_IN_PIN A0
#define IR_OUT_PIN A1

// LED pins
#define LED_5_PIN A2
#define LED_4_PIN A3
#define LED_3_PIN A4
#define LED_2_PIN A5
#define LED_1_PIN 3
#define LED_GO_PIN 2

#endif // PIN_DEFS_H