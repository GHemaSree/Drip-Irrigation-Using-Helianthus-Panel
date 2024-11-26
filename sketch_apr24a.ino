#include <Servo.h>

#define LDR1 A0
#define LDR2 A1
#define ERROR_MARGIN 10
#define MIN_SERVO_POSITION 0
#define MAX_SERVO_POSITION 180
#define SERVO_STEP 1
#define DELAY_TIME 80

int Spoint = 90;
Servo servo;

void setup() {
  servo.attach(11);
  servo.write(Spoint);
  delay(1000);
}

void loop() {
  int ldr1 = analogRead(LDR1);
  int ldr2 = analogRead(LDR2);

  int valueDiff = abs(ldr1 - ldr2);

  if (valueDiff > ERROR_MARGIN) {
    if (ldr1 > ldr2 && Spoint > MIN_SERVO_POSITION) {
      Spoint = max(Spoint - SERVO_STEP, MIN_SERVO_POSITION);
    } else if (ldr2 > ldr1 && Spoint < MAX_SERVO_POSITION) {  
      Spoint = min(Spoint + SERVO_STEP, MAX_SERVO_POSITION);
    }
  }

  servo.write(Spoint);
  delay(DELAY_TIME);
}
