import RPi.GPIO as GPIO
# Choose gpio
RECEIVE_PIN = 27

# for GPIO numbering choose BCM
GPIO.setmode(GPIO.BCM)

# set GPIO to input
GPIO.setup(RECEIVE_PIN,GPIO.IN)

i=0
received_signal = []
while (loop ==1):
    received_signal=(GPIO.input(RECEIVE_PIN))
    print(received_signal
