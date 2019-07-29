#include "WiFi.h"
const char* ssid     = "SSID";
const char* password = "PASSWORD";

void setup() {
  Serial.begin(115200);
  Serial.print("Conecting");
  WiFi.begin(ssid, password)
}
void loop() {
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  delay(10000);
}
