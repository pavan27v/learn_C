/****************************************************************************************************************************
  Value Test Expression
  System Requirement: Alarm System for Sensor Data Monitoring

    Objective: Monitor sensor data and trigger an alarm if the sensor value exceeds a threshold and the system is enabled.
    Conditions:
        Sensor value must be greater than 100.
        System must be enabled.
    Actions:
        Trigger the alarm if both conditions are met.
        Print status messages if conditions are not met.
****************************************************************************************************************************/



#include <stdbool.h>
#include <stdio.h>
#if 0
#define SENSOR_THRESHOLD 100

int read_sensor(void);
bool get_system_status(void);
void trigger_alarm(void);

int main(void) {
    int sensor_value = read_sensor();
    bool system_enabled = get_system_status();

    if (sensor_value > SENSOR_THRESHOLD && system_enabled) /* Implicit Check (Not Recommended) */
    if (sensor_value > SENSOR_THRESHOLD && system_enabled == true)/* Explicit Check (Recommended) */
    {
        trigger_alarm();
    } else {
        if (sensor_value <= SENSOR_THRESHOLD) {
            printf("Sensor value is below threshold.\n");
        }
        if (system_enabled == false) {
            printf("System is not enabled.\n");
        }
    }

    return 0;
}

int read_sensor(void) {
    return 150;
}

bool get_system_status(void) {
    return true;
}

void trigger_alarm(void) {
    printf("Alarm triggered!\n");
}
#endif

 #include <stdbool.h>
#include <stdio.h>

// Function Prototypes
int read_sensor(void);
bool get_system_status(void);
void turn_on_led(void);
void turn_off_led(void);

int main(void) {
    int sensor_value = read_sensor();
    bool system_enabled = get_system_status();

    // Explicit check (Recommended)
    if (sensor_value != 0 && system_enabled == true) {
        turn_on_led();
    } else {
        turn_off_led();
    }

    // Implicit check (Not Recommended)
    if (sensor_value && system_enabled) {
        turn_on_led();
    } else {
        turn_off_led();
    }

    return 0;
}

int read_sensor(void) {
    return 150; // Example sensor value
}
bool get_system_status(void) {
    return true; // Example system status
}

void turn_on_led(void) {
    printf("LED is ON\n");
}

void turn_off_led(void) {
    printf("LED is OFF\n");
}
