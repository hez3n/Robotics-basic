// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0); {
      int n1,n2,n3;
      n1=124;
      n2=324;
      n3=292;
       if(n1>n2 && n1>n3) {

      Serial.print(n1);
      Serial.print(" is the largest");
      }

      if(n2>n1 && n2>n3) {

      Serial.print(n2);
      Serial.print(" is the largest");

      }

         if(n3>n1 && n3>n2) {

      Serial.print(n1);
      Serial.print(" is the largest");
         }


  }
Serial.println();
  
}