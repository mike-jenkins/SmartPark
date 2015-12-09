#include "SmartPark.h"

SmartThingsCallout_t messageCallout;

SmartPark::SmartPark(){
  Serial.println("SmartPark constructor");
  lightStrip = new LightStrip(4);
  smartThings = new SmartThings(PIN_THING_RX, PIN_THING_TX, messageCallout);
}

SmartParkMode SmartPark::listenForTrigger(){
  return SmartParkMode::STANDBY;
};

void SmartPark::runParkingMode(){
  
}
void SmartPark::runLeavingMode(){
  
}
  
  
void SmartPark::run(){
  smartThings->run();
};

void messageCallout(String message)
{
  // if debug is enabled print out the received message
//  if (isDebugEnabled && !message.equals(""))
  if (!message.equals("")){
    Serial.print("Received message: '");
    Serial.print(message);
    Serial.println("' ");
  }
//
//  // if message contents equals to 'on' then call on() function
//  // else if message contents equals to 'off' then call off() function
//  if (message.equals("on"))
//  {
//    on();
//  }
//  else if (message.equals("off"))
//  {
//    off();
//  }
};
