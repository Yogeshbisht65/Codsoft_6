#include<iostream>
using namespace std;
#include <time.h>
int main(){
    cout<<"WELCOME TO THE NUMBER GUESSING GAME";
    cout<<"\nYOU HAVE TO GUESS NUMBER BETWEEN 1 TO 100";
    cout<<"\nLET'S START PLAYING BEST OF LUCK"<<endl;
    srand(time(0));
    int randnumber = (rand()%100)+1;
    cout<<"YOU HAVE TOTAL 5 CHANCES TO GUESS THE NUMBER \n";
    int chanceleft = 5;
    int userinput;
    for (int i=0; i<=5; i++ ){
        cout<<"Enter number=";
        cin>>userinput;
        if(userinput==randnumber){
        cout<<" CONGRATS!...YOU GUESSED RIGHT "<<endl;
        cout<<"HAVE A NICE DAY"<<endl;
        break;
    
    }
    else{
        if(userinput > randnumber){
            cout<<"YOU GUESS A HIGH NUMBER....TRY AGAIN";
        }
        else{
            cout<<"\nYOU GUESS A LOW NUMBER...TRY AGAIN";
        }
    }
    chanceleft--;
    cout<<"CHANCE LEFT ARE<<chanceleft"<<endl;
    if(chanceleft==0){
        cout<<"SORRY YOUR ALL CHANCES ARE FINISHED..COME LATER"<<endl;
        cout<<"THE NUMBER WAS \n"<<randnumber<<endl;
    }

    }
    return 0;
    


    

}

