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

