
// configuraciones iniciales
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);//configurando el led integrado de la placa de desarrollo como salida
}

// superloop
void loop() {
  //DESAFIO EN CLASE
  //1. Implementar parpadeo con intervalo de 200ms
  digitalWrite(LED_BUILTIN, HIGH);   // enciende led
  delay(1000);                       // esperar de un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apagar led
  delay(200);                       // esperar un segundo
}
