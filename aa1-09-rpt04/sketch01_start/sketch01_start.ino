void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH); // HIGH = +5V
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW); // LOW = 0V
  delay(3000);
}
