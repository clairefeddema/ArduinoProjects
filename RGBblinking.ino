const int redLED = 12;
const int greenLED = 8;
const int blueLED = 7;
int waitTime = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED, OUTPUT);
pinMode(greenLED, OUTPUT);
pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED, HIGH);
delay(waitTime);
digitalWrite(redLED, LOW);
delay(waitTime);
digitalWrite(greenLED, HIGH);
delay(waitTime);
digitalWrite(greenLED, LOW);
delay(waitTime);
digitalWrite(blueLED, HIGH);
delay(waitTime);
digitalWrite(blueLED, LOW);
delay(waitTime);
}
