int led = 8;
int button = 12;
int buttonStatus;
int delayTime = 50;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonStatus = digitalRead(button);
Serial.println(buttonStatus);
delay(delayTime);
  if(buttonStatus == 1) {
    digitalWrite(led, LOW);
  }
  if(buttonStatus == 0) {
    digitalWrite(led, HIGH);
  }
}
