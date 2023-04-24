int led = LED_BUILTIN;

int received = 0;

int i;

void setup() {

  Serial.begin(9600); 

  pinMode(led, OUTPUT);

}

 

void loop() {

  if (Serial.available() > 0) {
    received = Serial.read();
    Serial.println(received);

    if (received == 'a'){
      digitalWrite(led, HIGH);
    } else if (received == 'b'){
      digitalWrite(led, LOW);
    } 

}

}
