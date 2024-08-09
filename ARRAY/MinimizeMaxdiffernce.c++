// lovebbar 08
// minimize the maximum distance between array after increment and decrement operation is given which is k
// int ans=arr[n-1]-arr[0]  starting arr ->where we doent operate any k largest - smallest =difference

// after performing k 

// smallest arr[0]+k starting index
// largest arr[n-1]-k last index


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> MinimizemaxDif(vector<int> &arr, int k){
    int n= arr.size();
    sort(arr.begin(),arr.end());

    int ans=arr[0]-arr[n-1]; //intial max difference without changing k

    int smallest=arr[0]+k;
    int largest=arr[n-1]-k;
    int mi,mx;

    for(int i=0; i<n; i++){
        mi=min(smallest,arr[i+1]-k);
        mx=max(largest,arr[i]+k);
        if(mi<0){
            continue;
        }
        ans=min(ans,mx-mi);

    }
    

}
