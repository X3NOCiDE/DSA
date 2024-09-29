#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size,int target){
    int start=0;
    int end=size-1;
    int idx=-1;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            idx = mid;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return idx;
}

int main(){

    int arr[5]={1,3,2,4,6};
    sort(arr, arr+5);

    int ans = binarySearch(arr,5,4);

    cout<<ans<<endl;

}