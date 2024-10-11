//Framework includes
#include "Key.h"


Key::Key()
{

}

Key::~Key()
{

}

void Key::initKey(std::string textName, int textX, int textY, sf::Vector2f position)
{
	//sf::Texture keyText = allTextures;
	//theKey.setTexture(keyText);
	//theKey.setTexture(allTextures);
	keyText.loadFromFile(textName);
	theKey.setTexture(keyText);
	theKey.setTextureRect(sf::IntRect(textX, textY, 64, 64));
	theKey.setColor(sf::Color(255, 255, 255, 255));
	setKeyPos(position);
}

void Key::setKeyPos(sf::Vector2f keyNum)
{
	keyPos = keyNum;
	theKey.setPosition(keyPos);
}