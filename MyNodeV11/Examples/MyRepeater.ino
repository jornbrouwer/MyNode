/******************************************************************
 Project     : ESD - Internet of Things
 Name        : EBIG sensornetwerk
 File        : MyRepeater.ino
 Ex.Libraries: <MySensor 2.0.0>
 In.Libraries: 
 Author      : Jorn Brouwer
 Date        : 
 Version     : V1.0
 Description : Example file to run on a repeater.
******************************************************************/

/**
* @ MY_DEBUG
* Uncomment om te testen.
*/
//#define MY_DEBUG

/**
* @REPEATER
* definiering van het type node, NIET OVERRIDEN.
*/
#define REPEATER

//Naam van de sketch, die word meegegeven in de "sendSketchInfo"
char sketchnaam[] = "Mijn Repeater Node"

//Huidige versie van de sketch, die word meegegeven in de "sendSketchInfo"
float sketchVersie = 1.0

