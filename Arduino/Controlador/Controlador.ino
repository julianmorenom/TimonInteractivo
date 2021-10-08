// Define constants
const int buttonPin_01 = 2;
const int buttonPin_02 = 3;
const int buttonPin_03 = 4;
const int buttonPin_04 = 5;
const int buttonPin_05 = 6;
const int buttonPin_06 = 7;

// Define variables
int btState_01 = 0;
int btState_02 = 0;
int btState_03 = 0;
int btState_04 = 0;
int btState_05 = 0;
int btState_06 = 0;
int lastBtSate_01 = 0;
int lastBtSate_02 = 0;
int lastBtSate_03 = 0;
int lastBtSate_04 = 0;
int lastBtSate_05 = 0;
int lastBtSate_06 = 0;
int buttonVal_01 = 100;
int buttonVal_02 = 200;
int buttonVal_03 = 300;
int buttonVal_04 = 400;
int buttonVal_05 = 500;
int buttonVal_06 = 600;

void setup() {
  // Init buttons
  pinMode(buttonPin_01, INPUT);
  pinMode(buttonPin_02, INPUT);
  pinMode(buttonPin_03, INPUT);
  pinMode(buttonPin_04, INPUT);
  pinMode(buttonPin_05, INPUT);
  pinMode(buttonPin_06, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Read the state
  btState_01 = digitalRead(buttonPin_01);
  btState_02 = digitalRead(buttonPin_02);
  btState_03 = digitalRead(buttonPin_03);
  btState_04 = digitalRead(buttonPin_04);
  btState_05 = digitalRead(buttonPin_05);
  btState_06 = digitalRead(buttonPin_06);
  
  // Check state and send value by button
  if(btState_01 != lastBtState_01)
  {
     if(btState_01 == HIGH)
     {
        Serial.println(buttonVa_01);
     }
  }
  if(btState_02 != lastBtState_02)
  {
     if(btState_02 == HIGH)
     {
        Serial.println(buttonVa_02);
     }
     delay(50);
  }
  if(btState_03 != lastBtState_03)
  {
     if(btState_03 == HIGH)
     {
        Serial.println(buttonVa_03);
     }
  delay(50);
  }
  if(btState_04 != lastBtState_04)
  {
     if(btState_04 == HIGH)
     {
        Serial.println(buttonVa_04);
     }
  delay(50);
  }
  if(btState_05 != lastBtState_05)
  {
     if(btState_05 == HIGH)
     {
        Serial.println(buttonVa_05);
     }
  delay(50);
  }
  if(btState_06 != lastBtState_06)
  {
     if(btState_06 == HIGH)
     {
        Serial.println(buttonVa_06);
     }
  delay(50);
  }
}
