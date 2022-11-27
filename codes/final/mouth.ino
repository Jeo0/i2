#include <FastLED.h>
#define NUM_LEDS 5
// final product should be aroudn 57pixels (1.9m)

#define DATA_PIN 13
#define MIC_PIN 15

CRGB leds[NUM_LEDS];




void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
  pinMode(MIC_PIN, INPUT); 

}
  







int brightness = 20;
int fadeAmt = 10;


void loop(){


  if(digitalRead(MIC_PIN) == 1) {
    brightness += (fadeAmt*4);

    // to make sure the brightness wont go upper than 255
    if(brightness >= 255 || brightness >= 214)    brightness = 255;
    
    // to light the array of leds
    for(int i=0; i < NUM_LEDS; i++){
      leds[i].setRGB(brightness,brightness,brightness);
      FastLED.show();
    }
  }
  
  
  
  else{
    brightness -= fadeAmt;
    

    // to light the array of leds
    for(int e=0; e < NUM_LEDS; e++){
      leds[e].setRGB(brightness,brightness,brightness);
      FastLED.show();      
    }

    // make sure the brightness is always 20 by default
    if(brightness <= 20 || brightness == 30){ brightness=20; }
  }
  
  
  delay(20);
}
