#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Game1.h"
using namespace std;

int Game1(){
  srand(time(0));
  int translator=rand()%5+1;
  int trans_pos=rand()%4+1;
  int instruction=rand()%4+rand()%3;
  int card=instruction;
  instruction_message(instruction);
  find_translator(trans_pos,translator,instruction);
  find_card(card);
  return 0;
}
