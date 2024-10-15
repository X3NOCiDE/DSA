#include<bits/stdc++.h>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> res;

        for(int i=0;i<nums.size();i++){
            res.push_back({nums[i],i});
        }
        sort(res.begin(),res.end());   //sort using first value

        int i=0;
        int j=res.size()-1;
        while(i<j){
            if(res[i].first+res[j].first==target){
                return {res[i].second,res[j].second};
            }
            else if(res[i].first+res[j].first>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }

    int main(){
        vector<int> v={1,3,2,5,4};
        int target = 8;

        vector<int> res = twoSum(v,target);

        cout<<res[0]<<" "<<res[1]<<endl;

 

    }
