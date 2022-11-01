/**
 * Incrementa y decrementa el brillo de 2 leds a la vez
 * 
 */

//https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/api/ledc.html
const int ledPin_0 = 2;
const int ledPin_1 = 4;

// setting PWM properties
const int freq = 5000;
const int ledChannel_0 = 2;
const int ledChannel_1 = 0;
const int resolution = 8;
 
void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel_0, freq, resolution);
  ledcSetup(ledChannel_1, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin_0, ledChannel_0);
  ledcAttachPin(ledPin_1, ledChannel_1);
}
 
void loop(){
  // incrementa el brillo
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(ledChannel_0, dutyCycle);
    ledcWrite(ledChannel_1, 255-dutyCycle);
    delay(15);
  }

  // decrementa el brillo
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(ledChannel_0, dutyCycle);  
    ledcWrite(ledChannel_1, 255-dutyCycle); 
    delay(15);
  }
}
