#include<bits/stdc++.h>
using namespace std;

string rotateRight(string &s, int k){
    int n = s.size();
    string tmp(n,0);
    for(int i=0;i<n;i++){
        tmp[(i+k)%n]=s[i];
    }
    return tmp;
}

string rotateLeft(string &s, int k){
    int n = s.size();
    string tmp(n,0);
    for(int i=0;i<n;i++){
        tmp[(i-k+n)%n]=s[i];
    }
    return tmp;
}


int main(){
    string s1 = "Leetcode";
    string s2 = "deLeetco";

    if(rotateLeft(s2,2)==s1 || rotateRight(s2,2)==s1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }





}