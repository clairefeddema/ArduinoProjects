int buttonPin = 13;
int delayTime = 100;

int ledState = 0;
int buttonNew;
int buttonOld = 1;

int led1 = 12;
int led2 = 7;
int led3 = 10;
int led4 = 8;
int led5 = 2;
int led6 = 5;
int led7 = 3;

int count = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(buttonPin, INPUT);

digitalWrite(led1, HIGH); 
digitalWrite(led2, HIGH); 
digitalWrite(led3, HIGH); 
digitalWrite(led4, HIGH); 
digitalWrite(led5, HIGH); 
digitalWrite(led6, HIGH); 
digitalWrite(led7, HIGH); 

delay(5000);

digitalWrite(led1, LOW); 
digitalWrite(led2, LOW); 
digitalWrite(led3, LOW); 
digitalWrite(led4, LOW); 
digitalWrite(led5, LOW); 
digitalWrite(led6, LOW); 
digitalWrite(led7, LOW); 
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew = digitalRead(buttonPin);
Serial.println(count);
  if(buttonOld == 0 && buttonNew == 1){
    count ++;
  }
  if(count == 0){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, LOW); 
    digitalWrite(led5, HIGH); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, HIGH); 
  }
  if(count == 1){
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, LOW); 
    digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, LOW);   
  }
  if(count == 2){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, HIGH); 
    digitalWrite(led6, LOW); 
    digitalWrite(led7, HIGH);     
  }
  if(count == 3){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, HIGH);     
  }
  if(count == 4){
    digitalWrite(led1, LOW); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, LOW);     
  }
  if(count == 5){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, HIGH);     
  }
  if(count == 6){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, LOW); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, HIGH); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, HIGH);     
  }
  if(count == 7){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, LOW); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, LOW); 
    digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, LOW);     
  }
  if(count == 8){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, HIGH); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, HIGH);     
  }
  if(count == 9){
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH); 
    digitalWrite(led3, HIGH); 
    digitalWrite(led4, HIGH); 
    digitalWrite(led5, LOW); 
    digitalWrite(led6, HIGH); 
    digitalWrite(led7, HIGH);     
  }
  if(count == 10){
    count = 0;
  }
  
  buttonOld = buttonNew;
  delay(delayTime);
}
