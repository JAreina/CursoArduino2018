/* Coche Fantastico 2
 * --------------
 *
 * Se reduce el codigo usando for(;;).
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

int pinArray[] = {2, 3, 4};
int count = 0;
int timer = 100;

void setup(){
  // Hacemos todas las declaraciones de una vez
  for (count=2;count<5;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
}

void loop() {
  for (count=2;count<5;count++) {
   digitalWrite(pinArray[count], HIGH);
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
  for (count=4;count>=2;count--) {
   digitalWrite(pinArray[count], HIGH);
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
}
