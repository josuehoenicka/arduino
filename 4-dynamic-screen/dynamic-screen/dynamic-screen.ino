// ============================================
// INSTALACION (ejecutar en terminal antes de subir)
// ============================================
//
// --- Instalar biblioteca (una sola vez) ---
// arduino-cli lib install "LiquidCrystal I2C"
//
// --- Mac ---
// arduino-cli compile --fqbn arduino:avr:nano ./dynamic-screen
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./dynamic-screen
//
// --- Linux ---
// arduino-cli compile --fqbn arduino:avr:nano ./dynamic-screen
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./dynamic-screen
//
// --- Windows ---
// arduino-cli compile --fqbn arduino:avr:nano .\dynamic-screen
// arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\dynamic-screen
// ============================================

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Direccion mas comun: 0x27
// Si no muestra nada, proba 0x3F:
//   LiquidCrystal_I2C lcd(0x3F, 16, 2);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Josue Hoenicka");
}

void loop() {
  unsigned long seconds = millis() / 1000;

  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  lcd.print(seconds);
  lcd.print("s  ");

  delay(500);
}
