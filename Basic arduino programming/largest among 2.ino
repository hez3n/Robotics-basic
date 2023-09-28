// C++ code
//largest number among 2
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0) {
     int number1=14;
      int number2=12;
     
    if (number1>number2) {

        Serial.print(number1);
        Serial.print(" is largest");


    }
    else {

      Serial.print(number2);
      Serial.print(" is largest");
    }






  } Serial.println();

}