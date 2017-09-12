#ifndef __MQTT_H__
#define __MQTT_H__

/***************************************************************************************
* PUBLIC FUNCTION PROTOTYPES
***************************************************************************************/
void callback(char* topic, byte* payload, unsigned int length);
void mqttCreateTopic(void);
void mqttSubscribe(void);
int mqttConnect (void);
int mqttConnected (void);
void mqttPublish (void);
#endif
