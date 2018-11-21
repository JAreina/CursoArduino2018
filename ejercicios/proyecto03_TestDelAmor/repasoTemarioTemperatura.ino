/*
*Programa que toma del sensor de temperatura
* se ilumina led dependiendo de la cantidas de temperatura
*
*Autor= JPLC
*Fecha=21/11/2018
*/
//Declaramos las variables globales par el pin
const int sensorPin=A0;
//establecemos temperatura ambiena a 20C
const float baseLineTemp=20.0;
int sensorValor=0;
void setup(){
	//Configuramo y abrimos el puerto serie a 9600 baudios
	Serial.begin(9600);
	//Estamblecemos los diodos led y salidas con un for
	for(int i=2;i<=4;i=i+1){
		pinMode(i,OUTPUT);
		digitalWrite(i,LOW);		
	}	
	/*
	pinMode(2,OUTPUT);
	digitalWrite(2,LOW);		
	pinMode(3,OUTPUT);
	digitalWrite(3,LOW);		
	pinMode(4,OUTPUT);
	digitalWrite(4,LOW);			
	*/
}
void loop(){
	//Leemos el valor del sensor temperatura
	sensorValor=analogRead(sensorPin);
	//Imprimimos valor por consala para controlar la logica del
	//programa
	Serial.print("Valor sensor: ");
	Serial.print(sensorValor);
	
	//Convertimos el valor de lectura a voltaje
	//float voltaje= (sensorValor/1024.0)*5.0;
	
	float voltaje= map(sensorValor,0,1023,0,500);
	
	voltaje=voltaje/100.0;
	Serial.print(", Voltaje:");
	Serial.print(voltaje);
	
	//Convertir el voltaje en grados centigrados
	
	float temperatura = (voltaje-0.5)*100;
	
	Serial.print(", grados centigrados:");
	Serial.println(temperatura);
		
	//Enceder los led dependiendo de la temperatura
	//La linea base es 20 grados
	//Caso1: menos de 20, ningun led
	//Caso2: entre 20 y 25, un led
	//Caso3: entre 25 y 30, dos led
	//Caso4: para mas de 30 todos encendido	
	if (temperatura<baseLineTemp){
		/*digitalWrite(2,LOW);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);*/	
		encendidoLed(LOW,LOW,LOW);		
	}else if (temperatura>=baseLineTemp && 
			  temperatura<baseLineTemp+5){
		encendidoLed(HIGH,LOW,LOW);
		/*digitalWrite(2,HIGH);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);*/
	}else if (temperatura>=baseLineTemp+5 && 
			  temperatura<baseLineTemp+10){
		encendidoLed(HIGH,HIGH,LOW);
		/*digitalWrite(2,HIGH);
		digitalWrite(3,HIGH);
		digitalWrite(4,LOW);*/
	}else if (temperatura>=baseLineTemp+10){
		encendidoLed(HIGH,HIGH,HIGH);		
		/*digitalWrite(2,encendidoLed);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);*/
	}
	delay(5);	
} 
//Fucion para simplificar el codigo y su compresion
//Los paramatres de entrada admiten LOW o HIG, es decir 0 o 1
//Para versiones siguientes esutudiar con boolean
void encendidoLed(int a,int b, int c){	
	digitalWrite(2,a);
	digitalWrite(3,b);
	digitalWrite(4,c);					
}































 
 
 
 
 
 
 
 