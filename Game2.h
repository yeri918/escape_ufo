#ifndef GAME_2
#define GAME_2

#include <iostream>
using namespace std;

class boxes
{
public:
	int setting, position;
};

int Game2();

void initialscript(boxes box[49]);

void display(boxes box[49]);

int movement(boxes box[49], int &ammo);

int trueornot(boxes box[49], int position, int direction);

int shoot(boxes box[49], int &ammo);

#endif //GAME_2