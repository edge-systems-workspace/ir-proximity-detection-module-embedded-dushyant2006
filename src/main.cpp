#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Dushyant
 * @date 2026-02-28
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

// Define IR sensor digital pin (Use pin 2)
#define IR_PIN 2

// Create variable to store sensor state
int sensorState;

/**
 * @brief Initializes serial communication and IR sensor pin.
 */
void setup() {

    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);

    Serial.println("IR Obstacle Detection System Initialized");
}

/**
 * @brief Continuously reads IR sensor and prints obstacle status.
 *
 * LOW  -> Obstacle detected
 * HIGH -> No obstacle
 */
void loop() {

    sensorState = digitalRead(IR_PIN);

    if (sensorState == LOW) {
        Serial.println("Obstacle Detected");
    }
    else {
        Serial.println("No Obstacle");
    }

    delay(300);
}