/*
    Project name : Flame Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-flame-sensor
*/

#define FLAME_PIN 2  // Digital pin connected to the flame sensor

void setup() {
  pinMode(FLAME_PIN, INPUT); // Set flame sensor pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int flameValue = digitalRead(FLAME_PIN); // Read flame sensor value
  
  if (flameValue == HIGH) {
    Serial.println("Flame detected!"); // Print message if flame is detected
  } else {
    Serial.println("No flame detected."); // Print message if no flame is detected
  }
  
  delay(1000); // Delay for readability
}
