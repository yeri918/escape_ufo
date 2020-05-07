#include <iostream>
#include "Game3.h"
using namespace std;

void humanmove(string board[12][30],int humanpos[2],int tubepos[3][2]){
  cout << "------------------------------"<< endl;
  cout << "1.up       2.left      3.right" << endl;
  cout << "------------------------------"<< endl;
  int input;
  cin >> input;
  board[humanpos[0]][humanpos[1]]="_";
  for (int i=0;i<3;i++){
    board[tubepos[i][0]][tubepos[i][1]]="|";
    board[tubepos[i][0]][tubepos[i][1]+1]="|";
  }
  switch (input){
    case 1: //UP
    if (board[humanpos[0]-1][humanpos[1]]!="|"){
      cout << "Cannot go up!\n";
    }else{
      humanpos[0]-=3;
    }
    break;
    case 2: //LEFT
    if (humanpos[1]==1){
      humanpos[1]=28;
    }else{
      humanpos[1]-=1;
    }
    break;
    case 3: //RIGHT
    if (humanpos[1]==28){
      humanpos[1]=1;
    }else{
      humanpos[1]+=1;
    }
    break;
    default:
    cout << "There are only three buttons..."<< endl;
  }
}
