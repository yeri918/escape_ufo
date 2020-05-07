// GameApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Game2.h"
using namespace std;

int Game2()
{
	boxes box[49];
	int ammo = 2, off = 0;

	cout << "What is this now. An electric gate? And what is this board?\n\n";
	cout << "[Move the 'O's to shoot the core(&). You can also destroy 'O's with the shooter. You cannot move the 'X's]\n\n";
	cout << "Thats what is says... Okay, there are some buttons here. Seems like this 'gun' comes out from '|' sign \n";
	cout << "There are two bullets left.\n\n";

	initialscript(box);
	display(box);

	while (off != 1) {
		off = movement(box, ammo);
		if (off == 0 && ammo == 0) {
			initialscript(box);
			cout << "No, I failed!\n";
			cout << "Again, two bullets left.\n";
			ammo = 2;
		}
		display(box);
	}
	return 0;
}
