// C++ code
//

int ledPin = 2;
int LDRPin = A0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop()
{
 
  int value = analogRead(A0);
  if(value < 600 ) 
  {
    digitalWrite(ledPin, HIGH);
  }else {
    digitalWrite(ledPin, LOW);
  }
  Serial.println(value);
  delay(250);
  
}