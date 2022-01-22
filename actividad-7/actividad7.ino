const int EchoPin = 5;
const int TrigPin = 6;

void setup() {
Serial.begin(9600);
pinMode(TrigPin,OUTPUT);
pinMode(EchoPin,INPUT);
// put your setup code here, to run once:

}

void loop() {
 int cm = ping(TrigPin,EchoPin);
 Serial.print("Distacia: ");
 Serial.print(cm);
 Serial.println("cm");
 delay(1000);

}

int ping(int TrigPin, int EchoPin)
{  
long duration,distance;
digitalWrite(TrigPin,LOW);
delayMicroseconds(4);
digitalWrite(TrigPin,HIGH);
delayMicroseconds(10);
digitalWrite(TrigPin,LOW);
duration= pulseIn(EchoPin,HIGH);
distance = duration / (29.2*2);
return distance;
}
