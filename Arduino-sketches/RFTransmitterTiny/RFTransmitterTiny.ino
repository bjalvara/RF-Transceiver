#include <SPI.h> // Not actually used but needed to compile
#include <RH_ASK.h>

#define R_PIN PB4
#define T_PIN PB1
#define L_PIN PB3

RH_ASK driver(2000, R_PIN, T_PIN);

void setup() {
 Serial.begin(9600); // Debugging only
 if (!driver.init())
    Serial.println("init failed");  
}

void loop() {  
  const char *msg1 = "alarm";
  const char *msg2 = "dis-alarm";

  int alarm = 0;
  int disalarm = 0;

    
  if(alarm > 704){
    Serial.println((char*)msg1);
    driver.send((uint8_t *)msg1, strlen(msg1));
    driver.waitPacketSent();
    delay(500); // message will be sent every milisecond
  }
  else if(disalarm > 704){
    
    Serial.println((char*)msg2);
    driver.send((uint8_t *)msg2, strlen(msg2));
    driver.waitPacketSent();
    delay(500); // message will be sent every milisecond
  }
  
  
}
