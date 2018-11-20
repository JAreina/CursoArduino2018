/* Coche Fantastico 3
 * --------------
 *
 * Hacemos que el codigo sea mas fluido.
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */
/**
 * Coche fantástico
 */

const byte led[] = {13, 12, 11, 10, 9, 8};

void setup() {
    for (int i=0; i<sizeof(led); i++) {
        pinMode(led[i], OUTPUT);
    }
}

void loop() {
    for (int i=0; i<sizeof(led); i++) {
        digitalWrite(led[i], HIGH);
        delay(100);
        digitalWrite(led[i], LOW);
    }
    for (int i=sizeof(led)-1; i>0; i--) {
        digitalWrite(led[i], HIGH);
        delay(100);
        digitalWrite(led[i], LOW);
    }
}

