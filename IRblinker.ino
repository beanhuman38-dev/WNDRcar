// C++ code
//
void setup()
{
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  if (digitalRead(4) == 1) {
    digitalWrite(2, LOW);
    digitalWrite(13, LOW);
  }
  if (digitalRead(4) == 0) {
    digitalWrite(2, HIGH);
    digitalWrite(13, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
