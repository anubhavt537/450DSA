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
//      4 3 7 1
//      4 3 8 
// 7 8 
// 15  
// case 
//  1 3 3 
//  1 6 
//  7
     