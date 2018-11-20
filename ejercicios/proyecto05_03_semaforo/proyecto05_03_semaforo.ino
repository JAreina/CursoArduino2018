
 /*  Project 15- Semáforo de peatones
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */


void setup() {
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
}

void loop() {
    digitalWrite(13, HIGH);
    delay(5000);
    digitalWrite(13, LOW);

    digitalWrite(12, HIGH);
    for(int i=0; i<10; i++){
        digitalWrite(11, HIGH);
        delay(200);
        digitalWrite(11, LOW);
        delay(500);
    }
    digitalWrite(12, LOW);
}