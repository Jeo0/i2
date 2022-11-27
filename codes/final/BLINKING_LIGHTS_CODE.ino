#include <FastLED.h>


// 43 traffileds
// traffic leds has 4 equalsides
#define TRAFFIC_LEDS 7


// 16 headlights
#define HEADLIGHT 3

// 59 total leds
#define TOTAL_LEDS 11

#define DATA_PIN 13




int timeout = 750;

CRGB leds[TOTAL_LEDS];

void setup() {
  // put your setup code here, to run once:

    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, TOTAL_LEDS);  
    //FastLED.setBrightness(50);
}

void loop() { 


  // for the headlight
  int endOfHead = TRAFFIC_LEDS + HEADLIGHT;
  int startOfHead = TRAFFIC_LEDS;
  for(int f = startOfHead; f < endOfHead; f++){
    leds[f].setRGB(255,250,246);
    FastLED.show();
  }



  
  // for the traffic light
  for (int j = 0; j < TRAFFIC_LEDS; j++){
        leds[j].setHue(HUE_ORANGE);
        FastLED.show();
        
  }
  
  delay(timeout);
  for (int i = 0; i < TRAFFIC_LEDS; i++){
        leds[i] = CRGB::Black;
        FastLED.show();
        
  }

  delay(timeout);

  
}

       
        
        
        
        
