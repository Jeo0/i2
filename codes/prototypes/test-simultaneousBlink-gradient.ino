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


/*if numberOfNotebok == 10 {
  punta ka sa kabilang building;
}

else {
  stay ka lang dito;  
  if numberOfNotebook == 9{
    punta ka sa annex building;
  }
  else {
    stay ka dito;
  }

}*/
int FADE = 10;

int checkIBR(int ibr_return){

  if (ibr_return == 50) {
      ibr_return -= FADE;
      return ibr_return;
  }
  else if (ibr_return == 25) {
     ibr_return -= FADE;
     return ibr_return;
  }  
  else {
      ibr_return = 0;
      return ibr_return;
  }
}
int checkIBG(int ibg_return){
  if (ibg_return == 50) {
      ibg_return -= FADE;
      return ibg_return;
  }
  else if (ibg_return == 25) {
     ibg_return -= FADE;
     return ibg_return;
  }  
}
int checkIBB(int ibb_return){
  if (ibb_return == 50) {
      ibb_return = ibb_return - FADE;
      return ibb_return;
  }
  else if (ibb_return == 25) {
     ibb_return -= FADE;
     return ibb_return;
  }  
  else {
      ibb_return = 0;
      return ibb_return;
  }
}


void loop() {
  
    int IBR;// = 100;
    int IBG;// = 0;
    int IBB;// = 100;
    int FADE= 25;     
    int k = 0;    

        
    if (digitalRead(15) == 1) {
        
      IBR = 250;
      IBG = 0;
      IBB = 50;
      //FADE = 10;
      
      
      for(int index = 3; index >=0;){
        leds[index] = CRGB(IBR, 0, 0);
        index--;
        IBR -= FADE;
      }
      //leds[0] = CRGB(5.1, 0,0);
      //leds[1] = CRGB(0,0,20.1);
      //leds[2] = CRGB(30.5,0,0);
      //leds[3] = CRGB(0,40.1,0);
      
      k = 0;

      FastLED.show();
      Serial.println(digitalRead(15));
    }  
  
    else {
      leds[0] = CRGB(0, 0, 0);
      FastLED.show();
    }
      
      //leds[0].setRGB(checkIBR(IBR), 0, checkIBB(IBB));
      /*if(IBR == 50 || IBB == 50){

      }
      
      //IBR = checkIBR(IBR);
      //IBG = checkIBG(IBG);
      //IBB = checkIBB(IBB);
      
     // here put pogi()
      */
      //leds[0] = CRGB(0, 0, 0);
    
    Serial.println(digitalRead(15));
    
      
    delay(250);

    
    for(int i = NUM_LEDS+1; i >= 0; i--) {
      //leds[i+NUM_LEDS] = leds[i].setRGB(50-FADE, 0, 50-FADE);
      //FastLED.show();
      leds[i-3] = leds[i-4];
      

      //FastLED.show(i);
    }    


}






// pogi(here)
 /*
      else if (IBG >= 0) {
        IBG = IBG - FADE;
      }
      else if (IBG != 0) {
        IBG = 0;
      }
      else if (IBR >= 0) {
        IBB = IBB - FADE;
      }
      else if (IBR != 0) {
        IBB = 0;
      }
      */