#include <stdlib.h>

#include "RGBColor.h"
#include "Arduino.h"


RGBColor::RGBColor(char *hex){
  Serial.print("Color: ");
  Serial.println(hex);

  char* pEnd;
  
  red   = strtol(hex,&pEnd, 16)/2;
  green = strtol(pEnd, &pEnd, 16)/2;
  blue  = strtol(pEnd, NULL, 16)/2;

  Serial.print("Color - R: ");
  Serial.print(red);
  Serial.print(" G: ");
  Serial.print(green);
  Serial.print(" B: ");
  Serial.println(blue);
}

int RGBColor::getRed(){
  return red;
}

int RGBColor::getGreen(){
  return green;
}

int RGBColor::getBlue(){
  return blue;
}

