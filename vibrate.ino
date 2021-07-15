
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(3, INPUT);
  // RGB
}

void loop()
{
  int result = analogRead(A0);
  if (result > 1000){
    tone(9, 262, 1000);
  }
  Serial.println(result);
  
  int lig = digitalRead(3);
  Serial.println(lig);
  delay(1000);
}
