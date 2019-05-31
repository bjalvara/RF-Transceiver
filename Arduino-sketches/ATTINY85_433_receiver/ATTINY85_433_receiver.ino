int RX = 3;
int front = 0;
int back = 1;
int left = 2;
int right = 4;
int pin_state= 0;
unsigned long counter = 0;
unsigned long prev_counter = 0;
long DELAY = 0;
float freq = 0;


unsigned long previousMillis = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(RX,INPUT);  
  pinMode(front,OUTPUT); 
  pinMode(back,OUTPUT); 
  pinMode(left,OUTPUT); 
  pinMode(right,OUTPUT);
}

void loop() {

  unsigned long currentMillis = millis();  
  if(currentMillis - previousMillis >= 100){
  
      previousMillis += 100;
      if(DELAY > 800 && DELAY < 1200)
      {
       digitalWrite(front, HIGH);
       digitalWrite(back, LOW);
       digitalWrite(left, LOW);
       digitalWrite(right, LOW);
       }
      else if(DELAY > 1300 && DELAY < 1700)
      {
       digitalWrite(front, LOW);
       digitalWrite(back, HIGH);
       digitalWrite(left, LOW);
       digitalWrite(right, LOW);
      }
      else if(DELAY > 1800 && DELAY < 2200)
      {
       digitalWrite(front, LOW);
       digitalWrite(back, LOW);
       digitalWrite(left, HIGH);
       digitalWrite(right, LOW);
      }
      else if(DELAY > 2300 && DELAY < 2700)
      {
       digitalWrite(front, LOW);
       digitalWrite(back, LOW);
       digitalWrite(left, LOW);
       digitalWrite(right, HIGH);
      }
      
      
  }

  
 if(digitalRead(RX) && pin_state== 0)
 {
  pin_state=1;
  prev_counter = micros();
 }

 if(!digitalRead(RX) && pin_state== 1)
 {
  pin_state=0;
  counter = micros();
  DELAY = counter - prev_counter;   
 }
 
  
  
 
  
 
}
