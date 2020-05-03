#include <iostream>
#include "Game3.h"
using namespace std;

int Game3(){
  intro_three();
  setBoard();
  tubeassign();
  alien_set();
  while (success()!=1){
    printBoard();
    humanmove();
    alienmove();
    if (collision()==1){
      printBoard();
      break;
    }
  }
}
