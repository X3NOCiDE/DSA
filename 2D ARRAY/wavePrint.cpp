#include<bits/stdc++.h>
using namespace std;

//1 2 3
//4 5 6     //1 4 5 2 3 6

int main(){

    int r=4,c=4;

    int arr[r][c]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int k;

    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }



}
