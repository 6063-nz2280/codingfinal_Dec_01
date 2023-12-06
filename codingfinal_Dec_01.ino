int bluePin = 12;
int redPin = 11;
int greenPin = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(bluePin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code , to run repeatedly:
  digitalWrite(bluePin, LOW);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(1000);
  digitalWrite(bluePin, HIGH);
  delay(1000);
  digitalWrite(redPin, HIGH);
  delay(1000);
  digitalWrite(greenPin, HIGH);
  delay(1000);

  for(int i = 0; i < 5; i++){
    digitalWrite(bluePin, LOW);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(500);
    digitalWrite(bluePin, HIGH);
    digitalWrite(redPin, HIGH);/Users/kzk/Downloads/IMG_5926.JPG
    digitalWrite(greenPin, HIGH);
    delay(500);
  }
  // CREDIT PER CODEYYYYYY
}
