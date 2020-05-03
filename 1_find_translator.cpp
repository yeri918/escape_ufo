#include <iostream>
#include <string>
#include <unistd.h>
#include "Game1.h"

using namespace std;

void find_translator(int trans_pos, int translator,int instruction){
  int p,x,tracker=0;
  cout <<"ANSWER(will be deleted): trans_pos: "<< trans_pos << "  translator: " << translator << endl;
  while(true){
    cout << endl;
    cout << "You should move around to look for the translator.\n";
    cout << "---------------------------------------------------------------" << endl;
    cout << "1.left           2.forward         3.right         4.backward "<< endl;
    cout << "---------------------------------------------------------------" << endl;
    cin >> p;
    while(true){
      usleep(500000);
      cout << endl;
      cout << "---------------------------------------------------------------" << endl;
      cout << "1.Shine a torch 2.Tap the board 3.Open the lab shelf" << endl;
      cout << "4.Check behind the alien portrait  5.Not the right direction" << endl;
      cout << "---------------------------------------------------------------" << endl;
      cout << "What would you like to do? Press any number from 1 to 5."<< endl;
      cin >> x;
      cout << "Let's see... "<<endl;
      usleep(800000);
      if (x==5){
        cout << "Back to your original position."<<endl;
        break;
      }
      if (trans_pos==p && translator==x){
        tracker=1;
        break;
      }else{
        cout << "No translator." << endl;
      }
    }
    if (tracker==1){
      break;
    }
  }
  cout << "You found the translator!" << endl;
  cout << "Decrypting...\n\n";
  usleep(800000);
  cout << "Here is the decrypted message!"<< endl;
  for (int i=0;i<14;i++){
    if (m[instruction-1][i]==' '){
      cout <<' ';
    }else{
      m[instruction-1][i]-=2;
      cout << m[instruction-1][i];
    }
  }
  cout << endl;
}
