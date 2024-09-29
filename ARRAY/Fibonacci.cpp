#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=0;
    int b=1;

    arr[0]=a;
    arr[1]=b;
    for(int i=2;i<n;i++){
        arr[i]=a+b;
        a=b;
        b=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}