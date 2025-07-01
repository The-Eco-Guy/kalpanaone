
#include <Servo.h>

int pos = 0;
int degree = 90;

Servo servo;

void setup()
{
  servo.attach(9, 500, 2500);
}

void loop()
{
  for (pos = 0; pos <= degree; pos += 1) {
    servo.write(pos);
    delay(10);
  }
    delay(1000);

  for (pos = degree; pos >= 0; pos -= 1) {
    servo.write(pos);
    delay(10);
  }
  delay(1000);
}