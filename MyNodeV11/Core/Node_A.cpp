/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Node_A.cpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
******************************************************************/

#include "Node_A.hpp"

/**
* @presentSensors()
* verstuurd een presentation message met de aangesloten sensoren.
*/
void presentSensors(){

    #ifdef MY_DEBUG
        Serial.println("Presenting sensors Node_A");
        Serial.println("________________");
    #endif

    /**
    * Present LDR
    */
    #ifdef ID_S_LIGHT
        #ifdef MY_DEBUG
            Serial.println("  S_LIGHT");
        #endif
        
        present(ID_S_LIGHT,S_LIGHT,"LDR");
        wait(SHORT_WAIT);
    #endif

    /**
    * Present DS18B20
    */
    #ifdef ID_S_TEMP
        #ifdef MY_DEBUG
            Serial.println("  S_TEMP");
        #endif

        present(ID_S_TEMP,S_TEMP,"DS18B20");
        wait(SHORT_WAIT);
    #endif
}





