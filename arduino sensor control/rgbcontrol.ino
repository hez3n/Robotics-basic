// C++ code
// rgb 


int red=13,blue=12,green=11;
 
void setup()
{  
  
   pinMode(red,OUTPUT);
   pinMode(blue,OUTPUT);
   pinMode(green,OUTPUT);

   
  
}

void loop()
{
pinkyellowblink();  
//rgb_blink();//Not switching off light 
}

void rgb_blink() {

   digitalWrite(red,HIGH);
   delay(1000);
   digitalWrite(red,LOW);
   
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(blue,LOW);
   ;
   digitalWrite(green,HIGH);
   delay(1000);
   digitalWrite(green,LOW);
   
   
}

void pinkyellowblink() {

   digitalWrite(red,HIGH);
   digitalWrite(blue,HIGH);
   delay(1000);
   digitalWrite(red,LOW);
   digitalWrite(blue,LOW);
   digitalWrite(green,HIGH);
   digitalWrite(red,HIGH);
   delay(1000);
   digitalWrite(red,LOW);
   digitalWrite(green,LOW);
   
 

}