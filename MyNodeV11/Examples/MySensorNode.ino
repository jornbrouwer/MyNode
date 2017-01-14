/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MySensorNode.ino
 Ex.Libraries: <MySensor 2.0.0>
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : Example file to run on a Sensor Node.
******************************************************************/

/**
* @ MY_DEBUG
* Uncomment om te testen.
*/
//#define MY_DEBUG

/**
* @SENSORNODE
* definiering van het type node, NIET OVERRIDEN.
*/
//#define SENSORNODE

/**
* @ SN_TYPE
* Uncomment een van de drie types sensor nodes.
*/
//#define SN_TYPE_A
//#define SN_TYPE_B
//#define SN_TYPE_C

//Naam van de sketch, die word meegegeven in de "sendSketchInfo"
//#define SKETCH_NAAM "Mijn Sensor Node"

//Huidige versie van de sketch, die word meegegeven in de "sendSketchInfo"
//#define SKETCH_VERSION "V1.0"

/**
* @include
* Include MySensors onder alle MySensors-defines, 
* anders worden ze niet uitgevoerd.
*/
//#include <MySensors.h>

/**
* @setup()
* 
*/
/*
void setup(){
    #ifdef MY_DEBUG
        Serial.begin(9600);
        Serial.println("Starting Test Mode");
    #endif
}
*/


/**
* @presentation
* 
*/
/*
void presentation(){
    #ifdef MY_DEBUG
        Serial.print("Send Sketch Info: ");
        Serial.print(SKETCH_NAME);
        Serial.println(SKETCH_VERSION);
    #endif

    sendSketchInfo(SKETCH_NAME, SKETCH_VERSION);

    

}
*/
/**
* @loop()
*
*/
/*
void loop(){

}
*/