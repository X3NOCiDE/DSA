#include<bits/stdc++.h>
using namespace std;

void sortNeg(vector<int>&v){
    vector<int> tmp;

    for(auto u : v ){
        if(u>=0){
            tmp.push_back(u);
        }
    }
    for(auto u : v ){
        if(u<0){
            tmp.push_back(u);
        }
    }

    v = tmp;
    return;
}

int main(){

    vector<int> v = {0,1,-1,-2,0,4,5,-6,-7,2,-3,4};

    sortNeg(v);

    for(auto u : v){
        cout<<u<<" ";
    }


}