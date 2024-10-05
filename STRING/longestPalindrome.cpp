#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcdebcd";
    vector<int> v(26,0);
    vector<int>v1(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
        v[s[i]-'a']++;
        }
        else{
            v1[s[i]-'A']++;
        }
    }
    

    int single = 0;
    int cnt=0;

    for(int i=0;i<26;i++){
        cnt += v[i]/2;
        single = single + (v[i]%2);
    }

    for(int i=0;i<26;i++){
        cnt += v1[i]/2;
        single = single + (v1[i]%2);
    }

    cnt = cnt*2;

    if(single>=1){
        cnt++;
    }

    cout<<cnt<<endl;

    
}