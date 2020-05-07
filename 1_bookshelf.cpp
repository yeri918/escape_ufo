#include <iostream>
#include "Game1.h"
using namespace std;

void bookshelf(counting count) 
{
	int counter = count.f_fan;
	switch (counter) 
	{
	case 0:
		cout << "A gothic style shelf in a futuristic room... suspicious, isn't it?\nThe books are in strange language as well.\n";
		break;
	case 1:
		cout << "The wind has made most of the books to escape from the shelf. The remaining books seems like they are stuck." << endl;
		if (count.f_machine != 0) {
			cout << "I'll try to convert them using the translator.\n";
			cout << encryption("Snake eyes", count) << endl;
			cout << encryption("Sixth sense", count) << endl;
			cout << endl;
			cout << encryption("Dark Tower", count) << endl;
			cout << encryption("I, robot", count) << endl;
			cout << encryption("Cats", count) << endl;
			cout << encryption("E.t", count) << endl;
		}
		break;
	}
}
