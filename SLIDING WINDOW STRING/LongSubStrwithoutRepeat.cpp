#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcdecbeadf";
    int first = 0;
    int second = 0;
    int len = 0;

    vector<int> count(256,0);

    while(second<s.size()){
        while(count[s[second]]==1){
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;
        len = max(len,second-first+1);
        second++;
    }

    cout<<len<<endl;
}