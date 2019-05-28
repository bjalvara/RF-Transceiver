#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;  // create a RH_ASK object called driver

void setup() {
 Serial.begin(9600); // Debugging only
 if (!driver.init())
    Serial.println("init failed");  
}

void loop() {  
  const char *msg1 = "alarm";
  const char *msg2 = "dis-alarm";

  int alarm = analogRead(A0);
  int disalarm = analogRead(A1);

  //Serial.print("alarm: ");
  //Serial.println(alarm);
  //Serial.println("");
  //Serial.print("dis-alarm: ");
  //Serial.println(disalarm);
  
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
