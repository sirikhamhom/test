void Forward(int MotorSpeed, int Time) {
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  analogWrite(PWMA, MotorSpeed);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  analogWrite(PWMB, MotorSpeed);
  delay(Time);
}

void bk(int MotorSpeed, int Time) {
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWMA, MotorSpeed);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  analogWrite(PWMB, MotorSpeed);
  delay(Time);
}

void tl(int MotorSpeed, int Time) {
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWMA, MotorSpeed);
  digitalWrite(MB1, HIGH);
  digitalWrite(MB2, LOW);
  analogWrite(PWMB, MotorSpeed);
  delay(Time);
}

void tr(int MotorSpeed, int Time) {
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(MA1, HIGH);
  digitalWrite(MA2, LOW);
  analogWrite(PWMA, MotorSpeed);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  analogWrite(PWMB, MotorSpeed);
  delay(Time);
}

void Stop() {
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, LOW);
  analogWrite(PWMA, 0);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, LOW);
  analogWrite(PWMB, 0);
}

void fd(int MotorSpeedA, int MotorSpeedB) {
  digitalWrite(STBY, HIGH); //disable standby
  digitalWrite(MA1, LOW);
  digitalWrite(MA2, HIGH);
  analogWrite(PWMA, MotorSpeedA);
  digitalWrite(MB1, LOW);
  digitalWrite(MB2, HIGH);
  analogWrite(PWMB, MotorSpeedB);
}
