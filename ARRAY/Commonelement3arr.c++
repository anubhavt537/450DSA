//  find common element in 3 arrays 
// dont send duplicate in common 
#include <bits/stdc++.h> 
using namespace std;
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int ni = a.size();
    int nj = b.size();
    int nk = c.size();
    vector<int> result; // Initialize to -1 to indicate no common element found

    while (i < ni && j < nj && k < nk) {
        if (a[i] == b[j] && b[j] == c[k]) {

            if(result.empty() || result.back() !=a[i]){

           result.push_back(a[i]); // Found a common element
            }
            i++;
            j++;
            k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
return result;

}