/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MyMessages.hpp
 Ex.Libraries: <MySensor 2.0.0>
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : Instanciates Message objects based on defined ID's
******************************************************************/
#pragma once

#include "MyReceivingMessages.hpp"

#ifdef ID_S_DOOR // V_TRIPPED, V_ARMED
  MyMessage msg_S_DOOR_T(ID_S_DOOR,V_TRIPPED);
  MyMessage msg_S_DOOR_A(ID_S_DOOR,V_ARMED);
#endif

#ifdef ID_S_LIGHT
  MyMessage msg_S_LIGHT(ID_S_LIGHT,V_LIGHT);
  bool isLightOn=0;
#endif

#ifdef ID_S_TEMP
  MyMessage msg_S_TEMP(ID_S_TEMP,V_TEMP);
#endif

#ifdef ID_S_HUM
  MyMessage msg_S_HUM(ID_S_HUM,V_HUM);
#endif

#ifdef ID_S_RAIN
  MyMessage msg_S_RAIN_A(ID_S_RAIN,V_RAIN);
  MyMessage msg_S_RAIN_R(ID_S_RAIN,V_RAINRATE);
#endif

#ifdef ID_S_WATER
  MyMessage msg_S_WATER_F(ID_S_WATER,V_FLOW);
  MyMessage msg_S_WATER_V(ID_S_WATER,V_VOLUME);
#endif