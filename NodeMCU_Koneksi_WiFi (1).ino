//#include <ESP8266WiFi.h>
////data ssid dan password 
//const char* ssid     = "DeA";
//const char* password = "hotspot106";     
//
//// membuat variable wifiStatus utk menyimpan data status wifi
//int wifiStatus; 
//     
//void setup() {
//  Serial.begin(115200);
//  delay(200);
//
//  // Membual label status terkneksi dengan nama Wifi
//  Serial.print("Terkoneksi dengan Wifi : "); Serial.println(ssid);
//  WiFi.begin(ssid, password);
//      
//  //ketika WiFI.status nilainya TDK sama dg WL_CONNECTED
//  while (WiFi.status() != WL_CONNECTED) {
//    delay(500);
//    Serial.print(".");
//  }
//}
//     
//void loop() {
//  wifiStatus = WiFi.status();
//  if(wifiStatus == WL_CONNECTED){
//    Serial.println("");
//    Serial.println("ESP8266 sudah terkonesi dg Wifi!");  
//    Serial.print("IP Address NODEMCU ESP8266 : ");
//    Serial.println(WiFi.localIP());
//  } else {
//    Serial.println("");
//    Serial.println("WiFi tdk terkoneksi");
//  }
//  delay(1000); // check for connection every once a second
//}

//=======================================================

#include <ESP8266WiFi.h>
const char* ssid = "DeA"; // Nama SSID Hotspot
const char* password = "hotspot106"; // Password Wifi

void setup() {
  Serial.begin(115200);
  delay(100);

  // Connect to WiFi network ---------------------------
  Serial.println();
  Serial.println();
  Serial.print("Connecting to : ");
  Serial.println(ssid);

  // Mengatur WiFi ---------------------------
  WiFi.mode(WIFI_STA); // Mode Station
  WiFi.begin(ssid, password); // Mencocokan SSID dan Password
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Print status Connect ---------------------------
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
 
}
