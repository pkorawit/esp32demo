int red = 0;
int green = 2;
int blue = 15;

// the setup routine runs once when you press reset:
void setup()
{
// initialize the digital pin as an output.
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(blue, OUTPUT);
digitalWrite(red, HIGH);
digitalWrite(green, HIGH);
digitalWrite(blue, HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
digitalWrite(red, LOW); // turn the LED on 
delay(2000); // wait for a second
digitalWrite(red, HIGH); // turn the LED off by making the voltage LOW
delay(2000); // wait for a second
digitalWrite(green, LOW); // turn the LED on 
delay(2000); // wait for a second
digitalWrite(green, HIGH); // turn the LED off by making the voltage LOW
delay(2000); // wait for a second
digitalWrite(blue, LOW); // turn the LED on
delay(2000); // wait for a second
digitalWrite(blue, HIGH); // turn the LED off by making the voltage LOW
delay(2000); // wait for a second
}
