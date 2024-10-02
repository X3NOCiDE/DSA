#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7; //1 2 3 4 5 6 7
    int arr[7]={1,2,1,3,4,6,3};


    for(int i=0;i<n;i++)arr[i]--;


    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }


    for(int i=0;i<n;i++){
        arr[i]=arr[i]/n;
    }

    for(int i=0;i<n;i++){
        cout<<(i+1)<<","<<arr[i]<<endl;
    }

}