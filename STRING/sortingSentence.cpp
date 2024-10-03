#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "a3 i1 am2 student4";
    vector<string> ans(10);
    int idx = 0;
    string tmp;
    while(idx<s.size()){
        if(isdigit(s[idx])){
            int x = s[idx]-'0';
            ans[x-1]=tmp;
            tmp.clear();
            idx++;
        }
        else{
            tmp+=s[idx];
        }
        idx++;
    }

    string ans1;

        for (int i = 0; i < 10; i++) {
            if (!ans[i].empty()) {
                if (!ans1.empty()) {
                    ans1 += ' ';
                }
                ans1 += ans[i];
            }
        }

    cout<<ans1<<endl;

}