#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,1,1,3,0,1,2};  
    //1,2,3-> 3
    //2,3,1-> 3
    //1,1,3,1,1 -> 5 (ans)    
    int sum=0;

    int target = 6;

    int tail=0;
    int len = 0;

    for(int head=0;head<v.size();head++){
        sum+=v[head];
        while(sum>target){
            sum-=v[tail];
            tail++;
        }
        len=max(len,head-tail+1);
    }

    cout<<len<<endl;
    

}