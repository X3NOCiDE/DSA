#include<bits/stdc++.h>
using namespace std;

int main()
{    
    int arr[6]={1,2,3,4,5,6};

    //convert into a 3*2 matrix

    int row = 3;
    int col = 2;

    // 1 2
    // 3 4
    // 5 6

    int brr[row][col];

    for(int i=0;i<6;i++){
        brr[i/col][i%col] = arr[i];        
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }



return 0;
}