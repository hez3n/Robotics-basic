// C++ code
//string



void setup()
{  Serial.begin(9600);

  String s1="hello world!";
 /* Serial.print(s1);*/

 //int len=s1.length();
 // Serial.print(len);
//char ch=s1.charAt(4);
  //Serial.print(ch);
// String subs=s1.substring(4,9);
 //  Serial.print(subs);

//String in="hello"; String out="world";
//String sum=in+out;
//Serial.print(sum);

//type casting
//String n1="5"; String n2="45";
//int intn1=n1.toInt();
//int intn2=n2.toInt();
//Serial.print(intn1+intn2);
 s1.toUpperCase();
Serial.print(s1);
s1.toLowerCase();
Serial.print(s1);
}

void loop()
{
 
}
 

