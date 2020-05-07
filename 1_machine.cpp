#include <iostream>
#include "Game1.h"

void machine(counting &count) {
	cout << "There is a smartphone dropped in the floor.\nWait, that is not a smartphone!" << endl;
	count.f_machine = 1;
	cout << "//You can scan ANY words, translate them to your language!//\nOh okay, thank god this is in English. Lets try to convert this messege." << endl;
	cout << "--------------------------------------------------------------------------------------\n";
	cout << encryption("Escssjjdjsf the drawwnjfkdsnksdayyy mfecardojhrweiurjkebwk.", count) << endl;
	cout << "--------------------------------------------------------------------------------------\n";
	cout << "Hey, what is this? It doesn't help at all??\n";
	cout << "//Are you happy with this product? Pay only $5 for english tanslation by premium version!//\nI hate you so much." << endl;
	cout << "//You can also use the premium version by attaching the premium packet at the back side of this machine!//\nWell the messege says 'use the translator', I have no other choice.\n";

	if (count.f_dlc == 0) {
		cout << "Lets find this premium packet thing.\n";
	}
	else {
		cout << "Is the premium packet this black box?\n(Surprisingly the box perfectly fits.)";
		cout << "Lets convert this note then. I'll break this if it says anything about the second cartridge.\n";
		cout << encryption("Escape this place, use the card in the drawers! There is only one which can open the door.", count) << endl;
		cout << "Okay, I know how to get out.\n";
	}
}
