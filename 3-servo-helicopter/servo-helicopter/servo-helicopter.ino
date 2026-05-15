// ============================================
// INSTALACION (ejecutar en terminal antes de subir)
// ============================================
//
// --- Mac ---
// arduino-cli compile --fqbn arduino:avr:nano ./servo-helicopter
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./servo-helicopter
//
// --- Linux ---
// arduino-cli compile --fqbn arduino:avr:nano ./servo-helicopter
// arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./servo-helicopter
//
// --- Windows ---
// arduino-cli compile --fqbn arduino:avr:nano .\servo-helicopter
// arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\servo-helicopter
// ============================================

#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(9);
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    motor.write(angle);
    delay(15);
  }

  for (int angle = 180; angle >= 0; angle--) {
    motor.write(angle);
    delay(15);
  }
}
