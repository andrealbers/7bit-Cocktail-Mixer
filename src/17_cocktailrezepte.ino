void cocktailrezepte()
{
	///////////////////////////////////////////////////////////////
	if (cocktail == "Cuba Libre")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Rum(40);
		Cola(120);
		Zitronensaft(10);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "Margarita")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Tequilla(40);
		Orangenlikor(20);
		Zitronensaft(20);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "Teq. Sunrise")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Orangensaft(60);
		Tequilla(40);
		Zitronensaft(10);
		Grenadinesirup(20);
		Orangensaft(60);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "o.Teq. Sunrise")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Orangensaft(60);
		Zitronensaft(10);
		Grenadinesirup(20);
		Orangensaft(60);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "Sidecar")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Zitronensaft(20);
		Orangenlikor(20);
		Cognac(40);


		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "White Lady")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Zitronensaft(20);
		Gin(30);
		Orangenlikor(30);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "YellowSubmarine")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Limette(15);
		Orangensaft(40);
		Vodka(25);
		Zitroneneistee(100);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "Paradiesvogel")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Orangensaft(80);
		Zitronensaft(10);
		Mandelsirup(22);
		Curacao(21);
		Vodka(40);
		Orangensaft(80);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "o.Paradiesvogel")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Orangensaft(70);
		Zitronensaft(20);
		Mandelsirup(20);
		//Curacao(20);
		Orangensaft(70);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}
	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	if (cocktail == "o.YellowSubmarine")
	{
		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print(">");
		lcd.setCursor(1, 0);
		lcd.print(cocktail);

		Limette(15);
		Orangensaft(40);
		Zitroneneistee(100);

		lcd.clear();
		lcd.setCursor(0, 0);
		lcd.print("Prost!");
		lcd.setCursor(0, 1);
		lcd.print(":)");
		delay(pauseprost);
	}

	///////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////
	
	if (cocktail == "zurueck") {}

	menuwert = 2;
	menu = 1;
	hauptmenu();
	delay(1000);
	///////////////////////////////////////////////////////////////

}
