/* MatrizBidimensional
 * --------------
 *
 * Ejemplo de creacion funciones
 * matricez bidimensionales y uso de sizeof
 *
 *
 * 2018, CFTIC
 * @author: Juan Pedro Lopez
 * @hardware: Juan Pedro Lopez
 */

int ProgTemporizador [][7] =
  {
  //Fecha--> Año, Mes, Dia, Hora, Minutos, Salida, Estado 
  {2018, 10, 28, 17, 12, 0, 1},
  {2018, 10, 28, 17, 13, 0, 0},
  {2018, 10, 28, 17, 13, 1, 1},
  {2018, 10, 28, 17, 14, 1, 0}
  };




void setup()
  {
  Serial.begin(9600);
  }

void loop()
  {
  int x = sizeof(ProgTemporizador);   
  //2 por el tipo de varible int, usa 2 bytes
  x = (x / 7) / 2;
  //x = x / 14; Mas facil...
  Serial.print ("Numero X = ");
  Serial.println (x);
  for (int i=0; i < x; i++)
    {
      for (int n=0; n < 7; n++)
        {
          Serial.print(ProgTemporizador [i][n]);
          Serial.print("   ");
        }
    Serial.println();   
    }
  Serial.println ("-----------------------------------------------------"); 
  delay(5000);
  }
