#include <iostream>
#include "Game2.h"

using namespace std;

int movement(boxes box[25], int &ammo) 
{
	int direction, actualmove, condition;
	int temp;
	cout << "1. up     2. left     3. down     4. right     5. Shoot" << endl;
	cin >> direction;

	for (int i = 0; i < 49; i++) {
		if (box[i].setting == 2) {
			switch (direction) {
			case 1: // move up
				actualmove = -7;
				if (trueornot(box, i, actualmove) == 1) {
					temp = box[i].setting;
					box[i].setting = box[i + actualmove].setting;
					box[i + actualmove].setting = temp;
				}
				break;
			case 2: // move left
				actualmove = -1;
				if (trueornot(box, i, actualmove) == 1) {
					temp = box[i].setting;
					box[i].setting = box[i + actualmove].setting;
					box[i + actualmove].setting = temp;
				}
				break;
			case 3: // move down
				actualmove = 7;
				if (trueornot(box, i, actualmove) == 1) {
					temp = box[i].setting;
					box[i].setting = box[i + actualmove].setting;
					box[i + actualmove].setting = temp;
				}
				break;
			case 4: // move right
				actualmove = 1;
				if (trueornot(box, i, actualmove) == 1) {
					temp = box[i].setting;
					box[i].setting = box[i + actualmove].setting;
					box[i + actualmove].setting = temp;
					i++;
				}
				break;
			case 5: //shoot
				cout << "There will be only " << ammo-1 << " .......bullet left." << endl;
				ammo--;
				condition = shoot(box, ammo);
				if (condition == 1) {
					return condition;
				}
				return condition;
			default:
				cout << "There are only 5 buttons..." << endl;
				break;
			}
		}
	}
	return 0;
}