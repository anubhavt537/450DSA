#include<bits/stdc++.h>
using namespace std;

vector<int> choclotecombination(vector<int> choclotes,int n ,int m){
    // m=students=3;
    sort(choclotes.begin(),choclotes.end());
    int ans=INT_MAX;
    for(int i=0; i<=n-m;i++){
        int minElements=choclotes[i];
        int maxelemnts=choclotes[n-m+1];
        ans=min(ans,maxelemnts-minElements);
    }
    cout<<ans;
}