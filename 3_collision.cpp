#include <iostream>
#include <string>
#include "Game3.h"
using namespace std;
int collision(){
  for (i=0;i<4;i++){
    if (humanpos[0]==alienpos[i][0] && humanpos[1]==alienpos[i][1]){
      cout << "UH-OH. You are caught by the alien..." << endl;
      return 1; // yes collision
    }
  }
  return 0; //no collision
}
