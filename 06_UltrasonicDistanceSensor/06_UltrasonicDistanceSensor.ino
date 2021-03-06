#include <MeAuriga.h>

MeUltrasonicSensor ultrasonic(PORT_10);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("distance(cm) = ");          // Print the results to the serial monitor
  Serial.println(ultrasonic.distanceCm());  // Distance value from 3cm - 400cm
  delay(1000);                                // Wait 50 milliseconds before next measurement
}
