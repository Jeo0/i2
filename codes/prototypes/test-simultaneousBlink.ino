// install mo muna fastled library 
// tas iadd mo ung zip file dito sa arduino ide sa library manager
// tas install mo rin ung board dito sa boards manager -- magrefer ka online
// pero need mo ng usb micro b para mapower + upload ung code sa controller


#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 15
#define DATA_PIN 13
// gpio13 = led
// gpio15 = sensor


// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  pinMode(15, INPUT);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
  Serial.begin(9600);
}

/*void whileTrue (){

}*/

void loop() {

/*  
// dont use

  // while sensor= true
  while (digitalRead(15) == 1) {
    for (int j = 0; j < NUM_LEDS; j = j + 1) {

      leds[j] = CRGB(100, 0, 0);
      FastLED.show();
      delay(50);
      
      leds[j].setRGB(0, 0, 0);
      FastLED.show();
      delay(50);
      

      Serial.println(digitalRead(15));
    }
  }
  
  // while sensor= false
  while (digitalRead(15) != 1) {
    for (int j = 0; j < NUM_LEDS; j = j + 1) {
      leds[j].setRGB(0, 0, 0);
      FastLED.show();
      delay(50);
      
      Serial.println(digitalRead(15));
    }
  }
  */
  



  

  
  /* 
  //test
  
  if (digitalRead(15) == 1) {
    for (int j = 0; j < NUM_LEDS; j = j + 1) {

      leds[j] = CRGB(100, 0, 0);
      FastLED.show();
      delay(50);

      Serial.println(digitalRead(15));
    }
  }
  
  else {
    for (int j = 0; j < NUM_LEDS; j = j + 1) {
      leds[j].setRGB(0, 0, 0);
      FastLED.show();
      delay(50);
      
      Serial.println(digitalRead(15));
    }
  }
  */

    if (digitalRead(15) == 1) {
      leds[0] = CRGB(100, 0, 0);
      FastLED.show();
      delay(50);
      Serial.println(digitalRead(15));
      }    
    else {
      leds[0] = CRGB(0, 0, 0);
      FastLED.show();
      delay(50);
      Serial.println(digitalRead(15));
    }

    for(int i = NUM_LEDS; i >= 1; i--) {
      leds[i] = leds[i - 1];
    }    
    
  }

  


  
/* 
// earl

for (int j = 0; j < NUM_LEDS; ) {  
  if (digitalRead(15) == 1) {
    

      leds[j] = CRGB(100, 0, 0);
      FastLED.show();
      delay(50);
      
      leds[j].setRGB(0, 0, 0);
      FastLED.show();
      delay(50);
      
      j = j + 1;
      Serial.println(j);
    }
  else {
      leds[j].setRGB(0, 0, 0);
      FastLED.show();
      delay(50);
      j = j + 1;
      Serial.println(j);
    }
    
  }
  */








  
}