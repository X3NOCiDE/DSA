#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n][n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int top = 0;
    int down = n-1;

    while(top<=down){

    for(int i=0;i<n;i++){ 
        swap(arr[top][i],arr[down][i]);
    }
    top++;
    down--;
    }

    for(int i=0;i<n;i++){
        reverse(arr[i],arr[i]+n);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}