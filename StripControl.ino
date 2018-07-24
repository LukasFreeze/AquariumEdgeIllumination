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
  // +++ 8 L +++
  //all(155);
  //leftOn(125); 
  //rightOn(125);
  //sides(155); //(covered in front) 255: too high -- 55: too low -- 125 still too low(?) -- 200: can disappear near top
  
  //sides(170); //(uncovered)
  //frontOn(20); //should be much lower than back, maybe off completely
  //backOn(155);

  // +++ 5 L +++
  sides(200); //170 a bit low? -- 50 too low, 250 too much
  frontOn(20); //should be much lower than back, maybe off completely
  backOn(155);
}

//all four strips at the same value - probably not usable
void all(int brightness){
  analogWrite(front, brightness);   // controls the front LED strip
  analogWrite(back, brightness);   // controls the back LED strip
  analogWrite(left, brightness);   // controls the left LED strip
  analogWrite(right, brightness);   // controls the right LED strip
}

void sides(int brightness){
  analogWrite(left, brightness);   // controls the left LED strip
  analogWrite(right, brightness);   // controls the right LED strip
}

void leftOn(int brightness){
  analogWrite(left, brightness);   // controls the left LED strip
}

void rightOn(int brightness){
  analogWrite(right, brightness);   // controls the right LED strip
}

void frontOn(int brightness){
  analogWrite(front, brightness);   // controls the front LED strip
}

void backOn(int brightness){
  analogWrite(back, brightness);   // controls the back LED strip
}
