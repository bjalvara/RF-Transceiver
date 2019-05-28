import RPi.GPIO as GPIO
from time import sleep
GPIO.setmode(GPIO.BCM)

RECEIVE_PIN = 27

GPIO.setup(RECEIVE_PIN,GPIO.IN)


try:
    while True:
        val = GPIO.input(RECEIVE_PIN)
        if GPIO.input(RECEIVE_PIN):
            print(val)
        else:
            print(val)

except KeyboardInterrupt:
    GPIO.cleanup()
