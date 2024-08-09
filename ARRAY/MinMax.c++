#include<iostream>
using namespace std;
//  T.c =0(n)  S.c=o(1)
 void FindMinAndMaxElement(int arr[],int size){
    int max=arr[0];
    int min=arr[0];
    for(int i=1; i<size;i++){
        if(max<arr[i]){
max=arr[i];
        }

        if(min>arr[i]){
min=arr[i];
        }

    }
cout<<max<<endl;
cout<<min<<endl;
// sum of min max 
int ans =max+min;
cout<<ans;
 }




// using INT_MAX and INT_MIN
 int MinElement(int arr1[],int n){
int mini=INT64_MAX;
for(int i=0; i<n;i++){
    if (mini>arr1[i])
    {
        mini=arr1[i];
    }
    
}
return mini;
 }
 int MaxElement(int arr1[],int size){
int maxi=INT64_MIN;
for(int j=0; j<size;j++){
    if (maxi<arr1[j])
    {
        maxi=arr1[j];
    }
    
}
return maxi;
 }

 int main(){
    int arr[]={1,2,3,4,5};
int n=5;
    FindMinAndMaxElement(arr,n);
 }




