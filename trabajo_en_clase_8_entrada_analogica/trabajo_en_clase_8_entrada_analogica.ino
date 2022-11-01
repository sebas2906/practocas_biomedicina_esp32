
void setup() {
  Serial.begin(9600);//preparamos el puerrto serial a 9600 baudios
}

// the loop routine runs over and over again forever:
void loop() {
  //
  int sensorValue = analogRead(33);//pin 33 como entrada analogica
  Serial.println(sensorValue);//impresion en consola a traves de serial. valor maximo 4095 (12bits)
  delay(1);        // delay de tiempo opcional 
}
