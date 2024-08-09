// Q15)Given an array of integers. Find the Inversion Count in the array.  Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum. 

// Examples:

// Input: n = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
// Input: n = 5, arr[] = {2, 3, 4, 5, 6}
// Output: 0
// Explanation: As the sequence is already sorted so there is no inversion count.


// hint merge sort use
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> countInversion(vector<int> &arr){
    int n=arr.size();
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
for(int i=0; i<n; i++){

}

}