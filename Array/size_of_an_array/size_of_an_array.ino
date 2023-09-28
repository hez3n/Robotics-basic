// C++ code
//size of an array
void setup()
{
  Serial.begin(9600);
  int Iarray[]={10,20,45,65,24}; //int 2 byte
  float farray[]={3.14,3.22,1.66};//float 4 byte
  char  carray[]={'a','b'}; // char 1 byte

  Serial.println(sizeof(Iarray)/sizeof(Iarray[0]));
  Serial.println(sizeof(farray)/sizeof(farray[0]));
    Serial.println(sizeof(carray)/sizeof(carray[0]));
        

}

void loop()
{
  
}