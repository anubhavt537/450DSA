// int findDuplicate(vector<int> &arr) 
// {
//     sort(arr.begin(),arr.end());
//     int n=arr.size();
// for(int i=0; i<n; i++){
//     if(arr[i]==arr[i+1]){
//         return arr[i];
//     }
// }
// 	return -1;
// }T.c=>O(n^2)


// using floyds algorithm slow and fast pointer hare and rabbit method 
// nt findDuplicate(vector<int>& arr) {
//     int slow = arr[0];
//     int fast = arr[0];

//     // Phase 1: Finding intersection point of the two runners
//     do {
//         slow = arr[slow];       // Move slow by 1 step
//         fast = arr[arr[fast]]; // Move fast by 2 steps
//     } while (slow != fast);

//     // Phase 2: Find the entrance to the cycle (duplicate number)
//     fast = arr[0]; // Start from the beginning
//     while (slow != fast) {
//         slow = arr[slow];
//         fast = arr[fast];
//     }

//     return slow; // or fast, both are the same at this point
// }T.C->o(n)


// hashing 

// #include <unordered_set>
// int findDuplicate(vector<int> &arr) {


//     unordered_set<int> seen; // Create a hash set to track seen elements

//     for (int num : arr) {
//         if (seen.find(num) != seen.end()) {
//             // If the number is already in the set, it's a duplicate
//             return num;
//         }
//         seen.insert(num); // Add the number to the set
//     }

//     // If no duplicate is found, though it should be found in a valid problem context
//     return -1;
// }