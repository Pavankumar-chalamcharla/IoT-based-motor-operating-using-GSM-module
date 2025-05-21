#include <SoftwareSerial.h>
            
SoftwareSerial gsm(10, 11); // RX, TX for SIM900A
const int relayPin = 7;     // Relay controls motor
bool relayState = false;    // Motor initially OFF

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); // Ensure motor is OFF at start

  gsm.begin(9600);
  Serial.begin(9600);

  delay(2000);
  gsm.println("AT");               // Check GSM is ready
  delay(1000);
  gsm.println("AT+CMGF=1");        // Set SMS to text mode
  delay(1000);
  gsm.println("AT+CNMI=1,2,0,0,0"); // Forward new SMS directly
}

void loop() {
  if (gsm.available()) {
    String sms = gsm.readString();
    sms.toUpperCase(); // Handle case-insensitive commands
    Serial.println("Received SMS: " + sms);

    if (sms.indexOf("ON") >= 0 && sms.indexOf("OFF") == -1) {
      relayState = true;
      Serial.println("Motor: ON");
    } 
    else if (sms.indexOf("OFF") >= 0) {
      relayState = false;
      Serial.println("Motor: OFF");
    }
  }

  // Apply relay state
  digitalWrite(relayPin, relayState ? HIGH : LOW);
}
