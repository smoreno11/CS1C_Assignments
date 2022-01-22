#include "header.h"
#include "DeckOfCards.h"

int main()
{
	string deckArray[52] = { "C Ace", "C King", "C Queen", "C Jester", "C 10",
								"C 9", "C 8", "C 7", "C 6", "C 5", "C 4", "C 3",
								"C 2", "D Ace", "D King", "D Queen", "D Jester",
								"D 10", "D 9", "D 8", "D 7", "D 6", "D 5",
								"D 4", "D 3", "D 2", "H Ace", "H King", "H Queen",
								"H Jester", "H 10", "H 9", "H 8", "H 7", "H 6", "H 5",
								"H 4", "H 3", "H 2", "S Ace", "S King", "S Queen", "S Jester",
								"S 10", "S 9", "S 8", "S 7", "S 6", "S 5", "S 4", "S 3", "S 2" };
    
    DeckOfCards shuffle;

	for (int count = 0; count < 52; count++)
		cout << deckArray[count] << " ";

    shuffle.initializeDeck(deckArray);
	shuffle.perfectShuffle();
	shuffle.print();



}



