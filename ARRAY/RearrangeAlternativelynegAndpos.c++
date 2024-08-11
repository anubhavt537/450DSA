// rearranging negative and postive

#include <bits/stdc++.h> 
using namespace std;

// void rearrange(vector<int> &arr)
// {
//     int n=arr.size();
// 	int i=0;
// 	int j=0;
// 	// for(int i=1; i<n-1; i++){
// 	// 	if(arr[i]<0 && arr[i]<arr[i+1]){
//     //       swap(arr[i],arr[i+1]);
// 	// 	  break;
// 	// 	}
// 	while(i<n){
// 		if(arr[i]<0 && arr[i]<arr[j+1]);
// 		swap(arr[i],arr[j+1]);
// 		i++;
//         j++;
// 	}
//     cout<<arr[i];
// }
// int main(){
//     vector<int> arr={4,-9,-2,-6,-8};
//     rearrange(arr);
// return 0;
// }




// optimal o(n)tc o(n)-.sc 
void rearrange(vector<int> &arr,int n){
	vector<int> ans;
	
int negIndx=0;
int posIndx=0;
	for(int i=0; i<n; i++){
if(arr[i]<0){
	ans[negIndx]=arr[i];
	negIndx +=2;

if(arr[i]<0){
	ans[posIndx]=arr[i];
	posIndx +=2;
}
	}
	}
	}



// variety 2 arr->2,7,-3,-6 
	#include<bits/stdc++.h>
using namespace std;

  vector<int> RearrangebySign(vector<int>A, int n){
    
  // Define 2 vectors, one for storing positive 
  // and other for negative elements of the array.
  vector<int> pos;
  vector<int> neg;
  
  // Segregate the array into positives and negatives.
  for(int i=0;i<n;i++){
      
      if(A[i]>0) pos.push_back(A[i]);
      else neg.push_back(A[i]);
  }
  
  // If positives are lesser than the negatives.
  if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point 
    // where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        
        A[index] = neg[i];
        index++;
    }
  }
  
  // If negatives are lesser than the positives.
  else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        A[index] = pos[i];
        index++;
    }
  }
  return A;
    
}

int main() {
    
  // Array Initialisation.
  int n = 6;
  vector<int> A {1,2,-4,-5,3,4};

  vector<int> ans = RearrangebySign(A,n);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}