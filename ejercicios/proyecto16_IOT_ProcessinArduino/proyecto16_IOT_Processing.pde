
/** PARA PROCESSING 2.2.1
 * ENVIO de dos datos desde Arduino a TS vía puerto SERIE (datos separados por una coma dato1,dato2)
 EMAKERUNGS 2016
 */

import processing.serial.*;
import processing.net.*;

//CONFIGURACION
String APIKEY = "ABCDEFGHIJKL"; //API KEY
String FIELD1 = "field1";
String FIELD2 = "field2";
int PORTNUM = 0; //numero de puerto de Arduino
//FIN CONFIGURACION
  String ln;
 
Serial arduino;
Client c;
String data; //buffer
int number1; //acá se almacena el valor1 
int number2; //idem 2
void setup() {
  size(600, 400);


  println(Serial.list()); //Listamos todos los puertos serie.

  arduino = new Serial(this, Serial.list()[PORTNUM], 9600); //Iniciamos el puerto serie

 
}

void draw() {
  background(50);
  fill(255);
  text("Arduino Serie a ThinkSpeak- By Emakerungs", 10, 20);

  fill(0, 255, 0);
  text("Dato1:  " + number1, 10, 40);
 text("Dato2:  " + number2, 10, 50);
  
  if( data != null ) {
    fill(0, 255, 0);
    text("Server Response:", 10, 60);
    fill(200);
    text(data, 10, 80);
  }
  if(c != null) {
    if (c.available() > 0) { 
      data = c.readString(); 
      println(data);
    }
  }

 

  if( (ln = arduino.readStringUntil('\n')) != null) { //Si hay una nueva linea de arduino, la leemos, la almacenamos, la spliteamos
      String splitst[] = split(ln,',');
    try {
    
      number1 = new Integer(trim(splitst[0]));
      number2 =  new Integer(trim(splitst[1]));
      if(number1 < 1025 || number2<1025) {
        println("Escribiendo... " + number1);
         println("Escribiendo... " + number2);
        sendNumber(number1,number2); //Enviamos los valores al server.
      }
    }
    catch(Exception ex) {
    }
  }
}

void sendNumber(float num1,float num2) {
  c = new Client(this, "api.thingspeak.com", 80); 
  c.write("POST /update?key="+APIKEY+"&"+FIELD1+"=" + num1 +"&"+FIELD2+"=" + num2+ " HTTP/1.1\n");
 c.write("Host: api.thingspeak.com\n\n"); 
}