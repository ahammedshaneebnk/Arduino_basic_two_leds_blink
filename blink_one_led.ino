/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
*/
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  // wait for a second
  delay(1000);                       
  // turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  // wait for a second    
  delay(1000);                       
}
