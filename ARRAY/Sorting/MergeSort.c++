// step 1 break the array from mid into halves  mergeSortfunction 
// step 2 merge the sorted array  merge function
// T.c-> O(nlogn) S.C-> O(1)  slower than quick sort 
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int mid, int e) {
    vector<int> temp;
    
    int left = s;
    int right = mid + 1;
    
    while (left <= mid && right <= e) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while (left <= mid) { // pushing remaining elements from the left side
        temp.push_back(arr[left]);
        left++;
    }
    
    while (right <= e) { // pushing remaining elements from the right side
        temp.push_back(arr[right]);
        right++;
    }
    
    // transferring all elements from temp to arr
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i - s];
    }
}

void mergeSort(vector<int> &arr, int s, int e) {
    // base case
    if (s >= e) {
        return;
    }
    
    int mid = s + (e - s) / 2;
    
    mergeSort(arr, s, mid); // sort the first half
    mergeSort(arr, mid + 1, e); // sort the second half
    merge(arr, s, mid, e); // merge the sorted halves
}

int main() {
    vector<int> arr1 = {12, 13, 11, 19, 14};
    int n = arr1.size();
    
    mergeSort(arr1, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << endl;
    }
    
    return 0;
}
