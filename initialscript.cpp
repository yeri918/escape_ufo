#include <iostream>
#include "Game2.h"

using namespace std;

int script1[49] = {3, 3, 3, 5, 3, 3, 3, 3, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 3, 3, 3, 3, 4, 3, 3, 3};

void initialscript(boxes box[25])
{
	for (int i = 0; i < 49; i++) {
		box[i].position = i;
		box[i].setting = script1[i];
	}
}