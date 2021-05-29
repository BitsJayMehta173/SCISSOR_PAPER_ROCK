#include<bits/stdc++.h>
using namespace std;

string choices[3] = {"Rock", "Paper", "Scissors"}; //Win if playerChoice > systemChoice
string outcomes[3] = {"Lose", "Win", "Draw"};

int pcChoice() {
  return (rand())%3;
}

void matchLogic(int playerChoiceNum) {

  cout<<"You Chose : "<<choices[playerChoiceNum]<<endl;

  int systemChoiceNum = pcChoice();
  cout<<"PC Chose : "<<choices[systemChoiceNum]<<endl;

  if(systemChoiceNum == playerChoiceNum) {
    cout<<"You "<<outcomes[2]<<endl;
  }
  else if ((playerChoiceNum == 0 && systemChoiceNum == 2) || (playerChoiceNum > systemChoiceNum)) {
    cout<<"You "<<outcomes[1]<<endl;
  } else cout<<"You "<<outcomes[0]<<endl;
}

int main() {

  //system("clear"); //linux
  //system("cls"); //Windows

  char playNext = 'y';
  while(playNext == 'y') {
    int playerChoiceNum = -1;
    while(playerChoiceNum > 3 || playerChoiceNum <= 0) {
      cout<<"Choices:\n1.Rock\n2.Paper\n3.Scissors\n\nChoice > ";
      cin>>playerChoiceNum; // 1 2 3
    }
    matchLogic(--playerChoiceNum);
    cout<<endl<<endl;
    cout<<"Do you want to play another round? y/n > ";
    cin>>playNext;
    system("clear");
  }
  cout<<endl<<"WE ENJOYED PLAYING WITH YOU, PLAY WITH US AGAIN OKAY, SEE YOU UNTILL NEXT TIME :D"<<endl;
}
