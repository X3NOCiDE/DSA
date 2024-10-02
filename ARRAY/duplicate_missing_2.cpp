#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7; //1 2 3 4 5 6 7
    
    int arr[n]={4,3,2,1,2,2,6};

    for(int i=0;i<n;i++){
        arr[i]=arr[i]-1;
    }

    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }

    cout<<"Missing: ";

    for(int i=0;i<n;i++){
        if(arr[i]/n==0){                 //arr[i]/n == occurance.
            cout<<i+1<<" ";
        }
    }cout<<endl;

    cout<<"Repeating: ";

    for(int i=0;i<n;i++){
        if(arr[i]/n>=2){
            cout<<i+1<<" ";
        }
    }cout<<endl;


}