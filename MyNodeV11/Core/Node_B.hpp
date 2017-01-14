/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Node_B.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
 - Window contact magnetic reed switch
 - DHT11
******************************************************************/      

//S_DOOR
#define ID_S_DOOR              1
//S_TEMP
#define ID_S_TEMP              7
//S_HUM
#define ID_S_HUM               8          

void door();

void temperature();

void humidity();




            #define CHILD_ID_HUM 0
            #define CHILD_ID_TEMP 1

            //Define DHT11
            #ifndef TEMPERATURE_SENSOR_DIGITAL_PIN
                #define TEMPERATURE_SENSOR_DIGITAL_PIN 4

                #ifndef TEMP_INTERVAL
                    #define TEMP_INTERVAL 3000
                #endif
            #endif
            
            //Define DHT11
            #ifndef HUMIDITY_SENSOR_DIGITAL_PIN
                #define HUMIDITY_SENSOR_DIGITAL_PIN 3

                #ifndef HUM_INTERVAL
                    #define HUM_INTERVAL 3000
                #endif
            #endif