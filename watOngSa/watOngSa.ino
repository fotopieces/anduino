int in = A0;
void setup() {
  Serial.begin(9600);
  pinMode(in,INPUT);
}

void loop() {
 int val = analogRead(in);

 float mv = (val/1024.0)*5000;
 float c = mv/10;
 float f = (c*9)/5+32;
 Serial.print("Temp C = ");
 Serial.println(c);
 Serial.print("Temp F = ");
 Serial.println(f);
 delay(500);
}
