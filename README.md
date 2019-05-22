# RF-Transceiver

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
#basic installations
sudo apt-get install vim
sudo apt-get install git
sudo apt-get updata
sudo apt-get install git build-essential python-dev
git clone https://github.com/bjalvara/RF-Transceiver

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

##
##
##
## For the Python home automation tutorial

# need matplotlib
sudo apt-get install python-matplotlib
