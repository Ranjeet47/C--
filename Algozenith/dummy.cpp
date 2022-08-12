#include <bits/stdc++.h>
using namespace std;


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
int n;
cin>>n;

string arr[n];
for(int i=0;i<n;i++){
    getline(cin,arr[i]);
}

for(int i=n-1;i>=0;i--){
    cout<<"hi "<<arr[i]<<" !"<<'\n';
}




}