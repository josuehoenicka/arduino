# LED Flashes

## Que hace este proyecto?

Un solo LED parpadea encendiendose y apagandose cada segundo. Es el equivalente a imprimir "Hola Mundo" en software, pero con hardware.

## Video

https://www.youtube.com/embed/s9uQptOZuOE

## Requerimientos

1. Visual Studio Code con Arduino CLI
2. Arduino Nano (o Uno)
3. LED integrado en el pin 13, o un LED externo
4. Resistencia de 220ohm si usas un LED externo
5. Cables jumper si usas un LED externo
6. Protoboard si usas un LED externo
7. Cable USB

## Conceptos clave

- **Pin digital.** Un pin digital solo puede estar en dos estados: `HIGH` o `LOW`.
- **`pinMode(pin, OUTPUT)`.** Le indica al Arduino que ese pin se usara para enviar senal.
- **`digitalWrite(pin, valor)`.** Cambia el estado del pin a `HIGH` o `LOW`.
- **`delay(1000)`.** Pausa el programa 1000 milisegundos, o sea 1 segundo.
- **Resistencia.** Si usas un LED externo, la resistencia limita la corriente para no quemarlo.

## Conexiones

### Opcion A: LED integrado

No necesitas cables. Solo conecta el Arduino por USB y subi el codigo.

### Opcion B: LED externo

| Componente | Conexion |
|---|---|
| LED (pata larga +) | -> Resistencia 220ohm -> Pin 13 |
| LED (pata corta -) | -> GND |
| GND del Arduino | -> GND de la protoboard |

## Instalacion

### Mac
```bash
arduino-cli compile --fqbn arduino:avr:nano ./flashing-led
arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./flashing-led
```

### Linux
```bash
arduino-cli compile --fqbn arduino:avr:nano ./flashing-led
arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./flashing-led
```

### Windows
```bash
arduino-cli compile --fqbn arduino:avr:nano .\flashing-led
arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\flashing-led
```

## Experimenta

- Cambia `delay(1000)` por `delay(200)` para que el LED parpadee mas rapido.
- Cambia `int led = 13` por otro pin si usas un LED externo.
- Proba un patron distinto, por ejemplo dos parpadeos cortos y una pausa larga.

## Notas

- Si no pasa nada, revisa que el cable USB soporte datos.
- El LED integrado puede verse tenue en algunas placas, eso es normal.
- Si usas un LED externo, respeta la polaridad y la resistencia.
