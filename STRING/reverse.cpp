#include<bits/stdc++.h>
using namespace std;

void reverse(string &str){
    for(int i=0,j=str.size()-1;i<=j;i++,j--){
        swap(str[i],str[j]);
    }
    return;
}


int main(){
    string str="Mubasshir Ahin";

    reverse(str);

    cout<<str;
    

}