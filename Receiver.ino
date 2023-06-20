#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(9);
  pinMode(LED_BUILTIN, OUTPUT);
  servo.write(0);
  delay(1000);
}

void loop() {
  if (Serial.available()) {
    String receivedData = Serial.readString();

    if (receivedData == "Match: True") {
      Serial.write("Recieved: True");
      digitalWrite(LED_BUILTIN, HIGH);
      servo.write(180);
      delay(15000); // Door open for 15 seconds
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
