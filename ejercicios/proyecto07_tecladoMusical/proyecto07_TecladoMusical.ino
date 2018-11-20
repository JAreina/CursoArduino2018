
/*  Project 7 - Teclado
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

// crear una matriz de notas
// los números a continuación corresponden a
// las frecuencias de medio C, D, E y F
int notes[] = {262, 294, 330, 349};

void setup() {
 //Comienzo serial communication
 Serial.begin(9600);
}

void loop() {
 // create a local variable to hold the input on pin A0
 int keyVal = analogRead(A0);
 // send the value from A0 to the Serial Monitor
 Serial.println(keyVal);

  // tocar la nota correspondiente a cada valor en A0
 if (keyVal == 1023) {
  // tocar la primera frecuencia en la matriz en el pin 8
 tone(8, notes[0]);
 } else if (keyVal >= 990 && keyVal <= 1010) {
  // tocar la segunda frecuencia en la matriz en el pin 8
 tone(8, notes[1]);
 } else if (keyVal >= 505 && keyVal <= 515) {
  // tocar la tercera frecuencia en la matriz en el pin 8
 tone(8, notes[2]);
 } else if (keyVal >= 5 && keyVal <= 10) {
  // tocar la cuarta frecuencia en la matriz en el pin 8
 tone(8, notes[3]);
 } else {
  // si el valor está fuera de rango, no toque ningún tono
 noTone(8);
 }
}