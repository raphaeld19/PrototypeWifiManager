#include <WiFiManager.h>

WiFiManager wm;
//Informations pour se connecter à l'ESP la première fois.
const char *ssid = "ESP32";
const char *password = "Patate123";


void setup()
{
  //Initialisation de WifiManager.
  WiFi.mode(WIFI_STA);
  Serial.begin(9600);
  Serial.println("\n");

  //WIFI
  if(!wm.autoConnect(ssid, password))
		Serial.println("Erreur de connexion.");
	else
		Serial.println("Connexion etablie!");

}

void loop()
{
  
}