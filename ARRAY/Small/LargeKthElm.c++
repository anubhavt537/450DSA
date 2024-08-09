#include<iostream>
#include<algorithm>
#include<vector>
// t.c ->o(logn)
using namespace std;
vector<int> KthSmallestLargestElement(vector<int> &arr,int n ,int k){
    sort(arr.begin(),arr.end());
    
    if (k>=n || k<=0)
    {
        cout<<"invalid k";
    }
    
    int KthSmallest=arr[k-1];
    int Kthlargest=arr[n-k];
    return {KthSmallest,Kthlargest};
}
int main(){

}