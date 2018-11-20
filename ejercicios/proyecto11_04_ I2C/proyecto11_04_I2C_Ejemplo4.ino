/*  Project 11.04- I2C
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */
#include <Wire.h>

void setup() {
  Wire.begin(8);  // se inicializa en el bus I2C como esclavo con el #8
  Wire.onRequest(escrituraEvento);  // registra la función de atención del evento de escritura 
}
void loop() {
  delay(100);
}
void escrituraEvento() {  //define la función de envio
  Wire.write("Hola");  //responde con un mensaje de 5 bytes
}