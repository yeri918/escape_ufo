#ifndef GAME_3
#define GAME_3

#include <iostream>
using namespace std;

string board[12][30];
int humanpos[2]={11,1};
int alienpos[4][2];
int tubepos[3][2];
int i,j;

void Game3();

void intro_three();

void setBoard();

void tubeassign();

void alien_set();

void printBoard();

void humanmove();

void alienmove();

int collision();

int success();

#endif GAME_3
