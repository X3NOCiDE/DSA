#include<bits/stdc++.h>
using namespace std;

int mostProbableIndex(int arr[], int size,int target){
    int start = 0;
    int end = size - 1;
    int idx = size;
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(arr[mid]==target){
            idx = mid;
            break;
        }
        else if (arr[mid]>target){
            end = mid - 1;
            idx = mid;
        }
        else{
            start = mid + 1;
        }
    }
    return idx;
}

int main(){
    int arr[10]={1,3,5,6,7,9,10,11,12,15};

    cout<<mostProbableIndex(arr,10,8);
}