#include <iostream>
#include <string>
#include "Game1.h"

using namespace std;

int find_card(int card){
  int x;
  cout << "---------------------------------------------------------------"<<endl;
  cout << "Which card would you like to scan?" << endl;
  cout << "Card: ";
  cin >> x;
  cout << "---------------------------------------------------------------"<<endl;
  if (card==x){
    cout << "You have scanned the card successfully. The door has opened." << endl;
    return 1;
  }else{
    cout << "BAAAAAAAAAAAAAAAAAAM DING DING DING" << endl;
    cout << "The aliens have locked you back into the lab.\n\n";
    return 0;
  }
}
