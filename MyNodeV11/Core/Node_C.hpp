/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Node_C.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
 - DS18B2 
 - DHT11 
 - Rain gauge WH2081
******************************************************************/ 
              
//S_TEMP

//S_TEMP
#define ID_S_TEMP              7

//S_HUM
#define ID_S_HUM               8         

//S_RAIN
#define ID_S_RAIN              11      
               

//Define DHT_PIN
#ifndef DHT_PIN
    #define DHT_PIN 3
#endif


//Define RAIN_SENSOR_PIN
#ifndef RAIN_SENSOR_DIGITAL_PIN
    #define RAIN_SENSOR_PIN 2
#endif

