#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=3;
    int c=3;

    int arr[3][3]={1,2,3,5,4,2,5,7,8};


    int sum1=0;
    int sum2=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum1 += arr[i][j];
            }
            else if((i+j+1)==r){
                sum2 += arr[i][j];
            }      
        }
    }

    cout<<max(sum1,sum2)<<endl;
}