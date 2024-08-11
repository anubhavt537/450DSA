// Problem statement
// Rahul is a programming enthusiast. He is currently learning about arrays/lists. One day his teacher asked him to solve a very difficult problem. The problem was to find the length of the smallest subarray(subarray is a contiguous part of an array/list) in a given array/list ‘ARR’ of size ‘N’ with its sum greater than a given value. If there is no such subarray return 0.

// Example: Given an ‘ARR’: [1, 2, 21, 7, 6, 12] and a number ‘X’: 23. The length of the smallest subarray is 2 as the subarray is [21, 7].

// Note: Here are multiple subarrays whose sum is greater than ‘X’ such as [1, 2, 21] or [7, 6, 12] but we have to choose the minimum length subarray.



// int left = 0;   // Left boundary of the sliding window
//     int windowSum = 0; // Current sum of the window
//     int minLength = n + 1; // Initialize to a large value

//     // Iterate with the right boundary of the sliding window
//     for (int right = 0; right < n; ++right) {
//         windowSum += arr[right]; // Add the current element to the window

//         // While the current window sum is greater than or equal to the target
//         while (windowSum >= target) {
//             // Update the minimum length
//             minLength = min(minLength, right - left + 1);
//             // Shrink the window from the left
//             windowSum -= arr[left++];  or windowsum=windowsum-arr[left++];
//         }
//     }

//     // If no valid subarray was found, return 0
//     return minLength == n + 1 ? 0 : minLength;