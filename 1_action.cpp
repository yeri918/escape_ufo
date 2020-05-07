#include <iostream>
#include "Game1.h"

void introdialog(counting count)
{
	cout << "Ummmmmm............\n";
	cout << "Huh? What in the world...?\n";
	cout << endl;
	cout << "Where is this place? No no, WHAT is this place?\n";
	cout << "Oh, there is a memo here... And I cannot read most of them. Its in some kind of a weird language...\n";
	cout << "_____________________________________________________________\n" << encryption("Escape this place, use the card in the drawers! There is only one which can open the door.", count) << endl;
	cout << " ...Translate this using the machine\n_____________________________________________________________\n";
	cout << "...Translate this using the machine?\n";
	cout << "Well then, I need to find the machine first.\n";
}

void action(counting &count) 
{
	int choice;
	cout << "\n";
	cout << "(What should I check now...)\n";
	cout << "1. Machine        2. Bed        3. Desk        4. Drawer        5. Door\n";
	cin >> choice;
	cout << "\n";
	switch (choice)
	{
	case 1:
		machine(count);
		break;
	case 2:
		cout << "A Buzz Lightyear Blanket. What an odd choice.\n";
		break;
	case 3:
		table(count);
		break;
	case 4:
		cardfind(count);
		break;
	case 5:
		door(count);
		break;
	default:
		cout << "Well, I have nothing else to do. I need to go out quick!\n";
		break;
	}
}