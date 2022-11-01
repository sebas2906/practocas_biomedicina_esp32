
/**
 * Trabajo 2
 * 
 * 
 * 
 */
//un pulso cardiaco puede ir entre 60 y 100 ppm
int pulso_cardiaco_60ppm_ms=((1.0/60.0)*60*1000);//60ppm
int pulso_cardiaco_100ppm_ms=((1/100.0)*60*1000);//100ppm


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //DESAFIO EN CLASE
  //2. Implementa un parpadeo a velocidad similar a la de un pulso cardiac
  
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(pulso_cardiaco_100ppm_ms);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(pulso_cardiaco_100ppm_ms);      
}
