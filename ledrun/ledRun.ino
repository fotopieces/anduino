int ledR = 8;
int ledG = 9;
int ledY = 10;
void setup() {
 pinMode(ledR,OUTPUT);
 pinMode(ledG,OUTPUT);
 pinMode(ledY,OUTPUT);
}

void loop() {
  digitalWrite(ledR,1);
  digitalWrite(ledG,0);
  digitalWrite(ledY,0);
  delay(1000);

  digitalWrite(ledR,0);
  digitalWrite(ledG,1);
  digitalWrite(ledY,0);
  delay(1000);

  digitalWrite(ledR,0);
  digitalWrite(ledG,0);
  digitalWrite(ledY,1);
  delay(1000);
}
