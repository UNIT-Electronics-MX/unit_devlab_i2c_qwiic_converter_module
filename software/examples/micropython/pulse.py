from machine import Pin
from time import sleep

pulse_pin = Pin(6, Pin.OUT)  # GPIO6

tiempo_alto = 2  # Tiempo en alto: 2 segundos
tiempo_bajo = 2  # Tiempo en bajo: 2 segundos

while True:
    pulse_pin.value(1)  # Pulso en alto
    sleep(tiempo_alto)

    pulse_pin.value(0)  # Pulso en bajo
    sleep(tiempo_bajo)