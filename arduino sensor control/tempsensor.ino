// C++ code
//temp sensor

int temp_pin =A0;
int buzzer_pin=7;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer_pin,OUTPUT);
}

void loop()
{ 
  int temperature =temp();

  Serial.println(temperature);

  if(temperature>100) {
     digitalWrite(buzzer_pin,HIGH);
     Serial.println("buzzer is on");

  } digitalWrite(buzzer_pin,LOW);
}

int temp(){
   int temp_value = analogRead(A0);
   return map(temp_value,20,358,-40,125);

}

