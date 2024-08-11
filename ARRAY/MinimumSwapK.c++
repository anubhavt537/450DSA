// #include<iostream>
// #include<algorithm>
// #include<vector>

// // 2 1 5 6 3 
// // 2 1 3 6 5 after swap

// // 7 3  2 5 1 6 4   k<=6 
 
// //  3 2 1 4

// // approach ->sliding window
// 1)cnt <=k 
// 2) 0->cnt-1; loop currentwind ye btaega us win m currentwin<=k  ans =currentwin-cnt 


#include <bits/stdc++.h> 
using namespace std;

int minimumSwaps(vector<int> &arr, int n, int k) {
    int count = 0;
    int bad = 0;

    // Count the number of elements <= k
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) {
            count++;
        }
    }

    // Count the number of elements > k in the initial window
    for (int i = 0; i < count; i++) {
        if (arr[i] > k) {
            bad++;
        }
    }

    int ans = bad;
    int j = 0;
    for (int i = count; i < n; i++) {
        // Slide the window right
        if (arr[i] > k) {
            bad++;
        }

        if (arr[j] > k) {
            bad--;
        }
        j++;
        ans = min(ans, bad);
    }

    return ans;
}





// using namespace std;

// int minimumSwap(vector<int> &arr,int k){
//     int n=arr.size();
//     int subarray=0;
//     int sum=0;

//     for(int i=0; i<n; i++){
//         if(sum==k)
//          swap(arr[k],arr[i+2]);
//     }

//     if()
// }
// public class MinSwap {
//     public static int minSwap(int[] arr, int n, int k) {
//         int count = 0;
//         // finding Gud values 
//         for (int i = 0; i < n; i++) {
//             if (arr[i] <= k) {
//                 count++; // Gudelemnts // 3
//             }
//         }
    

//         int bad = 0;
//         for (int i = 0; i < count; i++) {     // Gud values = sliding window size
//             if (arr[i] > k) {
//                 bad++; // 1
//             }
//         }

//         int ans = bad;  // 1

//         int j = 0; //1,
//         for (int i = count; i < n; i++) {  //i=3,4
//             if (arr[i] > k) {  // yahha pe bad elemnt aage waala found kara
//                 bad++; // 2
//             }

//             if (arr[j] > k) { 
//                 bad--; // 1
//             }
//             j++;
//             ans = Math.min(ans, bad);
//         }

//         return ans;
//     }

//     public static void main(String[] args) {
//         int[] arr = {2,6, 5, 6, 1,3};
//         int k = 3;
//         int n = arr.length;
//         System.out.println(minSwap(arr, n, k));
//     }
// }]]