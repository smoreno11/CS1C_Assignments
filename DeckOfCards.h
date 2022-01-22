#pragma once
#include "header.h"

class DeckOfCards
{
	public:
		DeckOfCards();
		~DeckOfCards();
	
		void initializeDeck(string deckArray[]);
		void perfectShuffle();
		void print();
		void compareDecks();

	private:
		const int numberOfCards = 52;
		const int HALF_DECK = 26;
		string initializedDeck[52];
		
		string halfDeckOne[26];
		string halfDeckTwo[26];
		string perfectShuffleDeck[52];
};

