#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <chrono>
#include <stdlib.h>
#include <stdio.h>
#include "Game0.h"
#include "Game1.h"
#include "Game2.h"
#include "Game3.h"
using namespace std;

//checkpoint=0 (when the game begins)
//checkpoint=1 (when the first round completed successfully)
//checkpoint=2 (when the second round completed successfully)
//checkpoint=3 (when the third round completed successfully)

struct Scoreboard{
  string username;
  double score;
};

string autosave(int input, string id, string checkpoint,double elapsed_time);
void ranking(string id);

int main(){
  string id="000",checkpoint;
  int input=start();
  if (input!=3){
    while (id.length()!=5){
      cout << "ID(five numbers):";
      cin >> id;
      cout << endl;
    }
  }
  checkpoint="0";
  double elapsed_time;
  string stage;
  if (input==2){
    stage=autosave(input,id,checkpoint,0);
  }
  if (input==1 || stage==" 0"){
    auto start=chrono::steady_clock::now();
    autosave(input,id,checkpoint,0);

    Game1();
    checkpoint="1";
    auto end=chrono::steady_clock::now();
    elapsed_time=double(chrono::duration_cast <chrono::seconds > (end-start).count());
    autosave(input,id,checkpoint,elapsed_time);

    Game2();
    checkpoint="2";
    end=chrono::steady_clock::now();
    elapsed_time=double(chrono::duration_cast <chrono::seconds > (end-start).count());
    autosave(input,id,checkpoint,elapsed_time);

    if (Game3()==0){
      checkpoint="3";
      end=chrono::steady_clock::now();
      elapsed_time=double(chrono::duration_cast <chrono::seconds > (end-start).count());
      autosave(input,id,checkpoint,elapsed_time);
      ranking(id);
    }else{
      autosave(input,id,"0",0);
    }

  }else if (input==2){
    if (stage==" 1"){
      auto start=chrono::steady_clock::now();
      checkpoint="1";
      Game2();
      checkpoint="2";
      auto end=chrono::steady_clock::now();
      elapsed_time=double(chrono::duration_cast <chrono::seconds > (end-start).count());
      autosave(input,id,checkpoint,elapsed_time);
      if (Game3()==0){
        checkpoint="3";
        end=chrono::steady_clock::now();
        elapsed_time=double(chrono::duration_cast <chrono::seconds > (end-start).count());
        autosave(input,id,checkpoint,elapsed_time);
        ranking(id);
      }else{
        autosave(input,id,"0",0);
      }
    }else if (stage==" 2"){
      checkpoint="2";
      auto start=chrono::steady_clock::now();
      if (Game3()==0){
        checkpoint="3";
        auto end=chrono::steady_clock::now();
        elapsed_time=double(chrono::duration_cast <chrono::seconds > (end-start).count());
        autosave(input,id,checkpoint,elapsed_time);
        ranking(id);
      }else{
        autosave(input,id,"0",0);
      }
    }else if (stage==" 3"){
      cout << "You completed all the rounds earlier" << endl;
      ranking(id);
    }
  }else if (input==3){
    cout << "Come back soon" << endl;
  }
}

string autosave(int input, string id, string checkpoint,double elapsed_time){
  ifstream fin("autosave.txt");
  ofstream fout("autosave.txt",ios::app);
  ofstream temp("temp.txt",ios::app);
  string line, line2, currentstage, txt_id, txt_username, username, txt_elapsedtime,txt_checkpoint="NOPE";
  double double_elapsedtime;
  int state=1; //to check whether its a new player or not (1 means does not exist)
  while(getline(fin,line)){
    //cout << "checked\n";
    txt_id=line.substr(0,5);
    //cout << txt_id <<endl;
    if (txt_id==id){
      //cout <<"YES" <<endl;
      state=0; //this id exists, so no need to create a new line for this id.
      txt_username=line.substr(5,10);
      txt_checkpoint=line.substr(15,2);
      txt_elapsedtime=line.substr(23,10);
      double_elapsedtime=atof(txt_elapsedtime.c_str());
      elapsed_time+=double_elapsedtime;
      break;
    }else{
      temp << line << endl;
    }
  }
  if (input==1){
    if (state==0){
      if (checkpoint=="0"){
        currentstage="Intro";
      }else if (checkpoint=="1"){
        currentstage="Game1";
      }else if (checkpoint=="2"){
        currentstage="Game2";
      }else if (checkpoint=="3"){
        currentstage="Game3";
      }
      temp << setw(5) << id << setw(10) << txt_username << setw(2) << checkpoint << setw(6) << currentstage<< setw(10) << elapsed_time<< endl;
      fout.close();
      temp.close();
      remove("autosave.txt");
      rename("temp.txt","autosave.txt");
    }else if (state==1){
      temp.close();
      remove("temp.txt");
      //fout << setw(5) << id;
      cout << "Username: ";
      cin >> username;
      while(username.length()>10){
        cout << "Your username must be shorter.(max:10 characters)\n"<< "Username:";
        cin >> username;
      }
      fout << setw(5) << id << setw(10) << username << setw(2) << checkpoint << setw(6) << "Intro" << setw(10) << elapsed_time<< endl;
    }
  }else if (input==2){
    if (txt_checkpoint=="NOPE"){
      cout << "Your ID is not found" << endl;
    }
    fin.close();
    fout.close();
    temp.close();
    remove("temp.txt");
    return txt_checkpoint;
  }
  return "New game";
  fin.close();
  fout.close();
}

void ranking(string id){
  cout << endl;
  cout << "       RANKING\n" << endl;
  ifstream fin("autosave.txt");
  ofstream fout("scoreboard.txt");
  int players_completed=0;
  string line,line2,txt_checkpoint,txt_username;
  string txt_elapsedtime;
  while(getline(fin,line)){
    txt_checkpoint=line.substr(15,2);
    if (txt_checkpoint==" 3"){
      txt_username=line.substr(5,10);
      txt_elapsedtime=line.substr(23,10);
      fout << setw(10) << txt_elapsedtime << setw(10) << txt_username <<endl;
      players_completed+=1;
    }
  }
  fin.close();
  fout.close();
  if (players_completed>1){
    ifstream fin2("scoreboard.txt");
    Scoreboard *array=new Scoreboard[players_completed];
    int i=0;
    double double_elapsedtime;
    while(getline(fin2,line2)){
      txt_elapsedtime=line2.substr(0,10);
      double_elapsedtime=atof(txt_elapsedtime.c_str());
      txt_username=line2.substr(10,10);
      array[i].username=txt_username;
      array[i].score=double_elapsedtime;
      i+=1;
    }
    string temp_username;
    double temp_score;
    int temp=0;
    for (int j=0;j<players_completed;j++){
      for (i=0;i<players_completed;i++){
        if(array[i].score>array[i+1].score){
          temp_score=array[i].score;
          array[i].score=array[i+1].score;
          array[i+1].score=temp_score;
          temp_username=array[i].username;
          array[i].username=array[i+1].username;
          array[i+1].username=temp_username;
        }
      }
    }
    for (i=0;i<players_completed;i++){
      cout << setw(10) << array[i].username << setw(10) << array[i].score << endl;
    }
  }else if (players_completed==1){
    ifstream fin2("scoreboard.txt");
    while(getline(fin2,line2)){
      txt_elapsedtime=line2.substr(0,10);
      txt_username=line2.substr(10,10);
    }
    cout << setw(10) << txt_username << setw(10) << txt_elapsedtime << endl;

  }

  remove("scoreboard.txt");
}
