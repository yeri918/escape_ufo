#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include "Game3.h"
using namespace std;

void alienmove(){
  int random;
  srand(time(0));
  for (i=0;i<4;i++){
    board[alienpos[i][0]][alienpos[i][1]]="_";
  }
  for (i=0;i<3;i++){
    board[tubepos[i][0]][tubepos[i][1]]="|";
    board[tubepos[i][0]][tubepos[i][1]+1]="|";
  }
  board[2][27]="[";
  for (i=0;i<4;i++){
    random=rand()%2;
    if (alienpos[i][1]==1 || alienpos[i][1]==2 || alienpos[i][1]==0){
      if (random==0){
        alienpos[i][1]+=2;
      }else{
        alienpos[i][1]=28;
      }
    }else if(alienpos[i][1]==28 || alienpos[i][1]==29 || alienpos[i][1]==27){
      if (random==0){
        alienpos[i][1]-=2;
      }else{
        alienpos[i][1]=1;
      }
    }else{
      if (random==0){
        alienpos[i][1]+=2;
      }else{
        alienpos[i][1]-=2;
      }
    }
    board[humanpos[0]][humanpos[1]]="♀";
    board[alienpos[i][0]][alienpos[i][1]]="&";
  }
}
