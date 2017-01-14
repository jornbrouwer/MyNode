/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : Repeater.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : 
******************************************************************/

// Enabled repeater feature for this node
#define MY_REPEATER_FEATURE

/**
* @ MY_SPECIAL_DEBUG
* Enable routing info (repeater only) if MY_DEBUG is disabled
*/
#define MY_SPECIAL_DEBUG
    //MY_SPECIAL_DEBUG kan alleen als MY_DEBUG is uitgeschakeld.
#ifdef MY_SPECIAL_DEBUG 
    #undef MY_DEBUG
#endif

