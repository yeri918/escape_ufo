#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include "Game3.h"
using namespace std;
void tubeassign(){
  int pos;
  srand(time(0));
  for (int i=1;i<4;i++){
    pos=rand()%26+1;
    board[3*i][pos]="|";
    board[3*i][pos+1]="|";
    board[3*i+1][pos]="|";
    board[3*i+1][pos+1]="|";
    board[3*i+2][pos]="|";
    board[3*i+2][pos+1]="|";
    tubepos[i-1][0]=3*i+2;
    tubepos[i-1][1]=pos;
  }
  board[11][1]="♀";
}
