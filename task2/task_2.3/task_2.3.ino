// C++ code
//
int datapin=11;
int clockpin=12;
int latchpin=8;
byte digits[10] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01101111  // 9
};
void setup()
{
  pinMode(datapin, OUTPUT);
  pinMode(clockpin,OUTPUT);
  pinMode(latchpin,OUTPUT);
}

void loop(){
  for (int i=0;i<5;i++){
    for (int j=0;j<10;j++){
    digitalWrite(latchpin,0);
  	shiftOut(datapin,clockpin,MSBFIRST,digits[j]);
    shiftOut(datapin,clockpin,MSBFIRST,digits[i]);
  	digitalWrite(latchpin,1);
      delay(500);}}
}
