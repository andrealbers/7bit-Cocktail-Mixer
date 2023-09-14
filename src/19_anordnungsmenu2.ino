void anordnungsmenu2()
{
  menu = 4;

  switch (menuwert)
  {
    case 0:
      menuwert = 1;
      break;
    case 1:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Mandelsirup");
      lcd.setCursor(1, 1);
      lcd.print("Zitronensaft");
      auswahlanordnung2 = "Mandelsirup";
	  break;
    case 2:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Mandelsirup");
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Zitronensaft");
      auswahlanordnung2 = "Zitronensaft";
      break;
    case 3:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Orangensaft");
      lcd.setCursor(1, 1);
      lcd.print("Tequilla");
      auswahlanordnung2 = "Orangensaft";
      break;
    case 4:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Orangensaft");
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Tequilla");
      auswahlanordnung2 = "Tequilla";
      break;
    case 5:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Grenadines.");
      lcd.setCursor(1, 1);
      lcd.print("Curacao");
      auswahlanordnung2 = "Grenadines.";
      break;
    case 6:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Grenadines.");
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Curacao");
      auswahlanordnung2 = "Curacao";
      break;
    case 7:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Vodka");
      lcd.setCursor(1, 1);
      lcd.print("zurueck");
      auswahlanordnung2 = "Vodka";
      break;
    case 8:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Vodka");
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("zurueck");
      auswahlanordnung2 = "zurueck";
      break;
    case 9:
      menuwert = 8;
  }

}

