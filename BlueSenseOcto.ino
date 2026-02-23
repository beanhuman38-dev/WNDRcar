/* If a specific pin has the opposite input or is not working correctly you can use pinMode
this is unique to my esp32 pins and setup. Feel free to remove or add.   */

#include "BluetoothSerial.h"

// ── Keep your same-style drivers ───────────────────────────────────────────────
BluetoothSerial SerialBT;
int Count = 0;

// ── Setup ─────────────────────────────────────────────────────────────────────
void setup() {
  Serial.begin(115200);
  delay(200);

pinMode(34,INPUT);
pinMode(35,INPUT);
pinMode(32,INPUT);
pinMode(33,INPUT);
pinMode(25,INPUT);
pinMode(26,INPUT);

  // Bluetooth
  SerialBT.begin("WNDRcar");
  Serial.println("\n bluetooth is ready connect it using  bluetooth serial app");
}
// ── Loop ──────────────────────────────────────────────────────────────────────
void loop() {

  // ── Print to Serial ──
  Count += 1;
  if (digitalRead(4) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("1-Detecteddetecrt");
  }
  if (digitalRead(15) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("2-Detected");
  }
  if (digitalRead(34) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("3-Detected");
  }
  if (digitalRead(35) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("4-Detected");
  }
  if (digitalRead(32) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("5-Detected");
  }
  if (digitalRead(33) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("6-Detected");
  }
  if (digitalRead(25) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("7-Detected");
  }
  if (digitalRead(26) == 0) {
    digitalWrite(2, HIGH);
    SerialBT.println("8-Detected");
  }
  if (digitalRead(4) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("1-Blancochanco");
  }
  if (digitalRead(15) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("2-Blank");
  } 
  if (digitalRead(34) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("3-Blank");
  }
  if (digitalRead(35) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("4-Blank");
  }
  if (digitalRead(32) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("5-Blank");
  }
  if (digitalRead(33) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("6-Blank");
  }
  if (digitalRead(25) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("7-Blank");
  }
  if (digitalRead(26) == 1) {
    digitalWrite(2, LOW);
    SerialBT.println("8-Blank");
  }
  

  delay(1000);  // ~10 Hz
}
