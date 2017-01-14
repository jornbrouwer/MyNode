/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : netwerksettings.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description :  
******************************************************************/

#include "NetwerkConfig.hpp"

/**
* @ set_radio_channel()
* Setter voor de te gebruiken RADIO CHANNEL
*/
void set_radio_channel(uint8_t kanaal){
    #ifndef MY_RF24_CHANNEL 
        #define MY_RF24_CHANNEL kanaal
            #ifdef PRINTLINE
                Serial.print("set_radio_channel");
                Serial.print("Het RF kanaal is ingesteld op: ");
                Serial.println(kanaal);
            #endif
    #endif
}


/**
* @set_pa_level()
* Setter voor het te gebruiken PA_level
*/
void set_pa_level(uint8_t level){
    #ifndef MY_RF24_PA_LEVEL
        #define MY_RF24_PA_LEVEL level 
            #ifdef PRINTLINE
                Serial.print("set_pa_level");
                Serial.print("De PA waarde is: ");
                Serial.println(level);
            #endif
    #endif
}


/**
* @ set_data_rate()
* Setter voor de datarate
*/
void set_data_rate(uint8_t rate){
    #ifndef MY_RF24_DATARATE
        #define MY_RF24_DATARATE rate
            #ifdef PRINTLINE
                Serial.print("set_data_rate()");
                Serial.print("De ingestelde data rate is: ");
                Serial.println(rate);
            #endif
    #endif
}