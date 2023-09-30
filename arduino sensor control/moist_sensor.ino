// C++ code
//Moist sensor


int r=13,b=12,g=8;
void setup()
{
 Serial.begin(9600);
 pinMode(r,OUTPUT);
 pinMode(b,OUTPUT);
 pinMode(g,OUTPUT);
}

void loop()
{
  int moist=analogRead(A0);
  Serial.println(moist);
  if (moist<=250){
   red();
 }
  if (moist>250 && moist<=550){
      yellow();

 }
  if(moist>550) {

    green();
 }
}


void red() {

  digitalWrite(r,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
}
void yellow() {
    
    digitalWrite(r,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(g,HIGH);


}

void green() {
    
    digitalWrite(r,LOW);
    digitalWrite(b,LOW);
    digitalWrite(g,HIGH);

}