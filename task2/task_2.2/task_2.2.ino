// C++ code
//
void setup()
{
DDRB=B00001111;
}

void loop()
{
  for(int i=0;i<16;i++){
    PORTB=i;
    delay(1000);
  }
}
