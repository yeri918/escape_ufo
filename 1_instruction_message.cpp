#include <iostream>
#include <string>
using namespace std;

void instruction_message(int instruction){
  for (int i=0;i<14;i++){
    if (m[instruction-1][i]==' '){
      continue;
    }else{
      m[instruction-1][i]+=2;
    }
  }
  cout << '"';
  for (int i=0;i<14;i++){
    cout << m[instruction-1][i];
  }
  cout << '"'<<endl;
  cout << "Find the translator to decrypt this message.\n\n";
}
