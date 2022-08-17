const int rojo= 12;
const int amarillo = 11;
const int verde = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}



void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 12; i>=10; i--){
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);  
  }
}
