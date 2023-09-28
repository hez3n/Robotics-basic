// C++ code
//total number divisible by 7
void setup()
{
 Serial.begin(9600);

int i; int count=0;

  for (i=0;i<=500;i++) {


  if (i%7==0) {

  Serial.println(i);count++;
  



}
 


}
Serial.print("total number divisible by 7 are : ");Serial.println(count);
  
   
}

void loop()
{
  
}