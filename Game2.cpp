// GameApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Game2.h"
using namespace std;

int Game2()
{
	boxes box[25];
	int ammo = 2, off = 0;
	initialscript(box);
	display(box);

	while (off != 1) {
		off = movement(box, ammo);
		if (off == 0 && ammo == 0) {
			initialscript(box);
			ammo = 2;
		}
		display(box);
	}
	return 0;
}
