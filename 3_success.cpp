#include <iostream>
#include <string>
#include "Game3.h"
using namespace std;
int success(){
  if (humanpos[0]==2 && (humanpos[1]==27 || humanpos[1]==28)){
    cout << "YOU MADE IT!!" << endl;
    return 1; //success!
  }
  return 0; //not yet!
}
