#include <FastLED.h>

#define NUM_LEDS 6

#define DATA_PIN 0
CRGB leds[NUM_LEDS];
void setup() { 
   
FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
}
void loop() { 
  red();
  
}
void red()
{
  for(int i=0;i<NUM_LEDS;i++)
  {
    leds[i]=CRGB::Red;
  FastLED.show();
  }
}
