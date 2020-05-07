#include <iostream>
#include "Game2.h"

using namespace std;

int shoot(boxes box[49], int &ammo) {
	while (ammo >= 0) {
		for (int i = 45; i > 0; i -= 7) {
			int obstacle = box[i].setting;
			switch (obstacle) {
			case 2:
				box[i].setting = 1;
				cout << "-------\nBOOM" << endl;
				cout << "Hmm... thats done." << endl;
				return 0;
			case 5:
				box[i].setting = 1;
				cout << "-------\nBOOOOOOOOM" << endl;
				cout << "//It seems the core has been destroyed.//" << endl;
				cout << "There is no way that 'core' thing survived this explosion.\nPretty sure I can get out of this place now." << endl;
				return 1;
			}
		}
	}
	if (ammo == 0) {
		cout << "Maybe I should start again. Hope I don't get messed up next time." << endl;
	}
	return 0;
}