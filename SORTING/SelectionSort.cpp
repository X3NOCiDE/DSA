#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        int minIdx = i;
        for(int j=i+1;j<size;j++){
            if(arr[minIdx]>arr[j]){
                minIdx = j;                
            }
        }
        swap(arr[minIdx],arr[i]);
    }
    return;
}

int main(){
    int arr[5]={5,4,3,2,1};

    selectionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}