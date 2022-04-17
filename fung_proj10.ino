const int BUTTON1 = 2;
const int BUTTON2 = 4;
const int LED1 = 8; //SOL1
const int LED2 = 12; //SOL2
int BUTTONstate1 = 0;
int BUTTONstate2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED1, OUTPUT); //pinMode(SOL1, OUTPUT);
  pinMode(LED2, OUTPUT); //pinMode(SOL2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // inflation button
  BUTTONstate1 = digitalRead(BUTTON1);
  if (BUTTONstate1 == HIGH)
  {
    // corresponds to finger valve opening
    digitalWrite(LED1, HIGH); //digitalWrite(SOL1, HIGH);
  } 
  else{
    // corresponds to finger valve closing
    digitalWrite(LED1, LOW); //digitalWrite(SOL1, LOW);
  }
  // deflation button
  BUTTONstate2 = digitalRead(BUTTON2);
  if (BUTTONstate2 == HIGH)
  {
    // corresponds to vent valve opening
    digitalWrite(LED2, HIGH); //digitalWrite(SOL2, HIGH);
  } 
  else{
    // corresponds to vent valve closing
    digitalWrite(LED2, LOW); //digitalWrite(SOL2, LOW);
  }
}
