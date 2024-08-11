#include <bits/stdc++.h> 
#include<vector>
using namespace std;
int pairSum(vector<int> &arr, int n, int target){
	int count = 0;
    

    int left = 0;            // Start pointer
    int right = n - 1;       // End pointer



    while (left < right) {
        int sum = arr[left] + arr[right];

		
        if (sum == target) {
            count++;
            left++;
            right--;
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
		
    }
	if(count ==0){
			return -1;
		}

    return count;
}  //T.C->O(nlogn)