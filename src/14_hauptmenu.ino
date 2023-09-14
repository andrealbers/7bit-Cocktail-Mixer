void hauptmenu()
{
  switch (menuwert)
  {
    case 0:
      menuwert = 2;
      break;
    case 1:
      lcd.clear();
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(5, 0);
      lcd.print(zeile1);
      lcd.setCursor(1, 1);
      lcd.print(zeile2);
      auswahl = zeile1;
      menuwert = 2;
      break;
    case 2:
      lcd.clear();
      lcd.setCursor(5, 0);
      lcd.print(zeile1);
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print(zeile2);
      auswahl = zeile2;
      break;
    case 3:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print(zeile3);
      lcd.setCursor(1, 1);
      lcd.print(zeile4);
      auswahl = zeile3;
      break;
    case 4:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print(zeile3);
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print(zeile4);
      auswahl = zeile4;
      break;
    case 5:
      menuwert = 4;
      break;
  }
}
