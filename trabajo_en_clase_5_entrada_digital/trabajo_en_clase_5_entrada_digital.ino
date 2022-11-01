
const int buttonPin = 17;     // pin del boton
const int ledPin =  15;      // pin del led (externo)

// variables will change:
int buttonState = 0;         // variable para estado del boton

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);//lectura digital del pin led pulsante


  if (buttonState == HIGH) {
    //encender
    digitalWrite(ledPin, HIGH);
  } else {
    //apagar
    digitalWrite(ledPin, LOW);
  }
}
