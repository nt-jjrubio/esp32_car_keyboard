#include <BleKeyboard.h>
/**
 * https://github.com/T-vK/ESP32-BLE-Keyboard
 */
BleKeyboard bleKeyboard;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("hola mundo");
  
  Serial.println("keyboard begin...");
  bleKeyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
 if(bleKeyboard.isConnected()) {
   delay(10000);
   Serial.println("Sending hello world...");
   bleKeyboard.print("Hello World");
   
 }
  
}
