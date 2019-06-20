#include<ESP8266WiFi.h>
WiFiServer server(80);
void setup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP("chandan","123456789");
  server.begin();
  Serial.begin(115200);
  IPAddress HTTPS_ServerIP=WiFi.softAPIP();
  Serial.println("IP address is");
  Serial.println(HTTPS_ServerIP);
  }

void loop() 
{
}
