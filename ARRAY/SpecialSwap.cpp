#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};

    int i,j;

    for(i=0,j=1;j<6;i+=2,j+=2){
        swap(arr[i],arr[j]);
    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}