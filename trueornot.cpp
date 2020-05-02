#include <iostream>
#include "Game2.h"

using namespace std;

int trueornot(boxes box[25], int position, int direction) 
{
	int positionnew = position + direction;
	if (box[positionnew].setting == 1) {
		return 1;
	}
	else {
		return 0;
	}
}