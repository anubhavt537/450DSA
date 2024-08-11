#include <vector>
#include <algorithm> // For std::max and std::min
using namespace std;


// T.c->O(n)
// Function to merge two sorted arrays
vector<int> mergeArrays(const vector<int>& a, const vector<int>& b) {
    int m = a.size();
    int n = b.size();
    vector<int> merged(m + n);
    int i = 0, j = 0, k = 0;

    // Merge arrays
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements of a, if any
    while (i < m) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements of b, if any
    while (j < n) {
        merged[k++] = b[j++];
    }

    return merged;
}

// Function to find the median of a sorted array
double findMedian(const vector<int>& merged) {
    int size = merged.size();
    int mid = size / 2;

    if (size % 2 == 0) {
        // Even size, average of middle two elements
        return (merged[mid - 1] + merged[mid]) / 2.0;
    } else {
        // Odd size, middle element
        return merged[mid];
    }
}

// Function to find the median of two sorted arrays
double median(vector<int>& a, vector<int>& b) {
    // Merge the two sorted arrays
    vector<int> merged = mergeArrays(a, b);

    // Find the median of the merged array
    return findMedian(merged);
}


// t.c ->o(min(logn,logm)) optimized
// double median(vector<int>& a, vector<int>& b) {
//     int m = a.size();
//     int n = b.size();

//     // Ensure a is the smaller array
//     if (m > n) {
//         return median(b, a);
//     }

//     int s = 0;
//     int e = m;
//     int mid = (m + n + 1) / 2;

//     while (s <= e) {
//         int i = s + (e - s) / 2;
//         int j = mid - i;

//         int aLeftMax = (i == 0) ? INT_MIN : a[i - 1];
//         int aRightMin = (i == m) ? INT_MAX : a[i];
//         int bLeftMax = (j == 0) ? INT_MIN : b[j - 1];
//         int bRightMin = (j == n) ? INT_MAX : b[j];

//         if (aLeftMax <= bRightMin && bLeftMax <= aRightMin) {
//             if ((m + n) % 2 == 0) {
//                 return (max(aLeftMax, bLeftMax) + min(aRightMin, bRightMin)) / 2.0;
//             } else {
//                 return max(aLeftMax, bLeftMax);
//             }
//         } else if (aLeftMax > bRightMin) {
//             e = i - 1;
//         } else {
//             s = i + 1;
//         }
//     }

//     throw invalid_argument("Input arrays are not sorted.");
// }
