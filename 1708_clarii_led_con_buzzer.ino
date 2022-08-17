const int LED=13;
const int BOTON=7;
int val;
int buzz = 8;

void setup() {
pinMode(LED,OUTPUT);
pinMode(BOTON,INPUT);
}
void loop() {
 val=digitalRead(BOTON);
 if   (val==HIGH)

tone(buzz, 392 , 200);  //sonido 1
digitalWrite(LED,HIGH);
delay(200);

tone(buzz, 587 , 200);  //sonido 2
digitalWrite(LED,LOW);
delay(200);
}
