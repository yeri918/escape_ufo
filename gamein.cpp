#include <iostream>
#include "Game1.h"
using namespace std;

void Game1()
{
	counting count;
	introdialog();
	while (count.f_open == 0) 
	{
		action(count);
	}
}