#include "header.h"
#include "DeckOfCards.h"

int main()
{
	string deckArray[52] = { "C Ace", "C King", "C Queen", "Club Jester", "Club 10",
								"Club 9", "Club 8", "Club 7", "Club 6", "Club 5", "Club 4", "Club 3",
								"Club 2", "Diamond Ace", "Diamond King", "Diamond Queen", "Diamond Jester",
								"Diamond 10", "Diamond 9", "Diamond 8", "Diamond 7", "Diamond 6", "Diamond 5",
								"Diamond 4", "Diamond 3", "Diamond 2", "Hearts Ace", "Hearts King", "Hearts Queen",
								"Hearts Jester", "Hearts 10", "Hearts 9", "Hearts 8", "Hearts 7", "Hearts 6", "Hearts 5",
								"Hearts 4", "Hearts 3", "Hearts 2", "Spade Ace", "Spade King", "Spade Queen", "Spade Jester",
								"Spade 10", "Spade 9", "Spade 8", "Spade 7", "Spade 6", "Spade 5", "Spade 4", "Spade 3", "Spade" };
    
    DeckOfCards shuffle;
    //shuffle.initializeDeck(deckArray);
	shuffle.print();
}


