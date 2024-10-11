#ifndef _KEY_H_
#define _KEY_H_

//Standard Library Includes + SFML library includes
#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>
#include <math.h>
#include <string>
#include <sstream>
#include <thread>
#include <vector>
#include <SFML\Graphics.hpp>
#include <SFML\Config.hpp>
#include <SFML\Main.hpp>
#include <SFML\Window.hpp>
#include <SFML\OpenGL.hpp>
#include <SFML\System.hpp>


class Key
{
public:
		Key();
		~Key();

		void initKey(std::string textName, int textX, int textY, sf::Vector2f position);

		//Getters
		sf::Sprite getKey() { return theKey; };
		sf::Texture getText() { return keyText; };
		sf::Vector2f getKeyPos() { return keyPos; };

		//Setters
		void setKeyPos(sf::Vector2f keyNum);


private:
	sf::Sprite theKey;
	sf::Vector2f keyPos;																						//The position of the key on the keyboard dictates what texture is applied to it
	sf::Texture keyText;
};

#endif