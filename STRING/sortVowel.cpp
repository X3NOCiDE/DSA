#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "leEtCoDE";
    //ans = lEEtCedo.
    string tmp ;
    vector<int> tmp1(26,0);
    vector<int> tmp2(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            tmp.push_back(s[i]);
            s[i]='#';
        }
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            tmp.push_back(s[i]);
            s[i]='#';
        }
    }

    for(int i=0;i<tmp.size();i++){
        if(tmp[i]>='A' && tmp[i]<='Z'){
            tmp1[tmp[i]-'A']++;
        }
    }

    for(int i=0;i<tmp.size();i++){
        if(tmp[i]>='a' && tmp[i]<='z'){
            tmp2[tmp[i]-'a']++;
        }
    }

    tmp.clear();

    for(int i=0;i<tmp1.size();i++){
        while(tmp1[i]--){
            tmp.push_back(char('A'+i));
        }
    }

    for(int i=0;i<tmp2.size();i++){
        while(tmp2[i]--){
            tmp.push_back(char('a'+i));
        }
    }

    int j=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
            s[i]=tmp[j];
            j++;
        }
    }

    cout<<s<<endl;















    
}