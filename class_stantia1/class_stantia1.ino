// C++ code
//Class

class calculation{
      int a,b,c;
   public:
  void set(int n1,int n2, int n3){
      a=n1;b=n2;c=n3;
 }
  void sum(){

      Serial.print("sum= ");
      Serial.print(a+b+c);
      Serial.println("");
}

  void multiply() {
         Serial.print("multiply : ");
         Serial.print(a*b*c);
         Serial.println("");
}
  void largest() {
     
       if(a>b && a>c) {

      Serial.print(a);
      Serial.print(" is the largest");
      }

      if(b>a && b>c) {

      Serial.print(b);
      Serial.print(" is the largest");

      }

         if(c>a && c>b) {

      Serial.print(c);
      Serial.print(" is the largest");
         }

}
};

void setup()
{
 Serial.begin(9600);
   calculation a;
   a.set(10,30,45);
   a.sum();
   a.multiply();
   a.largest();
}

void loop()
{
 
}
 

