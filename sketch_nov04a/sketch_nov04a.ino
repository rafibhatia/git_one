const int ledPin = 13;  // Pin where the LED is connected

void setup() {
  Serial.begin(9600);  // Start the Serial communication at 9600 baud
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
  Serial.println("Type 'on' to turn the LED on, or 'off' to turn it off.");
}

void loop() {
  if (Serial.available()) {  // Check if there's data available to read
    String input = Serial.readStringUntil('\n');  // Read input until a newline

    if (input == "on") {  // Check if input is "on"
      digitalWrite(ledPin, HIGH);  // Turn the LED on
      Serial.println("LED is ON");
    } else if (input == "off") {  // Check if input is "off"
      digitalWrite(ledPin, LOW);  // Turn the LED off
      Serial.println("LED is OFF");
    } else {
      Serial.println("Invalid input. Please type 'on' or 'off'.");
    }
  }
}
