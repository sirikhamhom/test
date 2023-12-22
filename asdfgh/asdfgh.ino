#define PWMA 3
#define PWMB 11
#define MA1 5
#define MA2 6
#define MB1 10
#define MB2 9
#define STBY 8
#define sw 13

int a0;
int a1;
int a2;
int c,l,r;
int Error, RightOutput, LeftOutput, RightSpeed, LeftSpeed, Output, PreError, Integral;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(MA1, OUTPUT);
  pinMode(MA2, OUTPUT);
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(sw, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);

  while(digitalRead(sw) != 0){}

}

void loop() {
  // put your main code here, to run repeatedly:
  //Read();
  //Trac();
  TracPID();

}
