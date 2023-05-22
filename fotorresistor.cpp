int valorLido = 0;
int tensao = 0;

int led = 8;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  valorLido = analogRead(A5);
  tensao = valorLido * (5.0 / 1023.0);
  
  if(valorLido<100)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
  
  
  
}
