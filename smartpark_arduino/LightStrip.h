#include <SPI.h>
#include <LPD8806.h>

#include "RGBColor.h"

class LightStrip{    
  protected:
    LPD8806 strip;

    int numLEDs;
  public:
    LightStrip(int numLEDs);
    void displayLightBarPercentage(float percentage, RGBColor *rgbColor);
};
