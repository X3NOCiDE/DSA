#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=3,c=3;   //only for square matrix
    int arr[r][c]={1,2,3,4,5,6,7,8,9};
    int brr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            brr[j][r-1-i]=arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }


}
