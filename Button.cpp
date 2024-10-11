//Luke Milburn - 2015
#include "Button.h"
Button::Button()
{
	textXCoord = 0;
	textYCoord = 0;
	isButtonVis = true;																									//The button is set to be visible by default
}

Button::~Button()
{

}

void Button::initButton(const std::string buttonFile, float xPos, float yPos)
{
	position.x = xPos;
	position.y = yPos;
	sf::IntRect textRect;
	textRect = sf::IntRect(textXCoord, textYCoord, 100, 35);

	//No need to correct the texture image as no part of the button texture image will have a background colour
	buttonTexture.loadFromFile(buttonFile);																				//Load the button texture sprite sheet image

	theButton.setTexture(buttonTexture);																				//Apply the sprite sheet as a texture to the button sprite
	theButton.setTextureRect(/*sf::IntRect(textXCoord, textYCoord, 100, 35)*/textRect);									//Apply the off button image as a texture to the button sprite
	theButton.setColor(sf::Color(255, 255, 255, 255));																	//Make the button sprite totally opaque
	theButton.setPosition(position);																					//Set the button to the correct position in relation to the menu
}

void Button::buttonOff()
{
	textXCoord = 0;
	textYCoord = 0;
	theButton.setTextureRect(sf::IntRect(textXCoord, textYCoord, 100, 35));												//Apply the button texture at the top of button sprite sheet to the button sprite as that is the one that represents an unpressed button
}

void Button::buttonPressed()
{
	textXCoord = 0;
	textYCoord = 35;
	theButton.setTextureRect(sf::IntRect(textXCoord, textYCoord, 100, 35));												//Apply the button texture at the bottom of the button sprite sheet to the button sprite as that is the one that represents a pressed button	
}

bool Button::controlButton(sf::Vector2i pointerPos)
{
	if ((pointerPos.x > int(position.x))																				//If the pointer having been pressed falls over the button
		&& (pointerPos.x < int(position.x + 100.0))
		&& (pointerPos.y > int(position.y))
		&& (pointerPos.y < int(position.y + 35.0)))
	{
		buttonPressed();																								//Press Button
		return true;
	}
	else
	{
		buttonOff();
		return false;
	}
}

void Button::setVisibility(bool isVisible)
{
	isButtonVis = isVisible;
}
