#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][3]={1,2,3,4,5,6};

    int r=2;
    int c=3;

    //1 2 3
    //4 5 6

    for(int i=0;i<2;i++){
        reverse(arr[i],arr[i]+c);    //arr[i] = &arr[i][0]    
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}