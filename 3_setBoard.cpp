#include <iostream>
#include <string>
#include "Game3.h"
using namespace std;
void setBoard(){
  for (i=0;i<12;i++){
    board[i][0]="|";
    board[i][29]="|";
  }
  for (i=1;i<29;i++){
    board[0][i]="‾";
    board[11][i]="‾";
  }
  for (i=1;i<11;i++){
    for (j=1;j<29;j++){
      board[i][j]=" ";
    }
  }
  for (i=2;i<12;i+=3){
    for (j=1;j<29;j++){
      board[i][j]="_";
    }
  }//end of the border
  board[0][27]="|";
  board[1][27]="+";
  board[2][27]="[";
}
