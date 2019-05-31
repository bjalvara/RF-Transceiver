//Transmitter code (ProMini)

int TX = 3;
int front = 0;
int back = 1;
int left = 2;
int right = 4;

void setup() {
pinMode(TX,OUTPUT); 
pinMode(front,INPUT); 
pinMode(back,INPUT); 
pinMode(left,INPUT); 
pinMode(right,INPUT); 
}

void loop() {

  if(digitalRead(front)){write_freq(1000);}
  else if(digitalRead(back)){write_freq(1500);}
  else if(digitalRead(left)){write_freq(2000);}
  else if(digitalRead(right)){write_freq(2500);}   
  else{digitalWrite(TX, LOW);}
}

void write_freq(int DELAY)
{
  digitalWrite(TX,LOW);
  delayMicroseconds(DELAY);
  digitalWrite(TX,HIGH);
  delayMicroseconds(DELAY);
}
