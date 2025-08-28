void setup() {
  // put your setup code here, to run once:
  pinMode(A6, INPUT);
  int lightLevel = analogRead(A6);
  Serial.begin(9600);
  Serial.println(lightLevel);




  if (lightLevel > 1024) {
    Serial.print("It's really bright");
  }
  else if (lightLevel > 700) {
    Serial.print("It's a little bright");
  }
  else if (lightLevel > 200) {
    Serial.print("It's dim in here");
  }
  else if (lightLevel > 100) {
    Serial.print("It's really dark!");
  }
}


void loop() {
  // put your main code here, to run repeatedly:
}
