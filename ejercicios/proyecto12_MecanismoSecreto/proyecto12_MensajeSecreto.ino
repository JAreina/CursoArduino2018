/*  Project 7 - Teclado
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */


#include <Servo.h>
// crear una instancia de la biblioteca servo
Servo myServo;

const int piezo = A0; // pin el piezo se adjunta a
const int switchPin = 2; // pin el interruptor está conectado a
const int yellowLed = 3; // pin el LED amarillo está conectado a
const int greenLed = 4; // pin el LED verde está conectado a
const int redLed = 5; // pin el LED rojo está conectado a

// variable para el valor piezo
int knockVal;
// variable para el valor del interruptor
int switchVal;

// variable para indicar si está bloqueado o no
const int quietKnock = 10;
const int loudKnock = 100;

// variable to indicate if locked or not
boolean locked = false;
// cuántos golpes válidos has recibido
int numberOfKnocks = 0;

void setup() {
	 // adjuntar el servo al pin 9
	 myServo.attach (9);

	 // hacer las salidas de los pines LED
	 pinMode (yellowLed, OUTPUT);
	 pinMode (redLed, SALIDA);
	 pinMode (greenLed, SALIDA);

	 // establece el pin del interruptor como una entrada
	 pinMode (switchPin, INPUT);

	 // iniciar la comunicación en serie para la depuración
	 Serial.begin (9600);

	 // enciende el LED verde
	 digitalWrite (greenLed, HIGH);

	 // mover el servo a la posición desbloqueada
	 myServo.write (0);

	 // estado de impresión al monitor serial
	 Serial.println ("la caja está desbloqueada!");
}

void loop() {

// Si la caja este desbloqueada
 if (locked == false) {

	// lee el valor del pin del interruptor
	 switchVal = digitalRead (switchPin);

	// si se presiona el botón, bloquear la caja
	 if (switchVal == HIGH) {
	 // establece la variable bloqueada en "true"
	 bloqueado = verdadero;

	// cambiar los LED de estado
	 digitalWrite (greenLed, LOW);
	 digitalWrite (redLed, HIGH);

	// mover el servo a la posición bloqueada
	 myServo.write (90);

	// imprimir estado
	 Serial.println ("la caja está bloqueada!");

	// espera que el servo se mueva a la posición
	 retraso (1000);
	 }
 }

// Si la caja esta bloqueada
 if (locked == true) {

// comprobar el valor del piezo
 knockVal = analogRead (piezo);

// si no hay suficientes golpes válidos
 if (numberOfKnocks <3 && knockVal> 0) {

	// verifica si el golpe está dentro del rango
	 if (checkForKnock (knockVal) == true) {

		// incrementa el número de golpes válidos
		 numberOfKnocks ++;
	 }

	// estado de impresión de los golpes
	 Serial.print (3 - numberOfKnocks);
	 Serial.println ("más golpes para ir");
 }

// si hay tres golpes
 if (numberOfKnocks> = 3) {
	 // desbloquear la caja
	 bloqueado = falso;

	// mover el servo a la posición desbloqueada
	 myServo.write (0);

 	// espera a que se mueva
	 retraso (20);

	// cambiar los LED de estado
	 digitalWrite (greenLed, HIGH);
	 digitalWrite (redLed, LOW);
	 Serial.println ("la caja está desbloqueada!");

	numberOfKnocks = 0;
 }
 }
}

// esta función verifica si una
// la detonación detectada está dentro del rango máximo y mínimo
boolean checkForKnock(int value) {
     // si el valor de la detonación es mayor que
	 // el mínimo, y más grande que el máximo
	 if (value > quietKnock && value < loudKnock) {
		 // enciende el LED de estado
		 digitalWrite(yellowLed, HIGH);
		 delay(50);
		 digitalWrite(yellowLed, LOW);
		 // print out the status
		 Serial.print("Validk of value ");
		 Serial.println(value);
		 // return true
		 return true;
	 }
	 // if the knock is not within range
	 else {
		 // estado de impresión
		 Serial.print ("valor erroneo");
		 Serial.println(value);
		 return false;
	 }
}