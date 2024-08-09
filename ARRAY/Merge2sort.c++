#include <iostream>
#include <vector>

void mergeArraysInPlace(std::vector<int>& arr1, int m, std::vector<int>& arr2, int n) {
    // Pointers for the end of arr1, end of arr2, and end of merged array
    int i = m - 1; // End of valid elements in arr1
    int j = n - 1; // End of arr2
    int k = m + n - 1; // End of merged array

    // Merge arrays from the end
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    // Copy remaining elements of arr2 (if any)
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }
}

int main() {
    std::vector<int> arr1 = {1, 3, 5, 7, 0, 0, 0, 0}; // Extra space at end for merging
    std::vector<int> arr2 = {2, 4, 6, 8};

    int m = 4; // Number of valid elements in arr1
    int n = 4; // Number of elements in arr2

    mergeArraysInPlace(arr1, m, arr2, n);

    // Print the merged array
    for (int num : arr1) {
        std::cout << num << " ";
    }
    return 0;
}
