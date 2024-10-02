#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "acdfab";

    vector<int> check(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
        check[s[i] - 'a']++;
        }
    }

    for(int i=0;i<26;i++){
        while(check[i]--){
            cout<<char('a'+i)<<" ";
        }

    }


    
    }