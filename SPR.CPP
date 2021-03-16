#include<bits/stdc++.h>
using namespace std;
int main()
{ int t,countw=0,countl=0;
  char p='Y';
  while(p=='Y')
  {
  cout<<"ENTER NUMBER OF ROUNDS YOU WANT IN A MATCH\n";
  cin>>t;
  cout<<endl;
  countw=0,countl=0;
  while(t--)
  {
  cout<<"USE OPTIONS \n1.for rock\n2.for paper\n3.for scissor"<<endl<<endl;
  int n;
  cout<<"ENTER CHOICE \t";
  cin>>n;
  srand((unsigned) time(0));
  int k=rand()%4+1;
  cout<<endl;
  {
    cout<<"YOU CHOOSE:  ";
    if(n==1)
    {
      cout<<"ROCK\t";
    }
    else if(n==2)
      {
        cout<<"PAPER\t";
      }
      else
        {
          cout<<"SCISSOR\t";
        }
        cout<<"||\t";
        cout<<"CPU CHOOSE:  ";
        if(k==1)
          {
            cout<<"ROCK\t";
          }
          else if(k==2)
            {
              cout<<"PAPER\t";
            }
            else
              {
                cout<<"SCISSOR\t";
              }
      cout<<endl<<"\n";
    }

            if(n==k)
            {
              cout<<"Match Round Draw\n"<<endl;
            }
  else if(n==1 && k==3 || n==2 && k==1 || n==3 && k==2)
  {
    cout<<endl<<"You won this round\n"<<endl;
    countw++;

  }
  else
  {
    cout<<"You lost this round\n"<<endl;
    countl++;
  }
}
  cout<<"\nYOU WON "<<countw<<" TIMES\n";
  cout<<"WHILE YOU LOST "<<countl<<" TIMES\n";
  if(countw>countl)
  {
    cout<<"\nSO THE WINNER OF THE MATCH IS YOU, CONGRATULATIONS!!!\n";
  }
  else if(countw<countl)
  {
    cout<<"\nSORRY YOU LOST, TRY AGAIN OKAY :D \n";
  }
  else
  {
    cout<<"\nTHE MATCH WAS DRAW.\n";
  }
  cout<<"\nDO YOU WANT TO PLAY AGAIN?\n";
  cin>>p;
  p=toupper(p);
  cout<<endl<<endl;
}
cout<<"WE ENJOYED PLAYING WITH YOU, PLAY WITH US AGAIN OKAY, SEE YOU UNTILL NEXT TIME :D\n";
}
