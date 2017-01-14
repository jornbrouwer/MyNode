/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Nodes.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
******************************************************************/

#include "Core/Mymessages.hpp"

/**
* @type_node
* type_node GATEWAY = 0
* type_node REPEATER = 1
* type_node SENSORNODE = 2
*/
/*
typedef enum{
    GATEWAY, REPEATER, SENSORNODE
}type_node;
*/

/**
* @type_sensor_node
* TYPE_A = 0
* TYPE_B = 1
* TYPE_C = 2
*/
/*
typedef enum {
    SN_TYPE_A , B, C//SN_TYPE_A SN_TYPE_B, SN_TYPE_C
}snTYPE;
*/

/**********************************
*   SENSORNODE
***********************************/

#ifdef SENSORNODE
    #if defined (SN_TYPE_A)
        #include "Core/Node_A.hpp"
    #elif defined (SN_TYPE_B)
        #include "Core/Node_B.hpp"
    #elif defined (SN_TYPE_C)
        #include "Core/Node_C.hpp"
    #else
        #error DEFINING SENSOR NODE WITHOUT A TYPE. Dumbass.
    #endif
#endif


/**********************************
*   REPEATER
***********************************/
#if defined REPEATER
    #include "Core/Repeater.hpp"
#endif


/**********************************
*   GATEWAY
***********************************/
#if defined GATEWAY
    #include "Core/Gateway.hpp"
    #if defined SERIAL
        #include "Core/MySerialGateway.hpp"
    #elif defined W5100
        #if defined MQTT //MQTT momenteel alleen beschikbaar op w5100 of ENC28J60
        #endif
    #elif defined ENC28J60 //MQTT momenteel alleen beschikbaar op w5100 of ENC28J60
        #if defined MQTT
        #endif
    #else
        #error DEFINING A GATEWAY WITHOUT A TYPE. Dumbass. 
    #endif 
#endif


#if !(defined (GATEWAY) || defined(REPEATER) || defined(SENSORNODE))
    #error You should consider defining a node type GATEWAY, REPEATER or SENSORNODE. DUMBASS
#endif



