/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MyReceivingMessages.cpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description :  
******************************************************************/

// This is called when a new time value was received
void receiveTime (unsigned long controllerTime) {
  Serial.print("Time value received: ");
  Serial.println(controllerTime);

}

// Serial.println("Request Time");
// requestTime();