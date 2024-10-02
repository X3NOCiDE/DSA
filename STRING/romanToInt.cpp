#include<bits/stdc++.h>
using namespace std;

int num(char ch){
    switch(ch){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }

}

int main(){
    string roman = "CDXC";
    int sum=0;

    for(int i=0;i<roman.size()-1;i++){
        int x = num(roman[i]);
        int y = num(roman[i+1]);

            if(x>=y){
                sum+=x;
            }
            else{
                sum-=x;
            }
    }
    sum+=num(roman[roman.size()-1]);

    cout<<sum<<endl;
}