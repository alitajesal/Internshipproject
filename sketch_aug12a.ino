const int s0=9;
const int s1=10;
const int s2=11;
const int s3=12;
const int en=8;
const int sig=7;
void setup() {
  // put your setup code here, to run once:
  pinMode(s0,OUTPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);

  pinMode(en,OUTPUT);
  pinMode(sig,OUTPUT);
//  pinMode(s0,OUTPUT);
//  pinMode(s0,OUTPUT);
  digitalWrite(s0, LOW);
digitalWrite(s1, HIGH);
digitalWrite(s2, LOW);
digitalWrite(s3, LOW);




}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(en, LOW);

digitalWrite(sig, HIGH);
delay(5000);
digitalWrite(en, HIGH);
delay(5000);



}
