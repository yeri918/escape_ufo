#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include "Game3.h"
using namespace std;

void intro_three(){
  cout << "ROUND THREE\n";
  cout << "You have to avoid all the aliens and escape through the door." << endl;
  cout << "You are ♀ and the aliens are &. " << endl;
  cout << "You see the door? Get to there! This is the final round." << endl;
}
void setBoard(string board[12][30]){
  for (int i=0;i<12;i++){
    board[i][0]="|";
    board[i][29]="|";
  }
  for (int i=1;i<29;i++){
    board[0][i]="‾";
    board[11][i]="‾";
  }
  for (int i=1;i<11;i++){
    for (int j=1;j<29;j++){
      board[i][j]=" ";
    }
  }
  for (int i=2;i<12;i+=3){
    for (int j=1;j<29;j++){
      board[i][j]="_";
    }
  }//end of the border
  board[0][27]="|";
  board[1][27]="+";
  board[2][27]="[";
}

void alien_set(int alienpos[4][2],string board[12][30]){
  srand(time(0));
  int pos;
  for (int i=0;i<4;i++){
    pos=rand()%10+rand()%15+1;
    if (i==3 && pos<3){
      pos+=5;
    }
    board[3*i+2][pos]="&";
    alienpos[i][0]=3*i+2;
    alienpos[i][1]=pos;
  }

}
void printBoard(string board[12][30]){
  for (int i=0;i<12;i++){
    for (int j=0;j<30;j++){
      cout << board[i][j];
    }
    cout << endl;
  }
}
int collision(int humanpos[2],int alienpos[4][2]){
  for (int i=0;i<4;i++){
    if (humanpos[0]==alienpos[i][0] && humanpos[1]==alienpos[i][1]){
      cout << "UH-OH. You are caught by the alien..." << endl;
      return 1; // yes collision
    }
  }
  return 0; //no collision
}
int success(int humanpos[2]){
  if (humanpos[0]==2 && (humanpos[1]==27 || humanpos[1]==28)){
    cout << "YOU MADE IT!!" << endl;
    return 1; //success!
  }
  return 0; //not yet!
}
void Game3(){
  string board[12][30];
  int humanpos[2]={11,1};
  int alienpos[4][2]={{0,0},{0,0},{0,0},{0,0}};
  int tubepos[3][2]={{0,0},{0,0},{0,0}};
  intro_three();
  setBoard(board);
  tubeassign(board,tubepos);
  alien_set(alienpos,board);
  while (success(humanpos)!=1){
    printBoard(board);
    humanmove(board,humanpos,tubepos);
    alienmove(board,alienpos,humanpos,tubepos);
    if (collision(humanpos,alienpos)==1){
      printBoard(board);
      cout << "Game over.";
      break;
    }
  }
}
