#include<ESP8266WiFi.h>
void setup()
{
  Serial.begin(115200);
  delay(200);
  Serial.println();
  Serial.print("MAC");
  Serial.println(WiFi.macAddress());
}
void loop()
{
  
}

