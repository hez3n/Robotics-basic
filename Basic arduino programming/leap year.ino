// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
   int year=2020;

     if (year%4==0 && year&100!=0 || year%400==0) {


        Serial.println(year);
        Serial.print(" is a leap year");

   }

  else { Serial.println(year);
          Serial.print(" is not a leap year");

  }







}