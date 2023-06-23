#include <WiFi.h>
#include <HTTPClient.h>

// Replace with your network credentials
const char* ssid = "Internaats";
const char* password = "paroleuzrutera";

// Replace with your webserver address
const char* serverName = "https://data-algae-tree.herokuapp.com/";

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  Serial.println("Starting...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Set the RX and TX pins for serial communication with Arduino Mega
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
}

void loop() {
  // Read the serial data coming from the Arduino Mega
  String serialData = Serial2.readStringUntil('\n');

  // Make sure that the serial data is not empty
  if (serialData.length() > 0) {
    Serial.println("Serial data received: " + serialData);

    // Set up the POST request
    HTTPClient http;
    http.begin(serverName);
    // http.addHeader("Content-Type", "application/x-www-form-urlencoded");

    // Send the POST request with the serial data as the payload
    int httpResponseCode = http.POST(serialData);

    if (httpResponseCode > 0) {
      Serial.println("HTTP response code: " + String(httpResponseCode));
    } else {
      Serial.println("Error on HTTP request");
    }

    // Free resources
    http.end();
  }
  delay(10000);
}
