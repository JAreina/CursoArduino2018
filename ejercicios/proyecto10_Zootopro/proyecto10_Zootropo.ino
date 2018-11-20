/*  Project 10 - Zootropo
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */ 

const int controlPin1 = 2; // conectado al pin 7 en el puente H
const int controlPin2 = 3; // conectado al pin 2 en el puente H
const int enablePin = 9; // conectado al pin 1 en el puente H
const int directionSwitchPin = 4; // conectado al interruptor de dirección
const int onOffSwitchStateSwitchPin = 5; // conectado al interruptor para encender y apagar el motor
const int potPin = A0; // conectado a la salida del potenciómetro

// Variables para mantener los valores de tus entradas
int onOffSwitchState = 0; // estado actual del interruptor de encendido / apagado
int previousOnOffSwitchState = 0; // posición anterior del interruptor de encendido / apagado
int directionSwitchState = 0; // estado actual del interruptor de dirección
int previousDirectionSwitchState = 0; // estado anterior del interruptor de dirección

int motorEnabled = 0; // Enciende / apaga el motor
int motorSpeed ​​= 0; // velocidad del motor
dirección del motor int = 1; // dirección actual del motor

void setup() {
 // Inicializacion de las entradas y salidas
 pinMode(directionSwitchPin, INPUT);
 pinMode(onOffSwitchStateSwitchPin, INPUT);
 pinMode(controlPin1, OUTPUT);
 pinMode(controlPin2, OUTPUT);
 pinMode(enablePin, OUTPUT);

// Activar pin LOW para empezar
 digitalWrite(enablePin, LOW);
}

void loop() {
 // read the value of the on/off switch
 onOffSwitchState = digitalRead(onOffSwitchStateSwitchPin);
 delay(1);

// read the value of the direction switch
 directionSwitchState = digitalRead(directionSwitchPin);

 // lee el valor del bote y divide por 4 para obtener
 // un valor que se puede usar para PWM
 motorSpeed = analogRead(potPin) / 4;

 // si el botón de encendido / apagado cambió de estado desde el último bucle ()
 if (onOffSwitchState != previousOnOffSwitchState) {
 // cambiar el valor de motorDirection si se presiona
 if (onOffSwitchState == HIGH) {
 motorEnabled = !motorEnabled;
 }
 }

 // si el botón de dirección cambió de estado desde el último bucle ()
 if (directionSwitchState != previousDirectionSwitchState) {
 // cambiar el valor de motorDirection si se presiona
 if (directionSwitchState == HIGH) {
 motorDirection = !motorDirection;
 }
 }

 // cambia la dirección en que gira el motor hablando
 // a los pines de control en el puente H
 if (motorDirection == 1) {
 digitalWrite(controlPin1, HIGH);
 digitalWrite(controlPin2, LOW);
 } else {
 digitalWrite(controlPin1, LOW);
 digitalWrite(controlPin2, HIGH);
 }

// si se supone que el motor está encendido
 if (motorEnabled == 1) {
 // PWM el pin habilitado para variar la velocidad
 analogWrite (enablePin, motorSpeed);
 } else {// si se supone que el motor no está encendido
 // apagar el motor
 analogWrite (enablePin, 0);
 }
 // guarda el estado actual de encendido / apagado como el anterior
 previousDirectionSwitchState = directionSwitchState;
 // guarda el estado actual del switch como el anterior
 previousOnOffSwitchState = onOffSwitchState;
}