int menuBuzzer;
int nilai;
void setup() {
  pinMode (11,OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
   if( Serial.available() >0 ) {
     nilai = Serial.read();
    if ( nilai ==1 ) menuBuzzer =1;
    if ( nilai ==2 ) menuBuzzer =3;
    if ( nilai ==3 ) menuBuzzer =2;
    if ( nilai ==4 ) menuBuzzer =3;
    delay (100);
}
  if (menuBuzzer == 1)
  {
  digitalWrite(11, HIGH);
  delay(90);          
  digitalWrite(11, LOW);
  delay(110);          
}
  if (menuBuzzer == 3 ){
  digitalWrite(11, LOW);  
  delay(100);        
  }
 if (menuBuzzer == 2 ){
  analogWrite(11, 99);  
  delay(100);        
  }

}
