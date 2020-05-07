#include <iostream>
#include "Game1.h"
using namespace std;

void door(counting &count)
{
	int counter = count.f_card;
	cout << "This is the door. This must be the way out.\n";
	switch (counter)
	{
	case 0:
		cout << "Awww, it needs a card to open!\n";
		break;
	case 1:
		cout << "I do have a card, hope this would work.\n";
		if (count.f_correct == 1) {
			cout << "//ACCESS GRANTED. PLEASE GO TO THE NEXT...(bzzt)//" << endl;
			cout << "Go to what? Well the door is opened so. I can go out now!\n";
			count.f_open = 1;
		}
		else {
			cout << "//ACCESS DENIED. NOT ENOUGHT PERMISSION//" << endl;
			cout << "Need to find a new card, I guess.\n";
		}
	default:
		cout << "Lets find a key first." << endl;
		break;
	}

}
