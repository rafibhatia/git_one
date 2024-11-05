const int ledPin = 13;  // Pin where the LED is connected

void setup() {
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT); 
  Serial.println("Type 'on' to turn the LED on, or 'off' to turn it off.");
}
if ()
void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');  // Read input until a newline

    if (input == "on") {  // 
      digitalWrite(ledPin, HIGH);  // 
      Serial.println("LED is ON");
    } else if (input == "off") {  //
      digitalWrite(ledPin, LOW);  // 
      Serial.println("LED is OFF");
    } else {
      Serial.println("Invalid input. Please type 'on' or 'off'.");
    }
  }
}
