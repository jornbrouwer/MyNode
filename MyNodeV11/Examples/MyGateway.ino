/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MyGateway.ino
 Ex.Libraries: <MySensor 2.0.0>
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : Example file to run on gateway.
******************************************************************/
/**
* @ MY_DEBUG
* Uncomment om te testen.
*/
//#define MY_DEBUG

/**
* @GATEWAY
* definiering van het type node, NIET OVERRIDEN.
*/
//#define GATEWAY

/**
* @Gateway Type
* definiering van het type gateway wat in gebruik is. 
*/
//#define SERIAL


/**
* @include
* Include MySensors onder alle MySensors-defines, 
* anders worden ze niet uitgevoerd.
*/
#include <MySensors.h>

/**
* @setup()
* 
*/
void setup(){
    #ifdef MY_DEBUG
        Serial.begin(9600);
        Serial.println("Starting Test Mode");
    #endif
}

/**
* @loop()
*
*/
void loop(){

}