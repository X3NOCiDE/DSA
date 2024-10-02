#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "12";
    string str2 = "12";
    string ans;
    int carry=0;

    int i=str1.size()-1;
    int j=str2.size()-1;

    while(j>=0){
        int x = str1[i]-'0'+str2[j]-'0'+carry;            
            ans+=char((x%10)+'0');
            carry = x/10;
            i--;
            j--;
        }
    while(i>=0){
            int x = str1[i]-'0'+carry;
            ans+=char((x%10)+'0');
            carry= x/10;
            i--;
        }

    if(carry>0){
        ans+=char(carry+'0');
    }

    reverse(ans.begin(),ans.end());

    cout<<ans<<endl;
    }

    