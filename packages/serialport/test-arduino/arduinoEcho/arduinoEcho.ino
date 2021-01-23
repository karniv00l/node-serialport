#define SET_BAUD_57600 130
#define SET_BAUD_9600 131

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.write("READY");
}

void loop() {
  while (Serial.available()) {
    uint8_t oneByteData = Serial.read();
    Serial.write(oneByteData);
  }
}
