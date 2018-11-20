

// Crear una variable global para guardar el 
// estado del pulsador. Esta variable es persistente 
// a lo largo de todo el programa. Cada vez que nos refiramos a 
// switchState, estaremos hablando del numero que guarda (0/1)
int switchstate = 0;

void setup(){
  // Declarar los pines de los LEDs como salidas 
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  // Declarar el pin del pulsador como entrada   
  pinMode(2,INPUT);
}

void loop(){

  // Leer el valor del pulsador
  // digitalRead() comprueba si hay tensión
  // en el pin o no
  switchstate = digitalRead(2);

  // Si el pulsador no está presionado (LOW) 
  if (switchstate == LOW) {
    digitalWrite(3, HIGH); // Encender el LED verde en el pin 3
    digitalWrite(4, LOW);  // Apagar el LED rojo en el pin 4
    digitalWrite(5, LOW);  // Apagar el LED rojo en el pin 5
  }
  // Este (else) es una parte de la declaración (if) anterior. 
  // Si el pulsador no está LOW (el pulsador está presionado)
  // el código siguiente ejecutará:  
  else {
    digitalWrite(3, LOW);  // Apagar el LED verde en el pin 3
    digitalWrite(4, LOW);  // Apagar el LED rojo en el pin 4
    digitalWrite(5, HIGH); // Encender el LED rojo en el pin 5
    // Esperar un cuarto de segundo después de que cambien las luces
    delay(250);
    digitalWrite(4, HIGH); // Encender el LED rojo en el pin 4
    digitalWrite(5, LOW);  // Apagar el LED rojo en el pin 5
    // Esperar un cuarto de segundo después de que cambien las luces
    delay(250);
  }
}

