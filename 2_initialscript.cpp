#include <iostream>
#include <ctime>
#include "Game2.h"

using namespace std;

int script1[49] = {3, 3, 3, 5, 3, 3, 3, 3, 3, 1, 2, 3, 3, 3, 3, 1, 3, 2, 1, 1, 3, 3, 3, 3, 2, 3, 1, 3, 3, 1, 3, 2, 3, 1, 3, 3, 1, 1, 2, 1, 1, 3, 3, 3, 3, 4, 3, 3, 3};
int script2[49] = {3, 3, 3, 5, 3, 3, 3, 3, 3, 3, 1, 2, 3, 3, 3, 1, 1, 2, 1, 1, 3, 3, 2, 3, 2, 3, 1, 3, 3, 1, 3, 1, 2, 1, 3, 3, 1, 1, 2, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3};
int script3[49] = {3, 3, 3, 5, 3, 3, 3, 3, 3, 1, 2, 3, 1, 3, 3, 1, 2, 1, 3, 2, 3, 3, 1, 3, 2, 1, 1, 3, 3, 3, 2, 2, 2, 3, 3, 3, 3, 1, 1, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3};

void initialscript(boxes box[49])
{	
	int choose;
	srand(time(NULL));
	choose = rand() % 3 + 1;
	switch (choose)
	{
	case 1:
		for (int i = 0; i < 49; i++) {
			box[i].position = i;
			box[i].setting = script1[i];
		}
		break;
	case 2:
		for (int i = 0; i < 49; i++) {
			box[i].position = i;
			box[i].setting = script2[i];
		}
		break;
	case 3:
		for (int i = 0; i < 49; i++) {
			box[i].position = i;
			box[i].setting = script3[i];
		}
		break;
	}
}