#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3]={
        {4,8,15},
        {18,22,26},
        {36,40,45},
    };

    int r=3;
    int c=3;
    int x = 40;

    int i = 0;
    int j = c-1;

    while(i<r && j>=0){
        if(arr[i][j]==x){
            cout<<i<<","<<j<<endl;
            break;
        }
        else if(arr[i][j]<x){
            i++;
        }
        else{
            j--;
        }
    }

}