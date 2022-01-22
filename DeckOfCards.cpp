/******************************************************************************
 * AUTHOR      : Saul Moreno
 * ASSIGNMENT# : 1
 * CLASS       : CS1C
 * SECTION     : MW 7:30pm
 ******************************************************************************/

#include "DeckOfCards.h"

DeckOfCards::DeckOfCards()
{
	adder = 0;
	index = 0;
	sortDeckOneIntoPerfectShuffle = 0;
	sortDeckTwoIntoPerfectShuffle = 0;
	perfectShuffleInterator = 0;
	perfectShuffleCount = 0;	
}

DeckOfCards::~DeckOfCards()
{

}

void DeckOfCards::initializeDeck(std::string deckArray[])
{
	for (int count = 0; count < 52; count++)
	{
		initializedDeck[count] = deckArray[count];
	}
}

void DeckOfCards::perfectShuffle()
{

	/*This will take the deck and break into two smaller ones*/
	while (adder < numberOfCards)
	{
		if (adder < HALF_DECK)
			halfDeckOne[adder] = initializedDeck[adder];
		else
		{
			if (adder == 26)
			{
				std::cout << std::endl;
				index = 0;
			}
			halfDeckTwo[index] = initializedDeck[adder];
			index++;
		}
		adder++;
	}
	
	/*This takes the two splits decks and stores them into one array*/
	for (int split = 0; split < numberOfCards; split++)
	{
		int remainder = split % 2;

		if (remainder == 0)
		{
			perfectShuffleDeck[split] = halfDeckOne[sortDeckOneIntoPerfectShuffle];
			sortDeckOneIntoPerfectShuffle++;
		}
		else
		{
			perfectShuffleDeck[split] = halfDeckTwo[sortDeckTwoIntoPerfectShuffle];
			sortDeckTwoIntoPerfectShuffle++;
		}
		remainder = 0;
	}

	perfectShuffleCount++;
}

void DeckOfCards::print(std::string initialDeck[])
{
	std::cout << "This is the original deck:" << std::endl;
	for (int count = 0; count < numberOfCards; count++)
	{
		std::cout << initialDeck[count] << " ";
		if (count == 25)
			std::cout << std::endl;
	}
	
	std::cout << std::endl << std::endl << "This is the deck after the perfect shuffle:" << std::endl;
	for (int count = 0; count < 52; count++)
	{
		std::cout << perfectShuffleDeck[count] << " ";
		if (count == 25)
			std::cout << std::endl;
	}
}

void DeckOfCards::compareDecks(std::string tempDeck[])
{
	adder = 0;
	index = 0;
	sortDeckOneIntoPerfectShuffle = 0;
	sortDeckTwoIntoPerfectShuffle = 0;

	//while ((tempDeck[0] == perfectShuffleDeck[0]) && (tempDeck[25] != perfectShuffleDeck[25]))
	while ((tempDeck[1] != perfectShuffleDeck[1]) 
		&& (tempDeck[25] != perfectShuffleDeck[25]))
	{
		
		/*This will take the deck and break into two smaller ones*/
		while (adder < numberOfCards)
		{
			
			if (adder < HALF_DECK)
				halfDeckOne[adder] = perfectShuffleDeck[adder];
			else
			{
				if (adder == 26)
				{
					index = 0;
				}
				halfDeckTwo[index] = perfectShuffleDeck[adder];
				index++;
			}
			adder++;
		}

		/*This takes the two splits decks and stores them into one array*/
		for (int split = 0; split < numberOfCards; split++)
		{
			int remainder = split % 2;

			if (remainder == 0)
			{
				initializedDeck[split] = halfDeckOne[sortDeckOneIntoPerfectShuffle];
				sortDeckOneIntoPerfectShuffle++;
			}
			else
			{
				initializedDeck[split] = halfDeckTwo[sortDeckTwoIntoPerfectShuffle];
				sortDeckTwoIntoPerfectShuffle++;
			}
			remainder = 0;
		}

		/*Will store the new perfect shuffle deck into array*/
		for (int count = 0; count < 52; count++)
		{
			perfectShuffleDeck[count] = initializedDeck[count];
		}

		perfectShuffleInterator++;
		perfectShuffleCount++;	
		
		/*This resets the counters so the deck can perform the perfect shuffle again*/
		adder = 0;
		index = 0;
		sortDeckOneIntoPerfectShuffle = 0;
		sortDeckTwoIntoPerfectShuffle = 0;
		
	}// end while((tempDeck[1] != perfectShuffleDeck[1]) && (tempDeck[25] != perfectShuffleDeck[25]))

	std::cout << std::endl << std::endl << "This is the final deck:" << std::endl;

	for (int i = 0; i < 52; i++)
	{
		std::cout << perfectShuffleDeck[i] << " ";
		if (i == 25)
			std::cout << std::endl;
	}

	std::cout << std::endl << std::endl << "It took " << perfectShuffleCount 
		      << " perfect shuffles to restore back to the original deck." << std::endl;

}