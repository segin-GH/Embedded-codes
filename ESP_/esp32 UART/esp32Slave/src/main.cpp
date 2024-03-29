#include <Arduino.h>

#include <HardwareSerial.h>

HardwareSerial SerialPort(1); // use UART2


char number  = ' ';
int LED = 2;

void setup()
{
  SerialPort.begin(115200, SERIAL_8N1, 16, 17);
  pinMode(LED, OUTPUT);
}
void loop()
{
  if (SerialPort.available())
  {
    char number = SerialPort.read();
    if (number == '0') {
      digitalWrite(LED, LOW);
    }
    if (number == '1') {
      digitalWrite(LED, HIGH);
    }
  }
}