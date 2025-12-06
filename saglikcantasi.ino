#include <Wire.h>
#include <Adafruit_MLX90614.h>
#include <LiquidCrystal_I2C.h>
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
LiquidCrystal_I2C lcd(0x27, 16, 2);
double temp_obj;
// Pin for KY-039 Heart Rate Sensor
int heartPin = A0;
int heartRate = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Sıcaklık Sensörü MLX90614");
lcd.backlight();
  mlx.begin()
pinMode(heartPin, INPUT); }
void loop() {
temp_obj = mlx.readObjectTempC();
  if (temp_obj > 37) {
 Serial.print("Uyarı... YÜKSEK SICAKLIK...");
    lcd.clear();
  lcd.print("YÜKSEK SICAKLIK");
    delay(50);}
    lcd.clear();
  lcd.print("YÜKSEK SICAKLIK");
    delay(50);}





S	heartRate = analogRead(heartPin); 
lcd.setCursor(0, 0);
lcd.print("Vucut Sic:");
  lcd.setCursor(10, 0);
  lcd.print(temp_obj);
lcd.setCursor(15, 0);
  lcd.write(1); 
  lcd.setCursor(0, 1);
 lcd.print("Nabiz: ");
 lcd.setCursor(7, 1);
 lcd.print(heartRate); 
Serial.print("Vucut Sicakligi = ");
 Serial.println(temp_obj);
 Serial.print("Nabiz = ");
Serial.println(heartRate); 
}
