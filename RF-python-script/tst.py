import RPi.GPIO as GPIO
from time import sleep
GPIO.setmode(GPIO.BCM)

RECEIVE_PIN = 27

GPIO.setup(RECEIVE_PIN,GPIO.IN)


try:
    while True:
        if GPIO.input(RECEIVE_PIN):
            print("pin is high")
        else:
            print("pin is low")

except KeyboardInterrupt:
    GPIO.cleanup()
