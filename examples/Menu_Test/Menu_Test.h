#pragma once

#include <MD_Menu.h>

const bool AUTO_START = true; // auto start the menu, manual detect and start if false

// Select the User Input/Output hardware components that will be used
#define DISPLAY_SERIAL   0   // Serial Monitor display (useful for testing)
#define DISPLAY_LCD_SHIELD 0 // Two line LCD using standard LiquidCrystal library
#define DISPLAY_LCD_I2C  1   // Two line LCD using I2C and HD44780 library
#define DISPLAY_OLED_I2C 0   // OLED 128x64 display using I2C and Adafruit SSD1306 library
#define DISPLAY_PAROLA   0   // One line LED matrix display using MD_Parola library

#define INPUT_SWITCH    0  // Use discrete switches for input
#define INPUT_LCDSWITCH 0  // Use analog based switches on LCD shield
#define INPUT_RENCODER  1  // Use rotary encoder with built in push switch
#define INPUT_SERIAL    0  // Serial Monitor INPUT (useful for testing)

const uint32_t BAUD_RATE = 57600;   // Serial Monitor speed setting 
const uint16_t MENU_TIMEOUT = 5000; // in milliseconds

const uint8_t LED_PIN = LED_BUILTIN;  // for myLEDCode function

// Function prototypes for Navigation/Display
void setupNav(void);
bool display(MD_Menu::userDisplayAction_t, char* = nullptr);
MD_Menu::userNavAction_t navigation(uint16_t &incDelta);

// Function prototypes for variable get/set functions
// These are split for demonstration purposes. They could all be in one function.
MD_Menu::value_t *mnuListValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuBoolValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuIntValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t* mnuExtValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuFloatValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuEngValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuFFValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuFBValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *mnuSerialValueRqst(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *myCode(MD_Menu::mnuId_t id, bool bGet);
MD_Menu::value_t *myLEDCode(MD_Menu::mnuId_t id, bool bGet);

