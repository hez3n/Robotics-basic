// C++ code
//Motor control 
int p=11,n=10;

void setup()
{
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
}

void loop()
{
 analogWrite(p,0);
 analogWrite(n,255);
 delay(2000);
 analogWrite(p,255);
 analogWrite(n,0);
delay(2000);
}