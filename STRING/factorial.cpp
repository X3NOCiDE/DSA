#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    vector<int> ans(1,1);
    int carry=0;
    int res=0;
    

    while(n>1){
        int size = ans.size();
        for(int i=0;i<size;i++){
            res = ans[i]*n + carry;
            ans[i]=res%10;
            carry = res/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        n--;
    }

    reverse(ans.begin(),ans.end());

    for(auto u : ans){
        cout<<u;
    }
    
}