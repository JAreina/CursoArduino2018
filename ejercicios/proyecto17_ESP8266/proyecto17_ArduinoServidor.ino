#include "SoftwareSerial.h"
SoftwareSerial softSerial(2, 3); // RX, TX
 
const int baudRate = 9600;
char* SSDI = "tuWifi";
char* password = "tuPassword";
 
void setup()
{
   Serial.begin(baudRate);
   softSerial.begin(baudRate);
   delay(1000);
 
   softSerial.write("AT+CWJAP=\"");
   softSerial.write(SSDI);
   softSerial.write("\",\"");
   softSerial.write(password);
   softSerial.write("\"\r\n");
 
   delay(4000);
   softSerial.write("AT+CIPMUX=1\r\n");
   delay(2000);
   softSerial.write("AT+CIPSERVER=1,80\r\n");
}
 
void loop()
{
   if (softSerial.available())
   {
      Serial.print((char)softSerial.read());
   }
   if (Serial.available())
   {
      softSerial.print((char)Serial.read());
   }
}