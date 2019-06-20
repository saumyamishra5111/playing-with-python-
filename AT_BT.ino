#include<SoftwareSerial.h>

SoftwareSerial BTSerial(10,11);

String HC05_Responce="";

void setup(){

pinMode(9,OUTPUT);

digitalWrite(9,HIGH);

Serial.begin(38400);

Serial.println("Enter AT command:");

BTSerial.begin(38400);

}

void loop(){

if(BTSerial.available())

Serial.write(BTSerial.read());

if(Serial.available())

BTSerial.write(Serial.read());

}


