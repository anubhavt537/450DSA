// You are given a 2-D array 'MATRIX' of dimensions N x M, of integers. You need to return the spiral path of the matrix.
#include<bits/stdc++.h>
using namespace std;


vector<int> Spiral(vector<vector<int>> matrix,int row ,int col){
    int right=col-1;
    int left=0;
    int top=col-1;
    int bottom=row-1;
    vector<int> ans;
    while(right<=left){
        // for(int i=left; i<right; i++){
        //     ans.push_back(matrix[top][i]);
        // }
        // top++;
        // for (int i = top; i <=bottom; i++)
        // {
        //     ans.push_back(matrix[i][right]);
        // }
        // right--;
        // for (int i = right; i >=left; i--)
        // {
        //     ans.push_back(matrix[bottom][i]);
        // }
        // bottom--;

        // for (int i = bottom; i >= top; --i) {
        //         ans.push_back(matrix[i][left]);
        //     }
        //     left++;

          vector<int> result;
    
    // Define the boundaries of the matrix
    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;
    
    // Traverse the matrix in spiral order
    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;
        
        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;
        
        if (top <= bottom) {
            // Traverse from right to left along the bottom row
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        if (left <= right) {
            // Traverse from bottom to top along the left column
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    return result;
        
    }
}

int main(){

}