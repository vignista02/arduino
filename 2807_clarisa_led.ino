
/*sketch para encender un led conectado al pin digital nro.10 
 * 1ro conecto el cable negro al gnd(tierra)
 * el otro extremo lo conecto a la linea -
 * 2do em el  pin nro.10  conecto el cable rojo 
 * el otro extremo del cable rojo lo conecto a la fila 25A 
 * 3ro conectomos una patita de la resistencia al puerto 25B 
 * la otra patita de la resistencia se conecta al 21B 
 * 4to conectomos un led color rojo una patita(patita corta negativa) se conecta a la linea -
 * conectamos la otra patita(patita larga positiva) al protoboard
 * 
 */
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
