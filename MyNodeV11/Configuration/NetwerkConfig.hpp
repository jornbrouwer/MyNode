/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : netwerksettings.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Ties Klappe, Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description :  
******************************************************************/
#pragma once
/**********************************
*           Defines
***********************************/

#ifndef MY_RF24_CHANNEL
    #define MY_RF24_CHANNEL 100
#endif

//RF24_250KBPS for 250kbs, RF24_1MBPS for 1Mbps or RF24_2MBPS for 2Mbps)
#ifndef MY_RF24_DATARATE 
    #define MY_RF24_DATARATE RF24_250KBPS
#endif


//RF24_PA_MIN, RF24_PA_LOW, RF24_PA_HIGH or RF24_PA_MAX
#ifndef MY_RF24_PA_LEVEL
    #define MY_RF24_PA_LEVEL RF24_PA_MIN
#endif

/*
#ifndef MY_RF24_BASE_RIODE_ID
    #define MY_RF24_BASE_RIODE_ID 
#endif
*/


/**********************************
*           Methods
***********************************/

/**
* @ set_radio_channel()
* Setter voor de te gebruiken RADIO CHANNEL
*/
void set_radio_channel(uint8_t kanaal);

/**
* @set_pa_level()
* Setter voor het te gebruiken PA_level
*/
void set_pa_level(uint8_t level);

/**
* @ set_data_rate()
* Setter voor de datarate
*/
void set_data_rate(uint8_t rate);