#include <iostream>
#include "Game1.h"

void wall(counting count)
{
	int counter = count.f_fan;

	switch (counter)
	{
	case 0:
		cout << "There is a large red mark all over the wall next to the door.\nDrops of red liquid are still falling from it...\n";
		break;
	case 1:
		cout << "Seems like the wind has blew the undried part. It says: 'BOOGYMAN' 'go back to sleep, now!'\n";
		break;
	default:
		break;
	}
}
