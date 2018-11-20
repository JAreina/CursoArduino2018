/*  Project 8 - Reloj de Arena
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */
// constante nombrada para el pin del interruptor
const int switchPin = 8;

unsigned long previousTime = 0;  // almacenar la última vez que se actualizó un LED
int switchState = 0; // el estado actual del interruptor
int prevSwitchState = 0; // el estado del interruptor anterior
int led = 2; // una variable para referirse a los LEDs

// 600000 = 10 minutos en milisegundos
long interval = 600000; // interval at which to light the next LED

void setup() {
// establecer los pines LED como salidas
 for (int x = 2; x < 8; x++) {
	pinMode(x, OUTPUT);
 }
 //  establece el pin del interruptor de inclinación como entrada
 pinMode(switchPin, INPUT);
}

void loop() {
// almacenar el tiempo desde que Arduino comenzó a ejecutarse en una variable
 unsigned long currentTime = millis();

// compara la hora actual con la hora anterior en que un LED se encendió
 // si es mayor que tu intervalo, ejecuta la sentencia if
 if (currentTime - previousTime > interval) {
	 // guarda la hora actual como la última vez que cambiaste un LED
	 previousTime = currentTime;
	 // Enciende el LED
	 digitalWrite(led, HIGH);
	 // incrementa la variable led
	 // en 10 minutos el siguiente LED se encenderá
	 led++;

	 if (led == 7) {
	  // se acabó la hora
	 }
 }

 // leer el valor del interruptor
 switchState = digitalRead(switchPin);
 
 // si el interruptor ha cambiado
 if (switchState != prevSwitchState) {
	 // apagar todos los LEDs
	 for (int x = 2; x < 8; x++) {
		digitalWrite(x, LOW);
	 }

	 // restablecer la variable LED a la primera
	 led = 2;

	 // restablecer el temporizador
	 previousTime = currentTime; 
	}
  // establecer el estado del interruptor anterior al estado actual
 prevSwitchState = switchState;
}