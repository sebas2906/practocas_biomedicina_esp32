int parpadeo_maximo_perceptible=(1.0/40.0)*1000;//segun estudios, el parpadeo minimo perceptible se acerca a los 20Hz
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //DESAFIO EN CLASE
  //2. Encuentra el parpadeo más rápido que el ojo pueda detectar 
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(parpadeo_maximo_perceptible/2);  //semiciclo                    
  digitalWrite(LED_BUILTIN, LOW); 
  delay(parpadeo_maximo_perceptible/2);                     
}
