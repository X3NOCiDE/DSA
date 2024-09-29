#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[5]={1,2,4,5};

    int target_value = 3;
    int target_pos = 2;

    for(int i=n;i>target_pos;i--){
        arr[i]=arr[i-1];
    }
    arr[target_pos]=target_value;

    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}