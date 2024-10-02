#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7; //1 2 3 4 5 6 7
    int arr[n]={3,2,1,1,4,6,4};   //missing : 0,5   duplicate : 1,4

    vector<int> missing;
    vector<int>duplicate;

    map<int,int> mp;

    for(auto u : arr ){
        mp[u]++;
    }

    for(int i=0;i<n;i++){
        if(mp[i]==0){
            missing.push_back(i);
        }  
        if(mp[i]>1){
            duplicate.push_back(i);
        }      
    }

    cout<<"missing: ";

    for(auto u : missing){
        cout<<u<<" ";
    }cout<<endl;

    cout<<"Duplicate: ";
    for(auto u : duplicate){
        cout<<u<<" ";
    }cout<<endl;




}