// C++ code
//

int relay_pin =7;
void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(relay_pin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(relay_pin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}