#include<bits/stdc++.h>
using namespace std;

int smartFib(int n){
  if(n==0) return 0;
  int prev2 = 0;
  int prev = 1;
  
  for(int i=2; i<=n; i++){
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  return prev;
}



int computeFib(int n,vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!= -1) return dp[n];
    return dp[n] = computeFib(n-1,dp)+ computeFib(n-2,dp);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input","r",stdin);
    freopen("output","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<"ComputeFib is equal to "<<computeFib(n,dp)<<'\n';
    cout<<"smartFib is equal to "<<smartFib(n)<<'\n';
    return 0;
}