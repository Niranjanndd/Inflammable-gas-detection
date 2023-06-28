const int buttonPin = 2;
const int ledPin = 13;
int buttonState = 0;
void setup()
{
pinModel(ledPin, OUTPUT);
pinModel(buttonPin, INPUT);
}
void loop()
{
buttonState = digitalRead(buttonPin);
if(buttonStater == HIGH)
{
digitalWrite(ledPin, LOW);
}
else
{
digitalWrite(ledPin, HIGH);
}
}
