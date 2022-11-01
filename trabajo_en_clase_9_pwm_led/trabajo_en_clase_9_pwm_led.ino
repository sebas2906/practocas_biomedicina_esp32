
const int ledPin = 15;  // 16 corresponds to GPIO16

// propiedades de PWM
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
 
void setup(){
  //LEDC modulo interno PWM del ESP32 
  //https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/peripherals/ledc.html
  ledcSetup(ledChannel, freq, resolution);
  
  // asocia el canal con el pin del led
  ledcAttachPin(ledPin, ledChannel);
}
 
void loop(){
  // aumenta el brilllo del led
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }

  // decrementa el brillpo del led
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(ledChannel, dutyCycle);   
    delay(15);
  }
}
