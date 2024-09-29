#include<bits/stdc++.h>
using namespace std;

void countOccMorethan2(int arr[],int size){

        for(int i=0;i<size-1;i++){
        if(arr[i]==INT_MAX){
            continue;
        }
        int cnt=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                arr[j]=INT_MAX;
                cnt++;
            }
        }
        if(cnt>=2){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return;
}

void OccurMorethan2(int arr[], int size){
    int tmp[1000]={0};

    for(int i=0;i<size;i++){
        tmp[arr[i]]++;
    }
    for(int i=0;i<size;i++){
        if(tmp[i]>=2){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return;
}

void moreThan2(int arr[],int size){
    map<int,int> mp;

    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }

    for(auto it : mp ){
        if(it.second>=2){
            cout<<it.first<<" ";
        }
    }cout<<endl;


    return;
}

int main(){
    int arr[10]={1,2,3,2,1,4,5,2,4,6};
    int brr[10]={1,2,3,2,1,4,5,2,4,6};

    

    OccurMorethan2(arr,10);

    countOccMorethan2(arr,10);

    moreThan2(brr,10);
    

}