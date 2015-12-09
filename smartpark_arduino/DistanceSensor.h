#include <SPI.h>

class DistanceSensor{
  protected:
    int triggerPin, echoPin;
    long microsecondsToInches(long microseconds) {
      return microseconds / 74 / 2;
    };
  public:
    DistanceSensor(int triggerPin, int echoPin);
    long checkDistance();
};

