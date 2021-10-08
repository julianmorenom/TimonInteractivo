// Program to send values whenever a button is pressed
// Define 
int input1 = A0;
int input2 = A1;
int input3 = A2;
int input4 = A4;
int input5 = A5;
int input6 = A6;

// Variables to read
int btState_01 = 0;
int btState_02 = 0;
int btState_03 = 0;
int btState_04 = 0;
int btState_05 = 0;
int btState_06 = 0;

int btInitVal_1 = 0;
int btInitVal_2 = 0;
int btInitVal_3 = 0;
int btInitVal_4 = 0;
int btInitVal_5 = 0;
int btInitVal_6 = 0;


// Constants
int tresholdVal = 30;
int buttonVal_01 = 100;
int buttonVal_02 = 200;
int buttonVal_03 = 300;
int buttonVal_04 = 400;
int buttonVal_05 = 500;
int buttonVal_06 = 600;


void setup() {
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
  pinMode(input3, INPUT);
  pinMode(input4, INPUT);
  pinMode(input5, INPUT);
  pinMode(input6, INPUT);
  Serial.begin(9600);
  
  // store initial values
  delay(10000)
  btInitVal_1 = analogRead(input1);
  btInitVal_2 = analogRead(input2);
  btInitVal_3 = analogRead(input3);
  btInitVal_4 = analogRead(input4);
  btInitVal_5 = analogRead(input5);
  btInitVal_6 = analogRead(input6);
}

void loop() {
  // Read the state
  btVal_01 = analogRead(input1);
  btVal_02 = analogRead(input2);
  btVal_03 = analogRead(input3);
  btVal_04 = analogRead(input4);
  btVal_05 = analogRead(input5);
  btVal_06 = analogRead(input6);
  
  // Check state and send value by button
  if(btVal_01 > (btInitVal_1+tresholdVal) || btVal_01 > (btInitVal_1-tresholdVal )
  {
    Serial.println(buttonVal_01);
    delay(10);
  }
  if(btVal_02 > (btInitVal_2+tresholdVal) || btVal_02 > (btInitVal_2-tresholdVal )
  {
    Serial.println(buttonVal_02);
    delay(10);
  }
  if(btVal_03 > (btInitVal_3+tresholdVal) || btVal_03 > (btInitVal_3-tresholdVal )
  {
    Serial.println(buttonVal_03);
    delay(10);
  }
  if(btVal_04 > (btInitVal_4+tresholdVal) || btVal_04 > (btInitVal_4-tresholdVal )
  {
    Serial.println(buttonVal_04);
    delay(10);
  }
  if(btVal_05 > (btInitVal_5+tresholdVal) || btVal_05 > (btInitVal_5-tresholdVal )
  {
    Serial.println(buttonVal_05);
    delay(10);
  }
  if(btVal_05 > (btInitVal_6+tresholdVal) || btVal_06 > (btInitVal_6-tresholdVal )
  {
    Serial.println(buttonVal_06);
    delay(10);
  }
  

}
