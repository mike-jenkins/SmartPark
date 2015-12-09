#include "LightStrip.h"

LightStrip::LightStrip(int numLEDs){
  this->numLEDs = numLEDs;
  strip = LPD8806(numLEDs);
  strip.begin();
}

void LightStrip::displayLightBarPercentage(float percentage, RGBColor *rgbColor){
  int displayLEDs = percentage * numLEDs;
  
  for(int i=0; i<displayLEDs; i++){    
    strip.setPixelColor(i, rgbColor->getRed(), rgbColor->getGreen(), rgbColor->getBlue());
  }
  for(int i=displayLEDs; i<this->numLEDs; i++){
    strip.setPixelColor(i,0,0,0);
  }
  
  strip.show();
}
