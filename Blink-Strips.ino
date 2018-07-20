/*
  Blink-Strips

  Prototype test program - alternatingly turns four LED strips to 100% for one second, then 50% for one second,
  then off for one second.

  2018-7-19 by Lukas Frese
 
  loosely based on example code from the public domain: 
  http://www.arduino.cc/en/Tutorial/Blink
*/
int front = 11;
int back = 10;
int left = 9;
int right = 6;

// the setup function runs once when you press reset or power the board
void setup() {
   // initialize pin <front> as an output.
  pinMode(front, OUTPUT);
  // initialize pin <back> as an output.
  pinMode(back, OUTPUT);
  // initialize pin <left> as an output.
  pinMode(left, OUTPUT);
  // initialize pin <right> as an output.
  pinMode(right, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  analogWrite(front, 255);   // turn the front LED strip on (255 is the max voltage level)
  delay(1000);                       // wait for a second
  analogWrite(front, 127);   // turn the front LED strip lower (50 % voltage)
  delay(1000);                       // wait for a second
  analogWrite(front, 0);     // turn the front LED strip off by making the voltage 0
  delay(1000);                       // wait for a second
  analogWrite(back, 255);    // turn the back LED strip on (255 is the max voltage level)
  delay(1000);                       // wait for a second
  analogWrite(back, 127);    // turn the back LED strip lower (50 % voltage)
  delay(1000);                       // wait for a second
  analogWrite(back, 0);      // turn the back LED strip off by making the voltage 0
  delay(1000);                       // wait for a second
  analogWrite(left, 255);    // turn the left LED strip on (255 is the max voltage level)
  delay(1000);                       // wait for a second
  analogWrite(left, 127);    // turn the left LED strip lower (50 % voltage)
  delay(1000);                       // wait for a second
  analogWrite(left, 0);      // turn the left LED strip off by making the voltage 0
  delay(1000);                       // wait for a second
  analogWrite(right, 255);   // turn the right LED strip on (255 is the max voltage level)
  delay(1000);                       // wait for a second
  analogWrite(right, 127);   // turn the right LED strip lower (50 % voltage)
  delay(1000);                       // wait for a second
  analogWrite(right, 0);     // turn the right LED strip off by making the voltage 0
  delay(1000);                       // wait for a second
}
