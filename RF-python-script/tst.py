import RPi.GPIO as GPIO
from gpiozero import MCP3008
from time import sleep

GPIO.setmode(GPIO.BCM)

RECEIVE_PIN = 27

GPIO.setup(RECEIVE_PIN,GPIO.IN)

rec = MCP3008(0)
while True:

    print(rec.value)
#try:
 #   while True:
  #      
   #     if GPIO.input(RECEIVE_PIN):
    #        print(val)
     #   else:
      #      print(val)

#except KeyboardInterrupt:
 #   GPIO.cleanup()
