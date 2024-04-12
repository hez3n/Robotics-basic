// C++ code
//Servo control using flexor sensor 
#include <Servo.h>

Servo myservo;
void setup()
{
  Serial.begin(9600);
  myservo.attach(7);
  
}

void loop()
{
  int angle_value = angle();
  Serial.println(angle_value);
  myservo.write(angle_value);
}
int angle(){
  int sensor_value=analogRead(A0);
  return map(sensor_value,682,275,0,180);

}
  
