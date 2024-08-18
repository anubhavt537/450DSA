#include<iostream>

using namespace std;



long long getTrappedWater(long long* arr, int n) {
   if (n == 0) return 0;

    // Create arrays for left_max and right_max
    long long* left_max = new long long[n];
    long long* right_max = new long long[n];

    // Fill the left_max array
    left_max[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        left_max[i] = max(left_max[i - 1], arr[i]);
    }

    // Fill the right_max array
    right_max[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        right_max[i] = max(right_max[i + 1], arr[i]);
    }

    // Calculate the trapped water
    long long water_trapped = 0;
    for (int i = 0; i < n; ++i) {
        water_trapped += min(left_max[i], right_max[i]) - arr[i];
    }

    // Clean up allocated memory
    delete[] left_max;
    delete[] right_max;

    return water_trapped;

}