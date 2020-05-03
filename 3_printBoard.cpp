#include <iostream>
#include <string>
#include "Game3.h"
using namespace std;
void printBoard(){
  for (i=0;i<12;i++){
    for (j=0;j<30;j++){
      cout << board[i][j];
    }
    cout << endl;
  }
}
