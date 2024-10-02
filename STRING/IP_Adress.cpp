#include<bits/stdc++.h>
using namespace std;

void fun(string &s){
    string tmp;

    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            tmp+="[.]";
        }
        else{
            tmp+=s[i];
        }
    }
    s = tmp;
    return;
}


int main(){
    string s = "1.1.1.1";

    fun(s);

    cout<<s;


}