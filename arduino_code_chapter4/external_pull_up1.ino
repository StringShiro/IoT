// C++ code
//
const int btn_pin = 2;
const int led_pin = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(btn_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  
 
}

void loop()
{
  int value = digitalRead(btn_pin);
  Serial.println(value);
  delay(1000);
  if(digitalRead(btn_pin) == LOW) {
  	digitalWrite(led_pin, HIGH);
    
  }else {
  	digitalWrite(led_pin, LOW);
  }

}