int sw = 8;
int led = 9;
void setup() {
 Serial.begin(9600);
 pinMode(sw,INPUT_PULLUP);
 pinMode(led,OUTPUT);
}

void loop() {
 int val = digitalRead(sw);
   if(val==0){
    digitalWrite(led,1);
   }else{
    digitalWrite(led,0);
   }
 Serial.println(val);
 delay(1000);

}
