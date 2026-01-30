// #include <Arduino.h>

// #define GRID_A 13
// #define GRID_B 15

// const uint8_t segment_pins[7] = {16, 5, 4, 0, 2, 14, 12};

// void setup()
// {
//   pinMode(LED_BUILTIN, OUTPUT);
//   pinMode(GRID_A, OUTPUT);
//   pinMode(GRID_B, OUTPUT);

//   for (size_t i = 0; i < 7; ++i)
//   {
//     pinMode(segment_pins[i], OUTPUT);
//     digitalWrite(segment_pins[i], LOW);
//   }

//   digitalWrite(GRID_A, HIGH);
//   digitalWrite(GRID_B, HIGH);

//   Serial.begin(9600);
//   Serial.println("Hello world!");
// }

// int lol = 0;
// int cnt = 0;
// int builtin_led_state = 0;

// void loop()
// {
//   delay(10);
//   digitalWrite(GRID_A, HIGH);
//   digitalWrite(GRID_B, LOW);

//   delay(10);
//   digitalWrite(GRID_A, LOW);
//   digitalWrite(GRID_B, HIGH);

//   if (++cnt > 100)
//   {
//     Serial.print("Iteration! ");
//     cnt = 0;

//     Serial.println(lol);

//     for (int i = 0; i < lol; ++i)
//       digitalWrite(segment_pins[i], LOW);

//     digitalWrite(segment_pins[lol], HIGH);

//     for (int i = lol + 1; i < 7; ++i)
//       digitalWrite(segment_pins[i], LOW);

//     lol = (lol + 1) % 7;
//   }
// }
