#include <Arduino.h>

#define GRID_H1 4  // D13
#define GRID_H2 3  // D12
#define GRID_M1 5  // D14
#define GRID_M2 16 // D27

const uint8_t segment_pins[7] = {13, 12, 11, 10, 9, 2, 1};
//                               D23, D22, D21, D19, D18, D5, D4
// VFD pins: 13 is pin 1, 12 -- 2, 11 -- 3, 10 -- 4, 9 -- 5, 2 -- 6, 1 -- 10

int thetime[4] = {1, 8, 4, 6};

// idk where to put it
// can i use uint8_t??
const uint8_t numbers[10][7] = {
    {LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
    {LOW, HIGH, HIGH, HIGH, HIGH, HIGH, LOW},
    {LOW, LOW, LOW, HIGH, LOW, LOW, HIGH},
    {LOW, LOW, LOW, HIGH, HIGH, LOW, LOW},
    {LOW, HIGH, LOW, LOW, HIGH, HIGH, LOW},
    {HIGH, LOW, LOW, LOW, HIGH, LOW, LOW},
    {HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
    {LOW, LOW, HIGH, HIGH, HIGH, HIGH, LOW},
    {LOW, LOW, LOW, LOW, LOW, LOW, LOW},
    {LOW, LOW, LOW, LOW, HIGH, LOW, LOW}};

// can i even do this and what type of variable should it be?
uint8_t grids[4] = {GRID_H1, GRID_H2, GRID_M1, GRID_M2};

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(GRID_H1, OUTPUT);
  pinMode(GRID_H2, OUTPUT);
  pinMode(GRID_M1, OUTPUT);
  pinMode(GRID_M2, OUTPUT);

  for (size_t i = 0; i < 7; ++i) // why size_t?
  {
    pinMode(segment_pins[i], OUTPUT);
    digitalWrite(segment_pins[i], LOW);
  }

  digitalWrite(GRID_H1, HIGH);
  digitalWrite(GRID_H2, HIGH);
  digitalWrite(GRID_M1, HIGH);
  digitalWrite(GRID_M2, HIGH);
}

void loop()
{
  // thetime = {1, 8, 0, 6}; //can we actually know time without the clock chip?
  for (int grid_idx = 0; grid_idx < 4; ++grid_idx)
  {
    digitalWrite(grids[grid_idx], LOW);
    for (int j = 0; j < 7; ++j)
    {
      digitalWrite(segment_pins[j], numbers[thetime[grid_idx]][j]);
    }
    delay(500);
    digitalWrite(grids[grid_idx], HIGH);
    delay(1000); // should this be here?
  }
}