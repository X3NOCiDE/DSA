#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4]={1,3,4,4,5,2,6,7,2,3,4,6};

    map<int,int> mp;

    vector<int>v;

    int cnt=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            mp[arr[i][j]]++;
        }        
    }

    for(auto u : mp ){
        int x = u.first+(u.second*100);
        v.push_back(x);
    }

    for(auto u : v ){
        cout<<"NUM: "<<u%100<<" ";
        cout<<"OCCURANCE: "<<u/100<<endl;
    }



}