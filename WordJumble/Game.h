#pragma once

#include "Game.h"
#include <fstream>
#include <iostream>
#include "HTable.h"
#include "Timer.h"
#include "BST.h"


//#define TABLE_SIZE 4999;

class Game
{
private:
	unsigned int x;
	bool contPlay;
	bool correctGuess;
	unsigned int score;
	unsigned int level;

	string wordToGuess;
	string typedWord;
	string jumbledWord;
	string remainingLetters;

public:

	Game();
	~Game();

	Timer time;
	
	//Functions
	HTable<string> * hashPointer;
	BST<string> searchTree;
	void Play();
	void Update();
	void Render();
	void Load();
	void loadDictionary();
	void endRound();
	string jumbleString(string wordToJumble);

};