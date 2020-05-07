#include <iostream>
#include <string>
#include "Game1.h"
using namespace std;

string encryption(string messege, counting count)
{
	int encrypted, condition = count.f_machine + count.f_dlc;
	char code;
	string copied = "";

	switch (condition) {
	case 0:
		for (int i = 0; i < messege.length(); i++)
		{
			encrypted = int(messege[i]);
			code = encrypted + 4;
			copied += code;
		}
		return copied;
		break;

	case 1:
		for (int i = 0; i < messege.length(); i++)
		{
			encrypted = int(messege[i]);
			if (encrypted > 105) {
				code = encrypted + 4;
			}
			else {
				code = encrypted;
			}
			copied += code;
		}
		return copied;
		break;
	default:
		return messege;
		break;
	}
}
