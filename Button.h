//Luke Milburn - 2015
#ifndef _BUTTON_H_
#define _BUTTON_H_

//Standard library and SFML library includes
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <Windows.h>
#include <SFML\Graphics.hpp>
#include <SFML\Config.hpp>
#include <SFML\Main.hpp>
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>
#include <SFML\System.hpp>

class Button
{
public:

	//Functions
	Button();																									//Constructor
	~Button();																									//Destructor

	//Functions that manage input
	void initButton(const std::string buttonFile, float xPos, float yPos);										//Function that will load the button's attributes such as the texture of the button and the button functionality
	void buttonOff();																							//Function to render the button sprite with unpressed texture applied
	void buttonPressed();																						//Function to render the button sprite with the pressed texture applied
	bool controlButton(sf::Vector2i pointerPos);																//Function to control the display of the button dependent on the position of the pointer

	//Getters
	sf::Vector2f getPosition(){ return position; };																//Getter function to return the position of the pointer stored in x and y coordinate integers
	sf::Sprite getButton(){ return theButton; };																//Getter function to return the button sprite for rendering
	bool getVisibility() { return isButtonVis; };																//Getter function to return the boolean controlling whether the button is rendered or not

	//Setters
	void setVisibility(bool isVisible);																			//Sets the boolean controlling whether the button is visible or not

private:

	//Button position and representation variables
	sf::Texture buttonTexture;
	sf::Sprite theButton;																						//The sprite representing a button on a menu controlling the actions of a character
	sf::Vector2f position;																						//The position of the button on screen and in relation to the menu
	int textXCoord, textYCoord;																					//The texture coordinates of the sprite image being applied to the button sprite
	bool isButtonVis;																							//Boolean variable controlling whether the button is invisible or not
	


	




	//Framework Class Variables

};

#endif