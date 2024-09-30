#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=3,c=3;
    int arr[r][c]={1,2,3,4,5,6,7,8,9};
    int brr[c][r];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            brr[j][i]=arr[i][j];
        }
    }

    for(int j=0;j<c;j++){
        for(int i=0;i<r/2;i++){
            swap(brr[i][j],brr[r-i-1][j]);
        }
    }        

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
}
