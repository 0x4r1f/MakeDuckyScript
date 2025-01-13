/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("\t\tHello Hacker !! \n\tAre you ready to Hack The Planet? ");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
