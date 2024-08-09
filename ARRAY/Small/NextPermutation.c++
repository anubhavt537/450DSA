// to find  the permuatation 1 2 3->6
// // Function to calculate factorial
// int factorial(int n) {
//     if (n <= 1) return 1;
//     return n * factorial(n - 1);
// }


// Q) to find the next     ou have been given a permutation of ‘N’ integers. A sequence of ‘N’ integers is called a permutation if it contains all integers from 1 to ‘N’ exactly once. Your task is to rearrange the numbers and generate the lexicographically next greater permutation.

// To determine which of the two permutations is lexicographically smaller, we compare their first elements of both permutations. If they are equal — compare the second, and so on. If we have two permutations X and Y, then X is lexicographically smaller if X[i] < Y[i], where ‘i’ is the first index in which the permutations X and Y differ.

// For example, [2, 1, 3, 4] is lexicographically smaller than [2, 1, 4, 3].

// optimal approach

// 1) longer prefix match 2 1 5 4 3 0 0  find the break point if we arrange just like we can make 2 1 5 4 3 0 _0 , 2 1 5 4 3 _0 _0 , 2 1 5 4 _3 0 _0 ->arrange 0 0 3, 0 3 0 we dont get the just smallest 2 1 5 _4 _3 _0 _0 ->not get just smaller ->2 1 _5 _4 _3 _0 _0->  tthis is also smallerafter rearranging  than 2 1 5 4 3 0 0 , 2 _1 _5 _4 _3 _0 _0 we get the breakpoint which is greater combination tan 2 1 5 4 3 0 0
// i<I+1; 


// 2) found just greater than 1 and just smallest like 3 not 4 5 

// 3)then after placing 3 wapping there then after sort all the element 



#include <bits/stdc++.h> 
#include<algorithm>
vector<int> nextPermutation(vector<int> &arr, int n)
{
    // next_permutation(permutation.begin(),permutation.end());
    // return permutation;

    int ind=-1;
// case 1 finding break pint 
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }

    }
    // if break point doesnt exist 
    if(ind==-1){
 reverse(arr.begin(),arr.end());
 return arr;
}

// case 3 reverse the element after swapping from break point to get sorted 
   for(int i=n-1; i>ind; i--){
       if(arr[i]>arr[ind]){
           swap(arr[i],arr[ind]);
           break;
       }
   }
//    reverse the right half
   reverse(arr.begin()+ind+1,arr.end());
   return arr;
    
}  //T>C->O(3n)




//  another approach
class Solution {
    public void nextPermutation(int[] nums) {      // 1 2 3 
        int i = nums.length - 2;   //  1       
        while(i >= 0 && nums[i] >= nums[i+1]){  // 2 >= 3 ,   1>=2
            i--; // 0 , -1
        }
        if(i>=0) {  // 1 >=0
            int j = nums.length-1; // j=2
            while(j >= 0 && nums[j] <= nums[i]) //2>=0 && 3 <= 2  , 1>=0 && 2<=2 ,
             j--; 
            swap(nums, i, j); //1 3 2
        }
        
        reverse(nums, i+1); 
    }
    
    public void swap(int[] nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
    public void reverse(int[] nums, int start){
        int end = nums.length-1;
        while(start < end) {
            swap(nums, start, end);
            start++;
            end--;
        }
    }
}
