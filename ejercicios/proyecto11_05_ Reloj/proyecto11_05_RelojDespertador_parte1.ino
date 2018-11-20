/*  Project 11.05-
 * --------------
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */
// Incluímos la libreria externa para poder utilizarla
#include <LiquidCrystal.h> // Entre los símbolos <> buscará en la carpeta de librerías configurada
#include <TimerOne.h>


// Lo primero is inicializar la librería indicando los pins de la interfaz
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Definimos las constantes
#define COLS 16 // Columnas del LCD
#define ROWS 2 // Filas del LCD


int horas=0;
int minutos=0;
volatile int segundos=0;
volatile boolean actualizar=true;

void setup(){
  lcd.begin(16,2);
  lcd.clear();
  lcd.backlight();

  Timer1.initialize(1000000);
  Timer1.attachInterrupt(manejadoraTimer);
}

void manejadoraTimer(){
    segundos++;
    actualizar=true;
}

void actualizarReloj(){
  minutos += segundos / 60;
  segundos = segundos % 60;

  horas += minutos / 60;
  minutos = minutos % 60;

  horas = horas % 24;
}

void loop(){
  if(actualizar == true){ 
    actualizarReloj();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(horas);
    lcd.print(":");
    lcd.print(minutos);
    lcd.print(":");
    lcd.print(segundos);
    actualizar = false;
  }
  
}