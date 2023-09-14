//1cl = 10ml Angabe in Klammer in ml

void executeAction()
{
  ///////////////////////////////////////////////////////////////
  if (auswahl == "Cocktail-Ausw.")
  {
    menuwert = 1;
    menu = 2;
    cocktailmenu();
    delay(1000);
  }
  ///////////////////////////////////////////////////////////////
  if (auswahl == "Anordnung")
  {
    menuwert = 1;
    menu = 3;
    anordnungsmenu();
    delay(1000);
  }
  ///////////////////////////////////////////////////////////////
  if (auswahl == "Pos. anfahren")
  {
    menuwert = 1;
    menu = 5;
    posmenu();
    delay(1000);
  }
  ///////////////////////////////////////////////////////////////
  if (auswahl == "")
  {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(">");
    lcd.setCursor(1, 0);
    lcd.print(auswahl);
  }
  ///////////////////////////////////////////////////////////////
}

