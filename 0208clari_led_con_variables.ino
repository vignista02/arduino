const int rojo = 12;
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
  digitalWrite(rojo, HIGH);
  delay(500);
  digitalWrite(rojo, LOW);
  delay(500);
  digitalWrite(amarillo, HIGH);
  delay(500);
  digitalWrite(amarillo, LOW);
  delay(500);
  digitalWrite(verde, HIGH);
  delay(500);
  digitalWrite(verde, LOW);
  delay(500);
}
