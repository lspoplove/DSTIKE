void setup() {

  pinMode(D1, OUTPUT);     // Initialize the Highlight LED pin as an output
}
 
 
void loop() {
  digitalWrite(D1, LOW);   // Turn the LED on (Note that LOW is the voltage level
  delay(1000);                      // Wait for a second
  digitalWrite(D1, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(1000);                      
}
