/*  Project 15- Hackear Botones
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

const int optoPin = 2; // Variable para indicar el pin conectado del optocoplador

void setup() {
 // POnemos el pin del optocoplador como salida
 pinMode(optoPin, OUTPUT);
}

void loop() {
 digitalWrite(optoPin, HIGH); // se pone el pin 2 como Alto, activando el optocoplador

delay(15); // damos un momento para activar el optocoplador

digitalWrite(optoPin, LOW); // Ponemos el pin 2 LOW antes de estar activado de nuevo
 delay(21000); // Esperamos 21 segundos
}