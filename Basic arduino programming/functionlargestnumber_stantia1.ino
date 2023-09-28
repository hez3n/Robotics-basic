// C++ code
//Function basic largest number 
void setup()
{
 Serial.begin(9600);
   int a=findlargestnumber(-4,6,23);
   

   Serial.print(a);
}

void loop()
{
 
}
 

int  findlargestnumber(int n1,int n2, int n3) {

       if(n1>n2 && n1>n3) {
          return n1;
      
      }

      if(n2>n1 && n2>n3) {

      return n2;

      }

         if(n3>n1 && n3>n2) {

      return n3;
         }


  }





/*(return_type function_name(parameter1,parameter2,parameter3)
.....function code 
       return_function name*/ 