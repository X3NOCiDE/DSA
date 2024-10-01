#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    int x = 6;

    int start=0;
    int end = (n*n) -1;

    while(start<=end){
        int mid = start + (end-start)/2;
        int rowIdx = mid/n;
        int colIdx = mid % n;
        if(arr[rowIdx][colIdx]==x){
            cout<<rowIdx<<","<<colIdx<<endl; 
            break;           
        }
        else if(arr[rowIdx][colIdx]>x){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }


}
