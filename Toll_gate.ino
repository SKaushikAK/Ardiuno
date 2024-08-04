#include<Servo.h>
Servo myservo;
const int trigPin=10;
const int echoPin=9; 
long tmeduration;
int distance;



void setup() {

  myservo.attach(3);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigPin,LOW);
  
tmeduration=pulseIn(echoPin,HIGH);
distance=(0.034*tmeduration)/2;

if(distance<=0){
  
  myservo.write(180);
  }
  else{
    myservo.write(0);}
  
  Serial.print("distance:");
  Serial.println(distance);
    

}
