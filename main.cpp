/******************************************************************************
 * AUTHOR      : Saul Moreno
 * ASSIGNMENT# : 1
 * CLASS       : CS1C
 * SECTION     : MW 7:30pm
 ******************************************************************************/

#include "header.h"
#include "DeckOfCards.h"

int main()
{
	std::string deckArray[52] = { "CAce", "CKing", "CQueen", "CJester", "C10",
								"C9", "C8", "C7", "C6", "C5", "C4", "C3",
								"C2", "DAce", "DKing", "DQueen", "DJester",
								"D10", "D9", "D8", "D7", "D6", "D5",
								"D4", "D3", "D2", "HAce", "HKing", "HQueen",
								"HJester", "H10", "H9", "H8", "H7", "H6", "H5",
								"H4", "H3", "H2", "SAce", "SKing", "SQueen", "SJester",
								"S10", "S9", "S8", "S7", "S6", "S5", "S4", "S3", "S2" };
    
    DeckOfCards shuffle;

    shuffle.initializeDeck(deckArray);
	shuffle.perfectShuffle();
	shuffle.print(deckArray);
	shuffle.compareDecks(deckArray);


}



