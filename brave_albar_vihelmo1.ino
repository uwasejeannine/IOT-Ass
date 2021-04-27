#include <Servo.h>
Servo servo1;
int red=2;
int green=3;
int blue=4;
int trigPin = 6;
int echoPin = 7;
long distance;
long duration;
int value;

 
void setup() 
{
servo1.attach(9); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}
 
void loop() {
  ultra();
  servo1.write(0);
  if(distance <=30){
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  servo1.write(180);
  }
  if(distance <=30){
   digitalWrite(blue,HIGH);
   delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
  servo1.write(60);
  }
  if(distance <=30){
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
  servo1.write(120);
  }
  if(distance <=10){
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
  servo1.write(180);
  }
  else{servo1.write(0);}
  }
 
void ultra(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //duration = pulseIn(echoPin, HIGH);
  //distance=duration*0.343/2;
}
