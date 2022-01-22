/******************************************************************************
 * AUTHOR      : Saul Moreno
 * ASSIGNMENT# : 1
 * CLASS       : CS1C
 * SECTION     : MW 7:30pm
 ******************************************************************************/

#pragma once
#include "header.h"

class DeckOfCards
{
	public:
		DeckOfCards();
		~DeckOfCards();
	
		void initializeDeck(std::string deckArray[]);
		void perfectShuffle();
		void print(std::string initialDeck[]);
		void compareDecks(std::string tempDeck[]);

	private:
		const int numberOfCards = 52;
		const int HALF_DECK = 26;
		std::string initializedDeck[52];
		std::string halfDeckOne[26];
		std::string halfDeckTwo[26];
		std::string perfectShuffleDeck[52];
		int adder; //Will break the deck into two smaller ones
		int index; //Once a card has been stored into the array, it will move to the next element
		int sortDeckOneIntoPerfectShuffle;
		int sortDeckTwoIntoPerfectShuffle;
		int perfectShuffleCount;
		int perfectShuffleInterator;
		
};

