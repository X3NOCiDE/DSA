#include<bits/stdc++.h>
using namespace std;

//Dutch National Flag Algo

void sort012(int arr[],int size) {
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}



int main(){

    int arr[10]={0,1,2,0,2,1,0,1,2,1};

    sort012(arr,10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}