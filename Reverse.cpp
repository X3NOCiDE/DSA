#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size){
    int i,j;

    for(i=0,j=size-1;i<=j;i++,j--){
        swap(arr[i],arr[j]);
    }
    return;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}