#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,3,4,2,6,7,3,4,2,9};

    int maxi = INT_MIN;
    int sMax = INT_MIN;

    for(int i=0;i<10;i++){
        sMax = maxi;
        maxi = max(maxi,arr[i]);        
    }

    cout<<sMax<<endl;
}