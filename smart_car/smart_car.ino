void setup()  
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  // Send test message to other device
  Serial.println("Hello from Arduino");
}
char a; // stores incoming character from other device
void loop() 
{
  if (Serial.available())
  // if text arrived in from Serial serial...
  {
    a=(BT.read());
    if (a=='w')
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(4, LOW);
    }
   }
}
