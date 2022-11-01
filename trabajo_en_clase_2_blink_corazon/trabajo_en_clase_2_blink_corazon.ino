
int pulso_cardiaco_60ppm_ms=((1.0/60.0)*60*1000);//un pulso cardiaco puede ir entre 60 y 100 ppm
int pulso_cardiaco_100ppm_ms=((1/100.0)*60*1000);//un pulso cardiaco puede ir entre 60 y 100 ppm
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //DESAFIO EN CLASE
  //2. Implementa un parpadeo a velocidad similar a la de un pulso cardiac
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(pulso_cardiaco_100ppm_ms);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(pulso_cardiaco_100ppm_ms);                       // wait for a second 
}
