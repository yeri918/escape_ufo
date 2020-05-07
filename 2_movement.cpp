#include <iostream>
#include "Game2.h"
using namespace std;

int movement(boxes box[49], int &ammo) 
{
	long long int direction;
	int actualmove, condition, callcount = 0;
	boxes copy[49];

	for (int i = 0; i < 49; i++) {
		copy[i].position = box[i].position;
		copy[i].setting = box[i].setting;
	}
	cout << "-------------------------------------------------------" << endl;
	cout << "1. up     2. left     3. down     4. right     5. Shoot" << endl;
	cout << "-------------------------------------------------------" << endl;
	cin >> direction;
	if (direction < 10) {

	}
	for (int i = 0; i < 49; i++) {
		if (box[i].setting == 2) {
			switch (direction) {
			case 1: // move up
				actualmove = -7;
				if (trueornot(box, i, actualmove) == 1) {
					copy[i].setting = box[i + actualmove].setting;
					copy[i + actualmove].setting = box[i].setting;
				}
				break;
			case 2: // move left
				actualmove = -1;
				if (trueornot(box, i, actualmove) == 1) {
					copy[i].setting = box[i + actualmove].setting;
					copy[i + actualmove].setting = box[i].setting;
				}
				break;
			case 3: // move down
				actualmove = 7;
				if (trueornot(box, i, actualmove) == 1) {
					copy[i].setting = box[i + actualmove].setting;
					copy[i + actualmove].setting = box[i].setting;
				}
				break;
			case 4: // move right
				actualmove = 1;
				if (trueornot(box, i, actualmove) == 1) {
					copy[i].setting = box[i + actualmove].setting;
					copy[i + actualmove].setting = box[i].setting;
				}
				break;
			case 5: //shoot
				ammo--;
				cout << "\nThere is only " << ammo  << " bullet left." << endl;
				condition = shoot(box, ammo);
				if (condition == 1) {
					return condition;
				}
				return condition;
			default:
				if (callcount == 0) {
					cout << "There are only 5 buttons..." << endl;
					callcount += 1;
				}
				break;
			}
		}
	}
	for (int i = 0; i < 49; i++) {
		box[i].position = copy[i].position;
		box[i].setting = copy[i].setting;
	}
	return 0;
}

int shoot(boxes box[49], int& ammo) {
	while (ammo >= 0) {
		for (int i = 45; i > 0; i -= 7) {
			int obstacle = box[i].setting;
			switch (obstacle) {
			case 2:
				box[i].setting = 1;
				cout << "\n[BOOM]\n" << endl;
				cout << "Hmm... thats done.\n" << endl;
				return 0;
			case 5:
				box[i].setting = 1;
				cout << "\n[BOOOOOOOOM]" << endl;
				cout << "(It seems the core has been destroyed.)\n" << endl;
				cout << "This definetly destroyed this 'core'.\nPretty sure I can get out of this place now.\n" << endl;
				return 1;
			}
		}
	}
	if (ammo == 0) {
		cout << "Maybe I should start again. Hope I don't get messed up next time." << endl;
	}
	return 0;
}