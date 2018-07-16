/*
  BlinkSOS

  Turns an LED on for three short blinks, three long blinks, then three short blinks again.
  Then repeat the previous set of blinks.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  /**
* First signal 'S'
* Morse code for S is . . . 
* that is, three short blinks.
*/
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
/**
* Second signal 'O'
* Morse code for O is - - -
* that is, three long blinks.
*/
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(1000); // wait for a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
/**
* Third signal 'S'
* Morse code for S is . . . 
* that is, three short blinks.
*/
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
delay(500); // wait for half a second
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(500); // wait for half a second
/**
* Then short pause before restart of loop.
* This allows you to see that it is an SOS signal
*/
digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
delay(2000); // wait for 2 seconds
}
