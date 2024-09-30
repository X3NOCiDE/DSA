#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=4,c=4;
    int arr[r][c]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int j=0;j<c;j++){
        for(int i=0;i<r/2;i++){
            swap(arr[i][j],arr[r-1-i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }







}