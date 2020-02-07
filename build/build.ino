/*
 *  8-button Arduino Game Controller 
 * 
 *  Sends button presses over serial to your computer. 
 *  
 *  
 *  created by
 *  Matthew Dylan Bendebel
 *  6 February 2020
 *  
 */

// constant variables for the 8 button pins and delay time
const int up = 2;
const int down = 3;
const int left = 4;
const int right = 5;
const int select = 6;
const int start = 7;
const int buttonA = 12;
const int buttonB = 13;
const int uTime = 200;          // unit of time

void setup() {
  Serial.begin(9600);           // start serial for communicating with computer

  // button pins for 8-button game controller as input
  pinMode(up, INPUT);
  pinMode(down, INPUT);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  pinMode(select, INPUT);
  pinMode(start, INPUT);
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
}

void loop() {
  
  // if corresponding buttons are pressed, print message of the pressed button to serial
  // ex: if up button is pressed, print "Up"
    
  if (digitalRead(up) == HIGH) {
    Serial.println("Up");
    delay(uTime);
  }
  if (digitalRead(down) == HIGH) {
    Serial.println("Down");
    delay(uTime);
  }
  if (digitalRead(left) == HIGH) {
    Serial.println("Left");
    delay(uTime);
  }
  if (digitalRead(right) == HIGH) {
    Serial.println("Right");
    delay(uTime);
  }
  if (digitalRead(select) == HIGH) {
    Serial.println("Select");
    delay(uTime);
  }
  if (digitalRead(start) == HIGH) {
    Serial.println("Start");
    delay(uTime);
  }
  if (digitalRead(buttonA) == HIGH) {
    Serial.println("A");
    delay(uTime);
  }
  if (digitalRead(buttonB) == HIGH) {
    Serial.println("B");
    delay(uTime);
  }
  
  // if no button is pressed, print "Nothing"
  if (digitalRead(up) == LOW || digitalRead(down) == LOW ||
           digitalRead(left) == LOW || digitalRead(right) == LOW ||
           digitalRead(select) == LOW || digitalRead(start) == LOW ||
           digitalRead(buttonA) == LOW || digitalRead(buttonB) == LOW) {
    Serial.println("Nothing");
    delay(uTime);
  }
  
}
