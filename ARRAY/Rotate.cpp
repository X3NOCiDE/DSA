#include<bits/stdc++.h>
using namespace std;

void rotateRight(int arr[],int size,int k){
    int temp[size];
    for(int i=0;i<size;i++){
        temp[(i+k)%size]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
    return;
}

void rotateLeft(int arr[],int size,int k){
    int temp[size];
    for(int i=0;i<size;i++){
        temp[(i-k+size)%size]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
    return;
}


int main(){
    int arr[5]={1,2,3,4,5};

    rotateLeft(arr,5,2);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    rotateLeft(arr,5,2);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


}