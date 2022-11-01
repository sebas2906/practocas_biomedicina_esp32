//https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/api/ledc.html
// the number of the LED pin
const int ledPin_0 = 2;  // 16 corresponds to GPIO16
const int ledPin_1 = 4;  // 16 corresponds to GPIO16

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
  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledChannel_0, dutyCycle);
    ledcWrite(ledChannel_1, 255-dutyCycle);
    delay(15);
  }

  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel_0, dutyCycle);  
    ledcWrite(ledChannel_1, 255-dutyCycle); 
    delay(15);
  }
}
