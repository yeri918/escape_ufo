#include <iostream>
#include "Game2.h"
using namespace std;

void display(boxes box[49]) 
{
	int point = 0;
	for (int i = 0; i < 49; i++) {
		point = box[i].setting;
		
		switch (point)
		{
		case 1:
			cout << " ";
			break;
		case 2:
			cout << "O";
			break;
		case 3:
			cout << "X";
			break;
		case 4:
			cout << "|";
			break;
		case 5:
			cout << "&";
			break;
		}
		if (i % 7 == 6) {
			cout << endl;
		}
	}
}