#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=10;
    string continues;

    do{
        int num=rand()%N;
        cout<<"\n\n\t-----------Here we begin !! -------------------";
        cout<<"\n\n\tGuess the single digit number in 5 chances ";
        int i=5;
        while(i--){
            cout<<"\n\n\tEnter your guess : ";
            int guess;
            cin>>guess;
            if(guess==num){
                cout<<"\n\t Congrats you guessed it right !!  ";
                break;
            }
            else{
                cout<<"\n\t Oops you missed it !";
                cout<<"\n\n\tRemaining chances : "<<i;
            }
        }


        cout<<"\n\n\tThe number was : "<<num;

        cout<<"\n\n\tDo you want to continue palying (Y/N) ? \t";
        cin>>continues;

    }while(continues!="N" && continues!="n");
    cout<<"\n\t-----Thank You!! See you again ---------------";
    return 0;
}