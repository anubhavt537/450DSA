// dutchs national flag algorithm 

// i=0 j=n-1
// while i<j
// arr[i]<0 i++
// else if arr[j]>0 j--
// else swap arr[i],arr[j];
// T.C=O(N);

#include<iostream>
#include<vector>
using namespace std;
vector<int> MoveNegativeToleftAndpostiveRight(vector<int> &nums){
    int n=nums.size();
 int i=0;
 int j=n-1;
 while(i<j){
if(nums[i]<0){
    i++;
}
else if (nums[j]>0)
{
    j--;
}
else{
    swap(nums[i],nums[j]);
    i++;
    j--;
}

 }
 return nums;

}
int main(){

}

// T.C->O(nlogn)

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> separateNegativeAndPositive(vector<int> &nums) {
//     // Sort the vector
//     sort(nums.begin(), nums.end());

//     // Create vectors for negative and positive numbers
//     vector<int> negatives;
//     vector<int> positives;

//     // Separate the sorted numbers into negatives and positives
//     for (int num : nums) {
//         if (num < 0) {
//             negatives.push_back(num);
//         } else {
//             positives.push_back(num);
//         }
//     }

//     // Combine the vectors: first negatives, then positives
//     vector<int> result;
//     result.insert(result.end(), negatives.begin(), negatives.end());
//     result.insert(result.end(), positives.begin(), positives.end());

//     return result;
// }
