int ir1=6;     
int ir2=7;    
  
int pin1=2;
int pin2=3;
int pin3=4;
int pin4=5;
void setup() 
{
  

  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
}
void loop() 
{
   if(digitalRead(ir1)==HIGH && digitalRead(ir2)==HIGH) 
  {
   
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,LOW);
   
  }

  else if(digitalRead(ir1)==LOW && digitalRead(ir2)==LOW)  //IR not on black line
  {
   
    digitalWrite(pin1,HIGH);
    digitalWrite(pin2,LOW);
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
    
  }

  else if(digitalRead(ir1)==LOW && digitalRead(ir2)==HIGH)
  {
    
    digitalWrite(pin1,LOW);     
    digitalWrite(pin2,LOW);    ///////////////left
    digitalWrite(pin3,HIGH);
    digitalWrite(pin4,LOW);
   
   delay(100);
  }

  else if(digitalRead(ir1)==HIGH && digitalRead(ir2)==LOW)
  {
   
     digitalWrite(pin1,HIGH);   
    digitalWrite(pin2,LOW);////right
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,LOW);
    
   delay(100);
  }

  else
  {
   
    digitalWrite(pin1,LOW);
    digitalWrite(pin2,LOW);    ///////////stops
    digitalWrite(pin3,LOW);
    digitalWrite(pin4,LOW);
 
  }
}
