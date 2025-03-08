#include "methods.h"
#include "config.h"
#include "digits.h"
#include <Arduino.h>
#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;
int bouton = 2;
int state = LOW;
uint32_t emptyFrame[] = {0x0,0x0,0x0};

void setup()
{
    pinMode(bouton, INPUT);
    Serial.begin(9600);
    matrix.begin(); // Initialize the LED matrix
    connection(); // Connexion WiFi
    initializeDigits();
}

void loop()
{
    state = digitalRead(bouton); // Lire l'état du bouton poussoir

    if (state == HIGH)
    {
        Serial.println("Le bouton est appuyé");
        int temperature = get_weather(city);
        matrix.loadFrame(digits.at(temperature).data());
        delay(5000);
        matrix.loadFrame(emptyFrame);
    }
}
