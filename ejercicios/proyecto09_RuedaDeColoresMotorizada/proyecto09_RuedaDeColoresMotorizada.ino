
/*  Project 9 - Rueda colores Motorizada
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

 // Nombre de las constantes del interuptor y motor
const int switchPin = 2; // Nunero del pin del interuptor
const int motorPin = 9; // Numero del pin del motor

int switchState = 0; // variable para tener el estado del interuptor

void setup() {
 // inicializamos pin motor como salida:
 pinMode(motorPin, OUTPUT);
 // inicializamos el interuptor como entrada:
 pinMode(switchPin, INPUT);
}

void loop() {
 // Leemos el estado del interuptor:
 switchState = digitalRead(switchPin);

// Comprobamos que si el interuptor esta presionado.
 if (switchState == HIGH) {
 // Encendemos el motor:
 digitalWrite(motorPin, HIGH);
 } else {
 // Apagamos el motor:
 digitalWrite(motorPin, LOW);
 }
}