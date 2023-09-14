#include <LiquidCrystal.h>
#include <Servo.h>

void hauptmenu();
void executeAction();
void cocktailmenu();
void cocktailrezepte();
void anordnungsmenu();
void anordnungsmenu2();

LiquidCrystal lcd(52, 48, 44, 40, 36, 32);
Servo Servos[8];

int Platz1 = 11;
int Platz2 = 9;
int Platz3 = 2;
int Platz4 = 8;
int Platz5 = 5;
int Platz6 = 6;
int Platz7 = 3;

///////////////////////////////////////////////////////////////
int mandelsirup = Platz1;
int curacao = Platz3;
int zitronensaft = Platz2;
int limettensaft = Platz4;
int vodka = Platz5;
int orangensaft = Platz6;
int grenadinesirup = Platz7;

int zitroneneistee = 0;
//int limettensaft = 0;
int cognac = 0;
int orangenlikor = 0;
int rum = 0;
int gin = 0;
int cola = 0;
int tequilla = 0;
///////////////////////////////////////////////////////////////
String position1;
String position2;
String position3;
String position4;
String position5;
String position6;
String position7;
///////////////////////////////////////////////////////////////
String curacaoname = "Curacao";
String mandelsirupname = "Mandelsirup";
String limettensaftname = "Limettensaft";
String zitroneneisteename = "Zitr. EisTee";
String vodkaname = "Vodka";
String tequillaname = "Tequilla";
String zitronensaftname = "Zitronens.";
String orangensaftname = "Orangensa.";
String grenadinesirupname = "Grenadines.";
String rumname = "Rum";
String orangenlikorname = "Orangenli.";
String colaname = "Cola";
String cognacname = "Cognac";
String ginname = "Gin";
///////////////////////////////////////////////////////////////
String cocktail1 = "Paradiesvogel";
String cocktail2 = "YellowSubmarine";
String cocktail3 = "o.Paradiesvogel";
String cocktail4 = "o.YellowSubmarine";
String cocktail5 = "zurueck";
//////////////////////////////////////////////////////////////////////

int uButton = 26;
int sButton = 24;
int dButton = 22;

int menuwert = 2;
int menu = 1;

int auswahlanordnung;
String auswahlanordnung2;

String auswahl;
String cocktail;
String auswahlpos;

int pos1 = 105; 

int platz1oben = 151;
int platz2oben = 146;
int platz3oben = 143;
int platz4oben = 144;
int platz5oben = 142;
int platz6oben = 151;
int platz7oben = 152;

int pause = 300;
int pauseprost = 2000;

//////////////////////////////////////////////////////////////////////
String zeile1 = "7bit";
String zeile2 = "Cocktail-Ausw.";
String zeile3 = "Anordnung";
String zeile4 = "Pos. anfahren";
//////////////////////////////////////////////////////////////////////
