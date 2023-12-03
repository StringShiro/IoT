//Nut ON/OFF led
//hang se khong thay doi gia tri, thuong dung de set pin number
const int ledPin = 4;
const int buttonPin = 6;

//bien se thay doi gia tri
int buttonState = 0;

void setup() {
  //nhan biet Led pin la output
  pinMode(ledPin, OUTPUT);
  //nhan biet button pin la input
  pinMode(buttonPin, INPUT);
}

void loop() {
  //doc State cua luc nhan button
  buttonState = digitalRead(buttonPin);

  //check neu duoc NHAN, buttonState se la HIGH
  if (buttonState == HIGH) {
    //turn LED on
    digitalWrite(ledPin, HIGH);
  }
  else {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }

}
