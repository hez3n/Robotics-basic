// C++ code
//While loop : divisible by 7
void setup()
{
 Serial.begin(9600);
  int z=1; int count=0;
  while(z<=500) {

    if (z%7==0) {
          Serial.println(z); count++;
    }
      z++; 

  }Serial.print("total number ");Serial.print(count);

 
}

void loop()
{
  
}