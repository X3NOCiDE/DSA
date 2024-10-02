#include<bits/stdc++.h>
using namespace std;

int firstIndex(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int idx = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            idx = mid;
            end = mid - 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return idx;
}

int lastIndex(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int idx = -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==target){
            idx = mid;
            start = mid + 1;
        }
        else if(arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return idx;
}

int main(){
    int arr[10]={1,2,3,4,1,2,3,4,1,2};

    sort(arr,arr+10);

    cout<<firstIndex(arr,10,1)<<" "<<lastIndex(arr,10,1);
}