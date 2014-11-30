// nguy1952 Danh Nguyen
//leixx080 Rong Lei

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void displaycard (int hand[], int cards);

class DeckOfCards
{ 
	public:
		DeckOfCards()
		{
			nextcard = 0;
			for(int i = 0; i< 52; i++)
			{
				shuffled[i] = i;
			}
			shuffle();
			
		}
	
		int dealCard();
		void shuffle();
	
	private:
		int shuffled[52];
		int nextcard;
	
};

int main()
{
  int hand[4];

  
  
  displaycard(hand, 13);
  

	
}



int DeckOfCards::dealCard()
{
	  nextcard++;
	  return shuffled[nextcard];
	 
	
}

void DeckOfCards::shuffle()
{
	for(int i = 51; i >= 1; i--)
	{
	  srand(time(0));
	  int j = rand() % i + 1;
	  int temp = shuffled[j];
	  shuffled[j] = shuffled[i];
	  shuffled[i] = temp;
	}
}

void displaycard (int hand[], int cards)
{
	DeckOfCards Deck;
	
	for(int i = 0; i < cards; i++)
    {
		for(int j = 0; j < 4; j++)
		{
			
			hand[j] = Deck.dealCard() % 13 + 1;
			switch(hand[j])
			{
				case 1:
					cout << 'A' << "\t";
					break;
				
				case 11:
					cout << 'J' << "\t";
					break;
				
				case 12:
					cout << 'Q' << "\t";
					break;
				
				case 13:
					cout << 'K' << "\t";
					break;
				
				default:
					cout << hand[j] << "\t";
					break;
				
			}
		}
		cout << endl;
    }
}
