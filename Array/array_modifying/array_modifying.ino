// C++ code
//Array modifying 
void setup()
{
  Serial.begin(9600);
  
  int array[5]={1,2,3,4,5};

  for(int i=100;i<105;i++) {
    array[i-100]=i; // 1st loop :100-100=i=0 2nd loop :101-100=i=1
         Serial.print(array[i-100]);Serial.print(" ");
      
  }
}

void loop()
{
  
}