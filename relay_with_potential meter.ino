int LDRPin=A1;
int ledDay=3;
int ledNight=4;

void setup() {
  pinMode(LDRPin,INPUT);
  pinMode(ledNight,OUTPUT);
  pinMode(ledDay,OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int LDRVal=analogRead(LDRPin);
  Serial.println(LDRVal);
  if(LDRVal<350){
    digitalWrite(ledNight,HIGH);
    digitalWrite(ledDay,LOW);
    }

  else{
    digitalWrite(ledNight,LOW);
    digitalWrite(ledDay,HIGH);    }
    delay(1000);

}
