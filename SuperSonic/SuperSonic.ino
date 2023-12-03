#define trigPin;
#define echoPin;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicrosecond(2);
  digitalWrite(trigPin, HIGH);
  delayMicrosecond(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if(distance >= 200 || distance <= 0){
    Serial.println("Out of range!");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
