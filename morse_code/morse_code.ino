int red = 12;
int yellow = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  printWord("RUSHI");
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  delay(1000);
}

void dot() {
  //  digitalWrite(12, HIGH);
  //  delay(500);
  //  digitalWrite(12, LOW);
  //  delay(500);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
}
void dash() {
  //  digitalWrite(12, HIGH);
  //  delay(1000);
  //  digitalWrite(12, LOW);
  //  delay(500);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  delay(500);
}

void printWord(String message) {
  for (int i = 0; i < message.length(); i++) {
    switch (message.charAt(i)) {
      case 'A':
        dot(); dash();
        break;
      case 'B':
        dash(); dot(); dot(); dot();
        break;
      case 'C':
        dash(); dot(); dash(); dot();
        break;
      case 'D':
        dash(); dot(); dot();
        break;
      case 'E':
        dot();
        break;
      case 'F':
        dot(); dot(); dash(); dot();
        break;
      case 'G':
        dash(); dash(); dot();
        break;
      case 'H':
        dot(); dot(); dot(); dot();
        break;
      case 'I':
        dot(); dot();
        break;
      case 'J':
        dot(); dash(); dash();
        break;
      case 'K':
        dash(); dot(); dash();
        break;
      case 'L':
        dot(); dash(); dot(); dot();
        break;
      case 'M':
        dash(); dash();
        break;
      case 'N':
        dash(); dot();
        break;
      case 'O':
        dash(); dash(); dash();
        break;
      case 'P':
        dot(); dash(); dash(); dot();
        break;
      case 'Q':
        dash();  dash();  dot();
        break;
      case 'R':
        dot(); dash(); dot();
        break;
      case 'S':
        dot(); dot(); dot();
        break;
      case 'T':
        dash();
        break;
      case 'U':
        dot(); dot(); dash();
        break;
      case 'V':
        dot(); dot(); dot(); dash();
        break;
      case 'W':
        dot(); dash(); dash();
        break;
      case 'X':
        dash(); dot(); dot(); dash();
        break;
      case 'Y':
        dash(); dot(); dash(); dash();
        break;
      case 'Z':
        dash(); dash(); dot(); dot();
        break;
    }
    delay(500);
  }
}

