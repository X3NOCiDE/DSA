#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1]= temp;
    }
    return;
}

int main(){
    int arr[5]={5,4,3,2,1};

    insertionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}