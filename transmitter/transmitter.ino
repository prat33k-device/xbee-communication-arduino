void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.write("a");
  delay(1000);
  Serial.write("b");
  delay(1000);
}
