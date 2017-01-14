/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MyNode.ino
 Ex.Libraries: <MySensor 2.0.0>
 In.Libraries: 
 Author      : Ties Klappe, Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description :  
******************************************************************/

//#define GATEWAY
//#define REPEATER

//#define SENSORNODE
//#define TYPE_A
//#define TYPE_B
//#define TYPE_C

/**********************************
*       Includes en Defines
***********************************/
#pragma once


/**********************************
*      defines en constanten
***********************************/
//@override BAUDRATE 
//#define BAUDRATE 115200

// @Override constante voor de sleep van de sensornode
#define SLEEP_TIME = 5000;   

//#define MY_DEBUG

//#define NROFSENSORS 2

//Include van MySenors library onder de defines die worden @override
#include <MySensors.h>

/**********************************
*   Declaraties en Initialisaties
***********************************/
//Naam van de sketch, die word meegegeven in de "sendSketchInfo"
char sketchnaam[] = "MyNode test"

//Huidige versie van de sketch, die word meegegeven in de "sendSketchInfo"
float sketchVersie = 1.0

//Nieuw sensor object van het type 'temperatuur'
TempSensor temp_sensor(TEMPERATURE_SENSOR_DIGITAL_PIN, CHILD_ID_TEMP, TEMP_INTERVAL );

//Nieuw sensor object van het type 'humidity'
HumSensor hum_sensor(HUMIDITY_SENSOR_DIGITAL_PIN, CHILD_ID_HUM, HUM_INTERVAL);

//Constructors van de MySensors messages voor de aangesloten sensoren
MyMessage msgHum(CHILD_ID_HUM, V_HUM);
MyMessage msgTemp(CHILD_ID_TEMP, V_TEMP);
MyMessage msgRain(CHILD_ID_RAIN, V_RAIN);

/**********************************
*  Setup
***********************************/
/**
* @ void setup()
* 
*/
void setup(){
  Serial.begin(BAUDRATE);

  Serial.println("Launching inialization fase, start-up message sent: ");
  Serial.println((String) getNodeId() + ' ' + (String) NODETYPE + ' ' + (String) VSN);
}


/**********************************
*  Presentation
***********************************/

void presentation(){
  // Send the sketch version information to the gateway and Controller
	sendSketchInfo(getNodeId() + NODETYPE , VSN);
  //sendSketchInfo(sketchnaam, sketchVersie);

  // Register all sensors to gateway (they will be created as child devices)
	present(CHILD_ID_HUM, S_HUM);
  present(CHILD_ID_TEMP, S_TEMP);
  //present(CHILD_ID_RAIN, S_RAIN);
  //present(CHILD_ID_LIGHT, S_LIGHT_LEVEL);
}

/*
void presentation()
{
  Sensor *connectedSensors[2];
  connectedSensors[0] = &temp_sensor;
  connectedSensors[1] = &hum_sensor;
	hum_sensor.HumSetup();
}
*/

/**********************************
*  Loop
***********************************/
/**
* @ loop
* 
*/
void loop(){
  send(msgTemp.set(temp_sensor.getSensorValue(), 0));
  send(msgHum.set(hum_sensor.getSensorValue(), 0));
 
	sleep(SLEEP_TIME);
}




