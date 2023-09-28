// C++ code
//If else
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0) {

     char data=Serial.read();

    if (data=='r' || data=='R') {
        Serial.println("Today is a rainy day");

    }

    if (data=='s' || data=='S') {

    Serial.println("Today is a sunny day");



    }

  }
}