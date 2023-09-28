// C++ code
//Function basic
void setup()
{
 Serial.begin(9600);
   int a=sum(7,2);
   

   Serial.print(a);
}

void loop()
{
 
}
 

int  sum(int a,int b){

   int sum=a+b;

  return sum;

}

/*(return_type function_name(parameter1,parameter2,parameter3)
.....function code 
       return_function name*/ 