#include <RTClib.h>
#include <Wire.h>
RTC_DS3231 rtc;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  rtc.begin();
  rtc.adjust(DateTime(F(__DATE__),F(__TIME__)));
}
void loop()
{
  
  DateTime now = rtc.now();
  
  Serial.println("the Time is: " + String(now.hour()) + ":" + String(now.minute()) + ":" + String(now.second()));

  delay(1000);
}