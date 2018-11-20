
#include <LiquidCrystal.h>      // incluir la libreria

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);      // configura pines LCD

// caracteres para formar SUPERMAN
byte S_UL[8] = 
{
  B00000,
  B00011,
  B00111,
  B01110,
  B11101,
  B11001,
  B11101,
  B01111
};
byte S_ULM[8] =
{
  B00000,
  B11111,
  B11111,
  B11000,
  B10000,
  B10000,
  B11111,
  B11111
};
byte S_URM[8] =
{
  B00000,
  B11111,
  B11111,
  B00110,
  B00011,
  B00000,
  B11111,
  B11111
};
byte S_UR[8] =
{
  B00000,
  B11000,
  B11110,
  B11110,
  B10111,
  B00011,
  B00111,
  B10110
};
byte S_DL[8] =
{
  B00111,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte S_DLM[8] =
{
  B00000,
  B10110,
  B11111,
  B11100,
  B01110,
  B00111,
  B00011,
  B00001
};
byte S_DRM[8] =
{
  B00001,
  B00011,
  B11111,
  B00111,
  B01110,
  B11100,
  B11000,
  B10000
};
byte S_DR[8] =
{
  B11100,
  B11000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};


// caracteres para formar BATMAN1
byte B1_UL[8] = 
{
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B01111,
  B00111,
  B00111
};
byte B1_ULM[8] =
{
  B00000,
  B00000,
  B00000,
  B10000,
  B10010,
  B11011,
  B11111,
  B11111
};
byte B1_URM[8] =
{
  B00000,
  B00000,
  B00000,
  B00001,
  B01001,
  B11011,
  B11111,
  B11111
};
byte B1_UR[8] =
{
  B00000,
  B00000,
  B00000,
  B11111,
  B11111,
  B11110,
  B11100,
  B11100
};
byte B1_DL[8] =
{
  B00000,
  B00000,
  B00000,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000
};
byte B1_DLM[8] =
{
  B01111,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte B1_DRM[8] =
{
  B11110,
  B11000,
  B10000,
  B00000,
  B00000,
  B0000,
  B00000,
  B00000
};
byte B1_DR[8] =
{
  B00000,
  B00000,
  B00000,
  B11000,
  B10000,
  B00000,
  B00000,
  B00000
};


// caracteres para formar BATMAN
byte B_UL[8] = 
{
  B00000,
  B00000,
  B00000,
  B00001,
  B00110,
  B01110,
  B11111,
  B11111
};
byte B_ULM[8] =
{
  B00000,
  B00000,
  B00000,
  B00010,
  B00011,
  B00011,
  B10111,
  B11111
};
byte B_URM[8] =
{
  B00000,
  B00000,
  B00000,
  B01000,
  B11000,
  B11000,
  B11101,
  B11111
};
byte B_UR[8] =
{
  B00000,
  B00000,
  B00000,
  B10000,
  B01100,
  B01110,
  B11111,
  B11111
};
byte B_DL[8] =
{
  B11111,
  B11111,
  B01110,
  B00100,
  B00010,
  B00000,
  B00000,
  B00000
};
byte B_DLM[8] =
{
  B11111,
  B11111,
  B10011,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000
};
byte B_DRM[8] =
{
  B11111,
  B11111,
  B11001,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000
};
byte B_DR[8] =
{
  B11111,
  B11111,
  B01110,
  B00100,
  B01000,
  B00000,
  B00000,
  B00000
};


// caracteres para formar ESPADAS
byte E_UL[8] = 
{
  B00011,
  B00010,
  B00010,
  B00001,
  B00000,
  B00000,
  B00000,
  B01100
};
byte E_ULM[8] =
{
  B10000,
  B01000,
  B00100,
  B00010,
  B10001,
  B01000,
  B00100,
  B01010
};
byte E_URM[8] =
{
  B00011,
  B00100,
  B01000,
  B10001,
  B00010,
  B10100,
  B01000,
  B00100
};
byte E_UR[8] =
{
  B10000,
  B10000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01100
};
byte E_DL[8] =
{
  B01110,
  B00111,
  B00111,
  B00011,
  B00111,
  B01110,
  B11100,
  B11000
};
byte E_DLM[8] =
{
  B10001,
  B00010,
  B00100,
  B11000,
  B11100,
  B11110,
  B00110,
  B00000
};
byte E_DRM[8] =
{
  B00010,
  B10001,
  B01001,
  B00111,
  B01111,
  B11110,
  B11000,
  B00000
};
byte E_DR[8] =
{
  B11100,
  B11000,
  B11000,
  B10000,
  B11000,
  B11100,
  B01110,
  B00110
};


// caracteres para formar LOGO DC
byte L_UL[8] = 
{
  B00000,
  B00000,
  B11111,
  B01111,
  B00110,
  B00111,
  B00111,
  B00111
};
byte L_ULM[8] =
{
  B00000,
  B00000,
  B11000,
  B11100,
  B01110,
  B00110,
  B00110,
  B00110
};
byte L_URM[8] =
{
  B00000,
  B00000,
  B00111,
  B01111,
  B11000,
  B11100,
  B11100,
  B11100
};
byte L_UR[8] =
{
  B00000,
  B00000,
  B01100,
  B11100,
  B11000,
  B11000,
  B00000,
  B00000
};
byte L_DL[8] =
{
  B00111,
  B00111,
  B00111,
  B00111,
  B01111,
  B00000,
  B00000,
  B00000
};
byte L_DLM[8] =
{
  B00110,
  B00110,
  B01110,
  B11100,
  B11000,
  B00000,
  B00000,
  B00000
};
byte L_DRM[8] =
{
  B11100,
  B11100,
  B11110,
  B01111,
  B00111,
  B00000,
  B00000,
  B00000
};
byte L_DR[8] =
{
  B00000,
  B00000,
  B11000,
  B11000,
  B11000,
  B00000,
  B00000,
  B00000
};

void setup()
{ 
  lcd.begin(0, 2);     
}

void BATMAN()        // usa los caracteres para crear BATMAN
{ 
  lcd.createChar(1,B_UL);
  lcd.createChar(2,B_ULM);
  lcd.createChar(3,B_URM);
  lcd.createChar(4,B_UR);
  lcd.createChar(5,B_DL);
  lcd.createChar(6,B_DLM);
  lcd.createChar(7,B_DRM);
  lcd.createChar(8,B_DR);
  
  lcd.setCursor(10, 0); 
  lcd.write(1);  
  lcd.write(2); 
  lcd.write(3);  
  lcd.write(4); 
  lcd.setCursor(10, 1);
  lcd.write(5);  
  lcd.write(6);
  lcd.write(7);  
  lcd.write(8);  
  
  lcd.setCursor(2, 1);
  lcd.print("BATMAN"); 
}


void BATMAN1()        // usa los caracteres para crear BATMAN1
{ 
  lcd.createChar(1,B1_UL);
  lcd.createChar(2,B1_ULM);
  lcd.createChar(3,B1_URM);
  lcd.createChar(4,B1_UR);
  lcd.createChar(5,B1_DL);
  lcd.createChar(6,B1_DLM);
  lcd.createChar(7,B1_DRM);
  lcd.createChar(8,B1_DR);
  
  lcd.setCursor(9, 0); 
  lcd.write(5);
  lcd.write(1);  
  lcd.write(2); 
  lcd.write(3);  
  lcd.write(4); 
  lcd.write(8);
  lcd.setCursor(11, 1);  
  lcd.write(6);
  lcd.write(7);   
  
  lcd.setCursor(2, 1);
  lcd.print("BATMAN"); 
}

void SUPERMAN()        // usa los caracteres para crear SUPERMAN
{ 
  lcd.createChar(1,S_UL);
  lcd.createChar(2,S_ULM);
  lcd.createChar(3,S_URM);
  lcd.createChar(4,S_UR);
  lcd.createChar(5,S_DL);
  lcd.createChar(6,S_DLM);
  lcd.createChar(7,S_DRM);
  lcd.createChar(8,S_DR);
  
  lcd.setCursor(1, 0);  
  lcd.write(1);  
  lcd.write(2); 
  lcd.write(3);  
  lcd.write(4); 
  lcd.setCursor(1, 1);
  lcd.write(5);  
  lcd.write(6);
  lcd.write(7);  
  lcd.write(8);  
  
  lcd.setCursor(7, 1);
  lcd.print("SUPERMAN"); 
}

void ESPADAS()        // usa los caracteres para crear ESPADAS
{ 
  lcd.createChar(1,E_UL);
  lcd.createChar(2,E_ULM);
  lcd.createChar(3,E_URM);
  lcd.createChar(4,E_UR);
  lcd.createChar(5,E_DL);
  lcd.createChar(6,E_DLM);
  lcd.createChar(7,E_DRM);
  lcd.createChar(8,E_DR);
  
  lcd.setCursor(6, 0);  
  lcd.write(1);  
  lcd.write(2); 
  lcd.write(3);  
  lcd.write(4); 
  lcd.setCursor(6, 1);
  lcd.write(5);  
  lcd.write(6);
  lcd.write(7);  
  lcd.write(8);  
}

void DC_LOGO()        // usa los caracteres para crear DC_LOGO
{ 
  lcd.createChar(1,L_UL);
  lcd.createChar(2,L_ULM);
  lcd.createChar(3,L_URM);
  lcd.createChar(4,L_UR);
  lcd.createChar(5,L_DL);
  lcd.createChar(6,L_DLM);
  lcd.createChar(7,L_DRM);
  lcd.createChar(8,L_DR);
  
  lcd.setCursor(2, 0);  
  lcd.write(1);  
  lcd.write(2); 
  lcd.write(3);  
  lcd.write(4); 
  lcd.setCursor(2, 1);
  lcd.write(5);  
  lcd.write(6);
  lcd.write(7);  
  lcd.write(8);  
  
  lcd.setCursor(10,0);
  lcd.print("DC"); 
  lcd.setCursor(8, 1);
  lcd.print("COMICS"); 
}

void loop()
{
  DC_LOGO();
  delay(5000);
  lcd.clear();
  
  SUPERMAN();
  delay(5000);
  lcd.clear();
  
  BATMAN();
  delay(5000);
  lcd.clear();
  
  ESPADAS();
  delay(3000);
  lcd.clear();
  
  SUPERMAN();
  delay(5000);
  lcd.clear();
  
  BATMAN1();
  delay(5000);
  lcd.clear();
}
