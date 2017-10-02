int led_1=2;
int led_2=3;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
long duration_1;
int distance_1;
const int trigPin_1 = 11;
const int echoPin_1 = 12;
void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(trigPin_1, OUTPUT); 
pinMode(echoPin_1, INPUT); 
Serial.begin(9600);
pinMode(led_1, OUTPUT);
pinMode(led_2, OUTPUT);
}
void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance= duration*0.034/2;

  Serial.print("elulso tav: ");
  Serial.println(distance);

  digitalWrite(trigPin_1, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin_1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin_1, LOW);

  duration_1 = pulseIn(echoPin_1, HIGH);

  distance_1= duration_1*0.034/2;
  
  Serial.print("\nHatulso tav: ");
  Serial.println(distance_1);

  if(distance<70 && distance>50){
    digitalWrite(led_1,HIGH);
    delay(250);
    digitalWrite(led_1,LOW);
    delay(250);
  }
  
  if(distance<50 && distance>30){
    digitalWrite(led_1,HIGH);
    delay(125);
    digitalWrite(led_1,LOW);
    delay(125);
  }
  
  if(distance<30 && distance>0){
    digitalWrite(led_1,HIGH);
    delay(62);
    digitalWrite(led_1,LOW);
    delay(62);
  }
    if(distance_1<70 && distance_1>50){
    digitalWrite(led_2,HIGH);
    delay(250);
    digitalWrite(led_2,LOW);
    delay(250);
  }
  
  if(distance_1<50 && disance_1>30){
    digitalWrite(led_2,HIGH);
    delay(125);
    digitalWrite(led_2,LOW);
    delay(125);
  }
  
  if(distance_1<30 && distance_1>0){
    digitalWrite(led_2,HIGH);
    delay(62);
    digitalWrite(led_2,LOW);
    delay(62);
  }
}

