/*  Project 13- Lampara Tactil
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

// importar la biblioteca (debe estar ubicada en el
// Arduino / directorio de bibliotecas)
#include <CapacitiveSensor.h>

// crear una instancia de la biblioteca
// pin 4 envía energía eléctrica
// pin 2 percibe un cambio
CapacitiveSensor capSensor = CapacitiveSensor(4, 2);

// umbral para encender la lámpara
int threshold = 1000;

// pin el LED está conectado a 12
const int ledPin = 12;


void setup() {
 // abrir una conexión serial
 Serial.begin (9600);
 // establece el pin LED como una salida
 pinMode(ledPin, OUTPUT);
}

void loop() {
 // almacenar el valor reportado por el sensor en una variable
 long sensorValue = capSensor.capacitiveSensor(30);

 // imprimir el valor del sensor
 Serial.println(sensorValue);

 // si el valor es mayor que el umbral
 if (sensorValue > threshold) {
 // enciende el LED
 digitalWrite(ledPin, HIGH);
 }
  // si es más bajo que el umbral
 else {
 // apaga el LED
 digitalWrite(ledPin, LOW);
 }

delay(10);
}