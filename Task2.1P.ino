#define LED_BUILTIN 13
#define BUTTON_PIN 2

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

char MorseCode(char input) {
  switch(input){
      case 'A':
        dot();
        dash();
        break;

      case 'B':
        dash();
        dot();
        dot();
        dot();
        break;

      case 'C':
        dash();
        dot();
        dash();
        dot();
        break;

      case 'D':
        dash();
        dot();
        dot();
        break;

      case 'E':
        dot();
        break;

      case 'F':
        dot();
        dot();
        dash();
        dot();
        break;

      case 'G':
        dot();
        dash();
        dot();
        break;

      case 'H':
        dot();
        dot();
        dot();
        dot();
        break;

      case 'I':
        dot();
        dot();
        break;

      case 'J':
        dot();
        dash();
        dash();
        dash();
        break;

      case 'K':
        dash();
        dot();
        dash();
        break;

      case 'L':
        dot();
        dash();
        dot();
        dot();
        break;

      case 'M':
        dash();
        dash();
        break;

      case 'N':
        dash();
        dot();
        break;

      case 'O':
        dash();
        dash();
        dash();
        break;

      case 'P':
        dot();
        dash();
        dash();
        dot();
        break;

      case 'Q':
        dash();
        dash();
        dot();
        dash();
        break;

      case 'R':
        dot();
        dash();
        dot();
        break;

      case 'S':
        dot();
        dot();
        dot();
        break;

      case 'T':
        dash();
        break;

      case 'U':
        dot();
        dot();
        dash();
        break;

      case 'V':
        dot();
        dot();
        dot();
        dash();
        break;

      case 'W':
        dot();
        dash();
        dash();
        break;

      case 'X':
        dash();
        dot();
        dot();
        dash();
        break;

      case 'Y':
        dash();
        dot();
        dash();
        dash();
        break;

      case 'Z':
        dash();
        dash();
        dot();
        dot();
        break;
  }
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  if(reading == HIGH){
    String name = "SAMRIDH";
    for(int i=0; i<=name.length(); i++){
      MorseCode(name.charAt(i));
    }
  }


}
