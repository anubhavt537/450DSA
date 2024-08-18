#include<bits/stdc++.h>
using namespace std;
vector<int> WaveMatrix(vector<vector<int>> arr,int nRows ,int mCol){
vector<int> ans;
// colindex bottom to top
for(int col=0; col<mCol; col++)
{
    // even col top to bootom
    if(col %2==0){
      for(int row=nRows; row<nRows; row++){
        ans.push_back(arr[row][col]);
      }
    }
    // odd col  bottom to top
    else{
for(int row=nRows-1; row>=0; row--){
    ans.push_back(arr[row][col]);
}
    }
}
return ans;
}
int main() {
    vector<vector<int>> arr = {{1, 2}, {3, 4}};
    int nRows = 2, mCol = 2;

    vector<int> result = WaveMatrix(arr, nRows, mCol);

    for(int i : result) {
        cout << i << " ";
    }

    return 0;
}



// vector<int> shift0toend(vector<int> arr,int n){
//     int s=0;
//     int end=n-1;
//     while(s<e){
//         if(arr[s]==0){
//             swap(arr[i],arr[end]);
//             end--;
           
//         }
//         else{
//  s++;
//         }
//     }
//     return arr;
// }


// vector<int> Shift012(vector<int> &arr,int n ){
//     // sort(arr.begin(),arr.end()); approach 1;

//     int count0=0;
//     int count1=0;
//     int count2=0;
//     for(int i=0; i<n;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         if(arr[i]==1){
//             count1++;
//         }
//         if(arr[i]==2){
//             count2++;
//         }
//     }
// }