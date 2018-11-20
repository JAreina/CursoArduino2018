#define LED 2
#define INTERRUPTOR 3

bool pulsado;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(INTERRUPTOR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pulsado = digitalRead(INTERRUPTOR);
  if (pulsado == true){
    digitalWrite(LED, HIGH);
    }
  else{
    digitalWrite(LED, LOW);
  }
}



  if (pulsado1 == true || pulsado2 == true){
    digitalWrite(LED, HIGH);
    }
  else{
    digitalWrite(LED, LOW);
  }
