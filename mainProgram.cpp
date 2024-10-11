//Luke Milburn - 2015

//Standard Library Includes
#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>
#include <math.h>
#include <string>
#include <sstream>
#include <thread>
#include <SFML\Graphics.hpp>
#include <SFML\Config.hpp>
#include <SFML\Main.hpp>
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>
#include <SFML\System.hpp>

//Framework includes
#include "Keyboard.h"

//Function Prototypes

//Global Variables																																																																
KeyBoard* theKeyboard;																						//Keyboard

int main()
{
	theKeyboard = new KeyBoard;

	//Initialise the keyboard
	theKeyboard->initiateKeyBoard();

	//Main Loop
	theKeyboard->mainFunc();

	//Clean Up
	delete theKeyboard;
	
	return 1;
}


