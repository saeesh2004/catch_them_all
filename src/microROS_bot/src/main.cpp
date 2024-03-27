#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define pin numbers for components
#define TRIGGER_PIN 12
#define ECHO_PIN 14
#define MOTOR1_PIN1 2
#define MOTOR1_PIN2 4
#define MOTOR2_PIN1 5
#define MOTOR2_PIN2 15
#define SERVO_PIN 13
#define MOISTURE_SENSOR_PIN 33

// Function prototypes
void setup();
void loop();
void ultrasonicSensor();
void servoControl(int angle);
void motorControl(int motor1Speed, int motor2Speed);
int readMoisture();

// Global variables
long duration;
int distance;
int motorSpeed = 150; // Motor speed can be adjusted as needed

int main() {
    setup();

    while(1) {
        loop();
    }

    return 0;
}

void setup() {
    // Initialize components
    pinMode(TRIGGER_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(MOTOR1_PIN1, OUTPUT);
    pinMode(MOTOR1_PIN2, OUTPUT);
    pinMode(MOTOR2_PIN1, OUTPUT);
    pinMode(MOTOR2_PIN2, OUTPUT);
    pinMode(SERVO_PIN, OUTPUT);
    pinMode(MOISTURE_SENSOR_PIN, INPUT);
}

void loop() {
    ultrasonicSensor(); // Get distance from ultrasonic sensor
    int moisture = readMoisture(); // Read moisture sensor

    if (distance > 20 && moisture < 500) {
        motorControl(motorSpeed, motorSpeed); // Move forward
    } else {
        motorControl(-motorSpeed, -motorSpeed); // Move backward
        delay(1000); // Back up for 1 second
        motorControl(0, motorSpeed); // Turn right
        delay(1000); // Turn for 1 second
    }
}

void ultrasonicSensor() {
    digitalWrite(TRIGGER_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIGGER_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER_PIN, LOW);

    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2;
}

void servoControl(int angle) {
    int pulseWidth = map(angle, 0, 180, 500, 2500);
    digitalWrite(SERVO_PIN, HIGH);
    delayMicroseconds(pulseWidth);
    digitalWrite(SERVO_PIN, LOW);
}

void motorControl(int motor1Speed, int motor2Speed) {
    analogWrite(MOTOR1_PIN1, abs(motor1Speed));
    analogWrite(MOTOR1_PIN2, 0);
    analogWrite(MOTOR2_PIN1, abs(motor2Speed));
    analogWrite(MOTOR2_PIN2, 0);

    if (motor1Speed < 0) {
        digitalWrite(MOTOR1_PIN1, LOW);
        digitalWrite(MOTOR1_PIN2, HIGH);
    }
    if (motor2Speed < 0) {
        digitalWrite(MOTOR2_PIN1, LOW);
        digitalWrite(MOTOR2_PIN2, HIGH);
    }
}

int readMoisture() {
    return analogRead(MOISTURE_SENSOR_PIN);
}