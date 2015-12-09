#include "SmartPark.h"

#define trigPin 2
#define echoPin 4

const bool isDebugEnabled = true;

SmartPark *smartPark;

void setup() {
  Serial.begin (9600);
  smartPark = new SmartPark();
}

void loop() {
}

