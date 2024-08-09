#include<iostream>

using namespace std;

// 
void reverseArray(int arr1[],int size){
    
    // int n =sizeof(arr1)/sizeof(arr1[0]);
    int start=0;
        int end=size-1;
        int temp;
        while(start<=end){
            temp=arr1[start];
            arr1[start]=arr1[end];
            arr1[end]=temp;
start++;
end--;


        }


     


}


   void reverseArrayRecursion(int arr[],int start,int end){
            // base case
            // int start=0;
            // int end=size-1;
            if(start<end)return ;

            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
             
             reverseArrayRecursion(arr,start+1,end-1);



        }


int main(){
    int arr1[]={1,2,3,4};
    int n=4;
    reverseArray(arr1,n);
    return 0;
}