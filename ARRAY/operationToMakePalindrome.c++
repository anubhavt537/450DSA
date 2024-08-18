// 1 2 3 
// 3 2 17
#include<iostream>
using namespace std;
int operationTomakepalindrome(int arr[],int n){
int operation=0;
	int j=n-1;
    int i=0;
	while(i<=j){
		if(arr[i]==arr[j]){
			i++;
			j--;
		}
		else{
			if(arr[i]<arr[j]){
			arr[i] =	arr[i]+arr[i+1];
            // arr[i+1]=arr[i+1]+arr[i];
			i++;
			}
			if(arr[i]>arr[j]){
				arr[j]=arr[j]+arr[j-1];
				j--;
			}
		}
		operation++;
	}
	return operation;
    }


    #include <vector>
#include <algorithm>  // For std::max and std::min
// not submitted
int palindrome(std::vector<int>& A) {
    int n = A.size();
    int i = 0;
    int j = n - 1;
    int operations = 0;

    while (i < j) {
        if (A[i] == A[j]) {
            i++;
            j--;
        } else if (A[i] < A[j]) {
            A[i + 1] += A[i];
            i++;
            operations++;
        } else {
            A[j - 1] += A[j];
            j--;
            operations++;
        }
    }
    return operations;
}

//      4 3 7 1
//      4 3 8 
// 7 8 
// 15  
// case 
//  1 3 3 
//  1 6 
//  7
     