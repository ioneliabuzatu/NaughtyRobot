#include <AFMotor.h>

AF_DCMotor motor(3);

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");

  // turn on motor
  motor.setSpeed(200);
 
  motor.run(RELEASE);
}

uint8_t var = 0;

void loop() {

  while (var < 50){
  uint8_t i;
  
  Serial.print("tick");
  
  motor.run(FORWARD);
  for (i=0; i<255; i++) {
    motor.setSpeed(i);  
    delay(10);
 }
 var++;

  Serial.print("tech");
  motor.run(RELEASE);
  delay(1000);
 }
}
