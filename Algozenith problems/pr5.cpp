#include<bits/stdc++.h>
using namespace std;

int computeFib(int n){
  if(n==0 ||n==1) return 1;
  return computeFib(n-1) + computeFib(n-2);
  
}
int smartFib(int n){
  int arr[n+1];
  arr[0] =1; arr[1] =1;
  for(int i=2;i<n+1;i++){
    arr[i] = arr[i-1]+ arr[i-2];
  }
  return arr[n];
}
int main(){
  int n;
  cin>>n;
 cout<< computeFib(n)<<'\n';
 cout<< smartFib(n)<<'\n';
}
