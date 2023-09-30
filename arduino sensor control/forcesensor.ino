// C++ code
//force sensor 
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
  int force=analogRead(A0);
  Serial.println(force);
  if (force>300){
   red();
 }
  if (force>=150 && force<=300){
      yellow();

 }
  if(force<150) {

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