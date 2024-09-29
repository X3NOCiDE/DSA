#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100]={4,3,2,6,7,1,9,7,2,5};
    int mini=INT_MAX;

    for(int i=0;i<9;i++){
        mini = min(mini,arr[i]);
    }

    cout<<mini<<endl;

}