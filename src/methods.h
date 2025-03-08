#pragma once

#include <WiFi.h>
#include <ArduinoHttpClient.h>

void connection();
int get_weather(const String& city);