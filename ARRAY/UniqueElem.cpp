#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,2,1,5,6,2,7};

    map<int,int> mp;

    for(int i=0;i<10;i++){
        mp[arr[i]]++;
    }

    for(auto u : mp ){
        if(u.second==1){
            cout<<u.first<<" "; 
        }
    }cout<<endl;

return 0;

}