#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author CHARVI
 * @date 2026-01-23
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */
#define LDR_PIN A0
/**
* @details
 * This sketch reads analog brightness data from an LDR (Light Dependent Resistor)
 * connected to an analog input (A0). It prints the raw ADC reading and a
 * human-readable brightness status to the Serial Monitor every second.
 *
 * The program is intended as a simple data acquisition and monitoring demo
 * for educational and prototyping purposes.
*/
void setup()
{
 Serial.begin(9600);
 while (!Serial); // Important for UNO R4 WiFi
}
/**
 * @brief Main Arduino loop
 *
 * Reads the analog value from the LDR pin, prints the raw ADC value, and
 * classifies the environment as either "Bright Environment" or
 * "Dark Environment" based on a simple threshold. The results are written
 * to the Serial Monitor once per second.
 *
 * @note No parameters or return value. Side effects: performs analogRead()
 * and writes to Serial.
 */
void loop()
{
 int ldrRaw = analogRead(LDR_PIN);
 // Map to percentage
 int lightPercent = map(ldrRaw, 0, 1023, 0, 100);