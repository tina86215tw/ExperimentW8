int greenPin = 6;
int redPin = 9;
int bluePin = 5;
int counter = 0;

void setup() {
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  counter++;
  if(counter == 1){//紅綠同時點亮，產生黃色
    analogWrite(greenPin,128);
    analogWrite(redPin,128);
    analogWrite(bluePin,255);
  }
  else if(counter == 2){//藍紅同時點亮，產生紫色
    analogWrite(greenPin,255);
    analogWrite(redPin,128);
    analogWrite(bluePin,128);
  }
  else if(counter == 3){//藍綠同時點亮，產生青色
    analogWrite(greenPin,128);
    analogWrite(redPin,255);
    analogWrite(bluePin,128);
    counter = 0;
  }
  delay(1000);
}


