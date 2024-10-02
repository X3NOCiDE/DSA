#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";

    vector<bool> check(26,false);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
        check[s[i] - 'a'] = true;
        }
    }

    for(auto u : check ){
            if(!u){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    cout<<"YES"<<endl;
    
    }


