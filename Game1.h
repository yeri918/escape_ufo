#pragma once
#ifndef GAME_1
#define Game_1

#include <iostream>
using namespace std;

class counting 
{
public:
	int f_fan = 0, f_machine = 0, f_dlc = 0, f_card = 0, f_correct = 0, f_open = 0;
};

void Game1();
// Introduction for the game 1
void introdialog();
// Convert messege to encrypted ones
string encryption(string messege, counting count);
// Main menu for the user: it decides what to do
void action(counting &count);
// Wall and the stain
void wall(counting count);
// Interactions that can happen to bed
void bed(counting &count);
// Encrypts the messege given. Only used before the machine is found
void machine(counting &count);
// Interactions that can happen to bookshelf
void bookshelf(counting count);

void cardfind(counting count, int place);

void table(counting &count);

void door(counting& count);
#endif // GAME_1