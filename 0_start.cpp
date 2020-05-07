#include <iostream>
#include "Game0.h" 
using namespace std;

int start(){
  cout << "         Welcome to ESCAPE UFO!" <<endl;
  cout << "MMMMMMMMMMMMMMMWXK0OOO0KNWMMMMMMMMMMMMMM" << endl;
  cout << "MMMMMMMMMMMN0xollllllllllloxKWMMMMMMMMMM" << endl;
  cout << "MMMMMMMMMXdc:lx0XNWWWWWNX0xl:cxXMMMMMMMM" << endl;
  cout << "MMMMMMMXd;ckNMMMMMMMMMMMMMMMXkc:xNMMMMMM" << endl;
  cout << "MMMMMMKc;kNMMMMMMMMMMMMMMMMMMMNx;cKMMMMM" << endl;
  cout << "MMMMMK::0MMMMMMMMMMMMMMMMMMMMMMWO;:KMMMM" << endl;
  cout << "MMMMNl,OMMMMMMMMMMMMMMMMMMMMMMMMMk,oWMMM" << endl;
  cout << "MMMM0;cNMMMWXK0XWMMMMMMMWXKKXWMMMX:;KMMM" << endl;
  cout << "MMMMO,lNXOO0KK0O0XMMMMMXOO0K00OOXNl;0MMM" << endl;
  cout << "MMMMK;cKo. ..,lOKXWMMMWXKkl,.  .dK::XMMM" << endl;
  cout << "MMMMNl,Od.     .cKMMMMMK:.     .xk,oWMMM" << endl;
  cout << "MMMMMO,l0l.      :XMMMK;      .o0c;0MMMM" << endl;
  cout << "MMMMMWd,dXk;.    .xMMWd.    .;kXd,xWMMMM" <<endl;
  cout << "MMMMMMNo,xNN0dl:;c0MMWOc;:lx0NNd,oNMMMMM" << endl;
  cout << "MMMMMMMNo,oXMMMMWMMMMMMWWMMMMXl,dNMMMMMM" << endl;
  cout << "MMMMMMMMWk;:OWMMWXKKKKKXWMMWO::OWMMMMMMM" << endl;
  cout << "MMMMMMMMMMKo;l0WMNK000KNMW0l;oXMMMMMMMMM" << endl;
  cout << "MMMMMMMMMMMW0l:ckXWMMMWXkc:oKWMMMMMMMMMM" << endl;
  cout << "MMMMMMMMMMMMMWKdc:lxkxl:cxXWMMMMMMMMMMMM" << endl;
  cout << "MMMMMMMMMMMMMMMMWKxoloxKWMMMMMMMMMMMMMMM" << endl;
  cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
  cout << "    Hope you succeed in escaping UFO " << endl;
  cout << "----------------------------------------" << endl;

  int input=0;
  while(input<1 || input>3){
    cout << "1. New game" <<endl;
    cout << "2. Load saved game" << endl;
    cout << "3. Quit" << endl;
    cin >> input;
  }
  return input;
}
