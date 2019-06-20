#include <ESP8266WiFi.h>
void setup()
{
  Serial.begin(115200);
  Serial.println();
  WiFi.disconnect();
  delay(1000);
  Serial.println("Nearby networksd found");
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
  Serial.println();
  Serial.print("Connected Network is");
  Serial.println(WiFi.SSID());
  Serial.print("IP address allotted to ESP IS");
  Serial.println(WiFi.localIP());
  Serial.print("MAC Address of ESP ");
  Serial.println(WiFi.macAddress());
  Serial.print("Signal Strength is :");
  Serial.println(WiFi.RSSI());
}
void loop()
{
  
}

