/*  Project 11.04- I2C
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */
#include <Wire.h>

byte x = 0;

void setup() {
	Wire.begin();  // Se inicializa en el bus I2C como maestro
}

void loop() {
	Wire.beginTransmission(8);  // inicia una transmicion al dispositivo #8
	Wire.write("x is ");  // envia 5 bytes
	Wire.write(x);  // envia 1 byte
	Wire.endTransmission();  // transmite los bytes
	x++;  // incrementa la variable x
	delay(500);
}