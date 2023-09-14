void loop()
{
  ///////////////////////////////////////////////////////////////
  if (!digitalRead(dButton))
  {
    Serial.println("dButton gedrueckt");
    while (!digitalRead(dButton));
    menuwert++;
     
    switch (menu)
    {
      case 1:
        hauptmenu();
        break;
      case 2:
        cocktailmenu();
        break;
      case 3:
        anordnungsmenu();
        break;
      case 4:
        anordnungsmenu2();
        break;
      case 5:
        posmenu();
        break;
    }
    delay(50);
  }
  ///////////////////////////////////////////////////////////////
  if (!digitalRead(uButton))
  {
    Serial.println("uButton gedrueckt");
    while (!digitalRead(uButton));
    menuwert--;

    switch (menu)
    {
      case 1:
        hauptmenu();
        break;
      case 2:
        cocktailmenu();
        break;
      case 3:
        anordnungsmenu();
        break;
      case 4:
        anordnungsmenu2();
        break;
      case 5:
        posmenu();
        break;
    }
    delay(50);
  }
  ///////////////////////////////////////////////////////////////
  if (!digitalRead(sButton))
  {
    Serial.println("sButton gedrueckt");

    switch (menu)
    {
      case 0:
        menu = 1;
        break;
      case 1:
        executeAction();
        break;
      case 2:
        cocktailrezepte();
        break;
      case 3:
        menuwert = 1;
        anordnungsmenu2();
        if (auswahlanordnung == 99)
        {
          menuwert = 2;
          menu = 1;
          hauptmenu();
          delay(1000);
        }
        break;
      case 4:
        anordnung();
        break;
      case 5:
        pos();
        break;
    }
    while (!digitalRead(sButton));
    delay(50);
  }
  ///////////////////////////////////////////////////////////////

}
