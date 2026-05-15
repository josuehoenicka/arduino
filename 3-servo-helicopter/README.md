# Servo Helicoptero

## Que hace este proyecto?

Controla un servo motor que gira de 0 a 180 grados y vuelve, simulando el movimiento de las aspas de un helicoptero. Es la base para entender como mover piezas mecanicas con Arduino.

## Video

https://www.youtube.com/embed/dB2RDcFegts

## Requerimientos

1. Visual Studio Code con Arduino CLI
2. Arduino Nano (o Uno)
3. Servo motor SG90 (o similar)
4. Cables jumper
5. Protoboard (opcional)
6. Cable USB

## Conceptos clave

- **Servo motor.** Un motor que se posiciona en un angulo exacto (0 a 180 grados) segun la senal PWM que recibe. No gira libremente como un motor DC.
- **PWM (Pulse Width Modulation).** El Arduino envia pulsos de diferente duracion para indicarle al servo a que angulo moverse. La biblioteca `Servo.h` maneja esto automaticamente.
- **`Servo.attach(pin)`.** Conecta el objeto servo a un pin PWM del Arduino.
- **`Servo.write(angulo)`.** Mueve el servo al angulo indicado (0 a 180).
- **Alimentacion.** El SG90 funciona con 5V del Arduino para pruebas simples. Con multiples servos, usa una fuente externa.

## Conexiones

| Cable del servo | Conexion Arduino |
|---|---|
| Rojo (VCC) | 5V |
| Marron o negro (GND) | GND |
| Naranja o blanco (senal) | Pin 9 |

## Instalacion

### Mac
```bash
arduino-cli compile --fqbn arduino:avr:nano ./servo-helicopter
arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./servo-helicopter
```

### Linux
```bash
arduino-cli compile --fqbn arduino:avr:nano ./servo-helicopter
arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./servo-helicopter
```

### Windows
```bash
arduino-cli compile --fqbn arduino:avr:nano .\servo-helicopter
arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\servo-helicopter
```

## Experimenta

- Cambia el `delay(15)` por un valor menor para que el servo gire mas rapido.
- Conecta un potenciometro a `A0` y usa `analogRead()` + `map()` para controlar el angulo manualmente.
- Monta una helice o aspa de carton en el eje del servo para visualizar el movimiento.

## Notas

- Si el servo vibra o se mueve erraticamente, revisa que GND del servo y GND del Arduino esten conectados.
- El SG90 no tiene mucha fuerza; no le pongas objetos pesados en el eje.
- Para proyectos con mas de un servo, usa una fuente externa de 5V, no el pin 5V del Arduino.
