#include "methods.h"
#include <ArduinoJson.h>
#include <ArduinoHttpClient.h>

WiFiClient wifi;

const char* ssid = "Freebox-3526DF";
const char* password = "Californiadreamin8";
const char* city = "nantes";

void connection() {
    delay(1000);
    WiFi.begin(ssid, password);
    Serial.println("\nConnecting");

    int attempts = 0;
    const int maxAttempts = 50;

    while (WiFi.status() != WL_CONNECTED && attempts < maxAttempts) {
        Serial.print(".");
        delay(100);
        attempts++;
    }

    if (WiFi.status() == WL_CONNECTED) {
        Serial.println("\nConnected to the WiFi network");
        Serial.print("IP Address: ");
        Serial.println(WiFi.localIP());
    } else {
        Serial.println("\nFailed to connect to WiFi.");
    }
}

void get_weather(const String& city) {
    HttpClient client = HttpClient(wifi, "api.openweathermap.org", 80);
    
    String path = "/data/2.5/weather?q=" + city + "&units=metric&appid=c2cc673d2c9d85d09aa829beb6ba1b77";
    Serial.println("Requesting: " + path);

    client.get(path);

    int statusCode = client.responseStatusCode();
    String response = client.responseBody();

    Serial.println("Status Code: " + String(statusCode));
    Serial.println("Response: " + response);
}
