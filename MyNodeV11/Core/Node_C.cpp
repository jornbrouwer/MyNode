/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Node_C.cpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
******************************************************************/
#include "Node_C.hpp"

/**
* @presentSensors()
* verstuurd een presentation message met de aangesloten sensoren.
*/
void presentSensors(){

    #ifdef MY_DEBUG
        Serial.println("Presenting sensors Node_C");
        Serial.println("________________");
    #endif

    /**
    * @DHT11
    */
    #ifdef ID_S_TEMP
        #ifdef MY_DEBUG
            Serial.println("  S_TEMP");
        #endif

        present(ID_S_TEMP,S_TEMP,"Temperatuur_DHT11");
        wait(SHORT_WAIT);
    #endif
  
    /**
    * @DHT11
    */
    #ifdef ID_S_HUM
        #ifdef MY_DEBUG
            Serial.println("  S_HUM");
        #endif

        present(ID_S_HUM,S_HUM,"Luchtvochtigheid_DHT11");
        wait(SHORT_WAIT);
    #endif

    /**
    * @Rain gauge
    */
    #ifdef ID_S_RAIN
        #ifdef MY_DEBUG
            Serial.println("  S_RAIN");
        #endif

        present(ID_S_RAIN,S_RAIN,"Rain Gauge");
        wait(SHORT_WAIT);
    #endif
}


/**
* @rain()
*
*/
void rain(){
  Serial.print("Rain ammount  is: " );
  Serial.println(randNumber);
  
  send(msg_S_RAIN_A.set(randNumber));
  
  Serial.print("Rain rate  is: " );
  Serial.println(randNumber/60);
  
  send(msg_S_RAIN_R.set(randNumber/60,1));
}