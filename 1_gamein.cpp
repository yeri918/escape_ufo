#include <iostream>
#include <ctime>
#include "Game1.h"
using namespace std;

void Game1()
{
	counting count;
	int front, back;
	srand(time(NULL));
	front = rand() % 6 + 1;
	back = rand() % 6 + 1;
	count.place = front * 10 + back;
	introdialog(count);
	while (count.f_open == 0) 
	{
		action(count);
	}
}