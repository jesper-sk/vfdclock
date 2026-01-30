// #include <Arduino.h>

// const int pins[] = {2, 4, 5, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 25, 26, 27, 32, 33};
// const int numPins = sizeof(pins) / sizeof(pins[0]);

// void setup()
// {
//   Serial.begin(115200);
//   Serial.setTimeout(10000);

//   for (int i = 0; i < numPins; ++i)
//   {
//     pinMode(pins[i], OUTPUT);
//   }
//   pinMode(LED_BUILTIN, OUTPUT);

//   delay(1000);
// }

// void loop()
// {
//   Serial.print("0 - ");
//   Serial.print(numPins);
//   Serial.print(" ?> ");
//   Serial.flush();
//   while (Serial.available() == 0)
//   {
//   }
//   String input = Serial.readStringUntil('\n');
//   input.trim();

//   if (input == "?") {
//     for (int i = 0; i < numPins; ++i) {
//       Serial.println(i);
//       digitalWrite(pins[i], HIGH);
//       digitalWrite(LED_BUILTIN, HIGH);
//       delay(1000);
//       digitalWrite(pins[i], LOW);
//       digitalWrite(LED_BUILTIN, LOW);
//     }
//     return;
//   }

//   int pin = atoi(input.c_str());
//   Serial.print("\nYou entered: ");
//   Serial.println(pin);

//   digitalWrite(pins[pin], HIGH);
//   digitalWrite(LED_BUILTIN, HIGH);
//   delay(1000);
//   digitalWrite(pins[pin], LOW);
//   digitalWrite(LED_BUILTIN, LOW);
// }
