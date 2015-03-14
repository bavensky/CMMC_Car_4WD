#include <Servo.h> 
 
Servo myservo;
#define PWM_MOTOR  5
#define MOTORFW    2
#define MOTORBW    4
 
void setup()  { 
  pinMode(MOTORFW, OUTPUT);
  pinMode(MOTORBW, OUTPUT);
  myservo.attach(3); 
  myservo.write(35); 
  
} 
 
void loop()  {
  forward(100);
//  delay(2000);
//  backward(100);
//  delay(2000);
  // Left
//  myservo.write(0); 
//  delay(200); 
//  // Center
//  myservo.write(35); 
//  delay(200);
//  // Right 
//  myservo.write(50); 
//  delay(200); 
} 

void forward(int value)  {
  analogWrite(PWM_MOTOR,  value);
  digitalWrite(MOTORFW, 1);
  digitalWrite(MOTORBW, 0);
}
void backward(int value)  {
  analogWrite(PWM_MOTOR,  value);
  digitalWrite(MOTORFW, 0);
  digitalWrite(MOTORBW, 1);
}
