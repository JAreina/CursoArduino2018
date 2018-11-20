/*  Project 14- Retocar logo Arduino
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

void setup() {
 // inicializar comunicación serial
 Serial.begin(9600);
}

void loop() {
 // lee el valor de A0, divide por 4 y
 // enviarlo como un byte a través de la conexión serial
 Serial.write(analogRead(A0) / 4);
 delay(1);
}
/* Ejemplo codigo en Processing
// importar la librería serial
import processing.serial.*;

// crear una instancia de la librería serial
Serial myPort;

// crear una instancia de PImage
PImage logo;

// una variable para mantener el color de fondo
int bgcolor = 0;

void setup() {
 size(1, 1);
 surface.setResizable(true);
  // establece el modo de color a Tono / Saturación / Brillo
 colorMode(HSB, 255);

 // carga el logo de Arduino en la instancia de PImage
 logo = loadImage("http://www.arduino.cc/arduino_logo.png");

 // hacer que la ventana tenga el mismo tamaño que la imagen
 surface.setSize(logo.width, logo.height);

 // imprime una lista de los puertos serie disponibles a la
 // Procesando ventana de estado
 println("Available serial ports:");
 println(Serial.list());

 // Dígale al objeto serial la información que necesita para comunicarse.
 // con el arduno. Cambiamos Serial.list () [0] al correcto
 // puerto correspondiente a su placa Arduino. El último
 // parámetro (por ejemplo, 9600) es la velocidad de la comunicación. Eso
 // tiene que corresponder con el valor pasado a Serial.begin () en su
 // Arduino sketch.
 myPort = new Serial(this, Serial.list()[0], 9600);

 // Si conoce el nombre del puerto utilizado por la placa Arduino,
 // puede especificarlo directamente así.
 // puerto = nuevo serial (este, "COM1", 9600);

}

void draw() {

// si hay información en el puerto serie
 if ( myPort.available() > 0) {
 // leer el valor y almacenarlo en una variable
 bgcolor = myPort.read();

// imprimir el valor en la ventana de estado
 println(bgcolor);
 }
 // Dibuja el fondo. la variable bgcolor
 // contiene el tono, determinado por el valor
 // desde el puerto serie
 background(bgcolor, 255, 255);

 // dibuja el logo de Arduino
 image(logo, 0, 0);
}
 */