#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=3;

    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    int x = 6;

    for(int i=0;i<n;i++){
        if(arr[i][0]<=x && arr[i][n-1]>=x){
            int start = 0;
            int end = n-1;
            int idx = -1;

            while(start<=end){
                int mid = start+(mid-start)/2;
                if(arr[i][mid]==x){
                    idx = mid;
                    break;
                }
                else if(arr[i][mid]>x){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            cout<<i<<","<<idx<<endl;
        }
    }

}
