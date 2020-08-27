
#include<Servo.h>
Servo x;
Servo y;
Servo z;
Servo a;
Servo b;
int flexpin = A0;
int val;
int maxval = 850; //insert your max_value
int minval = 700; // insert your min_value
void  setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  x.attach(9);
  y.attach(10);
  z.attach(11);
  a.attach(5);
  b.attach(6);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(flexpin);
  val = map(val, maxval, minval, 180, 0);
  Serial.println(val);
  x.write(val);
  y.write(val);
  z.write(val);
  a.write(val);
  b.write(val);
  delay(10);
}
