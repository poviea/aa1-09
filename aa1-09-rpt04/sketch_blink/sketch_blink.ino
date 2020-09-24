int pinNum = 13; // 013

void setup() {
  // put your setup code here, to run once:
  pinMode(pinNum, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinNum, HIGH); // HIGH = +5V
  delay(3000);
  digitalWrite(pinNum, LOW); // LOW = 0V
  delay(3000);
}
