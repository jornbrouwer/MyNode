/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MyReceivingMessages.hpp
 Ex.Libraries: 
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description :  
******************************************************************/
#pragma once
#include "MyReceivingMessages.cpp"


void receiveTime (unsigned long controllerTime);


/**
 * Wait for a specified amount of time to pass.  Keeps process()ing.
 * This does not power-down the radio nor the Arduino.
 * Because this calls process() in a loop, it is a good way to wait
 * in your loop() on a repeater node or sensor that listens to messages.
 * @param ms Number of milliseconds to sleep.
 */
//void wait(unsigned long ms);

/**
 * Wait for a specified amount of time to pass or until specified message received.  Keeps process()ing.
 * This does not power-down the radio nor the Arduino.
 * Because this calls process() in a loop, it is a good way to wait
 * in your loop() on a repeater node or sensor that listens to messages.
 * @param ms Number of milliseconds to sleep.
 * @param cmd Command of incoming message.
 * @param msgtype Message type.
 * @return True if specified message received
 */
//bool wait(unsigned long ms, uint8_t cmd, uint8_t msgtype);

/**
 * Sleep (PowerDownMode) the MCU and radio. Wake up on timer.
 * @param ms Number of milliseconds to sleep.
 * @return -1 if timer woke it up, -2 if not possible (e.g. ongoing FW update)
 */
//int8_t sleep(unsigned long ms);
//int8_t smartSleep(unsigned long ms);

/**
 * Sleep (PowerDownMode) the MCU and radio. Wake up on timer or pin change.
 * See: http://arduino.cc/en/Reference/attachInterrupt for details on modes and which pin
 * is assigned to what interrupt. On Nano/Pro Mini: 0=Pin2, 1=Pin3
 * @param interrupt Interrupt that should trigger the wakeup
 * @param mode RISING, FALLING, CHANGE
 * @param ms Number of milliseconds to sleep or 0 to sleep forever
 * @return Interrupt number wake up was triggered by pin change, -1 if timer woke it up, -2 if not possible (e.g. ongoing FW update)
 */
//int8_t sleep(uint8_t interrupt, uint8_t mode, unsigned long ms=0);
//int8_t smartSleep(uint8_t interrupt, uint8_t mode, unsigned long ms=0);

/**
 * Sleep (PowerDownMode) the MCU and radio. Wake up on timer or pin change for two separate interrupts.
 * See: http://arduino.cc/en/Reference/attachInterrupt for details on modes and which pin
 * is assigned to what interrupt. On Nano/Pro Mini: 0=Pin2, 1=Pin3
 * @param interrupt1 First interrupt that should trigger the wakeup
 * @param mode1 Mode for first interrupt (RISING, FALLING, CHANGE)
 * @param interrupt2 Second interrupt that should trigger the wakeup
 * @param mode2 Mode for second interrupt (RISING, FALLING, CHANGE)
 * @param ms Number of milliseconds to sleep or 0 to sleep forever
 * @return Interrupt number wake up was triggered by pin change, -1 if timer woke it up, -2 if not possible (e.g. ongoing FW update)
 */
//int8_t sleep(uint8_t interrupt1, uint8_t mode1, uint8_t interrupt2, uint8_t mode2, unsigned long ms=0);
//int8_t smartSleep(uint8_t interrupt1, uint8_t mode1, uint8_t interrupt2, uint8_t mode2, unsigned long ms=0);


