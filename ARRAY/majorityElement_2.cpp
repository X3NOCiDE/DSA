#include<bits/stdc++.h>
using namespace std;

//majority means appears more than n/2;

int main(){
    int arr[15]={1,1,1,2,3,2,1,2,1,1};    //candidate = 3 (1,2,3);

    int current_winner = arr[0];
    int vote = 1;

    for(int i=1;i<10;i++){
        if(vote==0){
            vote=1;
            current_winner=arr[i];
        }
        else if(current_winner==arr[i]){
            vote++;
        }
        else{
            vote--;
        }

    }

    int count=0;

    for(int i=0;i<10;i++){
        if(current_winner==arr[i])count++;
    }

    if(count>10/2){
        cout<<current_winner<<endl;
    }
    else{
        cout<<-1<<endl;
    }






}