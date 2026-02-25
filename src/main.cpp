#include <Arduino.h>

#define DIR_PIN 19
#define STEP_PIN 18
#define COIL_PIN 3
#define SWITCH_PIN 4

int distance = 12500;
int bring_crate = 1;

void step(int steps, bool direction, int speedDelay) {
  digitalWrite(DIR_PIN, direction);
  for (int i = 0; i < steps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(speedDelay);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(speedDelay);
  }
}

void setup() {
  pinMode(DIR_PIN, OUTPUT);
  pinMode(STEP_PIN, OUTPUT);
  pinMode(COIL_PIN, OUTPUT);
  pinMode(SWITCH_PIN, INPUT_PULLUP);
}

void loop() {

    // wait for button press  
    while (digitalRead(SWITCH_PIN) == HIGH) {
    delay(100);
    }

    if (bring_crate) {
        digitalWrite(COIL_PIN, LOW);
        
        // forward
        step(distance, LOW, 200);   

        // coil on
        digitalWrite(COIL_PIN, HIGH);
        delay(2000);

        // return
        step(distance + 100, HIGH, 200);   
        delay(2000);
    }
    else {
        digitalWrite(COIL_PIN, HIGH);
        
        // forward
        step(distance, LOW, 200);   

        digitalWrite(COIL_PIN, LOW);
        delay(2000);

        // return
        step(distance+100, HIGH, 200);   
        delay(2000);
    }

    bring_crate = !bring_crate;
}