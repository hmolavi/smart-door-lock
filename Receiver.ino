#include <cvzone.h>

SerialData serialData(1, 1); 
int valsRec[1];

void setup() {
  pinMode(13, OUTPUT);
  serialData.begin();
}

void loop() {
  serialData.Get(valsRec);
  digitalWrite(13, valsRec[0]); 
  delay(10);
}
