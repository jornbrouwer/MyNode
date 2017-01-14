/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Gateway.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : Header file voor definiering en verwijzing naar 
 corresponderende gateway 
******************************************************************/
/*
typedef enum{
    SERIAL, W5100, ENC28J60, MQTT 
}gateway_type;
*/

#ifdef NODE_IS_GATEWAY
    //Algemene gateway configuratie instellingen 
    #include "GatewayConfig.hpp"
    
    //Specfieke includes voor corresponderende gateway type
    #ifdef SERIAL
        #include "MySerialGateway.hpp"
    #elif defined W5100 
        #include "My5100Gateway.hpp"
    #elif defined ENC28J60
        #include "MyENC28J60Gateway.hpp"
    #elif defined MyMQTTGateway
        #include "MyMQTTGateway.hpp"
    #elif !defined SERIAL && !defined W5100 && !defined ENC28J60 && !defined MyMQTTGateway
        #error GATEWAY TYPE MUST BE DEFINED!
    #endif
#endif


