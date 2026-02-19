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
