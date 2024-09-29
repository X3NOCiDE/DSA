#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int size){
    int i,j;

    for(i=0,j=size-1;i<=j; ){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return;
}

int main(){

    int arr[10]={0,1,1,0,0,1,0,1,0,1};

    sortZeroOne(arr,10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}