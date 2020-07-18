int ldr = A0;
int led = 8;
void setup() {
  Serial.begin(9600);
  pinMode(ldr,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop() {
 int val = analogRead(ldr);

 if(val>200){
  digitalWrite(led,1);
 }else{
  digitalWrite(led,0);
 }
 Serial.print("ldr = ");
 Serial.println(val);
 delay(500);

}
