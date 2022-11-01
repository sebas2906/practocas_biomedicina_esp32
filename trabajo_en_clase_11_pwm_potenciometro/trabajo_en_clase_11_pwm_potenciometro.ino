//https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/api/ledc.html

/**
 * Lectura del dutycycle del pwm a través de un potenciometro con un led complementario
 * */
const int ledPin_0 = 16; 
const int ledPin_1 = 17;  

// setting PWM properties
const int freq = 5000;
const int ledChannel_0 = 0;
const int ledChannel_1 = 0;
const int resolution = 8;

int sensorPin = A0;    //potenciometro
int sensorValue = 0;  // valor actual del potenciometro
int dutyCycle = 0

void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel_0, freq, resolution);
  ledcSetup(ledChannel_1, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin_0, ledChannel_0);
  ledcAttachPin(ledPin_1, ledChannel_1);
}
 
void loop(){
  sensorValue = analogRead(sensorPin);
  dutyCycle=map(sensorValue, 0, 4096, 0, 255):
  ledcWrite(ledChannel_0, dutyCycle);
  ledcWrite(ledChannel_1, 255-dutyCycle);
  delay(15);

}
