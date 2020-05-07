#include <iostream>
#include "Game1.h"

void machine(counting& count) 
{
	if (count.f_machine != 0) {
		cout << "Just an empty floor.\n";
		return;
	}
	
	char cutline;
	cout << "There is a smartphone dropped in the floor.\nWait, that is not a smartphone!\n\n";
	count.f_machine = 1;
	cout << "[You can scan ANY words, translate them to your language!]\n\nOh okay, thank god this is in English. Lets try to convert this messege.\n\n";
	cout << "[Type anything to translate!]";
	cin >> cutline;
	cout << "\n" << "{" << encryption("Escape this place, use the card in the drawers! There is only one which can open the door.", count) << "}\n" << "\n";
	cout << "\nHey, what is this? It doesn't help at all??\n\n";
	cout << "[Are you happy with this product? Pay only $5 for english tanslation by premium version!]\n";
	cout << "[You can also use the premium version by attaching the premium packet at the back side of this machine!]\n\n";

	if (count.f_dlc == 0) {
		cout << "Well, the only way to convert this note is using this...I guess.\n";
		cout << "Lets find this premium packet thing.\n\n";
		cout << "[Type anything to continue.]";
		cin >> cutline;
	}
	else {
		cout << "Is the premium packet this black box?\n(Surprisingly the box perfectly fits.)\n";
		cout << "Lets convert this note then. I'll break this if it says anything about the second cartridge.\n";
		cout << encryption("Escape this place, use the card in the drawers! There is only one which can open the door.", count) << endl;
		cout << "Okay, I know how to get out.\n\n";
		cout << "[Type anything to continue.]\n";
		cin >> cutline;
	}
}

void table(counting &count) 
{
	int choice = 0;
	cout << "A very messy table. There are not much things that I would like to touch.\n";
	cout << "1. Dice          2. Bookshelf        3. A Black box        4. Back";
	cin >> choice;
	cout << "\n";

	switch (choice) 
	{
	case 1:
		cout << "A pair of dice. It is stuck on the table. A dark stain is between them.\n";
		cout << "The numbers would be:" << count.place/10 << " " << count.place%10 << endl;
		break;
	case 2:
		cout << "A huge bookshelf is attached next to the table.\nOf course they are all in alien language.\n";
		if (count.f_machine == 1) 
		{
			cout << "Now I have a translator, am I be able to translate them?\n\n";
			cout << encryption("The dice\nIs th\nE Key nu\nMber\n", count) << "\n" << endl;;
			if (count.f_dlc == 0) {
				cout << "I cannot translate this as well??\n\n";
				cout << "[Are you happy with this product? Pay only $5 for english tanslation by premium version!]\n";
				cout << "[You can also use the premium version by attaching the premium packet at the back side of this machine!]\n\n";
				cout << "Urggghhhhh!!! Enough already!\n";
			}
			else {
				cout << "Strange book titles. Maybe not for this language.\n";
			}
		}
		break;
	case 3:
		cout << "(A small, black box. Looks like a vintage game cartridge.)\n";
		cout << "(Written 'Translator Premium Version' at the back.)\n\n";
		if (count.f_machine == 1) {
			cout << "So the machine will finally translate to English now, right?\n";
		}
		else {
			cout << "I have no idea what is that for.\n";
		}
		count.f_dlc = 1;
		break;
	default:
		cout << "All of them are just suspicious. I shouldn't touch anything.\n";
		break;
	}
}

void cardfind(counting& count)
{
	int choice = 0;
	cout << encryption("Key Card Box", count) << endl;
	if (count.f_dlc == 0) {
		cout << "\nSomething is written on the drawer. I don't recognize it." << endl;
	}
	if (count.f_dlc != 0) {
		cout << "So this is where the key to the door is!\n";
		cout << "(There are drawers of number 0 to 66. Why 66? More importantly, I should choose from one of THEM?\n)";
		cout << "Time to choose. (What number should I open?) ";
		cin >> choice;
		while (choice < 0 || choice > 66) {
			cout << "(No, I cannot see the number.) Another number.";
			cin >> choice;
		}
		if (choice == count.place) {
			count.f_correct = 1;
		}
		count.f_card = 1;
	}
}

void door(counting& count)
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
			cout << "//ACCESS DENIED. NOT ENOUGH PERMISSION//" << endl;
			cout << "Need to find a new card, I guess.\n";
		}
		break;
	default:
		cout << "Lets find a key first." << endl;
		break;
	}

}