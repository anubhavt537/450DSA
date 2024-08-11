// recursive approach 
//    // Base cases
//     if (k == 0) return true;         // Found a subset with sum k
//     if (index == 0) return arr[index] == k; // Only one element left to check
    
//     // If the element is greater than the sum we are looking for, skip it
//     if (arr[index] > k) return subsetSumToKHelper(index - 1, k, arr);

//     // Check if sum k can be achieved by including or excluding the current element
//     return subsetSumToKHelper(index - 1, k, arr) || 
//            subsetSumToKHelper(index - 1, k - arr[index], arr);



























// bruteforce
// // subsetSumToK( n, k, arr);
//  int totalSubsets = 1 << n; // 2^n subsets
//     for (int subset = 0; subset < totalSubsets; ++subset) {
//         int subsetSum = 0;
//         for (int i = 0; i < n; ++i) {
//             if (subset & (1 << i)) { // Check if the i-th element is included in this subset
//                 subsetSum += arr[i];
//             }
//         }
//         if (subsetSum == k) {
//             return true;
//         }
//     }
//     return false;
