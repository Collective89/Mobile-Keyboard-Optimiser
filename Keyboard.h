#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_

//Standard Library Includes
#include <iostream>
#include <fstream>

//Framework includes (which include standard library and SFML library)
#include "Key.h"
#include "Button.h"

struct keyPosition
{
	int index;
	sf::Vector2f correctPos;
};
struct KeyOccurance
{
	std::string character;
	int noOfPresses;
	Key* associateKey;
};

struct keyTextCoords
{
	std::string character;
	int xTextCoord;
	int yTextCoord;
};


class KeyBoard
{
public:
	//Constructor and destructor
	KeyBoard();
	~KeyBoard();

	//Key management functions
	void initKeyCodes();																									//Function that loads a vector with letter codes representing keys on the keyboard
	void initQKeyBoard();																									//Function that initialises the keys representing a QWERTY keyboard in their place and textures the keys (is only called the very first time the program is initialised)
	void initNewKeyBoard();																									//Function that initialises the keys according to the frequency by which they have been pressed (is called every time the program is started up after the first time)
	void initiateKeyBoard();																								//Initialises the keyboard depending on the branch of execution - whether the program has been used before or more than once
	void firstTimeInitiate();																								//Initialises they keyboard to QWERTY, the first time every the program is run
	void thereafterInitiate();
	
	//Key Input Functions
	bool pressQWERTY(sf::Vector2i inputPos, KeyOccurance keyPressed);														//Function that processes input on Qwerty keyboard - and will store the number of times that particular keys have been pressed
	void checkKeyPress();																									//Function that will iterate through all of the keys of the QWERTY keyboard layout and check whether any of the keys have been pressed, if they have the number of times the key has been pressed shall be incremented
	void checkInput();																										//Function that will check input for both QWERTY and new keyboards
	
	//Keyboard input/output functions
	void prepKeyPositions();																								//According to the value of the index a vector containing instances of keyPosition structs will contain the positions of the keys for that particular index
	void readFile();																										//Function that will read from a file on start up to determine the most used keys based on the user's history
	void writeFile();																										//Function to write to a file updating the number of times a particular key/letter has been pressed
	void sortKeys();																										//Sort the keys into descending order of appearance in the keyStatus vector based on their usage 


	//Rendering functions
	void renderKeyBoard();																									//Renders all of the keys on the keyboard in their designated place

	//Main function loop
	void mainFunc();																											//The main interaction function

	//Getters
	//std::vector<Key*>& getKeyboardKeys() { return keyboardKeys; };
	std::vector<KeyOccurance>& getKeyboardKeys() { return keyboardKeys; };

	//Setters

private:

	//Keyboard variables
	//Texture keyTextureSheet;																								//The sprite sheet used to texture the individual keys comprising the keyboard
	//std::vector<Key*> keyboardKeys;																						//A vector containing the keys that make up the keyboard
	std::vector<KeyOccurance> keyboardKeys;																					//A vector containing the characters ascribed to individual keys and the number of times they have been typed by the application user so far
	std::vector<keyTextCoords> keyTextVec;																					//A vector containing instances of keyTextCoords struct which contains the texture coordinates on the grid texture for a particular charcter
	std::vector<keyPosition> keyPositions;																					//A vector containing the index number indicating the letter popularity as well as the position coordinates of the associated index
	sf::Texture keyboardTexture;																							//An instance of the texture class which will be used to texture all of the keys on the keyboard
	
	//Input variable
	sf::Mouse pointInput;
	sf::Clock timer;																										//Timer to control when the input function should be called

	//Render variable
	sf::RenderWindow window;
	int noOfTimes = 2;																										//A variable to control which keyboard we are using - if 1, QWERTY, if 2 - a new keyboard layout this value is also written out to a file

	//End Program Button
	Button* endButt;
	
};

#endif