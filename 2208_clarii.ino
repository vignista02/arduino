#define led 8
#define trigger 13
#define Echo 12

void setup() {
 Serial.begin(9600);
 pinMode(led, OUTPUT);
 pinMode(trigger, OUTPUT);
 pinMode(Echo, INPUT);
 digitalWrite(trigger, LOW);
 
}

void loop() 
{
  long t;
  long d;
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  t = pulseIn(Echo, HIGH);
  d = t/59;


  if (d<10){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
   Serial.print("distancia:");
   Serial.print(d);
   Serial.println();
   delay(100);
}
