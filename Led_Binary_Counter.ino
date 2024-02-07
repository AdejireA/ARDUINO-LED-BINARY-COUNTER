int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
void setup() {
  // put your setup code here, to run once
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
Serial.begin(9600);
  //Blink the Leds once 

digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH); 

}

void loop() {
  // put your main code here, to run repeatedly:

 // 0001
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH); 
delay(2000);

  //0010
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW); 
delay(2000);

  //0011
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH); 
delay(2000);

  //0100
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW); 
delay(2000);

  //0101
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH); 
delay(2000);

  //0110
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW); 
delay(2000);

  //0111
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH); 
delay(2000);

  //1000
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW); 
delay(2000);

  //1001
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH); 
delay(2000);

  //1010
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW); 
delay(2000);

  //1011
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH); 
delay(2000);

  //1100
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH); 
delay(2000);

  //1101
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH); 
delay(2000);

  //1110
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW); 
delay(2000);
 
  //1111
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH); 
delay(2000);

}
