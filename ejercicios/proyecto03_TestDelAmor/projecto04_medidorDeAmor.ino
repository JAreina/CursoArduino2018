// nombramos una constante para el pin del sensor
const int sensorPin = A0;
// establecemos la temperatura ambiente (20º Celsius)
const float baselineTemp = 20.0;

void setup(){
  // abrimos una conexión serial para visualizar los valores
  Serial.begin(9600);
  // establecemos los pines de los LEDs como salidas
  // el bucle for() nos ahorra código extra
  for(int pinNumber = 2; pinNumber<5; pinNumber++){
    pinMode(pinNumber,OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop(){
  // leemos el valor del AnalogIn del pin A0 
  // y lo almacenamos en una variable
  int sensorVal = analogRead(sensorPin);

  // enviamos el valor de 10-bits del sensor por el puerto serie
  Serial.print("sensor Value: ");
  Serial.print(sensorVal); 

  // convertimos las lecturas ADC a voltaje
  float voltage = (sensorVal/1024.0) * 5.0;

  // enviamos el nivel de voltaje por el puerto serie
  Serial.print(", Volts: ");
  Serial.print(voltage);

  // convertimos el voltaje a temperatura en grados (ºC)
  // el sensor cambia unos 10mV por grado 
  // la hoja de datos dice que hay unos 500mV compensados
  // ((voltaje - 500mV) 100 veces)
  Serial.print(", degrees C: "); 
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);

  // si la temperatura actual es mas baja que la temperatura base
  // apagamos todos los LEDs
  if(temperature < baselineTemp){
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } // si la temperatura asciende a 2-4 grados, encendemos un LED 
  else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } // si la temperatura asciende a 4-6 grados, encendemos el segundo LED
  else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } // si la temperatura asciende a mas de 6 grados, encendemos todos los LEDs
  else if(temperature >= baselineTemp+6){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
  delay(1);
}