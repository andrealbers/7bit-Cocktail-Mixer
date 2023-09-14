void cocktailmenu()
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
		lcd.print(cocktail1);
		lcd.setCursor(1, 1);
		lcd.print(cocktail2);
		cocktail = cocktail1;
		break;
	case 2:
		lcd.clear();
		lcd.setCursor(1, 0);
		lcd.print(cocktail1);
		lcd.setCursor(0, 1);
		lcd.print(">");
		lcd.setCursor(1, 1);
		lcd.print(cocktail2);
		cocktail = cocktail2;
		break;
	case 3:
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail3);
		lcd.setCursor(1, 1);
		lcd.print(cocktail4);
		cocktail = cocktail3;
		break;
	case 4:
		lcd.clear();
		lcd.setCursor(1, 0);
		lcd.print(cocktail3);
		lcd.setCursor(0, 1);
		lcd.print(">");
		lcd.setCursor(1, 1);
		lcd.print(cocktail4);
		cocktail = cocktail4;
		break;
	case 5:
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail5);
		lcd.setCursor(1, 1);
		lcd.print("");
		cocktail = cocktail5;
		break;
	case 6:
		menuwert = 5;
		break;
	
	}
}

