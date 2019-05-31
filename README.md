# RF-Transceiver

#Text edditing
wpa_supplicant.conf

config.txt
ssh

# In case you have to re flash the OS again..
network={
    ssid="UCSD-PROTECTED"
    key_mgmt=WPA-EAP
    eap=PEAP
    identity=""
    password=""
    phase1="peapver=0"
    phase2="auth=MSCHAPV2"
}
# run vnc
sudo apt-get update
sudo apt-get install tightvncserver
sudo apt-get install realvnc-vnc-server realvnc-vnc-viewer
sudo raspi-config
--interface options, enable vnc
sudo vncpasswd -service.
    ece140
vncserver: 1
vncserver -kill :1

#basic installations
sudo apt-get install vim
sudo apt-get install git
sudo apt-get updata
sudo apt-get install git build-essential python-dev
git clone https://github.com/bjalvara/RF-Transceiver

# need matplotlib
sudo apt-get install python-matplotlib

#ATtiny85
programing:
pin1 --> pin10 (arduino)
pin4 --> gnd
pin5 --> pin11 (arduino)
pin6 --> pin12 (arduino)
pin7 --> pin13 (arduino)
pin8 --> 5V (arduino)

# Using the Arduino to program ATtiny85 
File --> arduinoISP --> upload to uno
Cap across ~reset and GND

http://drazzy.com/package_drazzy.com_index.json

File -> Preferences, enter the above URL in "Additional Boards Manager URLs"
Tools -> Boards -> Boards Manager... *If using 1.6.6, close boards manager and re-open it (see below)
Select "ATTinyCore by Spence Konde" and click "Install".

https://www.youtube.com/watch?v=i9WOwDrpRKs
--need ATtinyCore
pinout:

pin1 --> PB5 (PCINT5/~reset/ADC0/dW) 
pin2 --> PB3 (PCINT3/XTAL1/CLK1/OC1B/ADC3) 
PIN3 --> PB4 (PCINT4/XTAL2/CLKO/OC1B/ADC2) 
PIN4 --> (GND)
PIN5 --> PB0 (MOSI/DI/SDA/AIN0/~OC1A/AREF/PCINTO)
PIN6 --> PB1 (MOSO/DO/AIN1/OC0B/OC1A/PCINT1)
PIN7 --> PB2 (SCK/USCK/SCL/ADC1/T0/INT0/PCINT2)
PIN8 --> VCC

# MCP3008
sudo apt-get update
sudo apt-get install git build-essential python-dev
git clone http://github.com/adafruit/Adafruit_Python_MCP3008.git
cd Adafruit_Python_MCP3008
sudo python setup.py install

#Set up WiringPi
git clone git://git.drogon.net/wiringPi
#Go to wiringPi directory and run
./build

#Set up 433Utils
git clone ‑‑recursive https://github.com/jstevenperry/433Utils
#go to 433Utils/RPi_utils and run 
make

#Check out the GPIO utility
gpio readall
gpio blink
gpio blink 6
watch -n 0.5 'gpio readall'

#run, with data of the reciver(big one) to gpio 27, and the transmitter to #4
./RFSniffer 
./codesend ?????/???


## For the Python home automation tutorial
run: python TransmitRF.py a_on b_on c_off

