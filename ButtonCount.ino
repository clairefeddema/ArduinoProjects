int led = 8;
int buttonPin = 13;

int buttonNew;
int buttonOld = 1;

int delayTime = 100;
int count = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew = digitalRead(buttonPin);
Serial.println(count);

  if(buttonOld == 0 && buttonNew == 1){
    count ++;
  }
buttonOld = buttonNew;
 delay(delayTime);
  if(buttonStatus == 1) {
   digitalWrite(led, LOW);
  }
  if(buttonStatus == 0) {
    digitalWrite(led, HIGH);
  }
  
}
