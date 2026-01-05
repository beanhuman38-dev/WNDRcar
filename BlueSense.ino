
#include "BluetoothSerial.h"

// ── Keep your same-style drivers ───────────────────────────────────────────────
BluetoothSerial SerialBT;
int Count = 0;

// ── Setup ─────────────────────────────────────────────────────────────────────
void setup() {
  Serial.begin(115200);
  delay(200);


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
    digitalWrite(13, HIGH);
    SerialBT.println("Hand Detected");
  }
  if (digitalRead(4) == 1) {
    digitalWrite(2, LOW);
    digitalWrite(13, LOW);
    SerialBT.println("No Hand Detected");
  }
  

  delay(30);  // ~10 Hz
}
