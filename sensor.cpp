int trigPin = 9;
int echoPin = 10;
int ledPin = 7;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  

}

void loop() {
  long duration,distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = (duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);


  if(distance <=10){
    digitalWrite(ledPin,HIGH);
    
  }
  else if(distance>10){
    digitalWrite(ledPin,LOW);
  }
}
