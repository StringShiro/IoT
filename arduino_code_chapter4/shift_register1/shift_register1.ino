// C++ code
//
const int data_pin = 2;
const int clock_pin = 3;
const int latch_pin = 4;
void setup()
{

  pinMode(data_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);
  pinMode(latch_pin, OUTPUT);
  
  //analogWrite(led_1, 60);
  //analogWrite(led_2, 40);
  //analogWrite(led_3, 255);
}

void loop()
{
 
  //shiftDisplay(B11010001);
  byte x = B10000000;
  //LED on one at a time
  for(int i = 0; i < 8; i++) 
  {
    shiftDisplay(x);
    x = x >> 1;
    delay(200);
  }
  
}

void shiftDisplay(byte data) {
 	digitalWrite(latch_pin, LOW);
  	shiftOut(data_pin, clock_pin, LSBFIRST, data);
  	digitalWrite(latch_pin, HIGH);
  
}