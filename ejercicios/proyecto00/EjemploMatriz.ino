int matriz [2][2] =
  {
  {1,8},
  {5,6}
  };




void setup()
  {
  Serial.begin(9600);
  }

void loop()
  {

 
          Serial.print(matriz [1][2]);
          Serial.print("   ");   
   
 
  delay(5000);
  }