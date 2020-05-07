#include <iostream>
#include "Game1.h"

void cardfind(counting count, int place)
{
	int choice = 0;
	cout << encryption("Key Card Box", count) << endl;
	if (count.f_dlc != 0) {
		cout << "So this is where the key to the door is!\n";
		cout << "(There are drawers of number 0 to 66. Why 66? More importantly, I should choose from one of THEM?\n)";
		cout << "Time to choose. (What number should I open?) ";
		cin >> choice;
		while (choice < 0 || choice > 66) {
			cout << "(No, I cannot see the number.) Another number.";
			cin >> choice;
		}
		if (choice == place) {
			count.f_correct = 1;
		}
		count.f_card = 1;
	}
}