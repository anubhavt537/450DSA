// cyclic rotate an arrzy by k times 

#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int reverseByKPostion(int arr[],int k,){
    // int n=arr.size(); create vector
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);


}
int main(){

}