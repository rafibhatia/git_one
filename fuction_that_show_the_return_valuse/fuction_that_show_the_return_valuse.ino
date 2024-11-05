const int ledPin = 13;  // Pin where the LED is connected

// Function that takes two parameters and returns a string
String blinkLED(int pin, int delayTime) {
  digitalWrite(pin, HIGH);  // Turn the LED on
  delay(delayTime);         // Wait for the specified time
  digitalWrite(pin, LOW);   // Turn the LED off
  return "off";             // Return "off" after turning the LED off
}

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
  Serial.begin(9600);       // Start serial communication
  Serial.println("Starting LED blink test.");
}

void loop() {
  // Call blinkLED with two parameters: LED pin and delay time in milliseconds
  String status = blinkLED(ledPin, 1000);  // Blink LED on pin 13 for 1000 ms (1 second)
  
  // Print the status of the LED to the Serial Monitor
  Serial.println("LED is " + status);
  
  delay(500);  // Wait for 500 ms before repeating
}
