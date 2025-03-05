#ifndef METHODS_H
#define METHODS_H

#include <WiFi.h>
#include <ArduinoHttpClient.h>

// Déclaration uniquement, sans valeur
extern const char* ssid;
extern const char* password;
extern const char* city;

void connection();
void get_weather(const String& city);

#endif
