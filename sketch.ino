const int gasPin = A0;
const int buzPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(buzPin, OUTPUT);
  Serial.println("=== BAI 4.5: CAM BIEN KHOI / GAS MQ-2 ===");
}

void loop() {
  int gasVal = analogRead(gasPin);
  Serial.print("Nong do Khoi/Gas (Analog A0): ");
  Serial.println(gasVal);

  if (gasVal > 400) {
    digitalWrite(buzPin, HIGH);
  } else {
    digitalWrite(buzPin, LOW);
  }
  delay(300);
}
