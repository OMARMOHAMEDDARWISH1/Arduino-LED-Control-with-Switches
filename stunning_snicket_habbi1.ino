
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(9, INPUT);
}

void loop()
{
 int read1 = digitalRead(1);
 int read2 =digitalRead(2);
 int read3 =digitalRead(9);
 if(read3 == 0 || read3 == 1)
 {
digitalWrite(5 , 0);
digitalWrite(7 , 0); 
 }
  if (read1 == 1)
  {
  digitalWrite(3 , 1);
  digitalWrite(4 , 1); 
    delay(500);
  digitalWrite(3 , 0);
  digitalWrite(4 , 0);
  
    if (read2 == 1)
    {
  digitalWrite(5 , 0);
  digitalWrite(6 , 1); 
  digitalWrite(7 , 0);
  digitalWrite(8 , 1); 
    }
      else
      {
  digitalWrite(5 , 0);
  digitalWrite(6 , 0); 
  digitalWrite(7 , 0);
  digitalWrite(8 , 0); 
      }
    }
} 
