#include <Arduino.h>
#include <FastLED.h>

#define LED_PIN 6
#define BRIGHTENESS 100
#define NUM_LEDS 9
#define LED_TYPE WS2811
#define COLOR_ORDER GRB

#define RELE_LED_1 2
#define RELE_LED_2 3

CRGB leds[NUM_LEDS];

void setup() {
  /*FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);*/
  FastLED.setBrightness(BRIGHTENESS);
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS);

  pinMode(RELE_LED_1, OUTPUT);
  pinMode(RELE_LED_2, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  for (int m = 0; m < 3; m++) {
    digitalWrite(RELE_LED_2, HIGH);
    for (int i = 0; i < 3; i++) {
      delay(10);
      for (int j = 0; j < 4; j++) {
        digitalWrite(RELE_LED_1, HIGH);
        delay(30);

        digitalWrite(RELE_LED_1, LOW);
        delay(30);
      }
      delay(150);
    }
    digitalWrite(RELE_LED_1, HIGH);

    for (int k = 0; k < 3; k++) {
      for (int l = 0; l < 4; l++) {
        digitalWrite(RELE_LED_2, HIGH);
        delay(30);

        digitalWrite(RELE_LED_2, LOW);
        delay(30);
      }
      delay(150);
    }
  }
  digitalWrite(RELE_LED_1, HIGH);
  digitalWrite(RELE_LED_2, HIGH);
  delay(10);
  for (int n = 0; n < 3; n++) {
    for (int m = 0; m < 4; m++) {
      digitalWrite(RELE_LED_1, LOW);
      digitalWrite(RELE_LED_2, LOW);
      delay(30);
      digitalWrite(RELE_LED_1, HIGH);
      digitalWrite(RELE_LED_2, HIGH);
      delay(30);
    }
    digitalWrite(RELE_LED_1, LOW);
    digitalWrite(RELE_LED_2, LOW);
    delay(100);
  }
  delay(1000);
}
