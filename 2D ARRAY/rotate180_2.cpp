#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n][n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }

    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            swap(arr[i][j],arr[n-1-i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}