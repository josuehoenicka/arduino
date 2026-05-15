# Semaforo

## Que hace este proyecto?

Simula un semaforo real con tres LEDs: rojo, amarillo y verde. Cada luz se enciende en secuencia respetando los tiempos tipicos de un semaforo de transito.

## Video

https://www.youtube.com/embed/127lsD3_ozo

## Requerimientos

1. Visual Studio Code con Arduino CLI
2. Arduino Nano (o Uno)
3. 1 LED rojo
4. 1 LED amarillo
5. 1 LED verde
6. 3 resistencias de 220ohm
7. Cables jumper
8. Protoboard
9. Cable USB

## Conceptos clave

- **Secuencia de estados.** Un semaforo real tiene tres estados (verde -> amarillo -> rojo) que se repiten en un ciclo. En codigo, esto es un `loop()` con `delay()` entre cada cambio.
- **Multiples pines de salida.** A diferencia del LED Flashes donde usas un solo pin, aca controlas tres pines al mismo tiempo. Cada LED tiene su propio pin digital.
- **`digitalWrite()` combinado.** Para cambiar de estado, primero apagas todos los LEDs y despues encendes solo el que corresponde. Eso evita que queden dos luces prendidas a la vez.
- **Resistencia por LED.** Cada LED necesita su propia resistencia de 220ohm en serie para limitar la corriente.

## Conexiones

| Componente | Conexion |
|---|---|
| LED rojo (pata larga +) | -> Resistencia 220ohm -> Pin 4 |
| LED rojo (pata corta -) | -> GND |
| LED amarillo (pata larga +) | -> Resistencia 220ohm -> Pin 3 |
| LED amarillo (pata corta -) | -> GND |
| LED verde (pata larga +) | -> Resistencia 220ohm -> Pin 2 |
| LED verde (pata corta -) | -> GND |

## Instalacion

### Mac
```bash
arduino-cli compile --fqbn arduino:avr:nano ./traffic-light
arduino-cli upload --fqbn arduino:avr:nano --port /dev/cu.usbserial-110 ./traffic-light
```

### Linux
```bash
arduino-cli compile --fqbn arduino:avr:nano ./traffic-light
arduino-cli upload --fqbn arduino:avr:nano --port /dev/ttyUSB0 ./traffic-light
```

### Windows
```bash
arduino-cli compile --fqbn arduino:avr:nano .\traffic-light
arduino-cli upload --fqbn arduino:avr:nano --port COM3 .\traffic-light
```

## Experimenta

- Agrega un segundo semaforo (peatonal) con dos LEDs mas y sincronizalos.
- Cambia los tiempos del `delay()` para simular una interseccion con trafico pesado.
- Agrega un buzzer que suene durante el amarillo como alerta.

## Notas

- Si un LED no enciende, verifica la polaridad (pata larga al pin, corta a GND).
- El orden de los pines es arbitrario, podes usar otros si lo reflejas en el codigo.
- Usa resistencias de 220ohm; sin ellas los LEDs pueden quemarse.
