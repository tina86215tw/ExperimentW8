int greenPin = 6;
int redPin = 9;
int bluePin = 5;
int counter = 0;//狀態切換
int sensorValue = 0; 
int outputValue1 = 0;
int outputValue2 = 0;  
int outputValue3 = 0;          
const int analogInPin0 = A0;
const int analogInPin1 = A1;
const int analogInPin2 = A2;
void setup() {
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  counter++;
   sensorValue = analogRead(analogInPin0);
   sensorValue = analogRead(analogInPin1);
   sensorValue = analogRead(analogInPin2);
   outputValue1 = map(sensorValue, 100, 1000, 0, 255);
   outputValue2 = map(sensorValue, 600, 900, 0, 255);
   outputValue3 = map(sensorValue, 300, 1000, 0, 255);
  //if(counter == 1){//點亮綠色
     

    analogWrite(greenPin,outputValue1);
    analogWrite(redPin, outputValue2);
    analogWrite(bluePin,outputValue3);
  /*}
  else if(counter == 2){//點亮紅色
    analogWrite(greenPin,255);
    analogWrite(redPin,outputValue);
    analogWrite(bluePin,255);
  }
  else if(counter == 3){//點亮藍色
    analogWrite(greenPin,255);
    analogWrite(redPin,255);
    analogWrite(bluePin,outputValue);
    counter = 0;//歸零
  }
  delay(1000);*/
}


