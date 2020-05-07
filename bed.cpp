#include <iostream>
#include "Game1.h"

void bed(counting &count) 
{
	int counter = count.f_fan;
	int choice;
	switch (counter)
	{
	case 0:
		cout << "Surprisingly a normal single bed in a sci-fi room. I like the Buzz Lightyear blanket.\n";
		break;
	case 1:
		cout << "Nothing strange, obviously... Still, I wish I can take the blanket.\n";
		cin;
		cout << "'Clack!'" << endl;
		cin;
		cout << "Wait...what is that sound?\n1. Check under the bed.          2. Just leave it.\n";
		cin >> choice;
		if (choice == 1 && count.f_machine != 0) {
			cout << "(You found a black game catridge.)\nDLC pack? Is this for the translator?\n(Surprisingly it perfectly fits.)\n";
			count.f_dlc = 1;
			cout << "Lets convert this note then. I'll break this if it says anything about the second cartridge.\n";
			cout << encryption("Escape this place, use the card in the drawers! There is only one which can open the door.", count) << endl;
			cout << "Okay, I know how to get out.\n";
		}
		else if (choice == 1) {
			cout << "(You found a black game catridge.)\nDLC pack? What is this for?\n";
			count.f_dlc = 1;
		}
		else {
			cout << "Maybe its just a mouse...or something else. Who cares?\n";
		}
		break;
	default:
		bed(count);
		break;
	}
}