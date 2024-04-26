#define BLYNK_TEMPLATE_ID "TMPL6VmlGsxPW"
#define BLYNK_TEMPLATE_NAME "DHT"
#define BLYNK_AUTH_TOKEN "e3vI2oTieSkwGUW9CWe-CK9ah5HU7AE3"

#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp8266.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

LiquidCrystal_I2C lcd(0x27,16,2);

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "SEGi-Y5-Student"; //nama hotspot yang digunakan
char pass[] = ""; //password hotspot yang digunakan

#define DHTPIN 12          // Mention the digital pin where you connected 
#define DHTTYPE DHT11     // DHT 11  
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;



void setup(){
   Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);
  lcd.init();
  lcd.backlight();
  dht.begin();
  timer.setInterval(2500L, sendSensor);
  
}

void loop(){
  
  
  Blynk.run();
  timer.run();
}
void sendSensor(){
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Blynk.virtualWrite(V1, h);
  Blynk.virtualWrite(V0, t);
  Serial.print("Temperature : ");
  Serial.print(t);
  Serial.print("    Humidity : ");
  Serial.println(h);
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.print(t);
  lcd.setCursor(0,1);
  lcd.print("Humidity:");
  lcd.print(h);


  if(t > 10){
   // Blynk.email("isamahfudi08@gmail.com", "Alert", "Temperature over 28C!");
    Blynk.logEvent("temp_alert","Temp above 10 degrees");
    Blynk.virtualWrite(0,1);
  }
}