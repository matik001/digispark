# Digispark - matik001
## 1) What do you need?
You should have digispark (it costs about 2$) on aliexpress.
It's also good to have pendrive case to make it look more normal ;)
## 2) The idea
* Digispark can simulate keyboard and type something when you connect it to usb. You can program it using Arduino IDE.
* This project contains scripts which you may find useful to make a joke or even hack somebody's computer.
* We want to minimize time when user can see that something is going on. Therefore digispark shouldn't type whole script which can be very long, but just command downloading script from hardcoded url and running it.
## 3) How to use
* If you want to download and run program upload run_program.ino to your digispark. (It gives lots of possibilities)
* If you want to run vba script upload run_script.ino.
* In both cases you have to first hardcode proper url to your program or script.
* Folder scripts contains scripts. For example wifi_send.ps1 sends POST request with all wifi passwords to defined host. (You may want to first create webhook for example here: https://webhook.site/)

