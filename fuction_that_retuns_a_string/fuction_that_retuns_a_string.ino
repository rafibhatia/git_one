const int ledPin = 13;  // Pin where the LED is connected

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); 
  Serial.println("Type 'on' to turn the LED on, or 'off' to turn it off.");
}

String ledStatus() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');  // Read input until a newline

    if (input == "on") {  // If input is 'on'
      digitalWrite(ledPin, HIGH);  // Turn the LED on
      return "yes";  // Return "yes" if LED is turned on
    } else if (input == "off") {  // If input is 'off'
      digitalWrite(ledPin, LOW);  // Turn the LED off
      return "no";  // Return "no" if LED is turned off
    } else {
      Serial.println("Invalid input. Please type 'on' or 'off'.");
      return "no";  // Return "no" if invalid input
    }
  }
  return "no";  // Default return if nothing is available to read
}

void loop() {
  String status = ledStatus();  // Get the status based on user input
  if (status != "no") {
    Serial.println("LED status: " + status);  // Print the LED status ("yes" or "no")
  }
}
