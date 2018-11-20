#include  <LiquidCrystal.h>
 
//****Los pines que usaremos para nuestro display******
 
//                RS  Enable  D4  D5  D6  D7
LiquidCrystal lcd(12,     11, 5,   4,  3, 2);
 
//****Los pines que usaremos para nuestro display******
 
 
//***************Arrays de las fotografías************************************
 
byte Foto_0[7] = { B10001,B00000,B00000,B00000,B00000,B00000,B00000 }; //Estos son los array que hemos creado ( cada array contiene una fotografía )
byte Foto_1[7] = { B10001,B10001,B00000,B00000,B00000,B00000,B00000 }; //yo lo he puesto en binario (B)  pero podéis usar hexadecimal(0x) o incluso
byte Foto_2[7] = { B11111,B10001,B10001,B00000,B00000,B00000,B00000 }; //en un numero decimal ( este no lo he probado nunca)
byte Foto_3[7] = { B01010,B11111,B10001,B10001,B00000,B00000,B00000 };
byte Foto_4[7] = { B00100,B01010,B11111,B10001,B10001,B00000,B00000 };
byte Foto_5[7] = { B00000,B00100,B01010,B11111,B10001,B10001,B00000 };
byte Foto_6[7] = { B00000,B00000,B00100,B01010,B11111,B10001,B10001 };
 
//***************Arrays de las fotografías************************************
 
 
void setup() 
{
  lcd.begin(16, 2); // declaramos el numero de filas y columnas que tendrá nuestro display LCD.(en este caso, el mío tenía 16 columnas por fila y dos filas)
  lcd.createChar(0,Foto_0); // Creamos un carácter y lo asignamos a un array que hemos creado
  lcd.createChar(1,Foto_1);
  lcd.createChar(2,Foto_2);
  lcd.createChar(3,Foto_3);
  lcd.createChar(4,Foto_4);
  lcd.createChar(5,Foto_5);
  lcd.createChar(6,Foto_6);
 
void loop() 
{
 for(int i=0; i<6; i++)  // Creamos un mini bucle que irá imprimendo imagen tras imagen
   {
     lcd.clear();        // limpiamos la LCD ( esto evita muchos problemas de visualización
     lcd.setCursor(0,0); // el cursor en el carácter de la linea 0, columna 0 ( o sea, el primero )
     lcd.print((char)i); 
     delay(600);
   } 
   
}