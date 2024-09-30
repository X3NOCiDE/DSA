#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix(3,vector<int>(4));
    vector<vector<int>>transpose(4,vector<int>(3));

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
}