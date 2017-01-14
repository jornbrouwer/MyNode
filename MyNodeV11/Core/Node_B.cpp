/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Node_B.cpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
******************************************************************/
#include "Node_B.hpp"

/**
* @presentSensors()
* verstuurd een presentation message met de aangesloten sensoren.
*/
void presentSensors(){

    #ifdef MY_DEBUG
        Serial.println("Presenting sensors Node_B");
        Serial.println("________________");
    #endif

    #ifdef ID_S_DOOR
        #ifdef MY_DEBUG
            Serial.println("  S_DOOR");
        #endif 
        
        present(ID_S_DOOR,S_DOOR,"Door Switch");
        wait(SHORT_WAIT);
    #endif

    #ifdef ID_S_TEMP
        #ifdef MY_DEBUG
            Serial.println("  S_TEMP");
        #endif

        present(ID_S_TEMP,S_TEMP,"Temperatuur");
        wait(SHORT_WAIT);
    #endif
  
    #ifdef ID_S_HUM
        #ifdef MY_DEBUG
            Serial.println("  S_HUM");
        #endif

        present(ID_S_HUM,S_HUM,"Luchtvochtigheid");
        wait(SHORT_WAIT);
    #endif
}

/**
* @door()
*
*/
void door(){
    //open
    //send(msg_S_DOOR_T.set(1));

    //dicht
    //send(msg_S_DOOR_T.set(0));
}


/**
* @temperature()
*
*/
void temperature(){
    //send(msg_S_TEMP.set(100););
}

/**
* @humidity()
* 
*/
void humidity(){
    //send(msg_S_HUM.set(randNumber));
}
