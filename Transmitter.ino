// Transmitter Code
const int mq3Pin = A0;   // MQ3 Sensor pin
const int irPin = 2;     // IR Sensor pin

void setup() {
  Serial.begin(9600);
  pinMode(irPin, INPUT);
}

void loop() {
  int alcoholValue = analogRead(mq3Pin);
  int irValue = digitalRead(irPin);

  // Logic: Send '1' if safe (no alcohol AND helmet detected), '0' if unsafe
  if (alcoholValue < 300 && irValue == HIGH) {
    Serial.write('1'); // Safe signal
  } else {
    Serial.write('0'); // Unsafe signal
  }
  delay(500);
}
