#include<iostream>
using namespace std;
#include<vector>

// kdanes algorithm
vector<int> maxsubarraysum(vector<int> &arr){
    int sum=0;
        int maxsum=0; // negative add krna h to maxsum=arr[0];
        for (int i = 0; i < arr.size(); i++) {

            // mai postive me hu negative walle ki help karunga
            if(sum>=0){ //
                sum = sum+arr[i]; //-2
            }
            // tum sarre loss me ho( -ve) mai apna dandha khud start karunga 

            else if(sum<0){
                sum= arr[i]; //-2
            }

            if (sum>maxsum){  // -2 
                maxsum = sum ;
            }
            cout<< maxsum;

}
}




#include <bits/stdc++.h>
long long maxSubarraySum(vector<int> arr, int n)
{
 long long sum=0;
 int maxi=LONG_MIN;
 for(int i=0; i<n ; i++){
     sum +=arr[i];
if(sum>maxi){
    maxi=sum;
}

     if(sum<0){
         sum=0;
     }
     
 }

 return maxi;


}
