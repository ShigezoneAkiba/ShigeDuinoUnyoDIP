void setup() {
  pinMode(13, OUTPUT); //OUTB
}

void loop() {
  digitalWrite(13, HIGH); 
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
