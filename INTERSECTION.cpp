#include<bits/stdc++.h>
using namespace std;

void intersect(int arr[],int brr[], int n1, int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr[i]==brr[j]){
                cout<<brr[j]<<" ";
                brr[j]=INT_MIN;
                break;
            }
        }
    }cout<<endl;
}

int main(){
    int arr[6]={1,2,2,2,3,4};     //sorted
    int brr[4]={2,2,3,3};

   intersect(arr,brr,6,4);

    int ar[6]={1,2,2,2,3,4};
    int br[4]={2,2,3,3};

    for(int i=0,j=0;i<6 && j<4 ; ){
        if(ar[i]==br[j]){
            cout<<ar[i]<<" ";
            i++;
            j++;
        }
        else if(br[j]>ar[i]){
            i++;
        }
        else{
            j++;
        }
    }




}