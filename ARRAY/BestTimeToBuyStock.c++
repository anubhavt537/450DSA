#include<iostream>
#include<vector>
using namespace std;

// 1method 
 int maxProfit(vector<int> &prices) {
        int buy =prices[0];  //7
        int profit = 0 ;
        int maxprofit =0;

        for(int i = 1;i<prices.size();i++){
            if(buy>prices[i]){  // 7>1 
                buy=prices[i]; // 1
            }
            else if(buy<prices[i]){ //1<5
                profit = prices[i]-buy ; //  4 
            }
            if(maxprofit<profit){
                maxprofit =profit ;
            }
    }
    return maxprofit ;
    }

// 2method
// public int maxProfit(int[] prices) {
//         int buy =prices[0];  //7
//         int profit = 0 ;
//         int maxprofit =0;

//         for(int i = 1;i<prices.length;i++){
//             if(buy>prices[i]){  // 7>1 
//                 buy=prices[i]; // 1
//             }
//             else if(buy<prices[i]){ //1<5
//                 profit = prices[i]-buy ; //  4 
//             }
//             if(maxprofit<profit){
//                 maxprofit =profit ;
//             }
//     }
//     return maxprofit ;
//     }



// best time to buy and sell stocks ||| 3 hard 
// class Solution {
//     public int maxProfit(int[] prices) {
//          int n = prices.length;

//         if (n == 0) return 0;

//         int[] left = new int[n];
//         int[] right = new int[n];

//         // Bidirectional DP Logic
//         // Left to right traversal
//         int min = prices[0]; // 3 ,0 
//         for (int i = 1; i < n; i++) {
//             // 1. Update Buy price
//             if (prices[i] < min){ // again buy 
//                min = prices[i];
//             }  
       
//             // 2. Calculate current profit
//             int profit = prices[i] - min; // 0 
//             // 3. Fill left array (based on condition)
//             left[i] = Math.max(left[i-1], profit);
//         } // for 

//         // Right to left traversal
//         int max = prices[n-1];
//         for (int i = n-2; i >= 0; i--) {
//             // 1. Update Sell price
//             if (prices[i] > max) max = prices[i];
//             // 2. Calculate current profit
//             int profit = max - prices[i];
//             // 3. Update right array
//             right[i] = Math.max(right[i+1], profit);
//         }

//         int maxProfit = 0;
//         for (int i = 0; i < n; i++) {
//             maxProfit = Math.max(maxProfit, left[i] + right[i]);
//         }

//         return maxProfit;
//     }
// }

