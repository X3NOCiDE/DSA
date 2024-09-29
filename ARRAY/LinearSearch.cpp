#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,4,3,7,6,5,4,9,3};
    int target = 7;

    int idx = -1;

    for(int i = 0 ;i<10;i++){
        if(arr[i]==target){
            idx = i;
            break;
        }
    }

    cout<<idx<<endl;
}