#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){    

    for(int i=0;i<size-1;i++){
        bool swapped = false;

        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            return;
        }
    }
}

int main(){
    int arr[5]={1,3,4,2,5};

    bubbleSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}