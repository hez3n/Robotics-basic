// C++ code
//Negative positive number 
void setup()
{
 Serial.begin(9600);
}

void loop()
{ int n=-5;

 if(n==0) {


Serial.print(n);Serial.println(" is zero");

 }

 else if(n>0) { 
                Serial.print(n);Serial.println(" is positive");
 }
 else  {
          Serial.print(n);Serial.println(" is negative");
 }


}