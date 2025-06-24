// C++ code
//
int i=0;
long currentmillis=0;
long prevmillis=0;
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  currentmillis=millis();
  if (currentmillis-prevmillis>=2000){
    if(i>=3){
      i=0;}
    analogWrite(3,255/(i+1));
     prevmillis=currentmillis;
     i++;
  }
  
}
