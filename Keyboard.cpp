//Class interface
#include "Keyboard.h"

KeyBoard::KeyBoard()
	:window(sf::VideoMode(800, 400), "Keyboard Optimiser")
{
	keyboardTexture.loadFromFile("Letters.jpg");
	endButt = new Button;
	endButt->initButton("EndButton.jpg", 650, 350);
}

KeyBoard::~KeyBoard()
{
	keyboardKeys.empty();
	delete endButt;
}

void KeyBoard::initKeyCodes()
{
	//KeyOccurance tempOccurance;																			//Temporary struct to hold each key letter and load it into the vector
	//tempOccurance.noOfAppearances = 0;																	//Initially this number will be set to zero foar all keys
	//tempOccurance.character = "A";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "B";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "C";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "D";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "E";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "F";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "G";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "H";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "I";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "J";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "K";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "L";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "M";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "N";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "O";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "P";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "Q";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "R";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "S";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "T";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "U";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "V";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "W";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "X";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "Y";
	//keyStatus.push_back(tempOccurance);
	//tempOccurance.character = "Z";
	//keyStatus.push_back(tempOccurance);
}

void KeyBoard::prepKeyPositions()
{
	keyPosition tempKey;													//tempKey to contain index and associated position

	//First Key
	tempKey.index = 0;
	tempKey.correctPos = sf::Vector2f(388.0f, 164.0f);
	keyPositions.push_back(tempKey);
	
	tempKey.index = 1;
	tempKey.correctPos = sf::Vector2f(420.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 2;
	tempKey.correctPos = sf::Vector2f(452.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 3;
	tempKey.correctPos = sf::Vector2f(420.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 4;
	tempKey.correctPos = sf::Vector2f(356.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 5;
	tempKey.correctPos = sf::Vector2f(324.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 6;
	tempKey.correctPos = sf::Vector2f(356.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 7;
	tempKey.correctPos = sf::Vector2f(292.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 8;
	tempKey.correctPos = sf::Vector2f(260.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 9;
	tempKey.correctPos = sf::Vector2f(292.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 10;
	tempKey.correctPos = sf::Vector2f(484.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 11;
	tempKey.correctPos = sf::Vector2f(516.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 12;
	tempKey.correctPos = sf::Vector2f(484.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 13;
	tempKey.correctPos = sf::Vector2f(548.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 14;
	tempKey.correctPos = sf::Vector2f(580.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 15;
	tempKey.correctPos = sf::Vector2f(548.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 16;
	tempKey.correctPos = sf::Vector2f(228.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 17;
	tempKey.correctPos = sf::Vector2f(196.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 18;
	tempKey.correctPos = sf::Vector2f(228.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 19;
	tempKey.correctPos = sf::Vector2f(164.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 20;
	tempKey.correctPos = sf::Vector2f(132.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 21;
	tempKey.correctPos = sf::Vector2f(164.0f, 228.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 22;
	tempKey.correctPos = sf::Vector2f(644.0f, 164.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 23;
	tempKey.correctPos = sf::Vector2f(616.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 24;
	tempKey.correctPos = sf::Vector2f(680.0f, 100.0f);
	keyPositions.push_back(tempKey);

	tempKey.index = 25;
	tempKey.correctPos = sf::Vector2f(100.0f, 100.0f);
	keyPositions.push_back(tempKey);
}

void KeyBoard::initQKeyBoard()
{
	//Q Key
	KeyOccurance qKey;
	qKey.associateKey = new Key;
	qKey.associateKey->initKey("Letters.jpg", 256, 128, sf::Vector2f(100.0f, 100.0f));
	qKey.character = "Q";
	qKey.noOfPresses = 0;
	keyboardKeys.push_back(qKey);

	//W Key
	KeyOccurance wKey;
	wKey.associateKey = new Key;
	wKey.associateKey->initKey("Letters.jpg", 256, 192, sf::Vector2f(165.0f, 100.0f));
	wKey.character = "W";
	wKey.noOfPresses = 0;
	keyboardKeys.push_back(wKey);

	//E Key
	KeyOccurance eKey;
	eKey.associateKey = new Key;
	eKey.associateKey->initKey("Letters.jpg", 256, 0, sf::Vector2f(230.0f, 100.0f));
	eKey.character = "E";
	eKey.noOfPresses = 0;
	keyboardKeys.push_back(eKey);

	//R Key
	KeyOccurance rKey;
	rKey.associateKey = new Key;
	rKey.associateKey->initKey("Letters.jpg", 320, 128, sf::Vector2f(295.0f, 100.0f));
	rKey.character = "R";
	rKey.noOfPresses = 0;
	keyboardKeys.push_back(rKey);

	//T Key
	KeyOccurance tKey;
	tKey.associateKey = new Key;
	tKey.associateKey->initKey("Letters.jpg", 64, 192, sf::Vector2f(360.0f, 100.0f));
	tKey.character = "T";
	tKey.noOfPresses = 0;
	keyboardKeys.push_back(tKey);

	//Y Key
	KeyOccurance yKey;
	yKey.associateKey = new Key;
	yKey.associateKey->initKey("Letters.jpg", 0, 256, sf::Vector2f(425.0f, 100.0f));
	yKey.character = "Y";
	yKey.noOfPresses = 0;
	keyboardKeys.push_back(yKey);

	//U Key
	KeyOccurance uKey;
	uKey.associateKey = new Key;
	uKey.associateKey->initKey("Letters.jpg", 128, 192, sf::Vector2f(490.0f, 100.0f));
	uKey.character = "U";
	uKey.noOfPresses = 0;
	keyboardKeys.push_back(uKey);

	//I Key
	KeyOccurance iKey;
	iKey.associateKey = new Key;
	iKey.associateKey->initKey("Letters.jpg", 128, 64, sf::Vector2f(555.0f, 100.0f));
	iKey.character = "I";
	iKey.noOfPresses = 0;
	keyboardKeys.push_back(iKey);

	//O Key
	KeyOccurance oKey;
	oKey.associateKey = new Key;
	oKey.associateKey->initKey("Letters.jpg", 128, 128, sf::Vector2f(620.0f, 100.0f));
	oKey.character = "O";
	oKey.noOfPresses = 0;
	keyboardKeys.push_back(oKey);

	//P Key
	KeyOccurance pKey;
	pKey.associateKey = new Key;
	pKey.associateKey->initKey("Letters.jpg", 192, 128, sf::Vector2f(685.0f, 100.0f));
	pKey.character = "P";
	pKey.noOfPresses = 0;
	keyboardKeys.push_back(pKey);

	//A Key
	KeyOccurance aKey;
	aKey.associateKey = new Key;
	aKey.associateKey->initKey("Letters.jpg", 0, 0, sf::Vector2f(132.0f, 165.0f));
	aKey.character = "A";
	aKey.noOfPresses = 0;
	keyboardKeys.push_back(aKey);
	
	//S Key
	KeyOccurance sKey;
	sKey.associateKey = new Key;
	sKey.associateKey->initKey("Letters.jpg", 0, 192, sf::Vector2f(197.0f, 165.0f));
	sKey.character = "S";
	sKey.noOfPresses = 0;
	keyboardKeys.push_back(sKey);

	//D Key
	KeyOccurance dKey;
	dKey.associateKey = new Key;
	dKey.associateKey->initKey("Letters.jpg", 192, 0, sf::Vector2f(262.0f, 165.0f));
	dKey.character = "D";
	dKey.noOfPresses = 0;
	keyboardKeys.push_back(dKey);
	
	//F Key
	KeyOccurance fKey;
	fKey.associateKey = new Key;
	fKey.associateKey->initKey("Letters.jpg", 320, 0, sf::Vector2f(327.0f, 165.0f));
	fKey.character = "F";
	fKey.noOfPresses = 0;
	keyboardKeys.push_back(fKey);

	//G Key
	KeyOccurance gKey;
	gKey.associateKey = new Key;
	gKey.associateKey->initKey("Letters.jpg", 0, 64, sf::Vector2f(392.0f, 165.0f));
	gKey.character = "G";
	gKey.noOfPresses = 0;
	keyboardKeys.push_back(gKey);

	//H Key
	KeyOccurance hKey;
	hKey.associateKey = new Key;
	hKey.associateKey->initKey("Letters.jpg", 64, 64, sf::Vector2f(457.0f, 165.0f));
	hKey.character = "H";
	hKey.noOfPresses = 0;
	keyboardKeys.push_back(hKey);

	//J Key
	KeyOccurance jKey;
	jKey.associateKey = new Key;
	jKey.associateKey->initKey("Letters.jpg", 192, 64, sf::Vector2f(522.0f, 165.0f));
	jKey.character = "J";
	jKey.noOfPresses = 0;
	keyboardKeys.push_back(jKey);

	//K Key
	KeyOccurance kKey;
	kKey.associateKey = new Key;
	kKey.associateKey->initKey("Letters.jpg", 256, 64, sf::Vector2f(587.0f, 165.0f));
	kKey.character = "K";
	kKey.noOfPresses = 0;
	keyboardKeys.push_back(kKey);

	//L Key
	KeyOccurance lKey;
	lKey.associateKey = new Key;
	lKey.associateKey->initKey("Letters.jpg", 320, 64, sf::Vector2f(652.0f, 165.0f));
	lKey.character = "L";
	lKey.noOfPresses = 0;
	keyboardKeys.push_back(lKey);

	//Z Key
	KeyOccurance zKey;
	zKey.associateKey = new Key;
	zKey.associateKey->initKey("Letters.jpg", 64, 256, sf::Vector2f(165.0f, 230.0f));
	zKey.character = "Z";
	zKey.noOfPresses = 0;
	keyboardKeys.push_back(zKey);

	//X Key
	KeyOccurance xKey;
	xKey.associateKey = new Key;
	xKey.associateKey->initKey("Letters.jpg", 320, 192, sf::Vector2f(230.0f, 230.0f));
	xKey.character = "X";
	xKey.noOfPresses = 0;
	keyboardKeys.push_back(xKey);

	//C Key
	KeyOccurance cKey;
	cKey.associateKey = new Key;
	cKey.associateKey->initKey("Letters.jpg", 128, 0, sf::Vector2f(295.0f, 230.0f));
	cKey.character = "C";
	cKey.noOfPresses = 0;
	keyboardKeys.push_back(cKey);

	//V Key
	KeyOccurance vKey;
	vKey.associateKey = new Key;
	vKey.associateKey->initKey("Letters.jpg", 192, 192, sf::Vector2f(360.0f, 230.0f));
	vKey.character = "V";
	vKey.noOfPresses = 0;
	keyboardKeys.push_back(vKey);

	//B Key
	KeyOccurance bKey;
	bKey.associateKey = new Key;
	bKey.associateKey->initKey("Letters.jpg", 64, 0, sf::Vector2f(425.0f, 230.0f));
	bKey.character = "B";
	bKey.noOfPresses = 0;
	keyboardKeys.push_back(bKey);

	//N Key
	KeyOccurance nKey;
	nKey.associateKey = new Key;
	nKey.associateKey->initKey("Letters.jpg", 64, 128, sf::Vector2f(490.0f, 230.0f));
	nKey.character = "N";
	nKey.noOfPresses = 0;
	keyboardKeys.push_back(nKey);

	//M Key
	KeyOccurance mKey;
	mKey.associateKey = new Key;
	mKey.associateKey->initKey("Letters.jpg", 0, 128, sf::Vector2f(555.0f, 230.0f));
	mKey.character = "M";
	mKey.noOfPresses = 0;
	keyboardKeys.push_back(mKey);
}

void KeyBoard::initNewKeyBoard()
{
	for (int i = 0; i < keyboardKeys.size(); i++)
	{
		keyboardKeys[i].associateKey->setKeyPos(keyPositions[i].correctPos);
	}
}

void KeyBoard::initiateKeyBoard()
{
	if (noOfTimes == 1)
	{
		firstTimeInitiate();
	}
	else
	{
		thereafterInitiate();
	}
}

void KeyBoard::firstTimeInitiate()
{
	initQKeyBoard();
	initKeyCodes();
}

void KeyBoard::thereafterInitiate()
{
	prepKeyPositions();																					//Set up the vector containing index's of the keyboardKeys vector and the corresponding positions
	initQKeyBoard();
	readFile();
	//Then sort the keyboard keys into order of precedence with 0 being most common and 25 being least
	sortKeys();
	//Reset the position of the keys according to their index in the keyboardKeys vector
	initNewKeyBoard();
}

bool KeyBoard::pressQWERTY(sf::Vector2i inputPos, KeyOccurance keyPressed)
{
	if ((inputPos.x > keyPressed.associateKey->getKeyPos().x)&&
		(inputPos.x < keyPressed.associateKey->getKeyPos().x+64)&&
		(inputPos.y > keyPressed.associateKey->getKeyPos().y)&&
		(inputPos.y < keyPressed.associateKey->getKeyPos().y+64))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void KeyBoard::checkKeyPress()
{
	if (pointInput.isButtonPressed(sf::Mouse::Button::Left)== true)
	{
		for (int i = 0; i < keyboardKeys.size(); i++)
		{
			//If pressQWERTY increment the noOfPresses
			if(pressQWERTY(pointInput.getPosition(window), keyboardKeys[i]))
			{
				keyboardKeys[i].noOfPresses++;
				std::cout << " "<< keyboardKeys[i].character << " was pressed\n";
				std::cout << " Pointer X: " << pointInput.getPosition(window).x << " Pointer Y: " << pointInput.getPosition(window).y<<"\n";
				std::cout << " Key X: " << keyboardKeys[i].associateKey->getKeyPos().x << " Key Y: " << keyboardKeys[i].associateKey->getKeyPos().y<<"\n";
			}
		}
		if (endButt->controlButton(pointInput.getPosition(window)))							//If the end button is pressed
		{
			writeFile();																	//Write the key popularity to a file
		}
	}
}

void KeyBoard::checkInput()
{
	if (timer.getElapsedTime()>sf::milliseconds(300))
	{
		checkKeyPress();
		timer.restart();
	}
}

void KeyBoard::readFile()
{
	std::ifstream aFile;																												//Ifstream to open and access the contents of a file
	//std::stringstream data;																											//String stream to convert the char contents of the file to a string
	std::string alldata;
	std::string letter;																													//String to hold each letter contained in the string stream
	aFile.open("KeyPopularity.txt");
	while (std::getline(aFile, alldata))
	{
		//char popularity[3];																											//Char buffer to store the contents of an individual line
		//aFile.getline(popularity, 3);																									//Load a line from the text file into popularity char buffer
		//data << popularity;																											//Load the contents of popularity buffer into stringstream
		//data >> alldata;																												//Load the contents of stringstream (ie popularity buffer) into string alldata
		letter = alldata[0];
		for (int i = 0; i < keyboardKeys.size(); i++)
		{
			if (keyboardKeys[i].character==letter)																						//If the letter extracted from the line in the text file is equal to the letter in the keyOccurance instance
			{
				keyboardKeys[i].noOfPresses = int(alldata[2]-'0');																		//Load in the number of times that key has already been pressed into the key occurance representing it
			}
			std::cout << letter << " ";
			std::cout << int(alldata[2])-'0' << "\n";
		}
	}
	aFile.clear();																														//Once the popularity of each individual key has been loaded into each keyOccurance, clear the contents of the text file
}

void KeyBoard::writeFile()
{
	std::ofstream aFile;
	aFile.open("KeyPopularity.txt");
	for (int i = 0; i < keyboardKeys.size(); i++)
	{
		aFile << keyboardKeys[i].character << ":" << keyboardKeys[i].noOfPresses << "\n";		//Write out the popularity of each key to the file
	}
	aFile.close();
}

void KeyBoard::sortKeys()
{
	for (int i = 0; i < keyboardKeys.size(); i++)
	{
		for (int j = 0; j < keyboardKeys.size(); j++)
		{
			if (keyboardKeys[i].noOfPresses>keyboardKeys[j].noOfPresses)						//If the keyboardKeys[i] appears less than the keyboardKeys[j]
			{
				KeyOccurance tempOne;
				KeyOccurance tempTwo;
				tempOne = keyboardKeys[i];
				tempTwo = keyboardKeys[j];
				keyboardKeys[i] = tempTwo;														//Swap the keys
				keyboardKeys[j] = tempOne;
			}
		}
	}
}

void KeyBoard::renderKeyBoard()
{
	//Draw all of the keyboard keys
	for (int i = 0; i < keyboardKeys.size(); i++)
	{
		window.draw(keyboardKeys[i].associateKey->getKey());
	}
	window.draw(endButt->getButton());

}

void KeyBoard::mainFunc()
{
	//Enter main program loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//Perform duties
		checkInput();

		//Render everything
		window.clear();
		renderKeyBoard();
		window.display();
	}

	if (noOfTimes == 1)
	{
		noOfTimes++;
	}
}

