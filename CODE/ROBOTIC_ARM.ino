
#include <ESP32Servo.h>

Servo shoulderServo;

const int SHOULDER_PIN = 18;

void setup() {
  shoulderServo.setPeriodHertz(50);
  shoulderServo.attach(SHOULDER_PIN, 500, 2400);

  shoulderServo.write(0);
  delay(1000);
}

void loop() {
  // Slowly move from 0° to 180°
  for (int angle = 0; angle <= 180; angle++) {
    shoulderServo.write(angle);
    delay(20);
  }

  delay(500);

  // Slowly return from 180° to 0°
  for (int angle = 180; angle >= 0; angle--) {
    shoulderServo.write(angle);
    delay(20);
  }

  delay(500);
}

