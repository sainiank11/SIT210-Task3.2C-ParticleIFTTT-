int sensor = A0;
int analogvalue;

String sun;

void setup() 
{
    pinMode(sensor, INPUT);
    Particle.variable("sun", sun);
}

void loop() 
{
    analogvalue = analogRead(sensor);
    sun = analogvalue;
    Particle.publish("sun", sun, PRIVATE);
    
    delay(5000);
}