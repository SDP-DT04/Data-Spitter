#include <Arduino.h>
#include "data.h"


void setup()
{
  delay(2000);
  Serial.begin(9600);
  while(!Serial);

  Serial.println('START');
  Serial.println(11938453);
  Serial.println(50);
  Serial.println(16.2);
  for (int i=0; i < DATA_LEN-1; ++i)
  {
   Serial.println(data[i]);
  }
  Serial.println('STOP');
}

void loop()
{

}
