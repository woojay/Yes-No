//
// Yes-No
// wp
//
// arduino nano - servo - joystick
//
// servo input -> D2
// joystick axis -> A1
//

#include <Servo.h>

Servo myservo;        // create servo object 

int pos = 0;          // servo position
const int joyH = 1;   // pin A1 for joystick axis

void setup() {
  myservo.attach(2);  // attaches the servo on pin D2 
  Serial.begin(9600);
}

void loop() {
  pos = analogRead(joyH);           
  pos = map(pos, 0, 1023, 0, 180);  // rescale joystick value
  myservo.write(pos);               // command servo to 'pos'
  delay(15);                        // for servo actuation
}
