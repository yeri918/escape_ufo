#ifndef GAME_3
#define GAME_3

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void Game3();

void intro_three();

void setBoard(string board[12][30]);

void tubeassign(string board[12][30],int tubepos[3][2]);

void alien_set(int alienpos[4][2],string board[12][30]);

void printBoard(string board[12][30]);

void humanmove(string board[12][30],int humanpos[2],int tubepos[3][2]);

void alienmove(string board[12][30],int alienpos[4][2], int humanpos[2], int tubepos[3][2]);

int collision(int humanpos[2],int alienpos[4][2]);

int success(int humanpos[2]);

#endif //GAME_3
