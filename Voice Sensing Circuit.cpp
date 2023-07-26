
int rec=2;
int play=3;
int sensor=4;
int led=13;
void setup()
{
pinMode(rec,OUTPUT);
pinMode(play,OUTPUT);
pinMode(led,OUTPUT);
pinMode(sensor,INPUT);
digitalWrite(rec,LOW);
digitalWrite(play,LOW);
digitalWrite(led,LOW);
if(digitalRead(sensor))
{
while(digitalRead(sensor));
}
}
void loop()
{
if(digitalRead(sensor))
{
digitalWrite(led,HIGH);
digitalWrite(rec,HIGH);
delay(5000);
digitalWrite(led,LOW);
digitalWrite(rec,LOW);
delay(1000);
digitalWrite(play,HIGH);
delay(6000);
digitalWrite(play,LOW);
while(digitalRead(sensor));
}
}
