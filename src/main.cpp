#include <Arduino.h>

#define GRID_A D7
#define GRID_B D8

const uint8_t segment_pins[7] = {D0, D1, D2, D3, D4, D5, D6};

int lol = 0;
int cnt = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(GRID_A, OUTPUT);
  pinMode(GRID_B, OUTPUT);

  for (size_t i = 0; i < 7; ++i)
  {
    pinMode(segment_pins[i], OUTPUT);
    digitalWrite(segment_pins[i], LOW);
  }

  digitalWrite(GRID_A, HIGH);
  digitalWrite(GRID_B, HIGH);
}

void loop()
{
  delay(10);
  digitalWrite(GRID_A, HIGH);
  digitalWrite(GRID_B, LOW);
  digitalWrite(LED_BUILTIN, HIGH);

  delay(10);
  digitalWrite(GRID_A, LOW);
  digitalWrite(GRID_B, HIGH);
  digitalWrite(LED_BUILTIN, LOW);

  if (++cnt > 50)
  {
    cnt = 0;

    for (int i = 0; i < lol; ++i)
      digitalWrite(segment_pins[i], LOW);

    digitalWrite(segment_pins[lol], HIGH);

    for (int i = lol + 1; i < 7; ++i)
      digitalWrite(segment_pins[i], LOW);

    lol = (lol + 1) % 7;
  }
}
