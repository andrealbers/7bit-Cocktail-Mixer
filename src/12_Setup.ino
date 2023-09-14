void setup()
{
  lcd.begin(16, 2);

  pinMode(uButton, INPUT_PULLUP);
  pinMode(dButton, INPUT_PULLUP);
  pinMode(sButton, INPUT_PULLUP);

  lcd.setCursor(0, 0);
  lcd.print("Cocktail-Mixer");
  lcd.setCursor(0, 1);
  lcd.print("Starte...");

  Servos[1].detach();
  Servos[2].detach();
  Servos[3].detach();
  Servos[4].detach();
  Servos[5].detach();
  Servos[6].detach();
  Servos[7].detach();

  Servos[1].attach(Platz1);
  Servos[2].attach(Platz2);
  Servos[3].attach(Platz3);
  Servos[4].attach(Platz4);
  Servos[5].attach(Platz5);
  Servos[6].attach(Platz6);
  Servos[7].attach(Platz7);
  
  for (int i = 1; i < 9; i++)
  {
    Servos[i].write(pos1);
    delay(300);
  }

  delay(1250);



  hauptmenu();

  Serial.begin(115200);
}
