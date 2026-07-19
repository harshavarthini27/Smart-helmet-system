// Receiver Code
const int relayPin = 8; // Ignition relay pin

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();

    if (data == '1') {
      digitalWrite(relayPin, HIGH); // Ignition ON
    } else {
      digitalWrite(relayPin, LOW);  // Ignition OFF
    }
  }
}
