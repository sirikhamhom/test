void CalError(){
  ConvertADC();
  if((l == 0) && (c == 1) && (r == 1)) Error = 2;
  else if((l == 0) && (c == 0) && (r == 1)) Error = 1;
  else if((l == 1) && (c == 0) && (r == 1)) Error = 0;
  else if((l == 1) && (c == 0) && (r == 0)) Error = -1;
  else if((l == 1) && (c == 1) && (r == 0)) Error = -2;
  else if((l == 0) && (c == 0) && (r == 0)) Error = 100;

}
void ConvertADC(){
  a0 = analogRead(A0);
  a1 = analogRead(A1);
  a2 = analogRead(A2);
  Serial.print(a0); Serial.print(" | ");
  Serial.print(a1); Serial.print(" | ");
  Serial.println(a2);

  if(a0 < 700) r = 0; else r = 1;
  if(a1 < 700) c = 0; else c = 1;
  if(a2 < 700) l = 0; else l = 1;

}
