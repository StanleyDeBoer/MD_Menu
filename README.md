# MD_Menu

This is a menu management library created as a front end to set parameters in embedded hardware control applications, leaving the back end under application control. It is suitable for text based displays (eg, LCD modules) with 1 or 2 lines available for display.

Menu managers in embedded systems are generally not the main function of the application software, so this library minimises the use of RAM and has a small memory footprint overall, leaving more space 
for what really matters.

The library allows user code to define:
- Static menu definitions to minimised RAM footprint. 
- Callbacks for navigation and display control.
- Menu inactivity timeout.
- Auto start on key press or manual start by user code.
- Input methods are available for
  - Boolean (Y/N) values.
  - Pick List selection.
  - 8/16/32 bit signed integers.
  - Decimal floating point.

Support Arduino, ESP8266 and ESP32.

[Library Documentation](https://majicdesigns.github.io/MD_Menu/)
