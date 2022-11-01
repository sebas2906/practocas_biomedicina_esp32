
void setup() {
  pinMode(15, OUTPUT);//pin 2
  pinMode(16, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //DESAFIO EN CLASE
  //Puntos extra secuencia led
  
  digitalWrite(15, HIGH); 
  digitalWrite(LED_BUILTIN, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(16, LOW);   
  delay(500);                      
   digitalWrite(15, LOW); 
  digitalWrite(LED_BUILTIN, HIGH); 
  digitalWrite(4, LOW); 
  digitalWrite(16, LOW); 
  delay(500);  
   digitalWrite(15, LOW); 
  digitalWrite(LED_BUILTIN, LOW); 
  digitalWrite(4, HIGH); 
  digitalWrite(16, LOW);   
  delay(500);  
   digitalWrite(15, LOW); 
  digitalWrite(LED_BUILTIN, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(16, HIGH);  
  delay(500);  
   digitalWrite(15, LOW); 
  digitalWrite(LED_BUILTIN, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(16, LOW);
  delay(500);                   
}
