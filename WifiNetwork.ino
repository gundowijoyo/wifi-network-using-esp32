#include <WiFi.h>

const char *ssid = "wifi-saya";  
 // Nama jaringan Wi-Fi
const char *password = "123456789"; 
  // Password jaringan Wi-Fi

void setup() {
  // Memulai serial komunikasi
  Serial.begin(115200);

  // Memulai mode Access Point (AP)
  WiFi.softAP(ssid, password);

  // Menampilkan informasi IP
  Serial.println("Jaringan Wi-Fi telah dibuat!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // Mengecek apakah ada perangkat yang terhubung ke AP
  Serial.print("Jumlah perangkat yang terhubung: ");
  Serial.println(WiFi.softAPgetStationNum());

  // Tunggu selama 5 detik sebelum mengecek lagi
  delay(5000);
}
