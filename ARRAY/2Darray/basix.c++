#include<bits/stdc++.h>
using namespace std;
// internal function
// matrix represnt like    1 2 3
                        // 4 5 6
                        // but actual 1 2 3 4 5 6 it is in coloumn 

                        // to find eleemt in matrix we use formula 
                        // cloumn * i+j  i->to find row j -> to given col 

// how to create 2d array
// int arr[2][3]  i=2 j=3  row->           coloum-|^
// vector<vector<int>> matrix;




// // row wise input 
// for(int i=0; i<2; i++){
//     for(int j=0; j<3; j++){
//         cin>>arr[i][j];
//     }
// }


// // coloum wise input 
// for(int j=0; j<3; j++){
//     for(int i=0; i<2; i++){
//         cin>>arr[i][j];
//     }
// }



// // output 
// for(int i=0; i<2; i++){
//     for(int j=0; j<3; j++){
//         cout<<arr[i][j];
//     }
// }

// int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12,13}}; custom value given to row and cloumn 


// linear search in 2d array 

// bool ispresnt(int arr[3][3],int target){
//     for (int i = 0; i < 3; i++)
//     {
//         for(int j=0; j<3; j++){
//             if(arr[i][j]==target){
//                 return 1;
//             }
//         }
//     }
    
// }


// vector<int> rowWiseSum(vector<vector<int>> &matrix,int row,int col){
// int sum=0;
// for(int row=0; row<3;row++){
//     for(int col=0;col<3; col++){
//         sum =matrix[row][col];
//     }
//     cout<<sum;
// }
// }

// vector<int> LargestrowWiseSum(vector<vector<int>> &matrix,int row,int col){
// int sum=0;
// int largest=0;
// for(int row=0; row<3;row++){
//     for(int col=0;col<3; col++){
//         sum =matrix[row][col];
// if(arr[row][col]>largest) {
//     largest=arr[row][col] ;
// }

//     }
//     cout<<sum;
// }
// }


//  