void anordnungsmenu()
{
  menu = 3;
  PosAuslesen();
 
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
      lcd.print("Pos1");
      lcd.setCursor(6, 0);
      lcd.print(position1);
      lcd.setCursor(1, 1);
      lcd.print("Pos2");
      lcd.setCursor(6, 1);
      lcd.print(position2);
      auswahlanordnung = Platz1;
      break;
    case 2:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Pos1");
      lcd.setCursor(6, 0);
      lcd.print(position1);
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Pos2");
      lcd.setCursor(6, 1);
      lcd.print(position2);
      auswahlanordnung = Platz2;
      break;
    case 3:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Pos3");
      lcd.setCursor(6, 0);
      lcd.print(position3);
      lcd.setCursor(1, 1);
      lcd.print("Pos4");
      lcd.setCursor(6, 1);
      lcd.print(position4);
      auswahlanordnung = Platz3;
      break;
    case 4:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Pos3");
      lcd.setCursor(6, 0);
      lcd.print(position3);
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Pos4");
      lcd.setCursor(6, 1);
      lcd.print(position4);
      auswahlanordnung = Platz4;
	  break;
    case 5:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Pos5");
      lcd.setCursor(6, 0);
      lcd.print(position5);
      lcd.setCursor(1, 1);
      lcd.print("Pos6");
      lcd.setCursor(6, 1);
      lcd.print(position6);
      auswahlanordnung = Platz5;
      break;
    case 6:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Pos5");
      lcd.setCursor(6, 0);
      lcd.print(position5);
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("Pos6");
      lcd.setCursor(6, 1);
      lcd.print(position6);
      auswahlanordnung = Platz6;
      break;
    case 7:
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(">");
      lcd.setCursor(1, 0);
      lcd.print("Pos7");
      lcd.setCursor(6, 0);
      lcd.print(position7);
      lcd.setCursor(1, 1);
      lcd.print("zurueck");
      auswahlanordnung = Platz7;
      break;
    case 8:
      lcd.clear();
      lcd.setCursor(1, 0);
      lcd.print("Pos7");
      lcd.setCursor(6, 0);
      lcd.print(position7);
      lcd.setCursor(0, 1);
      lcd.print(">");
      lcd.setCursor(1, 1);
      lcd.print("zurueck");
      auswahlanordnung = 99;
      break;
    case 9:
      menuwert = 8;
      break;
  }

}

