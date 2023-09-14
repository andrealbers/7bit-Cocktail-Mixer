void posmenu()
{
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
      lcd.print("Pos. 0");
      lcd.setCursor(1, 1);
      lcd.print("Pos. 50");
      auswahlpos = "Pos. 0";
      break;
    case 2:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Pos. 0");
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Pos. 50");
      auswahlpos = "Pos. 50";
      break;
    case 3:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Pos. 105");
      lcd.setCursor(1, 1);
      lcd.print("zurueck");
      auswahlpos = "Pos. 105";
      break;
    case 4:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Pos. 105");
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("zurueck");
      auswahlpos = "";
      break;
    case 5:
      menuwert = 4;
      break;
  }













}

