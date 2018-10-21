void setup() {
 pinMode(1,OUTPUT);
 pinMode(2,OUTPUT);// put your setup code here, to run once:
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);// put your setup code here, to run once:
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);// put your setup code here, to run once:
 pinMode(8,OUTPUT);
}

void loop() {
  int time=40;
  for (int i=1; i<9; i++){
  digitalWrite(i,HIGH);
  delay(time);
  digitalWrite(i,LOW);
  delay(time); 
  // put your main code here, to run repeatedly:

}
 for (int q=7; q >1; q--){
  digitalWrite(q,HIGH);
  delay(time);
  digitalWrite(q,LOW);
  delay(time); 
 }
}
