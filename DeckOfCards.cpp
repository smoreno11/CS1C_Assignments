#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{

}

DeckOfCards::~DeckOfCards()
{

}

void DeckOfCards::initializeDeck(string deckArray[])
{
	for (int count = 0; count < 52; count++)
	{
		initializedDeck[count] = deckArray[count];
	}

}

void DeckOfCards::perfectShuffle()
{
	int adder;
	adder = 0;
	int index;
	index = 0;
	int splitz = 0;
	int splits = 0;

	while (adder < numberOfCards)
	{
		if (adder < HALF_DECK)
			halfDeckOne[adder] = initializedDeck[adder];
		else
		{
			if (adder == 26)
			{
				cout << endl;
				index = 0;
			}
			halfDeckTwo[index] = initializedDeck[adder];
			index++;
		}
		adder++;
	}
	

	for (int split = 0; split < numberOfCards; split++)
	{
		int remainder = split % 2;

		if (remainder == 0)
		{
			perfectShuffleDeck[split] = halfDeckOne[splits];
			splits++;
		}
		else
		{
			perfectShuffleDeck[split] = halfDeckTwo[splitz];
			splitz++;
		}
		remainder = 0;
	}

}

void DeckOfCards::print()
{
	std::cout << endl << endl;

	for (int count = 0; count < 26; count++)
		std::cout << perfectShuffleDeck[count] << " ";
		
}