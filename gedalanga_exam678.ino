/*=======================
        7SEG - Looping
=========================
*/
uint8_t const LED[] = {32,13,25,26,27,14,12};
uint8_t const NUM_PINS = 7;
uint8_t CYCLE = 0;
uint8_t const LIMIT = 3;
const uint8_t SW1 = 33;

bool SW1_state = 0;

void setup() {
  // put your setup code here, to run once:

  for (int a = 0 ; a < NUM_PINS ; a++){
    pinMode(LED[a], OUTPUT);
  }
    pinMode(SW1, INPUT);  
}

#include "7SEG_MODES.h"

void loop() {
  // put your main code here, to run repeatedly:
  SW1_state = digitalRead(SW1);

  if (SW1_state == 1){
   no_6();
   CYCLE = 0;
   no_7();
   CYCLE = 0;
   no_8();
   CYCLE = 0;
   } else {
    no_dash();
 }
}
/*

*/