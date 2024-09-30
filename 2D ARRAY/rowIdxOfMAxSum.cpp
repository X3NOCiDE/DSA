#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][3]={1,4,2,5,6,1,4,8,2,3,4,1,4,3,2};

    int sum;

    int maxIdx = 0;
    int maxi = INT_MIN;

    int i;

    for(i=0;i<5;i++){
        sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            maxIdx = i;
        }
    }

    cout<<maxIdx<<endl;
}