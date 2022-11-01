// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 17;     // the number of the pushbutton pin
const int buttonPin2 = 26;    //button 2
const int ledPin =  2;      // the number of the LED pin

int led_state=0;

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;         // variable for reading the pushbutton status

int counter=0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  if ((buttonState1 == HIGH) && (buttonState2 == HIGH)) {
    led_state = !led_state;
    digitalWrite(ledPin, led_state);
    while ((buttonState1 == HIGH) && (buttonState2 == HIGH)){
      buttonState1 = digitalRead(buttonPin1);
      buttonState2 = digitalRead(buttonPin2);
    }
  }
}
