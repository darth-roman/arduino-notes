int ledPins[8] = {2,3,4,5,6,7,8,9};
int btnPin = 13;

int index = 0;

int zero[8] = {1,1,1,1,1,0,1,0};
int one[8] = {0,1,1,0,0,0,0,0};
int two[8] = {1,1,0,1,1,1,0,0};
int three[8] = {1,1,1,1,0,1,0,0};
int four[8] = {0,1,1,0,0,1,1,0};
int five[8] = {1,0,1,1,0,1,1,0};
int six[8] = {1,0,1,1,1,1,1,0};
int seven[8] = {1,1,1,0,0,0,0,0};
int eight[8] = {1,1,1,1,1,1,1,0};
int nine[8] = {1,1,1,1,0,1,1,0};
int dot[8] = {0,0,0,0,0,0,0,1};
int hexaA[8] = {1,1,1,0,1,1,1,1};
int hexaB[8] = {0,0,1,1,1,1,1,1};
int hexaC[8] = {1,0,0,1,1,0,1,1};
int hexaD[8] = {0,1,1,1,1,1,0,1};
int hexaE[8] = {1,0,0,1,1,1,1,1};
int hexaF[8] = {1,0,0,0,1,1,1,1};

int counter[16] ={zero, one, two, three, four, five, six, seven, eight, nine, hexaA, hexaB, hexaC, hexaD, hexaE, hexaF};
void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i<8; i++){
    pinMode(ledPins[i], OUTPUT);
  }

  printDigit(hexaE);
  pinMode(btnPin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  int readValue = digitalRead(btnPin);
  if(!readValue == 0){
    index++;
    printDigit(counter[index]);
    }

}

void printDigit(int digit[8]){
  for(int i = 0; i<8 ; i++){
    digitalWrite(ledPins[i], digit[i]);
  }
}
