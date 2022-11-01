
const int buttonPin = 17;     // the number of the pushbutton pin
//const int buttonPin2 = 15;    //button 2
const int ledPin =  2;      // the number of the LED pin

int led_state=0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int conta=0; //variable de contador
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    conta=conta+1;
    if (conta==2){
      led_state = !led_state;
      digitalWrite(ledPin, led_state);
      conta=0;
    }
    delay(250);
  } 
  
}
