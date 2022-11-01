//https://espressif-docs.readthedocs-hosted.com/projects/arduino-esp32/en/latest/api/ledc.html
// the number of the LED pin
const int ledPin = 2;  // 16 corresponds to GPIO16

// setting PWM properties
const int freq = 5000;
const int ledChannel = 2;
const int resolution = 8;

int sensorPin = 33;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int dutyCycle = 0;

void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin, ledChannel);
}
 
void loop(){
  sensorValue = analogRead(sensorPin);

  // increase the LED brightness
    // changing the LED brightness with PWM
    dutyCycle=map(sensorValue, 0, 4096, 0, 255);
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  

 
}
