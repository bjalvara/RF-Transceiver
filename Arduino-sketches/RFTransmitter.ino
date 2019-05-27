#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;  // create a RH_ASK object called driver

void setup() {
 Serial.begin(9600); // Debugging only
 if (!driver.init())
    Serial.println("init failed");
    
}

void loop() {
  const char *msg = "Bike unlock";
  driver.send((uint8_t *)msg, strlen(msg));
  driver.waitPacketSent();
  delay(1000); // message will be sent every second
}
