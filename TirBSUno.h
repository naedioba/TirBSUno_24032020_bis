// ---------------------------------------------------------------------------
// TirBSUno Library - v1.0 - 22/03/2020
// This Library is for the target box with Arduino Uno.
//
// AUTHOR/LICENSE:
// Created by Mamadou BA Neige - naedioba1@gmail.com
// Copyright 2020 License: Permission is granted to use as-is for private and
// commercial use. If you wish to contribute, make changes, or enhancements,
// please feel free, but just send me a copy of the new library. 
//
// LINKS:
// Blog: http://mamadou-ba-neige.over-blog.com/
//
// BACKGROUND:
// When I first saw the program of remote targets created by Naudnaud and Krispies 
// (http://airsoft-krispies.forumactif.org/t4771-shield-cible-electronique-krispies-naudnaud-tuto-v2-mini-shield-en-cours)  
// as my contribution. 
// I would like to thank a lot Naudnaud and Krispies who made the initial program.
// The 6 sensors are connected to the analog pins.
// 
// Sensors pin connections
//				 ___________________________________
// 				|Arduino Uno & Mega	| Arduino Nano	|
//	____________|___________________|_______________|	
// |sensor 1	|		A0			|		A0		|	
// |sensor 2	|		A1			|		A1		|	
// |sensor 3	|		A2			|		A2		|	
// |sensor 4	|		A3			|		A3		|
// |sensor 5	|		A4			|		A6		|
// |sensor 6	|		A5			|		A7		|
// --------------------------------------------------
// For the Arduino Nano, pins A4 and A5 are used for the SDA and SCL of the LCD I2C.
//
// ---------------------------------------------------------------------------


#ifndef TirBSUno_h
#define TirBSUno_h
#include "Arduino.h"
#include "SoftwareSerial.h"

class TirBSUno {

	private:
		
		// This is the state of the piezo sensors
		int buttonStateC0;  
		int buttonStateC1;
		int buttonStateC2;
		int buttonStateC3; 
		int buttonStateC4; 	
		int buttonStateC5; 
		
		// This is used to check the last state of the piezo sensors
		int lastBoutonStateC0;
		int lastBoutonStateC1;     
		int lastBoutonStateC2;     
		int lastBoutonStateC3;
		int lastBoutonStateC4;
		int lastBoutonStateC5;
		
		// This is the threshold for the sensitiveness of the piezo sensors.
		// The maximum threshold that works fine is 1023.
		int maSensibilite;
		
		int received;
		

	public:

		TirBSUno::TirBSUno (int Sensibilite);
		void PinSetup(); // Used to set the pinMode and other setups
		void Partie1();	 // Used to determine which target is hit, and send the appropriate information to the main box
  

};




#endif