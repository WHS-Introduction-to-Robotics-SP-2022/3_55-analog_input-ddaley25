int inPin = A0;    
int val;      

void setup() {
  
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(inPin);
  Serial.println(val, HEX);
  delay(250);
}
