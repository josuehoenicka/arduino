// ============================================
// INSTALACION (ejecutar en terminal antes de subir)
// ============================================
//
// --- Mac ---
// arduino-cli compile --fqbn arduino:avr:nano ./traffic-light
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./traffic-light
//
// --- Linux ---
// arduino-cli compile --fqbn arduino:avr:nano ./traffic-light
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./traffic-light
//
// --- Windows ---
// arduino-cli compile --fqbn arduino:avr:nano .\traffic-light
// arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\traffic-light
// ============================================

int red = 4;
int yellow = 3;
int green = 2;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Green
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(5000);

  // Yellow
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(2000);

  // Red
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);
}
