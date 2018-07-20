/*
  StripControl

  Turns four LED strips to the selected value (255=100%). Values will vary depending on ambient light!

  2018-7-20 by Lukas Frese
*/
int front = 11;
int back = 10;
int left = 9;
int right = 6;

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

void loop() {
  all(55);
}

//all four strips at the same value - probably not usable
void all(int brightness){
  analogWrite(front, brightness);   // controls the front LED strip
  analogWrite(back, brightness);   // controls the back LED strip
  analogWrite(left, brightness);   // controls the left LED strip
  analogWrite(right, brightness);   // controls the right LED strip
}

