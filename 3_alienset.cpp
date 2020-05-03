#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include "Game3.h"
using namespace std;
void alien_set(){
  srand(time(0));
  int pos;
  for (i=0;i<4;i++){
    pos=rand()%10+rand()%15+1;
    if (i==3 && pos<3){
      pos+=5;
    }
    board[3*i+2][pos]="&";
    alienpos[i][0]=3*i+2;
    alienpos[i][1]=pos;
  }

}
