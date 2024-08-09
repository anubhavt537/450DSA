// for loop i kka array 1 ek loop arr j for arr 2 travese krne ke liye 
// if arr[i]=arr[j];
// arr[temp]=arr[i+j];
// return temp t.c 0(n2) s.c 0(n)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	     sort(arr1.begin(),arr1.end());
	     sort(arr2.begin(),arr2.end());

         int i=0;
         int j=0;
int count=0;
         while (i<n && j<m)
         {
            if (arr1[i]==arr2[j])
            {
                count++;
                i++;
                j++;
            }
            else if((arr1[i]<=arr2[j]))
            {
                i++;
            }
            else{
                j++;
            }
            int notcommon=n+m-count;
            cout<< count << "" <<notcommon;
            
         }
         


}
int main(){

}