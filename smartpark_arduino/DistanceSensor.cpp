#include "DistanceSensor.h"

DistanceSensor::DistanceSensor(int triggerPin, int echoPin){
  this->triggerPin = triggerPin;
  this->echoPin = echoPin;
  pinMode(this->triggerPin, OUTPUT);
  pinMode(this->echoPin, INPUT);
}

long DistanceSensor::checkDistance(){
  long duration, inches, cm;
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(triggerPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  // convert the time into a distance
  inches = microsecondsToInches(duration);
  
  Serial.print(inches);
  Serial.println(" in");
  
//  lightStrip->lightsDisplay( inches >= 40? 4: inches/10);
  return inches;
}

