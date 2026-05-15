# Pantalla Dinamica

## Que hace este proyecto?

Muestra "Josue Hoenicka" en la primera linea de un LCD 16x2 y un contador de segundos en la segunda, actualizado cada 500ms desde que arranca el Arduino.

## Video

https://www.youtube.com/embed/b55iOBIN81Y

## Requerimientos

1. Visual Studio Code con Arduino CLI
2. Arduino Nano (o Uno)
3. Pantalla LCD 16x2 con modulo I2C (PCF8574)
4. 4 cables jumper
5. Cable USB

## Conceptos clave

- **I2C.** Protocolo serie que codifica la informacion en mensajes de bits enviados por SDA mientras SCL marca el pulso. El modulo PCF8574 recibe esos mensajes y mueve los pines del LCD por vos. Resultado: de ~10 cables a solo 2 de datos (mas VCC y GND).
- **SDA (Serial Data).** El cable por el que viajan los datos. En Arduino Nano, esta en `A4`.
- **SCL (Serial Clock).** El cable de reloj que marca el ritmo de lectura. En Arduino Nano, esta en `A5`.
- **Direccion I2C.** Los modulos PCF8574 vienen de fabrica con direccion `0x27`. Algunos usan `0x3F`. Si la pantalla no muestra nada, cambia la direccion en el sketch.
- **`lcd.setCursor(col, fila)`.** Posiciona el cursor en una columna y fila especifica del LCD antes de escribir.

## Conexiones

| Pin del modulo | Pin del Arduino Nano |
|---|---|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

## Instalacion

### Mac
```bash
arduino-cli lib install "LiquidCrystal I2C"
arduino-cli compile --fqbn arduino:avr:nano ./dynamic-screen
arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./dynamic-screen
```

### Linux
```bash
arduino-cli lib install "LiquidCrystal I2C"
arduino-cli compile --fqbn arduino:avr:nano ./dynamic-screen
arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./dynamic-screen
```

### Windows
```bash
arduino-cli lib install "LiquidCrystal I2C"
arduino-cli compile --fqbn arduino:avr:nano .\dynamic-screen
arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\dynamic-screen
```

## Experimenta

- Cambia el texto de la primera linea por tu nombre o un mensaje personalizado.
- Mostra la lectura de un sensor (temperatura, distancia) en la segunda linea.
- Agrega un boton que alterne entre dos pantallas distintas.

## Notas

- No alimentes el modulo con 3.3V. El LCD trabaja a 5V; con 3.3V el contraste falla.
- Si ves cuadros negros y nada mas, ajusta el contraste con el potenciometro azul en la parte trasera del modulo.
- No desconectes SDA/SCL con el Arduino encendido si hay otros dispositivos I2C en el bus.
