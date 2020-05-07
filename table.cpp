#include <iostream>
#include "Game1.h"

void table(counting &count) 
{
	int counter = count.f_fan, choice = 0;
	switch (counter) 
	{
	case 0:
		cout << "A very messy table. There are not much things that I would like to touch.\n";
		cout << "1. Dice          2. Remote controller          3. Back";
		cin >> choice;
		if (choice == 1) {
			cout << "A pair of dice. It is stuck on the table. A dark stain is between them.\n";
			cout << "The numbers would be:" << endl;
		}
		else if (choice == 2) {
			cout << "Huh, there is a red buttone there. (Click!)\n";
			cout << "WOOOOOOOOOOOSH\n";
			cout << "Oh my, didn't know this room had such strong fan. Everything is out of their position!\n";
			cout << "I'm deninitly not touching this again.\n";
			count.f_fan = 1;
		}
		break;
	case 1:
		cout << "All the objects except for the dice are away. The dice are still stuck.\nThere is a '+' mark between the dice. What does that mean?\n";
		break;
	}
}