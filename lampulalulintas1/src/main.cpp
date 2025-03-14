#include <Arduino.h>

const int redPin = 5;
const int yellowPin = 18;
const int greenPin = 19;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  // Lampu merah nyala
  digitalWrite(redPin, HIGH);
  delay(5000);
  digitalWrite(redPin, LOW);

  // Lampu kuning nyala
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW);

  // Lampu hijau nyala
  digitalWrite(greenPin, HIGH);
  delay(5000);
  digitalWrite(greenPin, LOW);
}
