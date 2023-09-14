void pos()
{
  ///////////////////////////////////////////////////////////////

  if (auswahlpos == "Pos. 0")
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(">");
    lcd.setCursor(1, 0);
    lcd.print(auswahlpos);

    Servos[1].attach(Platz1);
    Servos[2].attach(Platz2);
    Servos[3].attach(Platz3);
    Servos[4].attach(Platz4);
    Servos[5].attach(Platz5);
    Servos[6].attach(Platz6);
    Servos[7].attach(Platz7);

    for (int i = 1; i < 9; i++)
    {
      Servos[i].write(0);
      delay(500);
    }

  }
  ///////////////////////////////////////////////////////////////

  if (auswahlpos == "Pos. 50")
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(">");
    lcd.setCursor(1, 0);
    lcd.print(auswahlpos);

    Servos[1].attach(Platz1);
    Servos[2].attach(Platz2);
    Servos[3].attach(Platz3);
    Servos[4].attach(Platz4);
    Servos[5].attach(Platz5);
    Servos[6].attach(Platz6);
    Servos[7].attach(Platz7);

    for (int i = 1; i < 9; i++)
    {
      Servos[i].write(50);
      delay(500);
    }

  }
  ///////////////////////////////////////////////////////////////

  if (auswahlpos == "Pos. 105")
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(">");
    lcd.setCursor(1, 0);
    lcd.print(auswahlpos);

    Servos[1].attach(Platz1);
    Servos[2].attach(Platz2);
    Servos[3].attach(Platz3);
    Servos[4].attach(Platz4);
    Servos[5].attach(Platz5);
    Servos[6].attach(Platz6);
    Servos[7].attach(Platz7);

    for (int i = 1; i < 9; i++)
    {
      Servos[i].write(105);
      delay(500);
    }

  }
  ///////////////////////////////////////////////////////////////

  if (auswahl == "zurueck") {}

  menuwert = 2;
  menu = 1;
  hauptmenu();
  delay(1000);


}
