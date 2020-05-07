#include <iostream>
#include "Game1.h"

void action(counting &count) 
{
	int choice;
	cout << "--------------------------------------------------------------------\n";
	cout << "(What should I check now...)\n";
	cout << "0. Machine        1. Wall        2. Bed        3. Desk        4.Bookshelf        5. Drawer        6. Door\n";
	cin >> choice;
	cout << "--------------------------------------------------------------------\n";
	switch (choice)
	{
	case 0:
		machine(count);
		break;
	case 1:
		wall(count);
		break;
	case 2:
		bed(count);
		break;
	case 3:
		table(count);
		break;
	case 4:
		bookshelf(count);
		break;
	case 5:
		cardfind(count, 33);
		break;
	case 6:
		door(count);
		break;
	default:
		cout << "Well, I have nothing else to do. I need to go out quick!\n";
		break;
	}
}
