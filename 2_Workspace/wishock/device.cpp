/***************************************************************************************
* INCLUDE
***************************************************************************************/
#include "device.h"
#include <ESP8266WiFi.h>

/***************************************************************************************
* PRIVATE DEFINES
***************************************************************************************/

/***************************************************************************************
* PUBLIC VARIABLES
***************************************************************************************/

/***************************************************************************************
* PUBLIC FUNCTIONS
***************************************************************************************/
void deviceInit(void){
    pinMode(PIN_LED_DEVICE, OUTPUT);
    pinMode(PIN_DEVICE, OUTPUT);
    //pinMode(PIN_LED_WIFI, OUTPUT);
}
/**
 * Turn device ON
 */
void deviceOn(void){
    digitalWrite(PIN_DEVICE, LOW);
    Serial.println("device on");
}
/**
 * Turn device OFF
 */
void deviceOff(void){
    digitalWrite(PIN_DEVICE, HIGH);
    Serial.println("device off");
}
/**
 * Turn led device ON
 */
void ledDeviceOn(void){
    digitalWrite(PIN_LED_DEVICE, LOW);
}
/**
 * Turn led device OFF
 */
void ledDeviceOff(void){
    digitalWrite(PIN_LED_DEVICE, HIGH);
}
/**
 * Turn led wifi ON
 */
void ledWifiOn(void){
    digitalWrite(PIN_LED_DEVICE, LOW);
}
/**
 * Turn led wifi OFF
 */
void ledWifiOff(void){
    digitalWrite(PIN_LED_DEVICE, HIGH);
}
/**
 * Toggle device
 */
void deviceToggle(void){
    if(digitalRead(PIN_DEVICE) == HIGH)
        deviceOn();
    else
        deviceOff();
}
/**
 * Toggle led
 */
void ledWifiToggle(void){
    if(digitalRead(PIN_LED_WIFI) == HIGH)
        ledWifiOn();
    else
        ledWifiOff();
}
/**
 * @brief       Return device status
 * @retval      HIGH
 *              LOW
 */
int deviceStatus(void){
    return digitalRead(PIN_DEVICE);
}