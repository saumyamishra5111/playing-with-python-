#include <ESP8266WiFi.h>
void setup()
{
  Serial.begin(115200);
  Serial.println();
  WiFi.disconnect();
  delay(1000);
  Serial.print("Nearby networksd found");
  Serial.println(WiFi.scanNetworks());
  delay(500);
  Serial.println("List of Surrounding Network SSID..");
  int n=WiFi.scanNetworks();
  for(int i=0;i<n;i++)
  {
    Serial.println(WiFi.SSID(i));
  }
  Serial.println();
  WiFi.begin("unknown","chandan000");
  Serial.println("Connecting");
  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
}
void loop()
{
  
}

