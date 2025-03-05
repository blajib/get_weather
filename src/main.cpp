#include "methods.h"
#include <Arduino.h>


void setup() {
    Serial.begin(9600);
    delay(1000);

    connection();  // Connexion WiFi
    get_weather(city);  // Récupération de la météo
}

void loop() {
    // Rien dans la loop si vous ne voulez pas rafraîchir la météo régulièrement
    delay(100000);
}
