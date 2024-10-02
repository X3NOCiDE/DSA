#include<bits/stdc++.h>
using namespace std;


int size(string &str){

    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main(){

    string s = "AHin";

    cout<<size(s);


}