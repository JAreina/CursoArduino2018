
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;

int switchState = 0;

int prevSwitchState = 0;

int reply;

void setup() {
  lcd.begin(16, 2);

  pinMode(switchPin, INPUT);

  lcd.print("¡Pregunta a la");
  lcd.setCursor(0, 1);
  lcd.print("Bola Magica!");
}

void loop() {
  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("La bola dice:");
      lcd.setCursor(0, 1);

      switch (reply) {
        case 0:
            lcd.print("Si");
            break;
        case 1:
            lcd.print("Lo mas probable");
            break;
        case 2:
            lcd.print("Ciertamente");
            break;
        case 3:
            lcd.print("Buena decision");
            break;
        case 4:
            lcd.print("No es seguro");
            break;
        case 5:
            lcd.print("Pregunta de nuevo");
            break;
        case 6:
            lcd.print("Lo dudo");
            break;
        case 7:
            lcd.print("No");
            break;
      }
    }
  }
  prevSwitchState = switchState;
}