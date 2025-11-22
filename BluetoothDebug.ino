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
  Serial.println("count ");Serial.print(Count);
  // print for phone screen over bluetooth
  SerialBT.println("Prepare for WNDR ");SerialBT.print(Count);

  delay(3000);  // ~10 Hz
}
