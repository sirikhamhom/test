void TracPID()
{
  CalError();
  int Output, LeftOutput, RightOutput, KpTemp;
  int Kp = 100;
  int Ki = 0;
  int Kd = 5;

  Output = (Kp * Error) + (Ki * Integral) + Kd * (Error - PreError);

  LeftOutput = 60 - Output;
  RightOutput = 60 + Output;

  if (LeftOutput > 255) LeftOutput = 255;
  if (RightOutput > 255) RightOutput = 255;
  if (LeftOutput < 0) LeftOutput = 0;
  if (RightOutput < 0) RightOutput = 0;

  fd(LeftOutput, RightOutput);
  PreError = Error;
  Integral += Error;
}

/*void TracPIDJC(int MotorSpeed, int Time) {
  InitialSpeed(MotorSpeed);
  CalError();
  while (Error < 100) {
    TracPID();
    CalError();
  }
  Forward(MotorSpeed, Time);
}*/
