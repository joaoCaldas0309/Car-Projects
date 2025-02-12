#define FIRSTSECTION_H

starterPoint() {
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
      delay(250);
    }
    digitalWrite(RELE_LED_1, HIGH);

    for (int k = 0; k < 3; k++) {
      for (int l = 0; l < 4; l++) {
        digitalWrite(RELE_LED_2, HIGH);
        delay(30);

        digitalWrite(RELE_LED_2, LOW);
        delay(30);
      }
      digitalWrite(RELE_LED_2, HIGH);
      delay(250);
    }
  }
}
