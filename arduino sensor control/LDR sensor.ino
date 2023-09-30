// C++ code
//LDR

int p=13;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  int resistance=analogRead(A0);
 Serial.println(resistance);

  if (resistance>0 && resistance<400) {

     digitalWrite(p,LOW);
 }
  if(resistance>400){

     digitalWrite(p,HIGH);
 }  
}
    
