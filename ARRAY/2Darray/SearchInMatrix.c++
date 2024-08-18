#include<bits/stdc++.h>
using namespace std;
pair<int,int> search(vector<vector<int>> matrix,int target){
    int rows=matrix.size();
    int col=matrix[0].size();

    for(int i=0; i<rows; i++){
        for (int j = 0; i < col; j++)
        {
            if(matrix[i][j]==target){
return {i,j};
            }
        }
        
    }
    return {-1,-1};
}