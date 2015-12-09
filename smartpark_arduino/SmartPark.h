#include "LightStrip.h"
#include "DistanceSensor.h"
#include <SmartThings.h>

#define MAX_DISTANCE 200
#define MIN_DISTANCE 10

#define PIN_THING_TX    2
#define PIN_THING_RX    3

typedef enum {
  PARKING, 
  LEAVING, 
  PASSIVE, 
  STANDBY
} SmartParkMode;


class SmartPark{
  protected:
    LightStrip *lightStrip;
    DistanceSensor *distanceSensor;
    
    SmartThings *smartThings;
    
    SmartParkMode listenForTrigger();
    void runParkingMode();
    void runLeavingMode();
  public:
    SmartPark();
    void run();
};

