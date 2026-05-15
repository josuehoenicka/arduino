// ============================================
// INSTALACION (ejecutar en terminal antes de subir)
// ============================================
//
// --- Mac ---
// arduino-cli compile --fqbn arduino:avr:nano ./flashing-led
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./flashing-led
//
// --- Linux ---
// arduino-cli compile --fqbn arduino:avr:nano ./flashing-led
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./flashing-led
//
// --- Windows ---
// arduino-cli compile --fqbn arduino:avr:nano .\flashing-led
// arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\flashing-led
// ============================================

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
