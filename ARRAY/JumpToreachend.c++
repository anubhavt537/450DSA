#include<iostream>
#include<vector>
using namespace std;
vector<int>  maxJumpsToReachEnd(vector<int> &arr,int n){
    int jumps=0;
    int farthest=0;
    int current=0;
if(arr[0]==0) return -1;

    for (int i = 0; i < n; i++)
    {
        farthest=max(farthest,i+arr[i]);
        if(i==current){
            jumps++;
            current=farthest;
        }
        if (current>=n-1)
        {
            return jumps;
        }
        
    }
    return -1;
    
}