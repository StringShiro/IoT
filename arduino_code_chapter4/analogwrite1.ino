// C++ code
//
const int led_1_pin = 3;
const int led_2_pin = 5;
const int led_3_pin = 6;
void setup()
{
  Serial.begin(9600);
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);
}

void loop()
{
  //Stores th PƯM duty cylces
  int bright1;
  int bright2;
  int bright3;
  
  // Increases LED bright at different time
  for(int i = 0; i < 395; i++)
  {
    bright1 = i;
    bright2 = i - 70;
    bright3 = i -140;
    
    //limit bright ti between from 0 to 255
    
    if(bright1 < 0)
    {
      bright1 = 0;
    }else if( bright1 > 255)
    {
      bright1 = 255;
    }
    
     if(bright2 < 0)
    {
      bright2 = 0;
    }else if( bright2 > 255)
    {
      bright2 = 255;
    }
    
     if(bright3 < 0)
    {
      bright3 = 0;
    }else if( bright3 > 255)
    {
      bright3 = 255;
    }
    
   //set led bright levels
    analogWrite(led_1_pin, bright1);
    analogWrite(led_2_pin, bright2);
    analogWrite(led_3_pin, bright3);
    delay(10);
  }
  
}