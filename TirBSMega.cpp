// ---------------------------------------------------------------------------
// TirBSMega Library - v1.0 - 22/03/2020
// This Library is for the target box with Arduino Uno.
// It can take up to 16 targets connected to analog pins A0 to A15.
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

#include "TirBSMega.h"
#include "Arduino.h"
#include "SoftwareSerial.h"

 TirBSMega::TirBSMega (int Sensibilite){
	
	// This is the threshold for the sensitiveness of the piezo sensors.
	// The maximum threshold that works fine is 1023.
	maSensibilite=Sensibilite; 
}

void TirBSMega::PinSetup() {

}


void TirBSMega::Partie1()
{
    while(1) {   

		if (Serial.available()>0) {
			received = Serial.read();
			if(received == 'Z') {
				 loop(); // MenuPrincipal();
			} // fin if(received == 'Z'...
		}
     
      //Cibles 1
      int val0 = analogRead(A0);
      if(val0 >= maSensibilite){
        buttonStateC0=1;
      }
      else { buttonStateC0=0;}
  
      if (buttonStateC0 != lastBoutonStateC0) {
        if ( buttonStateC0 == 1){
          Serial.println(maSensibilite);
		  Serial.println('A');
        }
        lastBoutonStateC0 = buttonStateC0;
      }
         
      //Cible 2
      int val1 = analogRead(A1);
      if(val1 >= maSensibilite){
        buttonStateC1=1;
      }
      else { buttonStateC1=0;}
  
      if (buttonStateC1 != lastBoutonStateC1) {
        if ( buttonStateC1 == 1){
		  Serial.println(maSensibilite);
          Serial.println('B');
        }
        lastBoutonStateC1 = buttonStateC1;
      }
            
      //Cible 3 
      int val2 = analogRead(A2);
      if(val2 >= maSensibilite){
        buttonStateC2=1;
      }
      else { buttonStateC2=0;}
  
      if (buttonStateC2 != lastBoutonStateC2) {
        if ( buttonStateC2 == 1){
          Serial.println(maSensibilite);
		  Serial.println('C');
        }
        lastBoutonStateC2 = buttonStateC2;
      }
        
      //Cible 4 
      int val3 = analogRead(A3);
      if(val3 >= maSensibilite){
        buttonStateC3=1;
      }
      else { buttonStateC3=0;}
  
      if (buttonStateC3 != lastBoutonStateC3) {
        if ( buttonStateC3 == 1){
          Serial.println(maSensibilite);
		  Serial.println('D');
        }
        lastBoutonStateC3 = buttonStateC3;
      }
        
      //Cible 5
      int val4 = analogRead(A4);
      if(val4 >= maSensibilite){
        buttonStateC4=1;
      }
      else { buttonStateC4=0;}
  
      if (buttonStateC4 != lastBoutonStateC4) {
        if ( buttonStateC4 == 1){
          Serial.println(maSensibilite);
		  Serial.println('E');
        }
        lastBoutonStateC4 = buttonStateC4;
      }
          
      //Cible 6
      int val5 = analogRead(A5);
      if(val5 >= maSensibilite){
        buttonStateC5=1;
      }
      else { buttonStateC5=0;}
  
      if (buttonStateC5 != lastBoutonStateC5) {
        if ( buttonStateC5 == 1){
          Serial.println(maSensibilite);
		  Serial.println('F');
        }
        lastBoutonStateC5 = buttonStateC5;
      }
	//----------------------------------
	//------- pour cibles supplémentaires avec Arduino Mega
	  //Cibles 7
      int val6 = analogRead(A6);
      if(val6 >= maSensibilite){
        buttonStateC6=1;
      }
      else { buttonStateC6=0;}
  
      if (buttonStateC6 != lastBoutonStateC6) {
        if ( buttonStateC6 == 1){
          Serial.println(maSensibilite);
		  Serial.println('G');
        }
        lastBoutonStateC6 = buttonStateC6;
      }
         
      //Cible 8
      int val7 = analogRead(A7);
      if(val7 >= maSensibilite){
        buttonStateC7=1;
      }
      else { buttonStateC7=0;}
  
      if (buttonStateC7 != lastBoutonStateC7) {
        if ( buttonStateC7 == 1){
		  Serial.println(maSensibilite);
          Serial.println('H');
        }
        lastBoutonStateC7 = buttonStateC7;
      }
            
      //Cible 9 
      int val8 = analogRead(A8);
      if(val8 >= maSensibilite){
        buttonStateC8=1;
      }
      else { buttonStateC8=0;}
  
      if (buttonStateC8 != lastBoutonStateC8) {
        if ( buttonStateC8 == 1){
          Serial.println(maSensibilite);
		  Serial.println('I');
        }
        lastBoutonStateC8 = buttonStateC8;
      }
        
      //Cible 10 
      int val9 = analogRead(A9);
      if(val9 >= maSensibilite){
        buttonStateC9=1;
      }
      else { buttonStateC9=0;}
  
      if (buttonStateC9 != lastBoutonStateC9) {
        if ( buttonStateC9 == 1){
          Serial.println(maSensibilite);
		  Serial.println('J');
        }
        lastBoutonStateC9 = buttonStateC9;
      }
        
      //Cible 11
      int val10 = analogRead(A10);
      if(val10 >= maSensibilite){
        buttonStateC10=1;
      }
      else { buttonStateC10=0;}
  
      if (buttonStateC10 != lastBoutonStateC10) {
        if ( buttonStateC10 == 1){
          Serial.println(maSensibilite);
		  Serial.println('K');
        }
        lastBoutonStateC10 = buttonStateC10;
      }
          
      //Cible 12
      int val11 = analogRead(A11);
      if(val11 >= maSensibilite){
        buttonStateC11=1;
      }
      else { buttonStateC11=0;}
  
      if (buttonStateC11 != lastBoutonStateC11) {
        if ( buttonStateC11 == 1){
          Serial.println(maSensibilite);
		  Serial.println('L');
        }
        lastBoutonStateC11 = buttonStateC11;
      }
	  
	  //Cibles 13
      int val12 = analogRead(A12);
      if(val12 >= maSensibilite){
        buttonStateC13=1;
      }
      else { buttonStateC13=0;}
  
      if (buttonStateC13 != lastBoutonStateC13) {
        if ( buttonStateC13 == 1){
          Serial.println(maSensibilite);
		  Serial.println('M');
        }
        lastBoutonStateC13 = buttonStateC13;
      }
         
      //Cible 14
      int val13 = analogRead(A13);
      if(val13 >= maSensibilite){
        buttonStateC14=1;
      }
      else { buttonStateC14=0;}
  
      if (buttonStateC14 != lastBoutonStateC14) {
        if ( buttonStateC14 == 1){
		  Serial.println(maSensibilite);
          Serial.println('N');
        }
        lastBoutonStateC14 = buttonStateC14;
      }
            
      //Cible 15 
      int val14 = analogRead(A14);
      if(val14 >= maSensibilite){
        buttonStateC15=1;
      }
      else { buttonStateC15=0;}
  
      if (buttonStateC15 != lastBoutonStateC15) {
        if ( buttonStateC15 == 1){
          Serial.println(maSensibilite);
		  Serial.println('O');
        }
        lastBoutonStateC15 = buttonStateC15;
      }
        
      //Cible 16 
      int val15 = analogRead(A15);
      if(val15 >= maSensibilite){
        buttonStateC16=1;
      }
      else { buttonStateC16=0;}
  
      if (buttonStateC16 != lastBoutonStateC16) {
        if ( buttonStateC16 == 1){
          Serial.println(maSensibilite);
		  Serial.println('P');
        }
        lastBoutonStateC16 = buttonStateC16;
      }
	// FIN POUR ARDUINO MEGA

  } // fin while
}  
