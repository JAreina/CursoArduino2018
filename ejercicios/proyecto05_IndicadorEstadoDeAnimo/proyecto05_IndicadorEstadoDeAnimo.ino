/*  Project 5 - Indicador estado de animo
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

// incluir la biblioteca servo
#include <Servo.h>

Servo myServo; // crear un objeto servo
int const potPin = A0; // pin analógico usado para conectar el potenciómetro
int potVal;  // variable para leer el valor del pin analógico
int angle; // variable para mantener el ángulo para el servomotor

void setup() {
 myServo.attach(9); // une el servo en el pin 9 al objeto servo
 Serial.begin(9600); // abre una conexión serial a tu computadora
}

void loop() {
 potVal = analogRead(potPin); // lee el valor del potenciómetro
 // imprimir el valor en el monitor de serie
 Serial.print("potVal");
 Serial.print(potVal);

// escala los números del giro
 angle = map(potVal, 0, 1023, 0, 179);

// imprimir el ángulo para el servomotor
 Serial.print(", angle: ");
 Serial.println(angle);

// establecer la posición del servo
 myServo.write(angle);

// espera a que llegue el servo
 delay(15);
}