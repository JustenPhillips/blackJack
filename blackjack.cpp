#include <iostream>
#include <string>
#include <ctime>
#include <limits>

using namespace std;

int getCard() 
{ 
    return rand() % 10 + 1; 
}

char readChar() 
{
	char c;
	cin >> c;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return c;
}

int main()
{
	//set srand to seed system clock
	//to generate random number
	srand((int)time(0));
	char yesno = 'y';

	do
	{
		int dealer = getCard();
		int first = getCard(), second = getCard();
		int total = first + second;

		if (yesno == 'y' || yesno == 'Y')
		{
			cout << "The dealer starts with a " << dealer << endl;
			cout << "Your first cards: " << first << ", " << second << endl;
			cout << "Total: " << total << endl;

			do
			{   
				    cout << "hit? (y/n): ";
				    yesno = readChar();
				    if (yesno == 'y' || yesno == 'Y')
    				{
					    int newCard = getCard();
					    total += newCard;

					    cout << "Card: " << newCard << endl;
					    cout << "Total: " << total << endl;

					    if (total > 21)
				    	{
						cout << "Bust" << endl;
						yesno = 'n';
						break;
					    }
					    else if(total == 21)
					    {
					    cout << "Blackjack" << endl;
					    }
					   
				    }
				    else if (yesno == 'n' || yesno == 'N')
			        {
			            
					//Dealer must take more cards if less than 17
					while (dealer < 17)
					{
						cout << "Dealer has a " << dealer << "..." << endl;
						char c;
						do {
							cout << "(c to continue) ";
							c = readChar();
						} while (c != 'c' && c != 'C');

						int newDealerCard = getCard();
						cout << "Dealer gets a " << newDealerCard << endl;
						dealer += newDealerCard;
						cout << "Total: " << dealer << endl;
					}

					//determine winner
					if (dealer == 21 && dealer != total)
						cout << "Lose" << endl;
					else if (dealer == total)
						cout << "Push" << endl;
					else if (dealer > 21 && total > dealer && total < 21)
						cout << "Win" << endl;
					else if (dealer > total && dealer <= 21)
						cout << "Lose" << endl;
					break;
				}
			} while (yesno != 'n' && yesno != 'N');
		}

		cout << "Would you like to play again? (y/n) : ";
		yesno = readChar();

	} while (yesno != 'n' && yesno != 'N');
	return 0;
}
