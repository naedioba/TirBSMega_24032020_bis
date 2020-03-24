// ---------------------------------------------------------------------------
// TirBSMega Library - v1.0 - 22/03/2020
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


#ifndef TirBSMega_h
#define TirBSMega_h
#include "Arduino.h"
#include "SoftwareSerial.h"

class TirBSMega {

	private:
		
		// This is the state of the piezo sensors
		int buttonStateC0;  
		int buttonStateC1;
		int buttonStateC2;
		int buttonStateC3; 
		int buttonStateC4; 	
		int buttonStateC5; 
		// POUR ARDUINO MEGA
		int buttonStateC6;  
		int buttonStateC7;
		int buttonStateC8;
		int buttonStateC9; 
		int buttonStateC10; 	
		int buttonStateC11;
		int buttonStateC12;  
		int buttonStateC13;
		int buttonStateC14;
		int buttonStateC15; 

		
		
		// This is used to check the last state of the piezo sensors
		int lastBoutonStateC0;
		int lastBoutonStateC1;     
		int lastBoutonStateC2;     
		int lastBoutonStateC3;
		int lastBoutonStateC4;
		int lastBoutonStateC5;
		// POUR ARDUINO MEGA
		int lastBoutonStateC6;  
		int lastBoutonStateC7;
		int lastBoutonStateC8;
		int lastBoutonStateC9; 
		int lastBoutonStateC10; 	
		int lastBoutonStateC11;
		int lastBoutonStateC12;  
		int lastBoutonStateC13;
		int lastBoutonStateC14;
		int lastBoutonStateC15;
		
		
		// This is the threshold for the sensitiveness of the piezo sensors.
		// The maximum threshold that works fine is 1023.
		int maSensibilite;
		
		int received;
		

	public:

		TirBSMega::TirBSMega (int Sensibilite);
		void PinSetup(); // Used to set the pinMode and other setups
		void Partie1();	 // Used to determine which target is hit, and send the appropriate information to the main box
  

};




#endif