#include <FastLED.h>


// should be for lights 166
#define NUM_LEDS 10


#define DATA_PIN 13


// Define the array of leds
CRGB leds[NUM_LEDS];



void DrawComet()
{  
  
    const byte fadeAmt = 128;    
    const int cometSize = 4;
    const int deltaHue  = 3;

    static byte hue = HUE_RED;
    static int iDirection = 1;
    static int iPos = 0;

    hue += deltaHue;

    iPos += iDirection;
    if (iPos == (NUM_LEDS - cometSize) || iPos == 0){
        iDirection *= -1;
        FastLED.show();
    }
        
        // this make bouunce   
    
    
    for (int i = 0; i < cometSize; i++){
        // *2 here
        leds[iPos + i].setRGB(95/2,35/2,0);
        FastLED.show();
    }
    delay(16);
        
    
    // Randomly fade the LEDs
   /*for (int j = 0; j < NUM_LEDS; j++)
        if (random(10) > 5)
            leds[j] = leds[j].fadeToBlackBy(fadeAmt);  
            FastLED.show();

    delay(50);*/
}







void setup() { 

    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
    Serial.begin(9600);   // setup the monitor

}





void loop() { 
  

  for (int j = 0; j <= NUM_LEDS; j++){
        // *2 here
        leds[j].setRGB(82/2,47/2,0);
        FastLED.show();
        
        DrawComet();
        
        
        
        
        
        
        
    }
  
  
  

}

