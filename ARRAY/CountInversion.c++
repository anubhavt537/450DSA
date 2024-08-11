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
// step1->break the array into halves
// step-2> merge the breaked array in sorted way
//  step3>for count inversion after coming back if alread arr[i]>arr[i+1] +=count inversion
// 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#include <iostream>
#include <vector>

using namespace std;

// Function to merge two halves and count inversions
int mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left; // Starting index for left subarray
    int j = mid + 1; // Starting index for right subarray
    int k = left; // Starting index to be sorted
    int invCount = 0;

    // Merge two halves while counting inversions
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            invCount += (mid - i + 1); // Count inversions
        }
    }

    // Copy remaining elements of left subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of right subarray
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy the sorted subarray into Original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return invCount;
}

// Function to use merge sort to count inversions
int mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
    int invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        invCount += mergeSortAndCount(arr, temp, left, mid);
        invCount += mergeSortAndCount(arr, temp, mid + 1, right);
        invCount += mergeAndCount(arr, temp, left, mid, right);
    }
    return invCount;
}

// Main function to count inversions
int countInversions(vector<int>& arr) {
    vector<int> temp(arr.size());
    return mergeSortAndCount(arr, temp, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {1, 20, 6, 4, 5};
    cout << "Number of inversions are " << countInversions(arr) << endl;
    return 0;
}

















#include <bits/stdc++.h>

using namespace std;

// Function to merge two halves and count inversions
long long merge(long long *arr, int s, int e, int mid) {
    long long invCount = 0;
    vector<long long> temp(e - s + 1);
    int left = s;                                      s 1 2 3left       mid +1 4 5  eright
    int right = mid + 1;
    int k = 0;

    // Merge two halves while counting inversions
    while (left <= mid && right <= e) {
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
            invCount += (mid - left + 1); // Count inversions
        }
    }

    // Copy remaining elements of left subarray
    while (left <= mid) {
        temp[k++] = arr[left++];
    }

    // Copy remaining elements of right subarray
    while (right <= e) {
        temp[k++] = arr[right++];
    }

    // Copy the sorted subarray into Original array
    for (int i = 0; i < temp.size(); i++) {
        arr[s + i] = temp[i];
    }

    return invCount;
}

// Function to use merge sort to count inversions
long long mergeSort(long long *arr, int s, int e) {
    long long invCount = 0; 
    if (s < e) {
        int mid = s + (e - s) / 2;

        invCount += mergeSort(arr, s, mid);   1 2 3 4 5    1 2 3 
        invCount += mergeSort(arr, mid + 1, e); 4 5
        invCount += merge(arr, s, e, mid);      1 2 3 4 5
    }
    return invCount;
}

// Main function to count inversions
long long getInversions(long long *arr, int n) {
    return mergeSort(arr, 0, n - 1);
}