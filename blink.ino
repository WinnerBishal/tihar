char c;
int globalDelay = 100;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  oneByOne();
  delay(globalDelay);
  allOnAtOnce();
  delay(globalDelay);
  allOffAtOnce();

}
void allOffAtOnce(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  }

void allOnAtOnce() {
  digitalWrite(2, HIGH);
  digitalWrite(8, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(9, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(11, LOW);
}


void oneByOne() {
  blink(2, 8);
  blink(3, 9);
  blink(4, 10);
  blink(5, 11);
}

void blink(int a, int b) {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  delay(2 * globalDelay);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
}
