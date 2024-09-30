#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<vector<int>>&v){
    int n = v.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;
}

int main(){

    int n=3;

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    int k=3;

    while(k--){
        rotateArr(matrix);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

}
