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
		std::cout << deckArray[count] << " ";
	}

}

void DeckOfCards::print()
{
	for (int count = 0; count < 52; count++)
		std::cout << deckArray[count] << " ";
}